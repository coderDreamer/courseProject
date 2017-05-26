#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QSqlDatabase>
#include <dbmanager.h>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QDebug>

/**
 * \class DbManager
 *
 * \brief SQL Database Manager class
 *
 * DbManager sets up the connection with SQL database
 * and performs some basics queries. The class requires
 * existing SQL database. You can create it with sqlite:
 * 1. $ sqlite3 people.db
 * 2. sqilte> CREATE TABLE people(ids integer primary key, name text);
 * 3. sqlite> .quit
 */
class DbManager
{
public:
    /**
     * @brief Constructor
     *
     * Constructor sets up connection with db and opens it
     * @param path - absolute path to db file
     */
    DbManager(const QString& path) {
        m_db = QSqlDatabase::addDatabase("QSQLITE");
        m_db.setDatabaseName(path);

        if (!m_db.open())
        {
            qDebug() << "DB Error: Ошибка соединения с базой данных";
        }
        else
        {
            qDebug() << "БД: соединение с базой данных установлено";
        }

    }
    QSqlDatabase defaultDB = QSqlDatabase::database();
    void close_db() {
        QSqlDatabase::removeDatabase("QSQLITE");
    }

    /**
     * @brief Destructor
     *
     * Close the db connection
     */
//    ~DbManager() {
//        if (m_db.isOpen())
//        {
//            m_db.close();
//            qDebug() << "Базу Данных закрыл.";
//        }
//    }

    bool isOpen() const
    {
        return m_db.isOpen();
    }


private:
    QSqlDatabase m_db;

};

#endif // DBMANAGER_H
