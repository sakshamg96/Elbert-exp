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
static const char *ng0 = "C:/Users/Saksham/Desktop/Elbert V2/Codes/BCD_Counter/bcd_counter.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {100U, 0U};
static int ng3[] = {29, 0};
static int ng4[] = {22, 0};
static unsigned int ng5[] = {0U, 0U};
static int ng6[] = {1, 0};
static int ng7[] = {8, 0};
static unsigned int ng8[] = {4U, 0U};
static unsigned int ng9[] = {3U, 0U};
static int ng10[] = {3, 0};
static int ng11[] = {7, 0};
static int ng12[] = {4, 0};
static int ng13[] = {11, 0};
static unsigned int ng14[] = {6U, 0U};
static unsigned int ng15[] = {5U, 0U};
static unsigned int ng16[] = {1U, 0U};
static unsigned int ng17[] = {159U, 0U};
static unsigned int ng18[] = {2U, 0U};
static unsigned int ng19[] = {37U, 0U};
static unsigned int ng20[] = {13U, 0U};
static unsigned int ng21[] = {153U, 0U};
static unsigned int ng22[] = {73U, 0U};
static unsigned int ng23[] = {65U, 0U};
static unsigned int ng24[] = {7U, 0U};
static unsigned int ng25[] = {31U, 0U};
static unsigned int ng26[] = {8U, 0U};
static unsigned int ng27[] = {9U, 0U};
static unsigned int ng28[] = {10U, 0U};
static unsigned int ng29[] = {17U, 0U};
static unsigned int ng30[] = {11U, 0U};
static unsigned int ng31[] = {193U, 0U};
static unsigned int ng32[] = {12U, 0U};
static unsigned int ng33[] = {99U, 0U};
static unsigned int ng34[] = {133U, 0U};
static unsigned int ng35[] = {14U, 0U};
static unsigned int ng36[] = {97U, 0U};
static unsigned int ng37[] = {15U, 0U};
static unsigned int ng38[] = {113U, 0U};



static void Cont_28_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 3488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t4 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t10 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t10) = 1;

LAB7:    t11 = (t0 + 5208);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memset(t15, 0, 8);
    t16 = 1U;
    t17 = t16;
    t18 = (t3 + 4);
    t19 = *((unsigned int *)t3);
    t16 = (t16 & t19);
    t20 = *((unsigned int *)t18);
    t17 = (t17 & t20);
    t21 = (t15 + 4);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t22 | t16);
    t23 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t23 | t17);
    xsi_driver_vfirst_trans(t11, 0, 0);
    t24 = (t0 + 5048);
    *((int *)t24) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

}

static void Always_32_1(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t16;
    char *t17;
    int t18;
    char *t19;
    int t20;
    int t21;
    char *t22;
    int t23;
    int t24;
    int t25;
    unsigned int t26;
    int t27;
    int t28;

LAB0:    t1 = (t0 + 3736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 5064);
    *((int *)t2) = 1;
    t3 = (t0 + 3768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    t4 = (t0 + 2088);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng3)));
    t16 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t13, t14, t15, ((int*)(t11)), 2, t12, 32, 1, t16, 32, 1);
    t17 = (t13 + 4);
    t6 = *((unsigned int *)t17);
    t18 = (!(t6));
    t19 = (t14 + 4);
    t7 = *((unsigned int *)t19);
    t20 = (!(t7));
    t21 = (t18 && t20);
    t22 = (t15 + 4);
    t8 = *((unsigned int *)t22);
    t23 = (!(t8));
    t24 = (t21 && t23);
    if (t24 == 1)
        goto LAB9;

LAB10:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(35, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 30, 0LL);
    goto LAB8;

LAB9:    t9 = *((unsigned int *)t15);
    t25 = (t9 + 0);
    t10 = *((unsigned int *)t13);
    t26 = *((unsigned int *)t14);
    t27 = (t10 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, t25, *((unsigned int *)t14), t28, 0LL);
    goto LAB10;

}

static void Always_44_2(char *t0)
{
    char t6[8];
    char t7[8];
    char t15[8];
    char t36[8];
    char t49[8];
    char t51[8];
    char t52[8];
    char t53[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t50;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    unsigned int t60;
    int t61;
    char *t62;
    unsigned int t63;
    int t64;
    int t65;
    char *t66;
    unsigned int t67;
    int t68;
    int t69;
    unsigned int t70;
    int t71;
    unsigned int t72;
    unsigned int t73;
    int t74;
    int t75;

LAB0:    t1 = (t0 + 3984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 5080);
    *((int *)t2) = 1;
    t3 = (t0 + 4016);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(44, ng0);

LAB5:    xsi_set_current_line(45, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t0 + 2408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 12);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t5 = (t7 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 29);
    t11 = (t10 & 1);
    *((unsigned int *)t7) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 29);
    t14 = (t13 & 1);
    *((unsigned int *)t5) = t14;
    t16 = (t0 + 2408);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t15, 0, 8);
    t19 = (t15 + 4);
    t20 = (t18 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (t21 >> 0);
    *((unsigned int *)t15) = t22;
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 0);
    *((unsigned int *)t19) = t24;
    t25 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t25 & 2047U);
    t26 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t26 & 2047U);
    xsi_vlogtype_concat(t6, 12, 12, 2U, t15, 11, t7, 1);
    t27 = (t0 + 2408);
    xsi_vlogvar_assign_value(t27, t6, 0, 0, 12);
    xsi_set_current_line(47, ng0);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB6:    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB7;

LAB8:    goto LAB2;

LAB7:    xsi_set_current_line(47, ng0);

LAB9:    xsi_set_current_line(48, ng0);
    t16 = (t0 + 2408);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t7, 0, 8);
    t19 = (t7 + 4);
    t20 = (t18 + 4);
    t14 = *((unsigned int *)t18);
    t21 = (t14 >> 0);
    *((unsigned int *)t7) = t21;
    t22 = *((unsigned int *)t20);
    t23 = (t22 >> 0);
    *((unsigned int *)t19) = t23;
    t24 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t24 & 15U);
    t25 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t25 & 15U);
    t27 = ((char*)((ng8)));
    memset(t15, 0, 8);
    t28 = (t7 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB11;

LAB10:    t29 = (t27 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB11;

LAB14:    if (*((unsigned int *)t7) > *((unsigned int *)t27))
        goto LAB12;

LAB13:    t31 = (t15 + 4);
    t26 = *((unsigned int *)t31);
    t32 = (~(t26));
    t33 = *((unsigned int *)t15);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB15;

LAB16:
LAB17:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 4);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 4);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 15U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 15U);
    t16 = ((char*)((ng8)));
    memset(t7, 0, 8);
    t17 = (t6 + 4);
    if (*((unsigned int *)t17) != 0)
        goto LAB22;

LAB21:    t18 = (t16 + 4);
    if (*((unsigned int *)t18) != 0)
        goto LAB22;

LAB25:    if (*((unsigned int *)t6) > *((unsigned int *)t16))
        goto LAB23;

LAB24:    t20 = (t7 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t7);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB26;

LAB27:
LAB28:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 8);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 8);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 15U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 15U);
    t16 = ((char*)((ng8)));
    memset(t7, 0, 8);
    t17 = (t6 + 4);
    if (*((unsigned int *)t17) != 0)
        goto LAB33;

LAB32:    t18 = (t16 + 4);
    if (*((unsigned int *)t18) != 0)
        goto LAB33;

LAB36:    if (*((unsigned int *)t6) > *((unsigned int *)t16))
        goto LAB34;

LAB35:    t20 = (t7 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t7);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB37;

LAB38:
LAB39:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2088);
    t8 = (t5 + 72U);
    t16 = *((char **)t8);
    t17 = ((char*)((ng3)));
    t18 = (t0 + 2248);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memset(t15, 0, 8);
    xsi_vlog_signed_minus(t15, 32, t17, 32, t20, 32);
    xsi_vlog_generic_get_index_select_value(t7, 1, t4, t16, 2, t15, 32, 1);
    t27 = (t0 + 2408);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memset(t36, 0, 8);
    t30 = (t36 + 4);
    t31 = (t29 + 4);
    t9 = *((unsigned int *)t29);
    t10 = (t9 >> 0);
    *((unsigned int *)t36) = t10;
    t11 = *((unsigned int *)t31);
    t12 = (t11 >> 0);
    *((unsigned int *)t30) = t12;
    t13 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t13 & 2047U);
    t14 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t14 & 2047U);
    xsi_vlogtype_concat(t6, 12, 12, 2U, t36, 11, t7, 1);
    t37 = (t0 + 2408);
    xsi_vlogvar_assign_value(t37, t6, 0, 0, 12);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t8 = (t0 + 2248);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    goto LAB6;

LAB11:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB13;

LAB12:    *((unsigned int *)t15) = 1;
    goto LAB13;

LAB15:    xsi_set_current_line(48, ng0);

LAB18:    xsi_set_current_line(49, ng0);
    t37 = (t0 + 2408);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    memset(t36, 0, 8);
    t40 = (t36 + 4);
    t41 = (t39 + 4);
    t42 = *((unsigned int *)t39);
    t43 = (t42 >> 0);
    *((unsigned int *)t36) = t43;
    t44 = *((unsigned int *)t41);
    t45 = (t44 >> 0);
    *((unsigned int *)t40) = t45;
    t46 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t46 & 15U);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t47 & 15U);
    t48 = ((char*)((ng9)));
    memset(t49, 0, 8);
    xsi_vlog_unsigned_add(t49, 4, t36, 4, t48, 4);
    t50 = (t0 + 2408);
    t54 = (t0 + 2408);
    t55 = (t54 + 72U);
    t56 = *((char **)t55);
    t57 = ((char*)((ng10)));
    t58 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t51, t52, t53, ((int*)(t56)), 2, t57, 32, 1, t58, 32, 1);
    t59 = (t51 + 4);
    t60 = *((unsigned int *)t59);
    t61 = (!(t60));
    t62 = (t52 + 4);
    t63 = *((unsigned int *)t62);
    t64 = (!(t63));
    t65 = (t61 && t64);
    t66 = (t53 + 4);
    t67 = *((unsigned int *)t66);
    t68 = (!(t67));
    t69 = (t65 && t68);
    if (t69 == 1)
        goto LAB19;

LAB20:    goto LAB17;

LAB19:    t70 = *((unsigned int *)t53);
    t71 = (t70 + 0);
    t72 = *((unsigned int *)t51);
    t73 = *((unsigned int *)t52);
    t74 = (t72 - t73);
    t75 = (t74 + 1);
    xsi_vlogvar_assign_value(t50, t49, t71, *((unsigned int *)t52), t75);
    goto LAB20;

LAB22:    t19 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB24;

LAB23:    *((unsigned int *)t7) = 1;
    goto LAB24;

LAB26:    xsi_set_current_line(51, ng0);

LAB29:    xsi_set_current_line(52, ng0);
    t27 = (t0 + 2408);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memset(t15, 0, 8);
    t30 = (t15 + 4);
    t31 = (t29 + 4);
    t26 = *((unsigned int *)t29);
    t32 = (t26 >> 0);
    *((unsigned int *)t15) = t32;
    t33 = *((unsigned int *)t31);
    t34 = (t33 >> 0);
    *((unsigned int *)t30) = t34;
    t35 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t35 & 15U);
    t42 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t42 & 15U);
    t37 = ((char*)((ng9)));
    memset(t36, 0, 8);
    xsi_vlog_unsigned_add(t36, 4, t15, 4, t37, 4);
    t38 = (t0 + 2408);
    t39 = (t0 + 2408);
    t40 = (t39 + 72U);
    t41 = *((char **)t40);
    t48 = ((char*)((ng11)));
    t50 = ((char*)((ng12)));
    xsi_vlog_convert_partindices(t49, t51, t52, ((int*)(t41)), 2, t48, 32, 1, t50, 32, 1);
    t54 = (t49 + 4);
    t43 = *((unsigned int *)t54);
    t61 = (!(t43));
    t55 = (t51 + 4);
    t44 = *((unsigned int *)t55);
    t64 = (!(t44));
    t65 = (t61 && t64);
    t56 = (t52 + 4);
    t45 = *((unsigned int *)t56);
    t68 = (!(t45));
    t69 = (t65 && t68);
    if (t69 == 1)
        goto LAB30;

LAB31:    goto LAB28;

LAB30:    t46 = *((unsigned int *)t52);
    t71 = (t46 + 0);
    t47 = *((unsigned int *)t49);
    t60 = *((unsigned int *)t51);
    t74 = (t47 - t60);
    t75 = (t74 + 1);
    xsi_vlogvar_assign_value(t38, t36, t71, *((unsigned int *)t51), t75);
    goto LAB31;

LAB33:    t19 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB35;

LAB34:    *((unsigned int *)t7) = 1;
    goto LAB35;

LAB37:    xsi_set_current_line(54, ng0);

LAB40:    xsi_set_current_line(55, ng0);
    t27 = (t0 + 2408);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memset(t15, 0, 8);
    t30 = (t15 + 4);
    t31 = (t29 + 4);
    t26 = *((unsigned int *)t29);
    t32 = (t26 >> 8);
    *((unsigned int *)t15) = t32;
    t33 = *((unsigned int *)t31);
    t34 = (t33 >> 8);
    *((unsigned int *)t30) = t34;
    t35 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t35 & 15U);
    t42 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t42 & 15U);
    t37 = ((char*)((ng9)));
    memset(t36, 0, 8);
    xsi_vlog_unsigned_add(t36, 4, t15, 4, t37, 4);
    t38 = (t0 + 2408);
    t39 = (t0 + 2408);
    t40 = (t39 + 72U);
    t41 = *((char **)t40);
    t48 = ((char*)((ng13)));
    t50 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t49, t51, t52, ((int*)(t41)), 2, t48, 32, 1, t50, 32, 1);
    t54 = (t49 + 4);
    t43 = *((unsigned int *)t54);
    t61 = (!(t43));
    t55 = (t51 + 4);
    t44 = *((unsigned int *)t55);
    t64 = (!(t44));
    t65 = (t61 && t64);
    t56 = (t52 + 4);
    t45 = *((unsigned int *)t56);
    t68 = (!(t45));
    t69 = (t65 && t68);
    if (t69 == 1)
        goto LAB41;

LAB42:    goto LAB39;

LAB41:    t46 = *((unsigned int *)t52);
    t71 = (t46 + 0);
    t47 = *((unsigned int *)t49);
    t60 = *((unsigned int *)t51);
    t74 = (t47 - t60);
    t75 = (t74 + 1);
    xsi_vlogvar_assign_value(t38, t36, t71, *((unsigned int *)t51), t75);
    goto LAB42;

}

static void Always_82_3(char *t0)
{
    char t13[8];
    char t14[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 5096);
    *((int *)t2) = 1;
    t3 = (t0 + 4264);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(83, ng0);

LAB5:    xsi_set_current_line(84, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t5 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 1);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 1);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 3U);
    t15 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t15 & 3U);
    t12 = (t0 + 1928);
    t16 = (t12 + 56U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t19 = (t18 + 4);
    t20 = (t17 + 4);
    t21 = *((unsigned int *)t17);
    t22 = (t21 >> 0);
    t23 = (t22 & 1);
    *((unsigned int *)t18) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 >> 0);
    t26 = (t25 & 1);
    *((unsigned int *)t19) = t26;
    xsi_vlogtype_concat(t13, 3, 3, 2U, t18, 1, t14, 2);
    t27 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t27, t13, 0, 0, 3, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(85, ng0);

LAB9:    xsi_set_current_line(86, ng0);
    t11 = ((char*)((ng14)));
    t12 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    goto LAB8;

}

static void Always_93_4(char *t0)
{
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;

LAB0:    t1 = (t0 + 4480U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 5112);
    *((int *)t2) = 1;
    t3 = (t0 + 4512);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(94, ng0);

LAB5:    xsi_set_current_line(95, ng0);
    t4 = (t0 + 1928);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng15)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(96, ng0);
    t10 = (t0 + 2408);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memset(t9, 0, 8);
    t13 = (t9 + 4);
    t14 = (t12 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (t15 >> 8);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t14);
    t18 = (t17 >> 8);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t19 & 15U);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 15U);
    t21 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t21, t9, 0, 0, 4, 0LL);
    goto LAB15;

LAB9:    xsi_set_current_line(97, ng0);
    t3 = (t0 + 2408);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t9, 0, 8);
    t7 = (t9 + 4);
    t10 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (t15 >> 4);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t10);
    t18 = (t17 >> 4);
    *((unsigned int *)t7) = t18;
    t19 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t19 & 15U);
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t20 & 15U);
    t11 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t11, t9, 0, 0, 4, 0LL);
    goto LAB15;

LAB11:    xsi_set_current_line(98, ng0);
    t3 = (t0 + 2408);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t9, 0, 8);
    t7 = (t9 + 4);
    t10 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (t15 >> 0);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t10);
    t18 = (t17 >> 0);
    *((unsigned int *)t7) = t18;
    t19 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t19 & 15U);
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t20 & 15U);
    t11 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t11, t9, 0, 0, 4, 0LL);
    goto LAB15;

}

static void Always_104_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 4728U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 5128);
    *((int *)t2) = 1;
    t3 = (t0 + 4760);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(105, ng0);

LAB5:    xsi_set_current_line(106, ng0);
    t4 = (t0 + 2568);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t7, 4);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng16)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng18)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng15)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng24)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng26)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng27)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng28)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng30)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng32)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng20)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng35)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng37)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB37;

LAB38:
LAB40:
LAB39:    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB41:    goto LAB2;

LAB7:    xsi_set_current_line(107, ng0);
    t9 = ((char*)((ng9)));
    t10 = (t0 + 1768);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 8);
    goto LAB41;

LAB9:    xsi_set_current_line(108, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB41;

LAB11:    xsi_set_current_line(109, ng0);
    t3 = ((char*)((ng19)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB41;

LAB13:    xsi_set_current_line(110, ng0);
    t3 = ((char*)((ng20)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB41;

LAB15:    xsi_set_current_line(111, ng0);
    t3 = ((char*)((ng21)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB41;

LAB17:    xsi_set_current_line(112, ng0);
    t3 = ((char*)((ng22)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB41;

LAB19:    xsi_set_current_line(113, ng0);
    t3 = ((char*)((ng23)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB41;

LAB21:    xsi_set_current_line(114, ng0);
    t3 = ((char*)((ng25)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB41;

LAB23:    xsi_set_current_line(115, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB41;

LAB25:    xsi_set_current_line(116, ng0);
    t3 = ((char*)((ng27)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB41;

LAB27:    xsi_set_current_line(117, ng0);
    t3 = ((char*)((ng29)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB41;

LAB29:    xsi_set_current_line(118, ng0);
    t3 = ((char*)((ng31)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB41;

LAB31:    xsi_set_current_line(119, ng0);
    t3 = ((char*)((ng33)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB41;

LAB33:    xsi_set_current_line(120, ng0);
    t3 = ((char*)((ng34)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB41;

LAB35:    xsi_set_current_line(121, ng0);
    t3 = ((char*)((ng36)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB41;

LAB37:    xsi_set_current_line(122, ng0);
    t3 = ((char*)((ng38)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB41;

}


extern void work_m_00000000001523681438_3230559498_init()
{
	static char *pe[] = {(void *)Cont_28_0,(void *)Always_32_1,(void *)Always_44_2,(void *)Always_82_3,(void *)Always_93_4,(void *)Always_104_5};
	xsi_register_didat("work_m_00000000001523681438_3230559498", "isim/bcd_counter_test_isim_beh.exe.sim/work/m_00000000001523681438_3230559498.didat");
	xsi_register_executes(pe);
}
