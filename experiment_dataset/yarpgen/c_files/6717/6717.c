/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_14 = (max(((-(arr_2 [i_0 - 2] [i_0]))), var_3));
        var_15 = ((-(((arr_0 [10]) ? (((arr_2 [22] [i_0]) / var_2)) : 1996883010))));
        arr_3 [i_0] = (max(((min((((arr_1 [i_0] [i_0 + 1]) ? var_3 : (arr_2 [i_0 + 1] [i_0]))), var_7))), (((arr_2 [i_0 - 1] [i_0]) ? (((34761 ? (arr_0 [i_0]) : (arr_2 [i_0] [i_0])))) : (~var_1)))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            var_16 = (min(var_16, ((((arr_7 [i_2] [i_2 + 1]) ? (arr_0 [i_2]) : (arr_6 [i_2] [i_2 - 2] [6]))))));
            arr_9 [8] |= (((arr_8 [10] [i_2 + 2]) ? (arr_4 [i_1] [14]) : (arr_1 [i_1] [i_2 - 2])));
            var_17 = (min(var_17, ((((arr_2 [i_2 - 1] [14]) ? (arr_2 [i_2 + 1] [16]) : (arr_2 [i_2 + 2] [14]))))));
            var_18 = ((~(arr_5 [i_1])));
        }
        var_19 = (max(var_19, (((-(arr_2 [10] [20]))))));
    }
    var_20 ^= (max(0, var_4));
    var_21 = ((9223372036854775807 + (((((var_0 ? var_10 : var_11))) ? (-1 / var_3) : var_4))));
    var_22 = (max(var_22, (((var_9 * (((((0 ? var_13 : var_5))) ? var_2 : ((max(11999, 1))))))))));
    #pragma endscop
}
