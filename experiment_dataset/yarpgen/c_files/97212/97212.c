/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -30264;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        var_17 *= (min(((var_14 >> ((((var_9 ? (arr_9 [i_3 - 1]) : var_13)) - 696544285)))), (var_12 <= var_10)));
                        var_18 = (max(var_18, var_14));
                    }
                    for (int i_4 = 1; i_4 < 23;i_4 += 1)
                    {
                        var_19 = (!-var_3);
                        var_20 = var_15;
                        var_21 = ((((var_1 / var_4) == var_14)) ? (max(-31724, (arr_6 [i_4 - 1] [i_2] [i_1]))) : (((((max(var_2, (arr_8 [i_0] [i_1])))) && (arr_10 [i_1])))));
                    }

                    for (int i_5 = 1; i_5 < 24;i_5 += 1)
                    {
                        var_22 = (min(var_22, (arr_5 [i_2] [i_1] [i_0])));
                        var_23 = (((((arr_8 [i_5 + 1] [i_1]) ? var_9 : var_1))) ? ((((arr_5 [i_0] [i_1] [i_2]) >= var_9))) : -1505760673);

                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            var_24 = (((min(((31723 ? var_13 : var_12)), (((arr_15 [i_0] [i_1] [i_1] [i_5] [i_6]) ? var_12 : -1))))) ? (min((~var_2), (-1826217960 | 31728))) : (arr_3 [i_0]));
                            var_25 &= var_11;
                            var_26 = ((((max(31724, var_10)) << (var_15 + 600193703))));
                        }
                        var_27 = ((max(-31736, 74077287)));
                    }
                }
                for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
                {
                    arr_22 [i_7] [i_0] [i_0] [i_0] = (max(-616030026, -1));
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 24;i_9 += 1)
                        {
                            {
                                var_28 = -var_5;
                                var_29 *= ((((74077287 ? (arr_16 [i_7] [i_9] [i_9] [i_8 + 1] [i_9 + 1]) : ((var_13 ? -17722 : var_8)))) > ((-1526055317 - (arr_18 [i_7] [i_8] [i_0] [i_7])))));
                            }
                        }
                    }
                }
                var_30 = var_14;
                var_31 = ((((min((max(var_12, (arr_5 [i_0] [i_1] [i_1]))), ((max(var_1, var_13)))))) ? ((((arr_0 [i_0]) <= var_15))) : ((((((arr_4 [i_0]) || var_7))) | (arr_1 [i_0] [i_1])))));
                var_32 ^= (max(((var_6 ? (arr_20 [i_0] [i_1] [i_1] [i_0]) : var_14)), (!var_9)));
            }
        }
    }
    var_33 ^= (((2104 << (-32759 + 32767))) << (((var_12 + 27498) - 18)));
    #pragma endscop
}
