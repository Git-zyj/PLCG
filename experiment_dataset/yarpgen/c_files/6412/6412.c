/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_12 = (min(var_12, (((((((((var_8 > (arr_13 [7] [i_1 - 3] [3] [7] [i_0]))) && (var_0 / var_3))))) == (((((arr_9 [i_0] [i_0] [i_0] [i_0]) + (arr_12 [i_0] [1] [i_0 + 2] [12] [i_4]))) - ((((arr_5 [8]) - 495647619))))))))));
                                var_13 *= ((((((var_8 / var_6) / (var_11 | var_8)))) || (((var_10 / var_4) == ((((var_5 || (arr_1 [i_2] [i_2])))))))));
                                arr_15 [i_0] [i_1] [i_2] [8] [13] [i_4] = ((((((34 - 1) && (var_9 / var_3))))) < (((0 & 18397381615072003134) & (((165 << (252 - 240)))))));
                            }
                        }
                    }
                }
                arr_16 [14] [i_1 - 1] = ((((((((arr_6 [i_0] [i_0]) / -31195)) * ((((arr_13 [i_1] [i_1 - 1] [i_1] [6] [3]) / var_7)))))) >= ((14331231388627608512 >> (((39 * 207) - 8053))))));
            }
        }
    }
    var_14 = ((((((var_6 == var_6) < (var_0 - var_3)))) - ((((var_11 | var_10) > (208 < 1))))));
    #pragma endscop
}
