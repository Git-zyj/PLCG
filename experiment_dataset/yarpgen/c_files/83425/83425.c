/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 &= ((!(((((min(var_12, 62))) ? var_5 : (arr_8 [i_1 + 2] [i_1] [i_1 + 2] [i_1] [i_1 - 1] [i_2]))))));
                                arr_13 [i_0] [i_1] [i_3] [i_4] = (((min((((4294967295 ? (arr_4 [i_1]) : -1))), var_2)) ^ (arr_10 [i_1 - 1] [i_1 + 2] [i_1] [i_1] [i_1] [i_1] [i_1 + 2])));
                            }
                        }
                    }
                    arr_14 [i_0] [i_1] [i_0] = (max((((6026544644424197896 == (arr_11 [i_0] [i_1 + 3] [i_1] [i_1] [i_1] [i_0])))), (arr_2 [i_0] [i_1 + 2])));
                    var_16 = (min(((((arr_4 [i_0]) ? -849 : 219))), (max((arr_4 [i_0]), 129024))));
                    var_17 &= (arr_12 [i_1 + 2] [i_0] [i_1 + 1] [i_0] [i_1]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            {
                var_18 = ((min(4, 18446744073709551610)));
                arr_19 [2] &= ((((arr_10 [i_5] [i_5] [i_5] [10] [i_5] [i_5] [6]) ? var_0 : (arr_10 [i_5] [i_6] [i_5] [0] [i_5] [2] [i_6]))));
                var_19 = (max(var_19, (--4294967283)));
                var_20 ^= (arr_7 [i_5] [i_6]);

                for (int i_7 = 4; i_7 < 9;i_7 += 1)
                {
                    var_21 = (arr_5 [i_5] [i_7 - 2]);
                    var_22 = (min((arr_7 [i_7 - 2] [i_7 - 2]), (((arr_7 [i_7 - 3] [i_7 - 1]) ? var_4 : (arr_7 [i_7 - 3] [i_7 - 2])))));
                }
            }
        }
    }
    var_23 = (((((-8388608 ? 4294967274 : var_4))) ? ((max(var_10, (~var_4)))) : (((min(var_14, var_5)) / (var_9 - var_12)))));
    var_24 = var_2;
    var_25 = ((-var_4 ? ((min(var_11, ((min(75, var_9)))))) : (min(3791371423, 12420199429285353704))));
    #pragma endscop
}
