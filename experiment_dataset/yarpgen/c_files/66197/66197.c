/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, var_11));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_18 -= (((arr_2 [i_0 + 2]) ? (arr_0 [i_0]) : 1));
        arr_4 [i_0] [i_0] = max((((arr_2 [i_0 + 1]) == (max((arr_0 [i_0 - 1]), 1)))), ((((var_15 ? var_12 : -10559)) >= (arr_2 [i_0 + 1]))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_19 = ((((((arr_2 [i_2]) / (arr_2 [i_1])))) || (arr_2 [i_1])));
            var_20 = (min(549754765312, ((((((arr_3 [1] [i_2]) / 81)) <= (arr_2 [7]))))));
            arr_9 [i_1] [i_2] = ((~(((arr_5 [i_1]) ? (((1559672849 ? (arr_5 [i_1]) : (arr_0 [i_1])))) : (((arr_1 [i_1]) ? -10559 : 8717970050502409031))))));
            var_21 ^= ((((((arr_7 [i_1] [1]) & (arr_7 [i_1] [4])))) ? (min(232, (arr_7 [i_1] [1]))) : 244));
        }
        var_22 = (min(var_22, 57066));
        var_23 = ((-((min((arr_8 [i_1] [i_1]), (arr_8 [i_1] [i_1]))))));
    }
    #pragma endscop
}
