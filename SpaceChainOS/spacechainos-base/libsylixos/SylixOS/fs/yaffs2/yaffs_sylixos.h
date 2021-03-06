/*********************************************************************************************************
**
**                                    中国软件开源组织
**
**                                   嵌入式实时操作系统
**
**                                SylixOS(TM)  LW : long wing
**
**                               Copyright All Rights Reserved
**
**--------------文件信息--------------------------------------------------------------------------------
**
** 文   件   名: yaffs_sylixos.h
**
** 创   建   人: Han.Hui (韩辉)
**
** 文件创建日期: 2008 年 12 月 07 日
**
** 描        述: yaffs 与 sylixos 兼容配置.
*********************************************************************************************************/

#ifndef __YAFFS_SYLIXOS_H
#define __YAFFS_SYLIXOS_H

#include "SylixOS.h"
#include "string.h"

/*********************************************************************************************************
  裁剪宏
*********************************************************************************************************/
#if (LW_CFG_MAX_VOLUMES > 0) && (LW_CFG_YAFFS_EN > 0)

/*********************************************************************************************************
  yaffs 配置宏
*********************************************************************************************************/

#define CONFIG_YAFFS_DIRECT                                             /*  yaffs direct 模式           */
#define CONFIG_YAFFS_FS
#define CONFIG_YAFFS_YAFFS1                                             /*  yaffs yaffs1 兼容           */
#define CONFIG_YAFFS_YAFFS2                                             /*  yaffs yaffs2 兼容           */
#define CONFIG_YAFFS_PROVIDE_DEFS                                       /*  使用一些私有定义宏          */
#define CONFIG_YAFFSFS_PROVIDE_VALUES                                   /*  使用一些私有定义宏          */

/*********************************************************************************************************
  函数声明
*********************************************************************************************************/

VOID  __yaffsOsInit(VOID);

#endif                                                                  /*  (LW_CFG_MAX_VOLUMES > 0)    */
                                                                        /*  (LW_CFG_YAFFS_EN > 0)       */
#endif                                                                  /*  __YAFFS_SYLIXOS_H           */
/*********************************************************************************************************
  END
*********************************************************************************************************/
