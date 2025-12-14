/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;
    var_12 *= var_4;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_13 = (max(var_13, (((arr_0 [i_0]) | (arr_0 [i_0 + 1])))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_14 = (((arr_0 [i_0 + 1]) > ((((arr_0 [i_0]) > (arr_0 [i_0 - 1]))))));
            var_15 = ((~((((arr_3 [i_0] [i_1] [i_1]) >= (arr_2 [i_1]))))));
            var_16 += (arr_2 [8]);
            var_17 = (((~(arr_0 [i_0]))));
        }
        for (int i_2 = 2; i_2 < 9;i_2 += 1) /* same iter space */
        {
            arr_6 [i_0] [4] |= (arr_4 [i_2]);
            var_18 |= (arr_0 [1]);
            var_19 = ((~(arr_1 [4] [i_2])));
            var_20 = (arr_0 [0]);
            arr_7 [i_2] [i_2] [i_2] = (arr_5 [i_2]);
        }
        for (int i_3 = 2; i_3 < 9;i_3 += 1) /* same iter space */
        {
            var_21 = (arr_4 [i_3 + 2]);
            arr_10 [4] [4] = arr_4 [i_0];
            var_22 = (max(var_22, (arr_4 [i_0])));
        }
        for (int i_4 = 2; i_4 < 9;i_4 += 1) /* same iter space */
        {
            arr_15 [i_4] [i_4] = (((~(arr_3 [i_0] [i_4] [i_4]))));
            arr_16 [i_4] = ((~(arr_14 [i_4])));
        }
    }
    #pragma endscop
}
