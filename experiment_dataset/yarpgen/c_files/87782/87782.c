/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_13 = min((((arr_1 [i_0]) ? (arr_1 [0]) : (((arr_0 [i_0]) & 60072)))), (min(60, ((31238 ? 2814458808 : 6397375796443090681)))));
        var_14 = (max(var_14, ((min(((min(118, (arr_1 [i_0])))), (((max((arr_1 [4]), 3178163119878242518)) / (((((arr_0 [i_0]) + 9223372036854775807)) >> 16)))))))));
        var_15 = 0;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_16 = 58720256;

                    for (int i_3 = 1; i_3 < 13;i_3 += 1) /* same iter space */
                    {
                        var_17 = (-(((((80 - 1016) + 2147483647)) >> (((max((arr_4 [i_2] [i_3 + 1]), 14954697707171183312)) - 14954697707171183297)))));
                        var_18 = 1;
                    }
                    for (int i_4 = 1; i_4 < 13;i_4 += 1) /* same iter space */
                    {
                        var_19 = (max(var_19, (((((((arr_2 [i_4 + 1]) ? 0 : 255))) ? (((arr_6 [i_4] [i_4] [i_4 + 1]) ? (arr_6 [i_4 + 1] [i_4] [i_4 + 1]) : (arr_6 [i_4] [i_4 + 1] [i_4 + 1]))) : (((((arr_2 [i_4 - 1]) <= var_4)))))))));

                        for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                        {
                            var_20 = (min(var_20, ((((0 < var_10) ? var_5 : ((1120268543 ? (arr_15 [i_0] [0] [i_0]) : 1974352138)))))));
                            arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((0 ? -1997277684 : 64));
                            var_21 = (((((arr_15 [i_4] [i_2] [i_2]) ? 0 : (((arr_13 [i_0] [i_0] [i_0] [i_0] [3] [i_0]) % var_10)))) == (max((arr_12 [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_4]), 3085393016926991255))));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                        {
                            var_22 = ((var_4 ? (((0 ? 1 : (arr_8 [i_6] [4] [i_2] [i_1])))) : ((243 ? 8874741198924164127 : 4398046510976))));
                            var_23 = ((1587344881 < (arr_1 [i_0])));
                            var_24 = ((((((arr_15 [i_6] [i_2] [i_2]) <= 4122365330))) >> (((((-1 + 2147483647) >> 1)) - 1073741803))));
                        }
                        for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
                        {
                            arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [6] = (min(var_5, (~var_8)));
                            arr_26 [i_0] [i_1] [0] [i_4] [7] = (((max(-844759278721076084, (arr_16 [5] [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_7])))) ? (((((min(-26698, (arr_7 [i_4])))) ? 2295173091 : (arr_12 [13] [13] [i_4 + 1] [13] [i_4] [i_2])))) : ((-114 ? (arr_1 [i_4 + 1]) : (arr_1 [i_4 + 1]))));
                        }
                        for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
                        {
                            arr_30 [i_8] [4] [0] [i_1] [i_0] = 7115128599786057324;
                            var_25 = (max(var_25, ((max(((((arr_18 [i_2] [i_8] [6]) >> (((max((arr_19 [i_2] [i_1] [i_2] [i_4] [i_1] [i_8]), 22)) - 1898873666))))), ((((max(19818432018641970, (arr_15 [i_0] [i_8] [1])))) ? 13843248768439024602 : (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                        }
                    }
                }
            }
        }
    }
    var_26 = (!-1618566289);
    #pragma endscop
}
