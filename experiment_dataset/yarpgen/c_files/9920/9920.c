/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1 + 3] = (((((!(arr_2 [i_0] [i_0]))) ? (~var_3) : (!4605099073563539166))) << ((((-(max((arr_1 [i_1]), (arr_0 [i_0]))))) + 16)));
                var_15 = (min(var_15, (((var_7 + ((~(arr_3 [i_0] [i_1 - 2]))))))));
                var_16 = (arr_2 [i_1 - 2] [i_1]);
            }
        }
    }

    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_17 = 4605099073563539166;
            arr_12 [i_2 + 1] [i_3] = (min(-6750855426226027364, -4605099073563539158));
        }
        /* vectorizable */
        for (int i_4 = 1; i_4 < 16;i_4 += 1)
        {
            arr_17 [i_2 + 1] &= (arr_13 [i_4 - 1] [i_2]);
            var_18 = (((~0) ? var_3 : 4605099073563539178));
            var_19 = ((((((arr_15 [i_2]) >= var_9))) ^ (arr_1 [i_2 + 1])));
            var_20 = (min(var_20, ((((arr_16 [i_2 - 1]) ? (arr_16 [i_2 - 1]) : (arr_16 [i_2 + 1]))))));
        }
        var_21 = ((-6750855426226027362 ? -1155067284 : 13469744277958024334));
        var_22 = (((((~691891179) ? 3 : (~1))) >= 594696882));
        var_23 = ((!var_8) << (((-21 <= ((var_12 ? var_13 : 176))))));
        arr_18 [i_2] [i_2 - 1] = (((arr_7 [i_2 - 1]) ? (arr_7 [i_2 - 1]) : ((-(arr_7 [i_2 - 1])))));
    }
    for (int i_5 = 1; i_5 < 9;i_5 += 1)
    {
        var_24 = (min(var_24, ((((!67) ? ((min((!var_12), (arr_10 [i_5] [i_5])))) : (((arr_16 [i_5 + 3]) ? 2014388350 : (var_4 + var_5))))))));
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                {
                    var_25 = ((~(-217 & var_5)));
                    var_26 = (((((((((arr_2 [i_5] [i_5]) ? (arr_9 [i_7]) : 1155067288))) ? ((((!(arr_24 [i_5 + 1] [i_5] [i_7]))))) : var_1))) ? (((~var_11) ? 1155067302 : ((var_10 ? (arr_14 [i_5 + 1] [i_6]) : (arr_20 [i_5]))))) : ((3435366064 ? ((198 ? var_3 : (arr_2 [i_7] [i_6 - 1]))) : -var_0))));
                    arr_25 [i_5] [i_6] [i_5] = -var_0;
                    var_27 += ((((min(-123, var_10))) ? ((((arr_4 [i_5 + 1] [i_5 + 3] [i_5 + 1]) ? (arr_4 [i_5 + 2] [i_5 + 1] [i_5 + 3]) : (arr_4 [i_5 - 1] [i_5 + 1] [i_5 + 1])))) : 4605099073563539158));
                }
            }
        }
        var_28 = ((((var_2 ? (arr_23 [i_5 - 1]) : (arr_23 [i_5 + 1]))) + ((min(var_2, (arr_23 [i_5 + 1]))))));
        var_29 = (((min(4494335597154889480, (arr_2 [i_5 + 2] [i_5 + 2]))) % 2787964225));
    }
    #pragma endscop
}
