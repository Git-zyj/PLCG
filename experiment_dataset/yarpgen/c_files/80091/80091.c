/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = ((((min(var_6, (max(var_13, var_8))))) ? (((((min(var_0, var_9))) ? var_9 : var_9))) : ((2072627209509595751 ? var_1 : var_8))));
                arr_6 [i_0] = 1;
                var_14 ^= ((((1336020426 % (min(14224392749897880716, 2958946869)))) % 10573576798592519866));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    arr_16 [i_4] [18] [i_4] [i_4] |= var_1;
                    var_15 = var_0;
                    var_16 += (((max((max(11594861712001915120, 11594861712001915115)), var_11))) ? var_0 : ((((var_8 || (((var_0 ? var_2 : var_4))))))));
                    var_17 += var_8;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 22;i_6 += 1)
        {
            {
                arr_21 [i_5] = ((4170243588 >> (min(0, 1))));
                var_18 = ((((((var_13 ? var_10 : var_6))) ? ((var_4 ? var_7 : var_3)) : (min(var_9, var_5)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 3; i_7 < 18;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    arr_29 [i_9] [i_8] = ((var_6 >> ((((((max(var_13, var_10))) ? (min(var_8, var_4)) : (var_10 == var_2))) - 3190871376))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 18;i_11 += 1)
                        {
                            {
                                var_19 = (var_9 >= (min((max(var_10, var_0)), ((min(var_1, var_9))))));
                                var_20 *= ((((((var_9 ? var_0 : var_6)) + var_4))) ? var_10 : var_9);
                                var_21 = var_12;
                                var_22 = (max(var_22, var_11));
                            }
                        }
                    }
                    arr_35 [i_9] [1] [i_9] = (min((((var_13 ? var_6 : var_0))), (((var_2 ? (var_2 * var_9) : (min(var_11, var_2)))))));
                    arr_36 [i_7 + 1] [i_8] [i_9] = ((((var_3 & (min(var_2, var_5)))) >> (((min(var_13, var_0))))));
                    var_23 -= var_4;
                }
            }
        }
    }
    #pragma endscop
}
