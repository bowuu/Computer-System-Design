/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Bo/Dropbox/School/Spring 2018/CDA 4203L Computer System Design Lab/CSD-Lab/Lab 4 - Vending Machine FSM/Lab4/Lab4.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {5U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {3U, 0U};
static unsigned int ng9[] = {7U, 0U};
static unsigned int ng10[] = {4U, 0U};
static unsigned int ng11[] = {8U, 0U};
static unsigned int ng12[] = {9U, 0U};
static unsigned int ng13[] = {10U, 0U};
static unsigned int ng14[] = {11U, 0U};
static unsigned int ng15[] = {12U, 0U};
static unsigned int ng16[] = {13U, 0U};



static void Always_42_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 6192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 6760);
    *((int *)t2) = 1;
    t3 = (t0 + 6224);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);

LAB5:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 4952);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 4792);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 5112);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4632);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB2;

}

static void Always_47_1(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    int t30;

LAB0:    t1 = (t0 + 6440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 6776);
    *((int *)t2) = 1;
    t3 = (t0 + 6472);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(47, ng0);

LAB5:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 5112);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 4952);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 4, 0LL);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4152);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4312);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 5272);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_signed_equal(t8, 32, t4, 32, t5, 32);
    t6 = (t8 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t8);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 4472);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t7);
    t15 = (t12 ^ t13);
    t16 = (t11 | t15);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB11;

LAB10:    if (t19 != 0)
        goto LAB12;

LAB13:    t22 = (t8 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t8);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB14;

LAB15:
LAB16:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 4952);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB18:    t5 = ((char*)((ng3)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t5, 4);
    if (t30 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng6)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t30 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng5)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t30 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng8)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t30 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng10)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t30 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng4)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t30 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng7)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t30 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng9)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t30 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng11)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t30 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng12)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t30 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng13)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t30 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng14)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t30 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng15)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t30 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng16)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t30 == 1)
        goto LAB45;

LAB46:
LAB47:    goto LAB2;

LAB6:    xsi_set_current_line(55, ng0);

LAB9:    xsi_set_current_line(56, ng0);
    t7 = ((char*)((ng3)));
    t14 = (t0 + 4952);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 4);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5272);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB8;

LAB11:    *((unsigned int *)t8) = 1;
    goto LAB13;

LAB12:    t14 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(60, ng0);

LAB17:    xsi_set_current_line(61, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 4472);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 1);
    goto LAB16;

LAB19:    xsi_set_current_line(65, ng0);

LAB48:    xsi_set_current_line(66, ng0);
    t6 = (t0 + 2952U);
    t7 = *((char **)t6);
    t6 = (t7 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB49;

LAB50:
LAB51:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB53;

LAB54:
LAB55:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3272U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB57;

LAB58:
LAB59:    goto LAB47;

LAB21:    xsi_set_current_line(75, ng0);

LAB61:    xsi_set_current_line(76, ng0);
    t3 = (t0 + 2952U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB62;

LAB63:
LAB64:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB66;

LAB67:
LAB68:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 3272U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB70;

LAB71:
LAB72:    goto LAB47;

LAB23:    xsi_set_current_line(85, ng0);

LAB74:    xsi_set_current_line(86, ng0);
    t3 = (t0 + 2952U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB75;

LAB76:
LAB77:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB79;

LAB80:
LAB81:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 3272U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB83;

LAB84:
LAB85:    goto LAB47;

LAB25:    xsi_set_current_line(95, ng0);

LAB87:    xsi_set_current_line(96, ng0);
    t3 = (t0 + 2952U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB88;

LAB89:
LAB90:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB92;

LAB93:
LAB94:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 3272U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB96;

LAB97:
LAB98:    goto LAB47;

LAB27:    xsi_set_current_line(105, ng0);

LAB100:    xsi_set_current_line(106, ng0);
    t3 = (t0 + 2952U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB101;

LAB102:
LAB103:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB105;

LAB106:
LAB107:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 3272U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB109;

LAB110:
LAB111:    goto LAB47;

LAB29:    xsi_set_current_line(115, ng0);

LAB113:    xsi_set_current_line(116, ng0);
    t3 = (t0 + 2952U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB114;

LAB115:
LAB116:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB118;

LAB119:
LAB120:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 3272U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB122;

LAB123:
LAB124:    goto LAB47;

LAB31:    xsi_set_current_line(125, ng0);

LAB126:    xsi_set_current_line(126, ng0);
    t3 = (t0 + 2952U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB127;

LAB128:
LAB129:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB131;

LAB132:
LAB133:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 3272U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB135;

LAB136:
LAB137:    goto LAB47;

LAB33:    xsi_set_current_line(135, ng0);

LAB139:    xsi_set_current_line(136, ng0);
    t3 = (t0 + 2952U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB140;

LAB141:
LAB142:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB144;

LAB145:
LAB146:    xsi_set_current_line(140, ng0);
    t2 = (t0 + 3272U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB148;

LAB149:
LAB150:    goto LAB47;

LAB35:    xsi_set_current_line(145, ng0);

LAB152:    xsi_set_current_line(146, ng0);
    t3 = (t0 + 2952U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB153;

LAB154:
LAB155:    xsi_set_current_line(148, ng0);
    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB157;

LAB158:
LAB159:    xsi_set_current_line(150, ng0);
    t2 = (t0 + 3272U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB161;

LAB162:
LAB163:    goto LAB47;

LAB37:    xsi_set_current_line(155, ng0);

LAB165:    xsi_set_current_line(156, ng0);
    t3 = (t0 + 3432U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB166;

LAB167:
LAB168:    xsi_set_current_line(158, ng0);
    t2 = (t0 + 3592U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB170;

LAB171:
LAB172:    goto LAB47;

LAB39:    xsi_set_current_line(163, ng0);

LAB174:    xsi_set_current_line(164, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 4472);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 5112);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB47;

LAB41:    xsi_set_current_line(168, ng0);

LAB175:    xsi_set_current_line(169, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 4472);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(170, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 5112);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB47;

LAB43:    xsi_set_current_line(173, ng0);

LAB176:    xsi_set_current_line(174, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 4472);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(175, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 5112);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB47;

LAB45:    xsi_set_current_line(178, ng0);

LAB177:    xsi_set_current_line(179, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 4472);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(180, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5112);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB47;

LAB49:    xsi_set_current_line(66, ng0);

LAB52:    xsi_set_current_line(67, ng0);
    t14 = ((char*)((ng4)));
    t22 = (t0 + 5112);
    xsi_vlogvar_assign_value(t22, t14, 0, 0, 4);
    goto LAB51;

LAB53:    xsi_set_current_line(68, ng0);

LAB56:    xsi_set_current_line(69, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 5112);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    goto LAB55;

LAB57:    xsi_set_current_line(70, ng0);

LAB60:    xsi_set_current_line(71, ng0);
    t5 = ((char*)((ng6)));
    t6 = (t0 + 5112);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    goto LAB59;

LAB62:    xsi_set_current_line(76, ng0);

LAB65:    xsi_set_current_line(77, ng0);
    t6 = ((char*)((ng7)));
    t7 = (t0 + 5112);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    goto LAB64;

LAB66:    xsi_set_current_line(78, ng0);

LAB69:    xsi_set_current_line(79, ng0);
    t5 = ((char*)((ng8)));
    t6 = (t0 + 5112);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    goto LAB68;

LAB70:    xsi_set_current_line(80, ng0);

LAB73:    xsi_set_current_line(81, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 5112);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    goto LAB72;

LAB75:    xsi_set_current_line(86, ng0);

LAB78:    xsi_set_current_line(87, ng0);
    t6 = ((char*)((ng9)));
    t7 = (t0 + 5112);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    goto LAB77;

LAB79:    xsi_set_current_line(88, ng0);

LAB82:    xsi_set_current_line(89, ng0);
    t5 = ((char*)((ng10)));
    t6 = (t0 + 5112);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    goto LAB81;

LAB83:    xsi_set_current_line(90, ng0);

LAB86:    xsi_set_current_line(91, ng0);
    t5 = ((char*)((ng8)));
    t6 = (t0 + 5112);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    goto LAB85;

LAB88:    xsi_set_current_line(96, ng0);

LAB91:    xsi_set_current_line(97, ng0);
    t6 = ((char*)((ng11)));
    t7 = (t0 + 5112);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    goto LAB90;

LAB92:    xsi_set_current_line(98, ng0);

LAB95:    xsi_set_current_line(99, ng0);
    t5 = ((char*)((ng4)));
    t6 = (t0 + 5112);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    goto LAB94;

LAB96:    xsi_set_current_line(100, ng0);

LAB99:    xsi_set_current_line(101, ng0);
    t5 = ((char*)((ng10)));
    t6 = (t0 + 5112);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    goto LAB98;

LAB101:    xsi_set_current_line(106, ng0);

LAB104:    xsi_set_current_line(107, ng0);
    t6 = ((char*)((ng12)));
    t7 = (t0 + 5112);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    goto LAB103;

LAB105:    xsi_set_current_line(108, ng0);

LAB108:    xsi_set_current_line(109, ng0);
    t5 = ((char*)((ng7)));
    t6 = (t0 + 5112);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    goto LAB107;

LAB109:    xsi_set_current_line(110, ng0);

LAB112:    xsi_set_current_line(111, ng0);
    t5 = ((char*)((ng4)));
    t6 = (t0 + 5112);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    goto LAB111;

LAB114:    xsi_set_current_line(116, ng0);

LAB117:    xsi_set_current_line(117, ng0);
    t6 = ((char*)((ng13)));
    t7 = (t0 + 5112);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    goto LAB116;

LAB118:    xsi_set_current_line(118, ng0);

LAB121:    xsi_set_current_line(119, ng0);
    t5 = ((char*)((ng9)));
    t6 = (t0 + 5112);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    goto LAB120;

LAB122:    xsi_set_current_line(120, ng0);

LAB125:    xsi_set_current_line(121, ng0);
    t5 = ((char*)((ng7)));
    t6 = (t0 + 5112);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    goto LAB124;

LAB127:    xsi_set_current_line(126, ng0);

LAB130:    xsi_set_current_line(127, ng0);
    t6 = ((char*)((ng14)));
    t7 = (t0 + 5112);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    goto LAB129;

LAB131:    xsi_set_current_line(128, ng0);

LAB134:    xsi_set_current_line(129, ng0);
    t5 = ((char*)((ng11)));
    t6 = (t0 + 5112);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    goto LAB133;

LAB135:    xsi_set_current_line(130, ng0);

LAB138:    xsi_set_current_line(131, ng0);
    t5 = ((char*)((ng9)));
    t6 = (t0 + 5112);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    goto LAB137;

LAB140:    xsi_set_current_line(136, ng0);

LAB143:    xsi_set_current_line(137, ng0);
    t6 = ((char*)((ng15)));
    t7 = (t0 + 5112);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    goto LAB142;

LAB144:    xsi_set_current_line(138, ng0);

LAB147:    xsi_set_current_line(139, ng0);
    t5 = ((char*)((ng12)));
    t6 = (t0 + 5112);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    goto LAB146;

LAB148:    xsi_set_current_line(140, ng0);

LAB151:    xsi_set_current_line(141, ng0);
    t5 = ((char*)((ng11)));
    t6 = (t0 + 5112);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    goto LAB150;

LAB153:    xsi_set_current_line(146, ng0);

LAB156:    xsi_set_current_line(147, ng0);
    t6 = ((char*)((ng16)));
    t7 = (t0 + 5112);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    goto LAB155;

LAB157:    xsi_set_current_line(148, ng0);

LAB160:    xsi_set_current_line(149, ng0);
    t5 = ((char*)((ng13)));
    t6 = (t0 + 5112);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    goto LAB159;

LAB161:    xsi_set_current_line(150, ng0);

LAB164:    xsi_set_current_line(151, ng0);
    t5 = ((char*)((ng12)));
    t6 = (t0 + 5112);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);
    goto LAB163;

LAB166:    xsi_set_current_line(156, ng0);

LAB169:    xsi_set_current_line(157, ng0);
    t6 = ((char*)((ng2)));
    t7 = (t0 + 4152);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    goto LAB168;

LAB170:    xsi_set_current_line(158, ng0);

LAB173:    xsi_set_current_line(159, ng0);
    t5 = ((char*)((ng2)));
    t6 = (t0 + 4312);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    goto LAB172;

}


extern void work_m_00000000000793036459_1640639573_init()
{
	static char *pe[] = {(void *)Always_42_0,(void *)Always_47_1};
	xsi_register_didat("work_m_00000000000793036459_1640639573", "isim/Lab4_isim_beh.exe.sim/work/m_00000000000793036459_1640639573.didat");
	xsi_register_executes(pe);
}
