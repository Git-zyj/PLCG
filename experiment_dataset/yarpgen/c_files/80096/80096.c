/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_12 [i_0 + 2] [i_4] [i_2 - 2] [i_2 - 2] [i_3] [i_4] = (arr_2 [i_1] [i_4]);
                                var_17 = 65535;
                                var_18 = ((((37300 ? ((18446744073709551615 ? 8305410189999362883 : 12985513427280666769)) : (arr_10 [i_4] [i_2 - 2]))) * (((var_3 * (((2799671782816766649 ? (arr_3 [1]) : 1))))))));
                            }
                        }
                    }
                    var_19 = (((1 / 373071674) ? ((-(arr_6 [i_0] [i_0 - 1] [2] [i_0 - 1]))) : ((((((arr_10 [2] [i_2]) * var_15)))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [i_6] [4] [i_0] [i_6] &= ((((((arr_0 [i_0 + 2]) + ((var_8 ? (arr_9 [i_1] [i_1]) : (arr_1 [i_0] [i_6])))))) % (((((1 ? var_4 : (arr_15 [i_0] [i_0] [i_5] [i_6])))) ? (arr_6 [i_2 - 1] [i_2] [i_2 + 1] [i_2]) : ((((1751942091 != (arr_0 [5])))))))));
                                var_20 = (max(var_20, ((((((0 ? ((((arr_15 [i_5] [i_2 - 1] [i_1 - 3] [i_0 + 1]) != (arr_1 [i_0] [10])))) : (arr_3 [i_5])))) ? (!4294967295) : 33516)))));
                                var_21 = ((((((-127 - 1) & 123))) ? 6044840557773449621 : -2115124135));
                                var_22 ^= (((5 | 906821283) >= ((1176386318 ? 15 : (1 | 3605411119)))));
                            }
                        }
                    }
                    var_23 = ((((((var_11 ? 1137612526 : var_9)) * (arr_0 [i_0])))) ? (((-19501 ^ 3911) ^ ((4294967295 ? (arr_18 [i_0] [i_1] [i_2 - 2] [7] [i_0]) : (arr_4 [i_1]))))) : ((((((arr_11 [i_0] [i_0] [i_0] [i_0] [i_1 + 1]) ? 21374 : var_15))))));
                }
            }
        }
    }
    var_24 = var_2;
    #pragma endscop
}
