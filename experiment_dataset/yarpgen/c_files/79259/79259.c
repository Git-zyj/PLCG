/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_19 = (arr_7 [i_0] [i_0] [i_0] [i_0]);
                    arr_8 [10] [i_2 + 1] = (min((((arr_2 [i_2 + 1]) ? (arr_2 [i_2 - 1]) : (arr_2 [i_2 - 1]))), (1 > 19)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 = (((((arr_6 [i_0 + 3] [i_1] [i_2 + 2] [i_3]) ? (arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0 + 2]) : (arr_6 [12] [12] [i_2 + 1] [i_3]))) | ((~(arr_6 [i_1] [i_2 + 2] [12] [i_2 + 2])))));
                                var_21 ^= (max((-32767 - 1), 27233));
                                arr_14 [i_3] [11] [11] [11] = 15583552259725749190;
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = var_6;
    var_23 = ((var_12 ? var_3 : 2863191813983802426));
    var_24 += (((~var_18) ? var_2 : var_15));
    #pragma endscop
}
