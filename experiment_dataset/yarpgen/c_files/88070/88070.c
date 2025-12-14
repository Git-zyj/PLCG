/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_15 = ((((((arr_4 [i_0] [i_1] [i_1]) >> (((arr_4 [i_0] [i_0] [i_0]) - 14942))))) ? ((1 ? (arr_2 [i_0]) : (arr_4 [i_0] [i_0] [i_0]))) : -8266));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_16 = (((arr_7 [i_0] [i_0] [i_2] [7]) - (((max(-30148, 103))))));
                            var_17 = ((-(arr_9 [i_0] [i_3] [i_2] [i_3])));
                            var_18 = ((((-(~11)))) - (max(var_14, var_3)));
                            arr_11 [i_0] [i_2] [i_2] [i_2] = (arr_7 [i_0] [i_0] [7] [i_3]);
                            arr_12 [i_0] [i_0] = -30148;
                        }
                    }
                }
                arr_13 [i_0] [i_0] = (-((-(((arr_4 [i_1] [i_0] [i_0]) / (arr_5 [i_0] [i_1]))))));
                var_19 = -9223372036854775807;
                var_20 = (~11326001272685946408);
            }
        }
    }
    var_21 = ((var_8 ? (var_10 * 1) : ((max(var_7, var_7)))));
    #pragma endscop
}
