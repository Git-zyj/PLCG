/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-(((!var_6) ? (min(-2029604129, var_1)) : (((4095 ? var_3 : var_2)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_19 = var_13;
                            var_20 ^= 4071;
                            var_21 = ((+(max(((max((arr_9 [i_0] [i_2] [i_2] [i_0]), var_16))), -291))));
                        }
                    }
                }
                arr_13 [i_0] [i_1 + 1] [i_0] = ((var_7 ? -4088 : 4088));
                var_22 -= -4084;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 4; i_5 < 16;i_5 += 1)
        {
            {
                var_23 ^= (min((((arr_7 [i_4 + 1] [i_5] [i_4 - 1] [i_5]) % (arr_7 [i_4 - 1] [i_5] [i_4 - 1] [i_5]))), (max((max((-9223372036854775807 - 1), 33554431)), ((max(var_3, (arr_15 [i_5]))))))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        {
                            var_24 -= min((~var_6), (min((arr_19 [i_5 + 1] [i_4 - 1]), (((arr_17 [i_4] [i_4] [i_6]) ^ (arr_15 [i_5]))))));
                            arr_24 [i_6] = (var_4 >= (arr_2 [i_4 + 1]));
                            var_25 -= 9223372036854775807;
                        }
                    }
                }
                var_26 = (max(-4100, ((33554431 ? (min(var_15, (arr_18 [i_4 - 1] [i_4 + 1] [i_5]))) : (((4052 ? (arr_21 [i_4] [i_4 - 1] [i_4] [i_5] [i_4]) : var_0)))))));
            }
        }
    }
    #pragma endscop
}
