/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((max(-2826286878641294247, (-9223372036854775807 - 1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_12 -= (max(((10691 ^ (((-686302064 ? 10677 : 31))))), ((max(var_8, var_2)))));

                for (int i_2 = 4; i_2 < 21;i_2 += 1)
                {
                    var_13 = (min(var_13, (((~((((((arr_4 [i_0] [i_0] [0]) ? (arr_3 [i_0]) : (arr_9 [i_1] [i_1])))) ? (((arr_7 [i_0] [i_0] [i_0]) ? 233 : (arr_7 [i_0] [i_1] [i_2]))) : (arr_4 [i_2 - 4] [i_2 - 4] [i_2 - 4]))))))));
                    arr_10 [i_0] = (max((((~var_7) ? ((((arr_2 [i_0]) % (arr_4 [i_0] [i_1] [i_1])))) : (max((arr_9 [i_0] [i_0]), (arr_8 [i_0] [i_1] [1] [i_1]))))), -3502671315912970557));
                }
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    var_14 = (min(var_14, ((-1 ? 1 : 54855))));
                    arr_15 [i_3] [i_1] [i_1] [i_0] = (~(((1 ? var_2 : (arr_1 [i_1] [i_3])))));
                    var_15 = (max(var_15, (((!(~5862339630755748902))))));
                    var_16 = (var_4 ? (arr_1 [i_0] [i_1]) : (arr_11 [i_0] [i_0] [i_0]));
                }
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    var_17 = ((((max((((arr_18 [i_1] [i_4]) % (arr_5 [i_0]))), (((90 ? var_7 : var_8)))))) ? ((((arr_18 [i_0] [i_4]) ? ((((arr_1 [i_0] [i_1]) != (arr_2 [i_1])))) : (((arr_0 [12]) ? var_7 : (arr_0 [i_0])))))) : (min((arr_18 [i_1] [0]), (max((arr_9 [i_0] [i_0]), 2109413781))))));
                    arr_19 [i_0] [i_0] [i_4] [i_4] = (((((~(arr_7 [i_4] [i_1] [i_0]))) == (((arr_9 [i_0] [i_1]) ? (arr_4 [i_0] [i_1] [i_4]) : 10662)))) ? (((arr_7 [i_0] [i_1] [i_1]) - (arr_14 [i_0] [i_1] [i_4] [i_0]))) : (arr_3 [4]));
                }
                var_18 = (min(var_18, ((10682 ? ((-(arr_7 [i_0] [i_0] [i_0]))) : ((((arr_4 [i_0] [i_1] [3]) >= (arr_18 [i_0] [i_0]))))))));
            }
        }
    }
    #pragma endscop
}
