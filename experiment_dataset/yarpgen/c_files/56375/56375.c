/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0 + 2] [i_1] = (min(((((arr_3 [i_0 - 2]) || (arr_2 [i_0 - 2])))), ((-(max((arr_0 [i_1 + 1]), 262143))))));
                var_12 = (((max((arr_4 [i_1] [i_1]), (arr_4 [i_1] [i_1]))) ? ((((arr_4 [i_1] [i_1]) >= (arr_4 [i_1] [i_1])))) : (arr_4 [i_1] [i_1])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            {
                arr_12 [i_2] = (~((-(((arr_7 [i_2]) % var_6)))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        {
                            arr_18 [i_5] = (((arr_15 [i_2]) ? (arr_14 [i_2] [i_2] [i_5]) : 1));
                            var_13 = ((min((43 < -12429), (arr_0 [i_4]))));
                            var_14 = -993659089767244886;
                        }
                    }
                }
            }
        }
    }
    var_15 &= var_10;
    var_16 = var_3;
    #pragma endscop
}
