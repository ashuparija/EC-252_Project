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
static const char *ng0 = "/media/akilarif/Akil/Studies/Semester 4/EC-252 Xilinx Projects/VariablePrecisionMultiplier/adder33bit.v";



static void Cont_121_0(char *t0)
{
    char t4[16];
    char t6[16];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    char *t32;
    char *t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    int t44;
    int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;

LAB0:    t1 = (t0 + 4120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 1848U);
    t5 = *((char **)t2);
    xsi_vlogtype_unsigned_bit_neg(t4, 33, t5, 1);
    t7 = 0;

LAB7:    t8 = (t7 < 2);
    if (t8 == 1)
        goto LAB8;

LAB9:    t52 = (t0 + 4520);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    xsi_vlog_bit_copy(t56, 0, t6, 0, 33);
    xsi_driver_vfirst_trans(t52, 0, 32);
    t57 = (t0 + 4440);
    *((int *)t57) = 1;

LAB1:    return;
LAB4:    t27 = (t7 * 8);
    t28 = *((unsigned int *)t11);
    t29 = *((unsigned int *)t21);
    *((unsigned int *)t11) = (t28 | t29);
    t30 = (t3 + t27);
    t31 = (t27 + 4);
    t32 = (t3 + t31);
    t33 = (t4 + t27);
    t34 = (t27 + 4);
    t35 = (t4 + t34);
    t36 = *((unsigned int *)t30);
    t37 = (~(t36));
    t38 = *((unsigned int *)t32);
    t39 = (~(t38));
    t40 = *((unsigned int *)t33);
    t41 = (~(t40));
    t42 = *((unsigned int *)t35);
    t43 = (~(t42));
    t44 = (t37 & t39);
    t45 = (t41 & t43);
    t46 = (~(t44));
    t47 = (~(t45));
    t48 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t48 & t46);
    t49 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t49 & t47);
    t50 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t50 & t46);
    t51 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t51 & t47);

LAB6:    t7 = (t7 + 1);
    goto LAB7;

LAB5:    goto LAB6;

LAB8:    t9 = (t7 * 8);
    t2 = (t3 + t9);
    t10 = (t4 + t9);
    t11 = (t6 + t9);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t10);
    t14 = (t12 & t13);
    *((unsigned int *)t11) = t14;
    t15 = (t7 * 8);
    t16 = (t15 + 4);
    t17 = (t3 + t16);
    t18 = (t15 + 4);
    t19 = (t4 + t18);
    t20 = (t15 + 4);
    t21 = (t6 + t20);
    t22 = *((unsigned int *)t17);
    t23 = *((unsigned int *)t19);
    t24 = (t22 | t23);
    *((unsigned int *)t21) = t24;
    t25 = *((unsigned int *)t21);
    t26 = (t25 != 0);
    if (t26 == 1)
        goto LAB4;
    else
        goto LAB5;

}


extern void work_m_01733371743784596400_1331077498_init()
{
	static char *pe[] = {(void *)Cont_121_0};
	xsi_register_didat("work_m_01733371743784596400_1331077498", "isim/TestBench_VPAC_isim_beh.exe.sim/work/m_01733371743784596400_1331077498.didat");
	xsi_register_executes(pe);
}
