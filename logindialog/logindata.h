﻿#ifndef LOGINDATA_H
#define LOGINDATA_H
#include<QString>
#include<QSqlDriver>
#include<QSqlRecord>
#include<QSqlQuery>
#include<QSqlDatabase>
#include<QFile>
#include<QIODevice>
#include<QDebug>

/***************************************************************
   功能:读取User表数据

   创建人:殷宇辰

   创建时间:2017-9-22
**************************************************************/

typedef struct UserInfo
{
    QString userName;
    QString passWord;
    QString isAdministrator;
    QString authority;
    QString remark;

}UserInfo;

class LoginData
{
public:
    /************    构造函数       *************/
    LoginData();

    /************    连接数据库     *************/
    bool dataCnn();

    /************    查询数据       *************/
    bool selectData(QString userName, QString passWord);

    /************    更改数据       *************/
    bool updateData(QString userName, QString passWord);

    /************    获取用户信息    *************/
    UserInfo getUserInfo() const;

private:
    QSqlDatabase db;               //定义数据库对象
    UserInfo userInfo;             //用户信息
};

#endif // LOGINDATA_H
