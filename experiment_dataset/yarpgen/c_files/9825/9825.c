/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 = (min((((((var_6 ? var_6 : var_9))) ? ((var_4 ? var_11 : var_10)) : ((807382918 ? -1025593074 : var_14)))), (max((var_5 & var_11), var_8))));

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {

                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            arr_13 [i_1] [i_0] |= ((var_3 ? var_11 : var_7));
                            arr_14 [i_0] [i_0] [i_1] [i_0] [i_0] = (!var_14);
                            var_17 = var_8;
                        }

                        for (int i_5 = 2; i_5 < 8;i_5 += 1)
                        {
                            var_18 = (((((var_8 ? var_10 : 807382896))) ? var_8 : ((var_12 ? var_15 : var_12))));
                            var_19 = ((var_9 ? (var_10 > var_15) : var_1));
                        }
                        var_20 += 248;
                    }
                    for (int i_6 = 2; i_6 < 8;i_6 += 1)
                    {
                        arr_22 [i_1] [i_1] [i_1] = (((((var_2 != ((var_0 ? var_3 : var_15))))) == -var_12));
                        var_21 = -var_10;
                        arr_23 [i_0] [i_1] = ((((((max(var_0, var_7))) ? (!-807382918) : ((-807382918 ? var_14 : 32767))))) ? (var_2 || 19719) : ((var_5 ? var_11 : 127)));
                    }
                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 7;i_7 += 1)
                    {
                        var_22 = (var_1 && 6802633290480266567);
                        var_23 = (max(var_23, (((0 ? ((var_5 ? var_14 : 19719)) : var_4)))));
                    }
                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 9;i_8 += 1)
                    {
                        var_24 = ((var_13 ? var_1 : var_10));
                        arr_28 [i_0] [i_1] [i_2] [i_0] = (var_4 || -1798414693);
                        var_25 *= var_12;
                    }
                    var_26 = var_5;
                    var_27 = ((var_10 == var_15) << ((((min(var_12, var_8))) + 7637)));

                    /* vectorizable */
                    for (int i_9 = 3; i_9 < 10;i_9 += 1) /* same iter space */
                    {
                        var_28 &= var_12;
                        var_29 = (max(var_29, (!1)));
                        var_30 = (!var_8);
                    }
                    for (int i_10 = 3; i_10 < 10;i_10 += 1) /* same iter space */
                    {
                        var_31 = (min(var_31, (((-127 >= (var_7 >= var_7))))));
                        var_32 |= ((((((min(-729384927, 1798414693))) ? -1059174814 : (-1798414677 - var_11)))) || (var_8 - var_10));
                        var_33 = (min(var_33, (var_5 - var_6)));
                        arr_36 [i_10] [i_10] [i_10] [i_10 - 2] [i_1] = (((((((max(var_7, var_10))) ? -var_14 : ((max(var_15, var_8)))))) ? (var_1 != var_9) : ((var_15 ? 0 : var_15))));
                    }
                    for (int i_11 = 2; i_11 < 9;i_11 += 1)
                    {
                        var_34 |= -28;
                        arr_39 [i_0] [i_1] = ((!(((var_2 ? var_0 : var_4)))));
                    }
                }
            }
        }
    }
    var_35 = (var_4 | var_15);
    var_36 = ((var_13 ? (((((var_0 ? 83 : var_2))) ? var_3 : var_5)) : var_12));
    #pragma endscop
}
