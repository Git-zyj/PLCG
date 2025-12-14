/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_10 = ((var_2 ? (~18903) : (arr_1 [i_1])));
                    var_11 *= (min((-101 >= 2080768), 319049123));
                    arr_8 [1] [i_1] [1] [i_0] = ((var_6 & 0) ? (((arr_0 [i_0]) ? (arr_5 [i_2] [i_0] [i_0] [i_0]) : var_0)) : ((var_8 ? (arr_0 [i_0]) : var_0)));
                }
                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {

                    for (int i_4 = 1; i_4 < 13;i_4 += 1)
                    {
                        arr_13 [i_0] [i_0] = 0;
                        arr_14 [i_0] [i_1] [i_0] [i_0] [i_3] [i_4 + 1] = 28;
                        var_12 = (-2013510421 << (((((arr_3 [i_4 - 1]) / -114)) - 64592614451117634)));
                        arr_15 [i_0] = -1015808;
                    }
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_13 *= (((((~((4294967292 ? 4294967295 : -32760))))) ? ((min(4809494809750648519, var_2))) : ((var_8 ? (arr_2 [i_3 + 1] [i_5]) : var_0))));
                        var_14 = (min(((-(-32767 - 1))), (arr_16 [4] [i_3 + 2] [i_3 - 1] [i_5] [13])));
                        var_15 = (((arr_9 [1] [i_0] [i_0]) & ((2147483647 ? ((1959855629 ? -2147483646 : var_7)) : (arr_6 [i_3 - 1] [i_3 + 2] [1] [i_3 + 2])))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        var_16 -= (1 + -582808065);
                        var_17 |= 32760;
                    }
                    var_18 = ((-((((((var_3 ? var_7 : (arr_1 [i_0])))) || (((var_5 ? 6096312403339899763 : 3968))))))));
                    var_19 = (max(var_19, ((min((var_6 || var_3), (((((arr_19 [3] [i_1] [i_3] [i_3 + 1]) * 32764)) != 1)))))));
                }
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    arr_23 [i_0] [i_1] [i_1] [11] = (((!((max(-126, -32))))));
                    arr_24 [i_0] [i_0] [i_0] = (((min((arr_3 [i_7]), 3012025894))));
                    var_20 = (max(var_20, -142));
                }
                var_21 = (min(var_21, ((((((10 <= (arr_12 [i_0] [0] [i_0] [i_0] [i_0] [i_0])))) >> (-247 + 256))))));
                arr_25 [i_0] [i_0] = ((!(((-32749 / ((var_6 ? (arr_1 [i_0]) : var_9)))))));
            }
        }
    }
    var_22 = var_7;
    #pragma endscop
}
