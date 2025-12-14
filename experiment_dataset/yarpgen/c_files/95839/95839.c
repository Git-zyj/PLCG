/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_10 = (min(var_10, 0));
        var_11 = ((((min((~-1134768430), (15 < -13402)))) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])));
        var_12 = (i_0 % 2 == 0) ? ((((1134768417 / 1) << (((arr_1 [i_0] [i_0]) - 1))))) : ((((1134768417 / 1) << (((((arr_1 [i_0] [i_0]) - 1)) - 241)))));
        arr_2 [i_0] = (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_5 [1] &= (((arr_1 [10] [10]) ? 183 : (arr_1 [i_1] [0])));
        arr_6 [i_1] = ((806710277 ? ((-2052339534 ? 5879338630121956083 : 12567405443587595532)) : (arr_1 [i_1] [1])));

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_13 = (max(var_13, (!0)));
            arr_9 [i_1] [i_1] [i_2] = (((arr_3 [i_2]) ? (arr_7 [i_1]) : ((-14537461 ? ((~(arr_1 [i_1] [i_2]))) : ((var_5 ? var_9 : (arr_0 [8])))))));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 7;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        var_14 = (~(arr_0 [i_1]));
                        var_15 = (min((max((~var_3), (!var_7))), 8216659325970196323));
                        arr_15 [i_3] [i_3] [0] [i_3] = (arr_14 [3] [i_2] [i_3 - 1] [i_3]);
                    }
                }
            }
        }
    }
    var_16 = ((var_7 ? (min((!var_5), (max(10342, 5879338630121956077)))) : ((max(var_3, ((8965146670907570647 ? var_4 : 193)))))));
    var_17 = (min(-2105031500618921563, var_1));
    #pragma endscop
}
