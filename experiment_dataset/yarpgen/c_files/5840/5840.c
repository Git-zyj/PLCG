/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_16 *= 1;
                var_17 ^= (arr_1 [i_0]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {
                arr_9 [i_2] = ((((-19934 ? (arr_5 [i_2]) : (-19905 > 1))) << (((((65535 ? var_2 : 1))) - 1219251265))));
                var_18 = (-(((((arr_6 [i_3]) ? 2064384 : (-2147483647 - 1))) / var_6)));
                arr_10 [i_2] = (max((1 % 19939), (min((arr_3 [i_2] [i_3] [i_2]), (arr_0 [i_3])))));

                /* vectorizable */
                for (int i_4 = 2; i_4 < 15;i_4 += 1)
                {
                    var_19 = ((((arr_4 [i_3]) + 2147483647)) >> 1);
                    var_20 = ((17477 / (arr_8 [i_4 - 2] [2] [i_4 - 2])));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_21 = (min(var_21, (arr_2 [i_2] [i_5] [i_4])));
                                arr_17 [i_2] = -17462;
                            }
                        }
                    }
                    var_22 = (arr_2 [i_4 - 2] [i_4 - 2] [i_4]);
                    var_23 = (min(var_23, (((-19925 >= (arr_11 [i_2] [i_3] [i_4]))))));
                }
            }
        }
    }
    var_24 = ((18446744073709551615 ? 9114982934259985698 : 6430273936138088463));
    #pragma endscop
}
