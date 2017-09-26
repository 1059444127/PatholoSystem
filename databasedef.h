#ifndef DATABASEDEF_H
#define DATABASEDEF_H

/***************************************************************
   功能:定义数据表的字段顺序

   创建人:殷宇辰

   创建时间:2017-6-20
**************************************************************/

namespace DAtABASEDEF
{

//用户数据库表
enum USER
{
    USERNAME,
    PASSWORD,
    ISADMINISTRATOR,
    AUTHORITY,
    REMARK,
};

//登记数据库表
enum REG
{
    REGID,
    REGPCODE,
    REGSN,
    REGPRINTQUANTITY,
    REGPRINTED,
    REGCREATETIME,
};

//起始病理号设置数据库表
enum CODEBEGINSET
{
    CODEBEGINNAME,
    CODEBEGINVALUE,
};

//标本类别设置
enum CODETYPESET
{
    CODETYPEID,
    CODETYPEABBR,
    CODETYPENAME,
};

//常规切片
enum SECTION
{
    SECTIONID,
    SECTIONCODE,
    EMBEDCODE,
    STAINTYPENAME,
    STAINING,
    SECTIONTIME,
    SECTIONER,
    STAINTIME,
    STAINER,
    PRINTNUM,
    PRINTED,
    OTHER,
};

//免疫组化切片
enum SECTIONIHC
{
    IHCSECTIONID,
    IHCSECTIONCODE,
    IHCEMBEDCODE,
    IHCSTAINTYPENAME,
    IHCSTAINING,
    IHCSECTIONTIME,
    IHCSECTIONER,
    IHCSTAINTIME,
    IHCSTAINER,
    IHCPRINTNUM,
    IHCPRINTED,
    IHCCLONENO,
};

//特染切片
enum SECTIONSS
{
    SSSECTIONID,
    SSSECTIONCODE,
    SSEMBEDCODE,
    SSSTAINTYPENAME,
    SSSTAINING,
    SSSECTIONTIME,
    SSSECTIONER,
    SSSTAINTIME,
    SSSTAINER,
    SSPRINTNUM,
    SSPRINTED,
    SSCLONENO,
};

//统计信息
enum STATISTICS
{
    DATE,
    MATERIALTOTAL,
    EMBEDDINGTOTAL,
    NORMALMTLTOTAL,
    NORMALEDDTOTAL,
    FROZENMTLTOTAL,
    FROZENEDDTOTAL,
};

//打印机信息
enum PRINTDATA
{
    COMPUTERID,
    COMPUTERNAME,
    PRINTERMODEL,
    CINKMODEl,
    PRINTERIP,
    PRINTERPORT,
    PRINTREMARK,
};

}




#endif // DATABASEDEF_H
