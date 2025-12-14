/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        var_14 = (((((~((~(arr_7 [i_0] [1] [i_0 + 1] [8])))))) ? (((!(arr_7 [i_0] [i_0] [i_0 + 1] [2])))) : (~-16)));

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            var_15 = (max(var_15, (((((((min(16, (arr_8 [i_3] [i_3] [i_3] [i_4]))) | var_13))) ? (arr_2 [i_0 + 1]) : var_5)))));
                            var_16 = (((min(((-22379 ? var_7 : (arr_11 [i_0 - 1] [2] [2] [i_3] [i_0]))), (22390 + -922032719215045187))) | ((((arr_8 [8] [0] [8] [i_0]) ? (arr_9 [i_1 + 1] [i_1 + 1] [i_1 + 1]) : (arr_9 [2] [i_1] [3]))))));
                        }
                        for (int i_5 = 1; i_5 < 14;i_5 += 1)
                        {
                            var_17 = (min(var_17, (arr_8 [i_0 + 1] [2] [i_0 + 1] [10])));
                            var_18 = (min(((20674 ? var_10 : (arr_1 [i_0]))), ((min((arr_1 [i_0]), (arr_1 [i_0]))))));
                            var_19 = (min(var_19, ((min((var_0 / -15555), (((((((!(arr_0 [2]))))) == 9051662856965807834))))))));
                        }
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            arr_21 [i_0 + 1] [4] [i_0] [i_3] [4] = (max((~9223372036854775807), ((max(46, 24)))));
                            var_20 = (min(var_20, 711663486));
                            var_21 = (min(var_21, ((min(((min(var_7, -1703283475))), (!var_12))))));
                            arr_22 [i_0] [i_1 + 1] [i_0] [i_3 - 1] [i_1 + 1] [i_1] [12] = (max(((((max(711663460, 2))) ? var_10 : (arr_7 [i_0] [i_0 + 1] [i_1 + 1] [i_0]))), (arr_17 [i_3 - 1] [13] [i_0 - 1] [i_3])));
                        }
                    }
                }
            }
        }
        arr_23 [i_0] [1] = (((((~15553) ? (~15528) : (((-15554 + 2147483647) >> (((arr_17 [i_0] [i_0] [i_0] [i_0]) - 1001837790)))))) * -5));
        arr_24 [i_0] = (min(13496265209123603647, -8111986687518157850));
        var_22 = (0 / -1298918971);
        var_23 = (min(var_23, (((-(arr_3 [14]))))));
    }
    var_24 = ((!(((var_2 ^ (~53022))))));
    #pragma endscop
}
