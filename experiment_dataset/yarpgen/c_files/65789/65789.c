/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_11 = (min(168, (!var_4)));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_12 = ((((((1147063062120145881 ? (arr_8 [i_1] [i_0] [i_0] [i_1]) : 593423890)) >> (arr_11 [i_2] [i_2 + 2] [i_2 + 2] [i_2] [i_2 + 3] [i_2 + 3] [i_2]))) / ((min((((157 < (arr_10 [i_4] [i_3] [i_0] [i_0])))), -73)))));
                                var_13 = (arr_6 [i_0] [i_0] [i_2 + 1] [i_4]);
                            }
                        }
                    }
                    var_14 |= 64;
                    var_15 = (max(398721482874437033, ((((((arr_1 [i_0] [i_1 + 2]) ? var_1 : 2434028340)) >= ((((arr_11 [i_0] [i_0] [i_2 + 3] [i_0] [i_0] [i_1] [i_0]) % 153))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 14;i_6 += 1)
        {
            {
                var_16 = ((((((arr_15 [i_5 - 1] [i_6 + 2]) * 48))) ? ((min((arr_14 [i_6 + 2] [i_5 - 2]), (arr_14 [i_6 + 2] [i_5 + 1])))) : (1 | 101)));

                for (int i_7 = 1; i_7 < 14;i_7 += 1)
                {
                    var_17 = (((((-(arr_7 [i_5] [i_6] [i_7 + 2] [8] [i_6] [i_6 - 1])))) ? ((-(arr_5 [i_6]))) : (((min(93, (arr_9 [i_7 + 1] [i_7 + 1] [i_6 + 2] [i_6 + 2] [i_5 + 1])))))));
                    var_18 = (((((min((arr_15 [i_5] [i_6]), (arr_11 [0] [i_6] [10] [15] [0] [i_6] [i_6]))) + 89)) >= 180));
                }
                var_19 = (max(var_19, ((((min(((min((arr_11 [i_5] [i_5] [i_5] [17] [i_5] [i_5] [i_5]), 108))), var_9)) + ((var_3 ? ((3874394741 ? 1 : -1345726420)) : ((91 ? 94 : 160)))))))));
            }
        }
    }
    var_20 *= var_1;
    #pragma endscop
}
