/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= ((!(((-(max(var_4, var_9)))))));
    var_11 = (((~var_9) > var_6));
    var_12 = (max((((var_4 % var_3) % var_2)), (max(((min(var_1, var_0))), var_7))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_13 = (~var_2);
                            var_14 = ((~(max(var_1, (arr_6 [i_0] [i_0] [1] [i_3])))));
                            var_15 = ((var_2 < (arr_7 [i_0] [i_0] [i_0] [1])));
                            var_16 += (arr_3 [i_2]);
                            var_17 += (-(((-(arr_8 [i_0] [i_1] [5] [i_1])))));
                        }
                    }
                }
                arr_10 [i_0] = ((~((((var_1 > var_7) <= var_7)))));
            }
        }
    }
    var_18 = ((!((max(var_0, var_9)))));
    #pragma endscop
}
