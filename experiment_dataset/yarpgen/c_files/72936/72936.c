/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (-46 < -var_12)));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = ((((arr_0 [i_0]) ? var_16 : (arr_1 [i_0]))));
        var_20 = (min(var_20, (arr_0 [7])));
        arr_3 [i_0] = ((((((arr_1 [i_0]) ? ((0 ? (arr_0 [i_0]) : var_10)) : (arr_1 [i_0])))) ? -var_7 : (arr_0 [i_0])));
        arr_4 [i_0] = (((((-32762 ? ((max(var_17, 65118))) : (((!(arr_0 [i_0]))))))) ? -72 : var_7));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            arr_9 [i_0] [i_0] [i_0] = 0;
            var_21 = (max(var_21, (1638012417 ^ 504670876)));
            arr_10 [i_1 - 1] [i_0] = (arr_0 [11]);
            var_22 = ((-2147483637 ? (arr_1 [i_0]) : ((1 ? (arr_5 [i_1]) : (arr_1 [i_0])))));
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            var_23 = (min(var_23, var_12));
            var_24 = (max(var_24, ((min(var_11, (((arr_13 [1]) ? -32873 : 1404603794)))))));
            arr_14 [i_0] [i_0] [10] = var_7;
            var_25 += ((((((arr_8 [i_0] [4] [i_0]) << (((((arr_5 [i_0]) ? var_8 : -8683809289029004624)) - 1219912619))))) ? -255 : var_4));
        }
    }
    var_26 = var_6;
    #pragma endscop
}
