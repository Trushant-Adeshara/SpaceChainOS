/*********************************************************************************************************
**
**                                    �й�������Դ��֯
**
**                                   Ƕ��ʽʵʱ����ϵͳ
**
**                                SylixOS(TM)  LW : long wing
**
**                               Copyright All Rights Reserved
**
**--------------�ļ���Ϣ--------------------------------------------------------------------------------
**
** ��   ��   ��: excLib.h
**
** ��   ��   ��: Han.Hui (����)
**
** �ļ���������: 2007 �� 03 �� 30 ��
**
** ��        ��: ϵͳ�쳣�����ڲ�������ͷ�ļ�

** BUG
2007.04.08  �����˶Բü��ĺ�֧��
*********************************************************************************************************/

#ifndef  __EXCLIB_H
#define  __EXCLIB_H

/*********************************************************************************************************
  �ü�����
*********************************************************************************************************/

INT    _excInit(VOID);
INT    _excJobAdd(VOIDFUNCPTR  pfunc, 
                  PVOID        pvArg0, 
                  PVOID        pvArg1, 
                  PVOID        pvArg2, 
                  PVOID        pvArg3, 
                  PVOID        pvArg4, 
                  PVOID        pvArg5);
VOID   _excJobDel(UINT         uiMatchArgNum,
                  VOIDFUNCPTR  pfunc, 
                  PVOID        pvArg0, 
                  PVOID        pvArg1, 
                  PVOID        pvArg2, 
                  PVOID        pvArg3, 
                  PVOID        pvArg4, 
                  PVOID        pvArg5);
size_t  _ExcGetLost(VOID);

#endif                                                                  /*  __EXCLIB_H                  */
/*********************************************************************************************************
  END
*********************************************************************************************************/