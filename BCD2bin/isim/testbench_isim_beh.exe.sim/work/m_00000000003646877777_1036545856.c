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

/* This file is designed for use with ISim build 0xa0883be4 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Personal/G Drive/Digtal System Design/Elbert V2/Codes/BCD2bin/BCD2bin.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {6, 0};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {3U, 0U};
static int ng7[] = {3, 0};
static int ng8[] = {1, 0};



static void Always_41_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 4696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 6008);
    *((int *)t2) = 1;
    t3 = (t0 + 4728);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(41, ng0);

LAB5:    xsi_set_current_line(42, ng0);
    t5 = (t0 + 1616U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(45, ng0);

LAB14:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1776U);
    t3 = *((char **)t2);
    t2 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(42, ng0);

LAB13:    xsi_set_current_line(43, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 8, 0LL);
    goto LAB12;

}

static void Cont_50_1(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 4944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1776U);
    t3 = *((char **)t2);
    t2 = (t0 + 2656);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t3 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB5;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB7:    t22 = (t0 + 6152);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 1U;
    t28 = t27;
    t29 = (t6 + 4);
    t30 = *((unsigned int *)t6);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans(t22, 0, 0);
    t35 = (t0 + 6024);
    *((int *)t35) = 1;

LAB1:    return;
LAB5:    *((unsigned int *)t6) = 1;
    goto LAB7;

LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

}

static void Always_52_2(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 5192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 6040);
    *((int *)t2) = 1;
    t3 = (t0 + 5224);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(52, ng0);

LAB5:    xsi_set_current_line(53, ng0);
    t5 = (t0 + 1616U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(59, ng0);

LAB14:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3776);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3616);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 3296);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3456);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 3, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2816);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 8, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3136);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2976);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 7, 0LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(53, ng0);

LAB13:    xsi_set_current_line(54, ng0);
    t19 = ((char*)((ng2)));
    t20 = (t0 + 3616);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3456);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2976);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    goto LAB12;

}

static void Always_67_3(char *t0)
{
    char t16[8];
    char t17[8];
    char t21[8];
    char t31[8];
    char t49[8];
    char t50[8];
    char t51[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t32;
    int t33;
    int t34;
    char *t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    unsigned int t58;
    char *t59;
    unsigned int t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;

LAB0:    t1 = (t0 + 5440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 6056);
    *((int *)t2) = 1;
    t3 = (t0 + 5472);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(67, ng0);

LAB5:    xsi_set_current_line(68, ng0);
    t4 = (t0 + 3616);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 3776);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3456);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3296);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3136);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 7);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2816);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 3616);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 1, t5, 1);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 1, t2, 1);
    if (t8 == 1)
        goto LAB9;

LAB10:
LAB11:    goto LAB2;

LAB7:    xsi_set_current_line(74, ng0);

LAB12:    xsi_set_current_line(75, ng0);
    t6 = (t0 + 2096U);
    t7 = *((char **)t6);
    t6 = (t7 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB13;

LAB14:
LAB15:    goto LAB11;

LAB9:    xsi_set_current_line(82, ng0);

LAB17:    xsi_set_current_line(83, ng0);
    t3 = (t0 + 2976);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t17, 0, 8);
    t7 = (t17 + 4);
    t14 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 1);
    *((unsigned int *)t17) = t10;
    t11 = *((unsigned int *)t14);
    t12 = (t11 >> 1);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t13 & 63U);
    t18 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t18 & 63U);
    t15 = (t0 + 2496);
    t19 = (t15 + 56U);
    t20 = *((char **)t19);
    memset(t21, 0, 8);
    t22 = (t21 + 4);
    t23 = (t20 + 4);
    t24 = *((unsigned int *)t20);
    t25 = (t24 >> 0);
    t26 = (t25 & 1);
    *((unsigned int *)t21) = t26;
    t27 = *((unsigned int *)t23);
    t28 = (t27 >> 0);
    t29 = (t28 & 1);
    *((unsigned int *)t22) = t29;
    xsi_vlogtype_concat(t16, 7, 7, 2U, t21, 1, t17, 6);
    t30 = (t0 + 3136);
    xsi_vlogvar_assign_value(t30, t16, 0, 0, 7);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2496);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t16, 0, 8);
    t6 = (t16 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 1);
    *((unsigned int *)t16) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 1);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t13 & 127U);
    t18 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t18 & 127U);
    t14 = (t0 + 2816);
    t15 = (t0 + 2816);
    t19 = (t15 + 72U);
    t20 = *((char **)t19);
    t22 = ((char*)((ng4)));
    t23 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t17, t21, t31, ((int*)(t20)), 2, t22, 32, 1, t23, 32, 1);
    t30 = (t17 + 4);
    t24 = *((unsigned int *)t30);
    t8 = (!(t24));
    t32 = (t21 + 4);
    t25 = *((unsigned int *)t32);
    t33 = (!(t25));
    t34 = (t8 && t33);
    t35 = (t31 + 4);
    t26 = *((unsigned int *)t35);
    t36 = (!(t26));
    t37 = (t34 && t36);
    if (t37 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2816);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t16, 0, 8);
    t6 = (t16 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t16) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t13 & 15U);
    t18 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t18 & 15U);
    t14 = ((char*)((ng5)));
    memset(t17, 0, 8);
    t15 = (t16 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB21;

LAB20:    t19 = (t14 + 4);
    if (*((unsigned int *)t19) != 0)
        goto LAB21;

LAB24:    if (*((unsigned int *)t16) > *((unsigned int *)t14))
        goto LAB22;

LAB23:    t22 = (t17 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t17);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB25;

LAB26:
LAB27:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 3456);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng8)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t5, 3, t6, 32);
    t7 = (t0 + 3296);
    xsi_vlogvar_assign_value(t7, t16, 0, 0, 3);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 3296);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 472);
    t7 = *((char **)t6);
    t6 = ((char*)((ng8)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_minus(t16, 32, t7, 32, t6, 32);
    memset(t17, 0, 8);
    t14 = (t5 + 4);
    t15 = (t16 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t16);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t14);
    t13 = *((unsigned int *)t15);
    t18 = (t12 ^ t13);
    t24 = (t11 | t18);
    t25 = *((unsigned int *)t14);
    t26 = *((unsigned int *)t15);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB34;

LAB31:    if (t27 != 0)
        goto LAB33;

LAB32:    *((unsigned int *)t17) = 1;

LAB34:    t20 = (t17 + 4);
    t42 = *((unsigned int *)t20);
    t43 = (~(t42));
    t44 = *((unsigned int *)t17);
    t45 = (t44 & t43);
    t46 = (t45 != 0);
    if (t46 > 0)
        goto LAB35;

LAB36:
LAB37:    goto LAB11;

LAB13:    xsi_set_current_line(75, ng0);

LAB16:    xsi_set_current_line(76, ng0);
    t14 = ((char*)((ng3)));
    t15 = (t0 + 3776);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 1);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3296);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3136);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1776U);
    t3 = *((char **)t2);
    t2 = (t0 + 2816);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    goto LAB15;

LAB18:    t27 = *((unsigned int *)t31);
    t38 = (t27 + 0);
    t28 = *((unsigned int *)t17);
    t29 = *((unsigned int *)t21);
    t39 = (t28 - t29);
    t40 = (t39 + 1);
    xsi_vlogvar_assign_value(t14, t16, t38, *((unsigned int *)t21), t40);
    goto LAB19;

LAB21:    t20 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB23;

LAB22:    *((unsigned int *)t17) = 1;
    goto LAB23;

LAB25:    xsi_set_current_line(85, ng0);

LAB28:    xsi_set_current_line(86, ng0);
    t23 = (t0 + 2816);
    t30 = (t23 + 56U);
    t32 = *((char **)t30);
    memset(t21, 0, 8);
    t35 = (t21 + 4);
    t41 = (t32 + 4);
    t29 = *((unsigned int *)t32);
    t42 = (t29 >> 0);
    *((unsigned int *)t21) = t42;
    t43 = *((unsigned int *)t41);
    t44 = (t43 >> 0);
    *((unsigned int *)t35) = t44;
    t45 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t45 & 15U);
    t46 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t46 & 15U);
    t47 = ((char*)((ng6)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_minus(t31, 4, t21, 4, t47, 4);
    t48 = (t0 + 2816);
    t52 = (t0 + 2816);
    t53 = (t52 + 72U);
    t54 = *((char **)t53);
    t55 = ((char*)((ng7)));
    t56 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t49, t50, t51, ((int*)(t54)), 2, t55, 32, 1, t56, 32, 1);
    t57 = (t49 + 4);
    t58 = *((unsigned int *)t57);
    t8 = (!(t58));
    t59 = (t50 + 4);
    t60 = *((unsigned int *)t59);
    t33 = (!(t60));
    t34 = (t8 && t33);
    t61 = (t51 + 4);
    t62 = *((unsigned int *)t61);
    t36 = (!(t62));
    t37 = (t34 && t36);
    if (t37 == 1)
        goto LAB29;

LAB30:    goto LAB27;

LAB29:    t63 = *((unsigned int *)t51);
    t38 = (t63 + 0);
    t64 = *((unsigned int *)t49);
    t65 = *((unsigned int *)t50);
    t39 = (t64 - t65);
    t40 = (t39 + 1);
    xsi_vlogvar_assign_value(t48, t31, t38, *((unsigned int *)t50), t40);
    goto LAB30;

LAB33:    t19 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB34;

LAB35:    xsi_set_current_line(89, ng0);

LAB38:    xsi_set_current_line(90, ng0);
    t22 = ((char*)((ng2)));
    t23 = (t0 + 3776);
    xsi_vlogvar_assign_value(t23, t22, 0, 0, 1);
    goto LAB37;

}

static void Cont_98_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 5688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 2976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6216);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 127U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 6);
    t18 = (t0 + 6072);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000003646877777_1036545856_init()
{
	static char *pe[] = {(void *)Always_41_0,(void *)Cont_50_1,(void *)Always_52_2,(void *)Always_67_3,(void *)Cont_98_4};
	xsi_register_didat("work_m_00000000003646877777_1036545856", "isim/testbench_isim_beh.exe.sim/work/m_00000000003646877777_1036545856.didat");
	xsi_register_executes(pe);
}
