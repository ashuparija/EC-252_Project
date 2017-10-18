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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/media/akilarif/Akil/Studies/Semester 4/EC-252 Xilinx Projects/VariablePrecisionMultiplier/Multiplier_32X9.v";
static int ng1[] = {0, 0};
static int ng2[] = {31, 0};
static int ng3[] = {1, 0};
static int ng4[] = {0, 0, 0, 0};
static int ng5[] = {33, 0};
static int ng6[] = {8, 0};
static unsigned int ng7[] = {16777215U, 0U};
static unsigned int ng8[] = {0U, 0U};
static int ng9[] = {32, 0};



static void Initial_108_0(char *t0)
{
    char t1[16];
    char t2[8];
    char t5[8];
    char t32[16];
    char t39[16];
    char t40[8];
    char t43[8];
    char t48[8];
    char t75[16];
    char t82[16];
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
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
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t41;
    char *t42;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t83;
    char *t84;
    char *t85;

LAB0:    xsi_set_current_line(109, ng0);

LAB2:    xsi_set_current_line(110, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t5, 0, 8);
    t6 = (t4 + 4);
    t7 = (t3 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t3);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = (t10 | t13);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t7);
    t17 = (t15 | t16);
    t18 = (~(t17));
    t19 = (t14 & t18);
    if (t19 != 0)
        goto LAB6;

LAB3:    if (t17 != 0)
        goto LAB5;

LAB4:    *((unsigned int *)t5) = 1;

LAB6:    memset(t2, 0, 8);
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t5);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB7;

LAB8:    if (*((unsigned int *)t21) != 0)
        goto LAB9;

LAB10:    t28 = (t2 + 4);
    t29 = *((unsigned int *)t2);
    t30 = *((unsigned int *)t28);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB11;

LAB12:    t35 = *((unsigned int *)t2);
    t36 = (~(t35));
    t37 = *((unsigned int *)t28);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t28) > 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t2) > 0)
        goto LAB17;

LAB18:    memcpy(t1, t39, 16);

LAB19:    t85 = (t0 + 4328);
    xsi_vlogvar_assign_value(t85, t1, 0, 0, 33);
    xsi_set_current_line(111, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 4168);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 33);
    xsi_set_current_line(112, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3688);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(113, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 3848);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(114, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 4008);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(115, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1168U);
    t6 = (t3 + 72U);
    t7 = *((char **)t6);
    t20 = ((char*)((ng6)));
    xsi_vlog_generic_get_index_select_value(t5, 32, t4, t7, 2, t20, 32, 1);
    t21 = ((char*)((ng3)));
    memset(t40, 0, 8);
    t27 = (t5 + 4);
    t28 = (t21 + 4);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t21);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t27);
    t12 = *((unsigned int *)t28);
    t13 = (t11 ^ t12);
    t14 = (t10 | t13);
    t15 = *((unsigned int *)t27);
    t16 = *((unsigned int *)t28);
    t17 = (t15 | t16);
    t18 = (~(t17));
    t19 = (t14 & t18);
    if (t19 != 0)
        goto LAB40;

LAB37:    if (t17 != 0)
        goto LAB39;

LAB38:    *((unsigned int *)t40) = 1;

LAB40:    memset(t2, 0, 8);
    t34 = (t40 + 4);
    t22 = *((unsigned int *)t34);
    t23 = (~(t22));
    t24 = *((unsigned int *)t40);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t34) != 0)
        goto LAB43;

LAB44:    t42 = (t2 + 4);
    t29 = *((unsigned int *)t2);
    t30 = *((unsigned int *)t42);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB45;

LAB46:    t35 = *((unsigned int *)t2);
    t36 = (~(t35));
    t37 = *((unsigned int *)t42);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t42) > 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t2) > 0)
        goto LAB51;

LAB52:    memcpy(t1, t39, 16);

LAB53:    t49 = (t0 + 4488);
    xsi_vlogvar_assign_value(t49, t1, 0, 0, 33);

LAB1:    return;
LAB5:    t20 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB6;

LAB7:    *((unsigned int *)t2) = 1;
    goto LAB10;

LAB9:    t27 = (t2 + 4);
    *((unsigned int *)t2) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB10;

LAB11:    t33 = (t0 + 1048U);
    t34 = *((char **)t33);
    t33 = ((char*)((ng1)));
    xsi_vlogtype_concat(t32, 64, 64, 2U, t33, 32, t34, 32);
    goto LAB12;

LAB13:    t41 = (t0 + 1048U);
    t42 = *((char **)t41);
    t41 = (t0 + 1008U);
    t44 = (t41 + 72U);
    t45 = *((char **)t44);
    t46 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t43, 32, t42, t45, 2, t46, 32, 1);
    t47 = ((char*)((ng1)));
    memset(t48, 0, 8);
    t49 = (t43 + 4);
    t50 = (t47 + 4);
    t51 = *((unsigned int *)t43);
    t52 = *((unsigned int *)t47);
    t53 = (t51 ^ t52);
    t54 = *((unsigned int *)t49);
    t55 = *((unsigned int *)t50);
    t56 = (t54 ^ t55);
    t57 = (t53 | t56);
    t58 = *((unsigned int *)t49);
    t59 = *((unsigned int *)t50);
    t60 = (t58 | t59);
    t61 = (~(t60));
    t62 = (t57 & t61);
    if (t62 != 0)
        goto LAB23;

LAB20:    if (t60 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t48) = 1;

LAB23:    memset(t40, 0, 8);
    t64 = (t48 + 4);
    t65 = *((unsigned int *)t64);
    t66 = (~(t65));
    t67 = *((unsigned int *)t48);
    t68 = (t67 & t66);
    t69 = (t68 & 1U);
    if (t69 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t64) != 0)
        goto LAB26;

LAB27:    t71 = (t40 + 4);
    t72 = *((unsigned int *)t40);
    t73 = *((unsigned int *)t71);
    t74 = (t72 || t73);
    if (t74 > 0)
        goto LAB28;

LAB29:    t78 = *((unsigned int *)t40);
    t79 = (~(t78));
    t80 = *((unsigned int *)t71);
    t81 = (t79 || t80);
    if (t81 > 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t71) > 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t40) > 0)
        goto LAB34;

LAB35:    memcpy(t39, t82, 16);

LAB36:    goto LAB14;

LAB15:    xsi_vlog_unsigned_bit_combine(t1, 64, t32, 64, t39, 64);
    goto LAB19;

LAB17:    memcpy(t1, t32, 16);
    goto LAB19;

LAB22:    t63 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB23;

LAB24:    *((unsigned int *)t40) = 1;
    goto LAB27;

LAB26:    t70 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t70) = 1;
    goto LAB27;

LAB28:    t76 = (t0 + 1048U);
    t77 = *((char **)t76);
    t76 = ((char*)((ng1)));
    xsi_vlogtype_concat(t75, 64, 64, 2U, t76, 32, t77, 32);
    goto LAB29;

LAB30:    t83 = (t0 + 1048U);
    t84 = *((char **)t83);
    t83 = ((char*)((ng3)));
    xsi_vlogtype_concat(t82, 64, 64, 2U, t83, 32, t84, 32);
    goto LAB31;

LAB32:    xsi_vlog_unsigned_bit_combine(t39, 64, t75, 64, t82, 64);
    goto LAB36;

LAB34:    memcpy(t39, t75, 16);
    goto LAB36;

LAB39:    t33 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB40;

LAB41:    *((unsigned int *)t2) = 1;
    goto LAB44;

LAB43:    t41 = (t2 + 4);
    *((unsigned int *)t2) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB44;

LAB45:    t44 = (t0 + 1208U);
    t45 = *((char **)t44);
    t44 = ((char*)((ng7)));
    xsi_vlogtype_concat(t32, 33, 33, 2U, t44, 24, t45, 9);
    goto LAB46;

LAB47:    t46 = (t0 + 1208U);
    t47 = *((char **)t46);
    t46 = ((char*)((ng8)));
    xsi_vlogtype_concat(t39, 33, 33, 2U, t46, 24, t47, 9);
    goto LAB48;

LAB49:    xsi_vlog_unsigned_bit_combine(t1, 33, t32, 33, t39, 33);
    goto LAB53;

LAB51:    memcpy(t1, t32, 16);
    goto LAB53;

}

static void Always_117_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 5648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(118, ng0);

LAB4:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 5456);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(119, ng0);
    t4 = (t0 + 4008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t7) == 0)
        goto LAB6;

LAB8:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB9:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB11;

LAB10:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 4008);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB6:    *((unsigned int *)t3) = 1;
    goto LAB9;

LAB11:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB10;

}

static void Always_122_2(char *t0)
{
    char t4[16];
    char t5[8];
    char t8[8];
    char t24[8];
    char t38[8];
    char t43[8];
    char t59[8];
    char t67[8];
    char t110[16];
    char t117[16];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
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
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    int t91;
    int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t111;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t118;
    char *t119;
    char *t120;

LAB0:    t1 = (t0 + 5896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 7208);
    *((int *)t2) = 1;
    t3 = (t0 + 5928);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(123, ng0);

LAB5:    xsi_set_current_line(124, ng0);
    t6 = (t0 + 1368U);
    t7 = *((char **)t6);
    t6 = ((char*)((ng3)));
    memset(t8, 0, 8);
    t9 = (t7 + 4);
    t10 = (t6 + 4);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    memset(t24, 0, 8);
    t25 = (t8 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t8);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t25) != 0)
        goto LAB12;

LAB13:    t32 = (t24 + 4);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t32);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB14;

LAB15:    memcpy(t67, t24, 8);

LAB16:    memset(t5, 0, 8);
    t99 = (t67 + 4);
    t100 = *((unsigned int *)t99);
    t101 = (~(t100));
    t102 = *((unsigned int *)t67);
    t103 = (t102 & t101);
    t104 = (t103 & 1U);
    if (t104 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t99) != 0)
        goto LAB30;

LAB31:    t106 = (t5 + 4);
    t107 = *((unsigned int *)t5);
    t108 = *((unsigned int *)t106);
    t109 = (t107 || t108);
    if (t109 > 0)
        goto LAB32;

LAB33:    t113 = *((unsigned int *)t5);
    t114 = (~(t113));
    t115 = *((unsigned int *)t106);
    t116 = (t114 || t115);
    if (t116 > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t106) > 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t5) > 0)
        goto LAB38;

LAB39:    memcpy(t4, t117, 16);

LAB40:    t120 = (t0 + 4328);
    xsi_vlogvar_assign_value(t120, t4, 0, 0, 33);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4168);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 33);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1168U);
    t6 = (t2 + 72U);
    t7 = *((char **)t6);
    t9 = ((char*)((ng6)));
    xsi_vlog_generic_get_index_select_value(t8, 32, t3, t7, 2, t9, 32, 1);
    t10 = ((char*)((ng3)));
    memset(t24, 0, 8);
    t23 = (t8 + 4);
    t25 = (t10 + 4);
    t11 = *((unsigned int *)t8);
    t12 = *((unsigned int *)t10);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t23);
    t15 = *((unsigned int *)t25);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t23);
    t19 = *((unsigned int *)t25);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB44;

LAB41:    if (t20 != 0)
        goto LAB43;

LAB42:    *((unsigned int *)t24) = 1;

LAB44:    memset(t5, 0, 8);
    t32 = (t24 + 4);
    t26 = *((unsigned int *)t32);
    t27 = (~(t26));
    t28 = *((unsigned int *)t24);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t32) != 0)
        goto LAB47;

LAB48:    t37 = (t5 + 4);
    t33 = *((unsigned int *)t5);
    t34 = *((unsigned int *)t37);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB49;

LAB50:    t46 = *((unsigned int *)t5);
    t47 = (~(t46));
    t48 = *((unsigned int *)t37);
    t49 = (t47 || t48);
    if (t49 > 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t37) > 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t5) > 0)
        goto LAB55;

LAB56:    memcpy(t4, t117, 16);

LAB57:    t44 = (t0 + 4488);
    xsi_vlogvar_assign_value(t44, t4, 0, 0, 33);
    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t24) = 1;
    goto LAB13;

LAB12:    t31 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB13;

LAB14:    t36 = (t0 + 1048U);
    t37 = *((char **)t36);
    t36 = (t0 + 1008U);
    t39 = (t36 + 72U);
    t40 = *((char **)t39);
    t41 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t38, 32, t37, t40, 2, t41, 32, 1);
    t42 = ((char*)((ng3)));
    memset(t43, 0, 8);
    t44 = (t38 + 4);
    t45 = (t42 + 4);
    t46 = *((unsigned int *)t38);
    t47 = *((unsigned int *)t42);
    t48 = (t46 ^ t47);
    t49 = *((unsigned int *)t44);
    t50 = *((unsigned int *)t45);
    t51 = (t49 ^ t50);
    t52 = (t48 | t51);
    t53 = *((unsigned int *)t44);
    t54 = *((unsigned int *)t45);
    t55 = (t53 | t54);
    t56 = (~(t55));
    t57 = (t52 & t56);
    if (t57 != 0)
        goto LAB20;

LAB17:    if (t55 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t43) = 1;

LAB20:    memset(t59, 0, 8);
    t60 = (t43 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t43);
    t64 = (t63 & t62);
    t65 = (t64 & 1U);
    if (t65 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t60) != 0)
        goto LAB23;

LAB24:    t68 = *((unsigned int *)t24);
    t69 = *((unsigned int *)t59);
    t70 = (t68 & t69);
    *((unsigned int *)t67) = t70;
    t71 = (t24 + 4);
    t72 = (t59 + 4);
    t73 = (t67 + 4);
    t74 = *((unsigned int *)t71);
    t75 = *((unsigned int *)t72);
    t76 = (t74 | t75);
    *((unsigned int *)t73) = t76;
    t77 = *((unsigned int *)t73);
    t78 = (t77 != 0);
    if (t78 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB19:    t58 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t59) = 1;
    goto LAB24;

LAB23:    t66 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t66) = 1;
    goto LAB24;

LAB25:    t79 = *((unsigned int *)t67);
    t80 = *((unsigned int *)t73);
    *((unsigned int *)t67) = (t79 | t80);
    t81 = (t24 + 4);
    t82 = (t59 + 4);
    t83 = *((unsigned int *)t24);
    t84 = (~(t83));
    t85 = *((unsigned int *)t81);
    t86 = (~(t85));
    t87 = *((unsigned int *)t59);
    t88 = (~(t87));
    t89 = *((unsigned int *)t82);
    t90 = (~(t89));
    t91 = (t84 & t86);
    t92 = (t88 & t90);
    t93 = (~(t91));
    t94 = (~(t92));
    t95 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t95 & t93);
    t96 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t96 & t94);
    t97 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t97 & t93);
    t98 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t98 & t94);
    goto LAB27;

LAB28:    *((unsigned int *)t5) = 1;
    goto LAB31;

LAB30:    t105 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t105) = 1;
    goto LAB31;

LAB32:    t111 = (t0 + 1048U);
    t112 = *((char **)t111);
    t111 = ((char*)((ng3)));
    xsi_vlogtype_concat(t110, 64, 64, 2U, t111, 32, t112, 32);
    goto LAB33;

LAB34:    t118 = (t0 + 1048U);
    t119 = *((char **)t118);
    t118 = ((char*)((ng1)));
    xsi_vlogtype_concat(t117, 64, 64, 2U, t118, 32, t119, 32);
    goto LAB35;

LAB36:    xsi_vlog_unsigned_bit_combine(t4, 64, t110, 64, t117, 64);
    goto LAB40;

LAB38:    memcpy(t4, t110, 16);
    goto LAB40;

LAB43:    t31 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB44;

LAB45:    *((unsigned int *)t5) = 1;
    goto LAB48;

LAB47:    t36 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB48;

LAB49:    t39 = (t0 + 1208U);
    t40 = *((char **)t39);
    t39 = ((char*)((ng7)));
    xsi_vlogtype_concat(t110, 33, 33, 2U, t39, 24, t40, 9);
    goto LAB50;

LAB51:    t41 = (t0 + 1208U);
    t42 = *((char **)t41);
    t41 = ((char*)((ng8)));
    xsi_vlogtype_concat(t117, 33, 33, 2U, t41, 24, t42, 9);
    goto LAB52;

LAB53:    xsi_vlog_unsigned_bit_combine(t4, 33, t110, 33, t117, 33);
    goto LAB57;

LAB55:    memcpy(t4, t110, 16);
    goto LAB57;

}

static void Always_135_3(char *t0)
{
    char t6[8];
    char t30[8];
    char t34[8];
    char t38[8];
    char t54[8];
    char t70[8];
    char t78[8];
    char t118[16];
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
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    char *t37;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    int t102;
    int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    char *t117;

LAB0:    t1 = (t0 + 6144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 7224);
    *((int *)t2) = 1;
    t3 = (t0 + 6176);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(136, ng0);

LAB5:    xsi_set_current_line(137, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
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
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(143, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_signed_greater(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB14;

LAB15:
LAB16:
LAB12:    xsi_set_current_line(161, ng0);
    t2 = (t0 + 4328);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4168);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t6, 0, 8);
    t21 = (t6 + 4);
    t22 = (t8 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t22);
    t12 = (t11 >> 0);
    *((unsigned int *)t21) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 127U);
    t14 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t14 & 127U);
    xsi_vlogtype_concat(t118, 40, 40, 2U, t6, 7, t4, 33);
    t28 = (t0 + 3368);
    xsi_vlogvar_assign_value(t28, t118, 0, 0, 40);
    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(138, ng0);

LAB13:    xsi_set_current_line(139, ng0);
    t28 = ((char*)((ng4)));
    t29 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 33, 0LL);
    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 33, 0LL);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

LAB14:    xsi_set_current_line(144, ng0);

LAB17:    xsi_set_current_line(145, ng0);
    t8 = (t0 + 4328);
    t21 = (t8 + 56U);
    t22 = *((char **)t21);
    t28 = (t0 + 4328);
    t29 = (t28 + 72U);
    t31 = *((char **)t29);
    t32 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t30, 32, t22, t31, 2, t32, 32, 1);
    t33 = ((char*)((ng1)));
    memset(t34, 0, 8);
    t35 = (t30 + 4);
    t36 = (t33 + 4);
    t14 = *((unsigned int *)t30);
    t15 = *((unsigned int *)t33);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t35);
    t18 = *((unsigned int *)t36);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t23 = *((unsigned int *)t35);
    t24 = *((unsigned int *)t36);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t20 & t26);
    if (t27 != 0)
        goto LAB21;

LAB18:    if (t25 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t34) = 1;

LAB21:    memset(t38, 0, 8);
    t39 = (t34 + 4);
    t40 = *((unsigned int *)t39);
    t41 = (~(t40));
    t42 = *((unsigned int *)t34);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t39) != 0)
        goto LAB24;

LAB25:    t46 = (t38 + 4);
    t47 = *((unsigned int *)t38);
    t48 = *((unsigned int *)t46);
    t49 = (t47 || t48);
    if (t49 > 0)
        goto LAB26;

LAB27:    memcpy(t78, t38, 8);

LAB28:    t110 = (t78 + 4);
    t111 = *((unsigned int *)t110);
    t112 = (~(t111));
    t113 = *((unsigned int *)t78);
    t114 = (t113 & t112);
    t115 = (t114 != 0);
    if (t115 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 4328);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4328);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t4, t8, 2, t21, 32, 1);
    t22 = ((char*)((ng3)));
    memset(t30, 0, 8);
    t28 = (t6 + 4);
    t29 = (t22 + 4);
    t9 = *((unsigned int *)t6);
    t10 = *((unsigned int *)t22);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t28);
    t13 = *((unsigned int *)t29);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t28);
    t17 = *((unsigned int *)t29);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB46;

LAB43:    if (t18 != 0)
        goto LAB45;

LAB44:    *((unsigned int *)t30) = 1;

LAB46:    memset(t34, 0, 8);
    t32 = (t30 + 4);
    t23 = *((unsigned int *)t32);
    t24 = (~(t23));
    t25 = *((unsigned int *)t30);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t32) != 0)
        goto LAB49;

LAB50:    t35 = (t34 + 4);
    t40 = *((unsigned int *)t34);
    t41 = *((unsigned int *)t35);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB51;

LAB52:    memcpy(t70, t34, 8);

LAB53:    t82 = (t70 + 4);
    t105 = *((unsigned int *)t82);
    t106 = (~(t105));
    t107 = *((unsigned int *)t70);
    t108 = (t107 & t106);
    t109 = (t108 != 0);
    if (t109 > 0)
        goto LAB65;

LAB66:
LAB67:
LAB42:    xsi_set_current_line(149, ng0);
    t2 = (t0 + 4328);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t5) = t14;
    t8 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t8, t6, 0, 0, 1, 0LL);
    xsi_set_current_line(150, ng0);
    xsi_set_current_line(150, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB68:    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB69;

LAB70:    xsi_set_current_line(154, ng0);
    t2 = (t0 + 5952);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB74;
    goto LAB1;

LAB20:    t37 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB21;

LAB22:    *((unsigned int *)t38) = 1;
    goto LAB25;

LAB24:    t45 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB25;

LAB26:    t50 = (t0 + 3688);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    t53 = ((char*)((ng3)));
    memset(t54, 0, 8);
    t55 = (t52 + 4);
    t56 = (t53 + 4);
    t57 = *((unsigned int *)t52);
    t58 = *((unsigned int *)t53);
    t59 = (t57 ^ t58);
    t60 = *((unsigned int *)t55);
    t61 = *((unsigned int *)t56);
    t62 = (t60 ^ t61);
    t63 = (t59 | t62);
    t64 = *((unsigned int *)t55);
    t65 = *((unsigned int *)t56);
    t66 = (t64 | t65);
    t67 = (~(t66));
    t68 = (t63 & t67);
    if (t68 != 0)
        goto LAB32;

LAB29:    if (t66 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t54) = 1;

LAB32:    memset(t70, 0, 8);
    t71 = (t54 + 4);
    t72 = *((unsigned int *)t71);
    t73 = (~(t72));
    t74 = *((unsigned int *)t54);
    t75 = (t74 & t73);
    t76 = (t75 & 1U);
    if (t76 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t71) != 0)
        goto LAB35;

LAB36:    t79 = *((unsigned int *)t38);
    t80 = *((unsigned int *)t70);
    t81 = (t79 & t80);
    *((unsigned int *)t78) = t81;
    t82 = (t38 + 4);
    t83 = (t70 + 4);
    t84 = (t78 + 4);
    t85 = *((unsigned int *)t82);
    t86 = *((unsigned int *)t83);
    t87 = (t85 | t86);
    *((unsigned int *)t84) = t87;
    t88 = *((unsigned int *)t84);
    t89 = (t88 != 0);
    if (t89 == 1)
        goto LAB37;

LAB38:
LAB39:    goto LAB28;

LAB31:    t69 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t69) = 1;
    goto LAB32;

LAB33:    *((unsigned int *)t70) = 1;
    goto LAB36;

LAB35:    t77 = (t70 + 4);
    *((unsigned int *)t70) = 1;
    *((unsigned int *)t77) = 1;
    goto LAB36;

LAB37:    t90 = *((unsigned int *)t78);
    t91 = *((unsigned int *)t84);
    *((unsigned int *)t78) = (t90 | t91);
    t92 = (t38 + 4);
    t93 = (t70 + 4);
    t94 = *((unsigned int *)t38);
    t95 = (~(t94));
    t96 = *((unsigned int *)t92);
    t97 = (~(t96));
    t98 = *((unsigned int *)t70);
    t99 = (~(t98));
    t100 = *((unsigned int *)t93);
    t101 = (~(t100));
    t102 = (t95 & t97);
    t103 = (t99 & t101);
    t104 = (~(t102));
    t105 = (~(t103));
    t106 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t106 & t104);
    t107 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t107 & t105);
    t108 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t108 & t104);
    t109 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t109 & t105);
    goto LAB39;

LAB40:    xsi_set_current_line(146, ng0);
    t116 = (t0 + 1688U);
    t117 = *((char **)t116);
    t116 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t116, t117, 0, 0, 33, 0LL);
    goto LAB42;

LAB45:    t31 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB46;

LAB47:    *((unsigned int *)t34) = 1;
    goto LAB50;

LAB49:    t33 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB50;

LAB51:    t36 = (t0 + 3688);
    t37 = (t36 + 56U);
    t39 = *((char **)t37);
    t45 = ((char*)((ng1)));
    memset(t38, 0, 8);
    t46 = (t39 + 4);
    t50 = (t45 + 4);
    t43 = *((unsigned int *)t39);
    t44 = *((unsigned int *)t45);
    t47 = (t43 ^ t44);
    t48 = *((unsigned int *)t46);
    t49 = *((unsigned int *)t50);
    t57 = (t48 ^ t49);
    t58 = (t47 | t57);
    t59 = *((unsigned int *)t46);
    t60 = *((unsigned int *)t50);
    t61 = (t59 | t60);
    t62 = (~(t61));
    t63 = (t58 & t62);
    if (t63 != 0)
        goto LAB57;

LAB54:    if (t61 != 0)
        goto LAB56;

LAB55:    *((unsigned int *)t38) = 1;

LAB57:    memset(t54, 0, 8);
    t52 = (t38 + 4);
    t64 = *((unsigned int *)t52);
    t65 = (~(t64));
    t66 = *((unsigned int *)t38);
    t67 = (t66 & t65);
    t68 = (t67 & 1U);
    if (t68 != 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t52) != 0)
        goto LAB60;

LAB61:    t72 = *((unsigned int *)t34);
    t73 = *((unsigned int *)t54);
    t74 = (t72 & t73);
    *((unsigned int *)t70) = t74;
    t55 = (t34 + 4);
    t56 = (t54 + 4);
    t69 = (t70 + 4);
    t75 = *((unsigned int *)t55);
    t76 = *((unsigned int *)t56);
    t79 = (t75 | t76);
    *((unsigned int *)t69) = t79;
    t80 = *((unsigned int *)t69);
    t81 = (t80 != 0);
    if (t81 == 1)
        goto LAB62;

LAB63:
LAB64:    goto LAB53;

LAB56:    t51 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB57;

LAB58:    *((unsigned int *)t54) = 1;
    goto LAB61;

LAB60:    t53 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB61;

LAB62:    t85 = *((unsigned int *)t70);
    t86 = *((unsigned int *)t69);
    *((unsigned int *)t70) = (t85 | t86);
    t71 = (t34 + 4);
    t77 = (t54 + 4);
    t87 = *((unsigned int *)t34);
    t88 = (~(t87));
    t89 = *((unsigned int *)t71);
    t90 = (~(t89));
    t91 = *((unsigned int *)t54);
    t94 = (~(t91));
    t95 = *((unsigned int *)t77);
    t96 = (~(t95));
    t102 = (t88 & t90);
    t103 = (t94 & t96);
    t97 = (~(t102));
    t98 = (~(t103));
    t99 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t99 & t97);
    t100 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t100 & t98);
    t101 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t101 & t97);
    t104 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t104 & t98);
    goto LAB64;

LAB65:    xsi_set_current_line(148, ng0);
    t83 = (t0 + 1848U);
    t84 = *((char **)t83);
    t83 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t83, t84, 0, 0, 33, 0LL);
    goto LAB67;

LAB69:    xsi_set_current_line(151, ng0);

LAB71:    xsi_set_current_line(152, ng0);
    t8 = (t0 + 4328);
    t21 = (t8 + 56U);
    t22 = *((char **)t21);
    t28 = (t0 + 4328);
    t29 = (t28 + 72U);
    t31 = *((char **)t29);
    t32 = (t0 + 3528);
    t33 = (t32 + 56U);
    t35 = *((char **)t33);
    t36 = ((char*)((ng3)));
    memset(t34, 0, 8);
    xsi_vlog_signed_add(t34, 32, t35, 32, t36, 32);
    xsi_vlog_generic_get_index_select_value(t30, 1, t22, t31, 2, t34, 32, 1);
    t37 = (t0 + 4328);
    t39 = (t0 + 4328);
    t45 = (t39 + 72U);
    t46 = *((char **)t45);
    t50 = (t0 + 3528);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    xsi_vlog_generic_convert_bit_index(t38, t46, 2, t52, 32, 1);
    t53 = (t38 + 4);
    t14 = *((unsigned int *)t53);
    t102 = (!(t14));
    if (t102 == 1)
        goto LAB72;

LAB73:    xsi_set_current_line(150, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 3528);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB68;

LAB72:    xsi_vlogvar_wait_assign_value(t37, t30, 0, *((unsigned int *)t38), 1, 0LL);
    goto LAB73;

LAB74:    xsi_set_current_line(154, ng0);
    t3 = (t0 + 4168);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    t21 = (t0 + 4328);
    t22 = (t0 + 4328);
    t28 = (t22 + 72U);
    t29 = *((char **)t28);
    t31 = ((char*)((ng9)));
    xsi_vlog_generic_convert_bit_index(t30, t29, 2, t31, 32, 1);
    t32 = (t30 + 4);
    t15 = *((unsigned int *)t32);
    t102 = (!(t15));
    if (t102 == 1)
        goto LAB75;

LAB76:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 5952);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB77;
    goto LAB1;

LAB75:    xsi_vlogvar_wait_assign_value(t21, t6, 0, *((unsigned int *)t30), 1, 0LL);
    goto LAB76;

LAB77:    xsi_set_current_line(155, ng0);
    xsi_set_current_line(155, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3528);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB78:    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB79;

LAB80:    xsi_set_current_line(159, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    goto LAB16;

LAB79:    xsi_set_current_line(156, ng0);

LAB81:    xsi_set_current_line(157, ng0);
    t8 = (t0 + 4168);
    t21 = (t8 + 56U);
    t22 = *((char **)t21);
    t28 = (t0 + 4168);
    t29 = (t28 + 72U);
    t31 = *((char **)t29);
    t32 = (t0 + 3528);
    t33 = (t32 + 56U);
    t35 = *((char **)t33);
    t36 = ((char*)((ng3)));
    memset(t34, 0, 8);
    xsi_vlog_signed_add(t34, 32, t35, 32, t36, 32);
    xsi_vlog_generic_get_index_select_value(t30, 1, t22, t31, 2, t34, 32, 1);
    t37 = (t0 + 4168);
    t39 = (t0 + 4168);
    t45 = (t39 + 72U);
    t46 = *((char **)t45);
    t50 = (t0 + 3528);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    xsi_vlog_generic_convert_bit_index(t38, t46, 2, t52, 32, 1);
    t53 = (t38 + 4);
    t14 = *((unsigned int *)t53);
    t102 = (!(t14));
    if (t102 == 1)
        goto LAB82;

LAB83:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 3528);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB78;

LAB82:    xsi_vlogvar_wait_assign_value(t37, t30, 0, *((unsigned int *)t38), 1, 0LL);
    goto LAB83;

}

static void implSig1_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 6392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng1)));
    t3 = (t0 + 7320);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}

static void implSig2_execute(char *t0)
{
    char t3[16];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    t1 = (t0 + 6640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 4488);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_vlogtype_unsigned_bit_neg(t3, 33, t5, 33);
    t6 = (t0 + 7384);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    xsi_vlog_bit_copy(t10, 0, t3, 0, 33);
    xsi_driver_vfirst_trans(t6, 0, 32);
    t11 = (t0 + 7240);
    *((int *)t11) = 1;

LAB1:    return;
}

static void implSig3_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 6888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng3)));
    t3 = (t0 + 7448);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}


extern void work_m_08386153665295666045_3668346008_init()
{
	static char *pe[] = {(void *)Initial_108_0,(void *)Always_117_1,(void *)Always_122_2,(void *)Always_135_3,(void *)implSig1_execute,(void *)implSig2_execute,(void *)implSig3_execute};
	xsi_register_didat("work_m_08386153665295666045_3668346008", "isim/TestBench_VPAC_isim_beh.exe.sim/work/m_08386153665295666045_3668346008.didat");
	xsi_register_executes(pe);
}
