/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((~var_10) ? (((536854528 >= var_8) / (max(var_11, var_13)))) : (((((var_6 >> (var_7 + 1295110125))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_9 [i_0] [i_0] [i_2] [i_3] = ((((var_6 < (arr_8 [i_0] [i_0] [i_0] [17] [i_2] [i_3]))) ? ((((arr_1 [i_0] [i_3]) < ((var_13 ? (arr_3 [6] [i_1] [i_1]) : (arr_2 [i_1])))))) : ((((arr_6 [3] [i_1] [i_1] [12]) >= var_7)))));
                        arr_10 [16] = ((((min((3974294013 & 320673283), (~var_11)))) ? 11069 : 4824085519417068293));
                    }
                    arr_11 [i_0] [i_1] [i_2] [1] = var_11;

                    for (int i_4 = 1; i_4 < 23;i_4 += 1)
                    {
                        arr_15 [i_0] [i_1] [i_4 - 1] = (3974294013 + 479412266135108628);
                        arr_16 [i_0] [i_0] [11] [21] [8] = ((((0 ? 31785 : var_11))));
                        var_15 = (arr_14 [i_4 - 1] [i_2]);

                        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            var_16 |= ((-53 ? ((((max(var_2, (arr_8 [i_0] [i_1] [i_2] [1] [i_5] [i_5])))) ? ((13622658554292483323 ? (arr_17 [i_0] [i_1] [i_2] [i_4] [10]) : var_5)) : var_1)) : (!51)));
                            arr_19 [i_0] [11] [i_2] [i_4] [12] = ((((arr_0 [i_0] [i_4 + 1]) != (min((arr_0 [i_0] [0]), (arr_17 [i_0] [15] [i_2] [i_2] [i_5]))))) ? ((((min(var_11, 0))) ? var_7 : (arr_2 [i_2]))) : var_2);
                            arr_20 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = (((((~(var_0 > 1431402151)))) ? (arr_3 [i_0] [i_1] [i_5]) : (arr_3 [i_0] [i_2] [i_0])));
                            var_17 = (max(var_17, (arr_1 [i_0] [i_5])));
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            var_18 *= ((var_7 && ((((1891474756 ? 1891474747 : var_11))))));
                            arr_24 [1] [i_1] [i_2] [i_2] [i_4] [i_4] [i_6] = -1431402151;
                        }
                        var_19 = (max(29837, (!var_13)));
                    }
                }
            }
        }
    }
    var_20 = (max(var_20, var_6));
    #pragma endscop
}
