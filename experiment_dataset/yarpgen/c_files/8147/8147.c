/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_13;
    var_18 ^= ((!(((var_7 ? 65535 : 255)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_1] = (((!255) ? ((-(arr_3 [i_0]))) : ((254 ? 1 : 681023491))));
                arr_7 [i_0] = ((((((255 ? 12351 : 8)) ? 23 : (var_2 <= 0)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_19 = (((((((var_9 ? (arr_2 [1] [i_1] [i_2]) : (arr_1 [i_0])))) ? ((max(var_5, (arr_2 [11] [i_1] [9])))) : 32767)) - ((var_5 ? var_10 : (max((-32767 - 1), -1889775796))))));
                            arr_13 [i_3] [i_3] [i_1] [i_3] = (!29691);
                            var_20 *= 0;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
