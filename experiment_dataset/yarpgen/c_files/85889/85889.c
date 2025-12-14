/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_18 ^= (arr_2 [10]);
                                var_19 = (max(var_19, ((min((((((max((-2147483647 - 1), (arr_11 [i_0] [i_1] [i_2 + 1] [10])))) ? (arr_5 [i_4]) : ((var_2 ? 25165824 : 255))))), (((~var_2) * 9)))))));
                            }
                        }
                    }
                }
                var_20 = (min(var_20, (((var_9 ? ((((((-9223372036854775807 - 1) ? 2013265920 : -10))) ? (-9223372036854775807 - 1) : (((~(-2147483647 - 1)))))) : (((-(arr_12 [i_0] [i_0] [i_0] [i_1 - 1] [i_1 + 2])))))))));
            }
        }
    }
    var_21 = (((((var_2 ? (~2147483647) : (-2147483641 % 228)))) == ((~(max(0, -2))))));
    #pragma endscop
}
