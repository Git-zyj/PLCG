/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_10 |= (((max((arr_7 [15] [i_1] [i_1]), (~2769699029538552974)))) ? (arr_4 [i_1] [i_0]) : (((arr_7 [i_0] [i_1] [i_2]) / (arr_14 [i_0] [i_0] [i_1] [i_2] [1] [i_3 - 1] [i_1]))));
                                var_11 ^= (~17110);
                                var_12 = (max(var_12, ((max(var_5, (max((arr_14 [i_0] [i_1] [i_0] [i_0 + 1] [i_1] [i_3 + 1] [i_0]), (arr_8 [i_0 + 1]))))))));
                                var_13 *= var_1;
                            }
                        }
                    }
                    var_14 = (arr_13 [16] [i_0 - 1] [i_0] [i_1] [11] [i_0 - 1] [i_2]);
                }
            }
        }
    }
    var_15 = var_9;
    var_16 ^= ((-12714 ? var_8 : (max(var_1, (~1667603318761145774)))));
    #pragma endscop
}
