/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(((((var_9 >= 6018814262558216879) >= (!-2876)))), var_5));
    var_12 = ((+(((-2876 >= var_3) & (min(var_10, (-9223372036854775807 - 1)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_13 = (min(205, 12678141679522111411));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_10 [i_0 + 1] [i_0] [i_2] [i_1] = (((((-var_7 ? 1755040139 : 6639154283585901205))) ? 0 : (((((-13942 ? 67 : 0)) >= 52028)))));
                    var_14 = (((((arr_4 [i_0 - 1] [i_0 + 1] [i_0 - 1]) ? (arr_2 [i_0 + 1] [i_0 - 1]) : (arr_2 [i_0] [i_1]))) << (var_7 + 22989)));
                    arr_11 [i_0] = 5768602394187440205;
                    arr_12 [i_0] [i_0] [i_2] = 74;
                    arr_13 [i_0] [i_0] [i_1] [i_0] = 5768602394187440201;
                }
                arr_14 [i_0] = (((1084083568 & (arr_9 [i_1] [i_0] [i_0 + 3] [i_0]))) + ((((!(arr_9 [i_1] [i_1] [i_0 - 1] [i_0 + 1]))))));
                /* LoopNest 3 */
                for (int i_3 = 3; i_3 < 24;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 23;i_5 += 1)
                        {
                            {
                                arr_22 [i_0] [i_0] [i_1] [i_3 + 1] [i_4] [i_5 + 2] = min(((-(~var_9))), ((-((((arr_18 [i_0 + 2] [i_0] [i_3] [i_4] [i_5]) >= 31))))));
                                arr_23 [i_0 + 2] [i_1] [i_3] [i_4] [i_0] = ((532076710 & (((~((min(var_0, var_0))))))));
                                var_15 = var_9;
                            }
                        }
                    }
                }
                arr_24 [i_0] = (((((((min(511, 101))) ? 7593 : ((var_4 ? (arr_16 [i_1] [i_1] [i_0]) : var_6))))) & (max(0, 2141162146597355244))));
            }
        }
    }
    var_16 = ((var_1 + ((var_8 << (((144 & var_2) - 141))))));
    #pragma endscop
}
