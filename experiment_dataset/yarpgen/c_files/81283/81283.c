/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
                {
                    arr_6 [i_0] [i_2] [i_2] = (arr_2 [21]);
                    var_19 = (min(var_19, ((((!1) | ((min(((225 ? (arr_0 [i_0]) : 1)), ((-(arr_0 [i_0])))))))))));
                    arr_7 [i_2] [i_1] = (arr_4 [i_1]);
                }
                for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            {
                                var_20 = (max(var_20, (((((((-(arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]))) + 2147483647)) << ((((arr_13 [i_5] [i_4] [i_0] [i_1] [i_0]) <= (~1)))))))));
                                var_21 = ((-(arr_3 [i_0] [i_0] [i_0])));
                                arr_16 [i_5] = ((~(((((var_11 ^ (arr_2 [i_5])))) ? (arr_10 [i_3]) : (arr_2 [i_0])))));
                                arr_17 [i_0] [i_0] [i_1] [i_3] [i_4] [i_0] [i_5] &= (((((arr_5 [i_4]) <= ((((arr_4 [i_0]) <= 139))))) ? ((((~3549180996542439285) ^ (153 % 1)))) : (((((-(arr_2 [i_0])))) ? ((((arr_9 [i_4] [i_3] [i_0]) ? var_0 : (arr_4 [i_5])))) : var_11))));
                            }
                        }
                    }
                    arr_18 [i_0] = ((((((((var_15 ? var_13 : var_18))) ? var_10 : 1))) ? var_4 : ((((1 < 1) | (arr_8 [i_0] [i_0] [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_25 [i_0] [i_1] [i_1] [i_3] [i_6] [i_6] [i_7] = (((((((var_4 ? var_15 : (arr_8 [i_0] [i_3] [i_7]))) + 28324))) ? 1 : var_1));
                                var_22 = ((min(((arr_5 [i_0]), (var_0 / var_5)))));
                                arr_26 [i_3] |= (max((((249672860 <= ((min(1, 1)))))), (((arr_19 [i_6 + 1] [i_7] [i_7] [i_7] [i_7 - 1]) << var_7))));
                            }
                        }
                    }
                    var_23 = (min(3549180996542439285, 4045294436));
                }
                arr_27 [i_0] [i_1] = 6048692835649342076;
            }
        }
    }
    var_24 ^= var_1;
    var_25 |= 9246139372443293756;
    #pragma endscop
}
