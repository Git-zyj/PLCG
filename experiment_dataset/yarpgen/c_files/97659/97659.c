/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_6 | 119);
    var_14 = var_10;
    var_15 = (max(var_15, var_2));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = ((((min((max(var_0, var_8)), (arr_3 [i_0] [i_1])))) ? (((arr_2 [i_1 + 1] [i_0] [i_0]) ? var_5 : (!14530))) : (arr_2 [i_0] [i_0] [i_1])));
            var_16 = var_10;
        }
        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {
            var_17 = (min(var_17, (arr_3 [i_0] [13])));
            arr_8 [2] [2] |= (arr_0 [i_2] [i_0]);
            var_18 ^= (((((var_1 + 12) + (max((arr_0 [i_2] [i_2]), (arr_7 [6])))))) ? (arr_0 [i_0 - 1] [4]) : ((((arr_7 [8]) == (arr_6 [i_0] [i_2])))));
            var_19 = (min(var_19, (~var_7)));
        }
        arr_9 [i_0] = (max(((-(arr_1 [i_0 + 1] [i_0 - 1]))), (((arr_3 [i_0 + 1] [i_0 - 1]) ? (arr_1 [i_0 - 1] [i_0 + 1]) : var_5))));
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
    {
        var_20 = (max(var_20, 65526));
        var_21 &= (min(((~(arr_10 [i_3] [i_3]))), ((var_11 ? (((var_1 >= (arr_12 [i_3] [i_3])))) : (((arr_12 [i_3] [i_3]) ? 102 : var_9))))));
        var_22 += ((((((var_4 > (arr_12 [i_3] [i_3]))))) & (((min(var_11, var_4)) / ((((arr_12 [i_3] [i_3]) ? (arr_10 [i_3] [i_3]) : var_5)))))));
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
    {
        var_23 ^= (((((var_8 && (arr_10 [i_4] [i_4])))) & (((var_2 & (arr_10 [14] [i_4]))))));
        var_24 = ((123 > (((!(arr_15 [i_4]))))));
        arr_16 [i_4] = ((((63 ? (arr_10 [i_4] [i_4]) : (-2147483647 - 1)))));
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
    {
        var_25 = (max(var_25, (arr_15 [4])));
        arr_19 [i_5] [i_5] = ((67 >= (arr_17 [i_5])));
    }
    var_26 = (((!1608261986) ? ((((6 > ((max(var_8, var_1))))))) : (max((max(var_0, var_9)), (~var_8)))));
    #pragma endscop
}
