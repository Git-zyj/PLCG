/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_18, (120 / 9223372036854775807)));
    var_20 = var_6;
    var_21 = (var_18 || -40);
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_22 = ((~(36 % 1546657394)));
                    var_23 = (min(((((max(-9223372036854775807, 39))) ? (max((arr_0 [i_0] [i_1]), -110)) : ((((arr_5 [i_0] [i_0] [i_2]) / (arr_5 [i_0] [i_0] [10])))))), (arr_3 [i_2] [i_1] [i_0])));
                    arr_6 [6] [i_1] |= ((!(((((((arr_4 [i_1] [i_1]) >> 57))) ? 0 : ((max(27, 1))))))));
                    var_24 = 26438;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_25 = (max(var_25, ((((arr_3 [i_0] [i_0] [i_0]) % (((((-32767 - 1) ? 255 : -55)))))))));
                                var_26 *= (((arr_7 [i_0] [9] [9] [i_0 + 3]) ? (arr_10 [i_3] [i_3] [i_3]) : ((4294967295 ? 5 : 14))));
                                var_27 = (((((min((arr_7 [i_3 - 2] [i_1] [i_0 - 1] [i_3]), (arr_5 [i_0] [i_1] [6])))) ? ((min(20729, var_2))) : (~var_16))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
