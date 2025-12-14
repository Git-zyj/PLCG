/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_15 = (max((((((var_11 != (arr_1 [i_0])))) << (var_11 - 47050))), var_13));
                var_16 += (max(var_9, ((var_7 ? 30 : (41144 * 250)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_2] [i_0] [i_0] = ((+((min((arr_4 [i_3 + 1] [i_3 + 1] [i_3 - 1]), var_0)))));
                            arr_11 [i_3] [14] [i_0] [0] [i_3] &= (((arr_6 [i_1] [1] [i_1] [i_3 - 2]) ? (min(((116 ? 2048 : 1)), -2045)) : 1));
                            var_17 = (min(var_17, ((max((((-2049 + 2147483647) >> 1)), (min((arr_4 [i_0] [i_1] [i_2]), ((2048 ? 135 : (arr_2 [i_0] [1]))))))))));
                            var_18 += (arr_3 [i_2] [i_2]);
                            var_19 = var_9;
                        }
                    }
                }
            }
        }
    }
    var_20 = ((~(max((var_13 || 62662), (var_10 | var_2)))));
    var_21 = (((min(var_12, ((var_11 ? var_6 : 57)))) % (min(43674, 152556157))));
    var_22 = (((((((var_1 ? 2112591669 : 97117396)) != (150 * 69)))) << (min((0 || var_2), ((186 ? var_14 : var_3))))));
    var_23 = var_9;
    #pragma endscop
}
