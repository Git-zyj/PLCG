/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_8;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_16 |= ((((arr_2 [i_0] [i_0]) - (arr_2 [i_0] [i_0]))) | ((0 ? (min(var_0, (arr_2 [7] [i_0]))) : ((-18 ? var_7 : 22991533237635217)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] = (min((min((min(var_6, var_0)), 8830778699368419237)), 8830778699368419237));
                    arr_10 [i_0] = ((((var_0 ? (max((arr_8 [i_1]), 0)) : (max((arr_3 [12] [12]), (arr_4 [2])))))) ? (min((arr_3 [i_0] [i_0]), 482747110)) : ((((((min(4294967295, (arr_6 [i_0] [3] [i_2])))) == (arr_3 [i_1] [i_1]))))));
                    var_17 = (+((-var_14 ? (arr_0 [i_1]) : (arr_2 [i_0] [i_1]))));
                }
            }
        }
        arr_11 [i_0] = ((((max(((1943917939952623180 ? (arr_3 [i_0] [i_0]) : (arr_0 [i_0]))), ((((arr_7 [i_0] [i_0] [i_0]) - 900624126)))))) ? 8850422924673489141 : ((-1 ? -8830778699368419244 : 137129189))));
    }
    #pragma endscop
}
