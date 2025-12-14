/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = max(((var_10 ? -1 : 1854001782)), (65534 ^ 15456));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_15 = min((min(-18, (arr_4 [i_0 + 1]))), (((1 * (((112 == (arr_6 [6] [i_1] [i_2] [i_0 + 1]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_16 = (max(143, 98304));
                                var_17 *= (min((arr_8 [i_0] [i_0] [i_2] [i_3]), (((max((arr_3 [i_0] [i_0] [i_3]), 10191734445035024915)) / ((((arr_10 [i_0] [i_1] [i_2] [i_3] [i_4 + 1] [i_0]) / (arr_0 [i_0] [i_3]))))))));
                                var_18 -= (((((-(arr_7 [i_0] [6] [i_3])))) ? (((-(1 < 18446744073709551615)))) : ((((max((-32767 - 1), -1))) ? (arr_7 [i_0] [i_3] [i_4 + 1]) : ((65534 ? 1 : (arr_8 [i_0] [i_1] [4] [i_4])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
