/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_14 = (min(var_14, ((((arr_0 [i_0 + 1]) / (arr_0 [i_0 + 1]))))));
        var_15 = (arr_1 [i_0] [i_0 - 1]);
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        var_16 = (((((((max((arr_1 [i_1] [i_1 - 2]), (arr_3 [13])))) ? ((min((arr_1 [i_1 + 2] [i_1 + 2]), (arr_3 [16])))) : (((arr_2 [i_1] [i_1 - 1]) ? (arr_0 [i_1]) : (arr_2 [i_1 - 1] [i_1 - 1])))))) ? (min(((max((arr_2 [i_1] [i_1 + 1]), (arr_3 [i_1 + 2])))), (((arr_3 [i_1]) ? (arr_3 [8]) : (arr_1 [i_1] [i_1]))))) : ((max((arr_0 [i_1 + 1]), (arr_3 [i_1 + 1]))))));
        arr_4 [i_1 - 2] = ((((max((arr_0 [i_1]), (max((arr_2 [i_1] [i_1 + 1]), (arr_3 [i_1])))))) > (max((((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_2 [i_1] [i_1]))), (arr_0 [i_1])))));
    }
    var_17 |= (max(((-4941210449735822949 ? ((3908806874285366739 ? 1635208810 : 1635208796)) : (!-120))), 2659758493));

    /* vectorizable */
    for (int i_2 = 3; i_2 < 13;i_2 += 1)
    {
        arr_7 [i_2] = ((!13390) ? (arr_2 [i_2 - 3] [i_2 - 1]) : (((arr_1 [1] [i_2]) ? (arr_6 [i_2 - 2]) : (arr_0 [i_2]))));

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_18 = (((arr_6 [9]) ? (((arr_8 [i_3]) + (arr_3 [i_2 + 1]))) : (((arr_2 [i_2] [i_3]) ? (arr_8 [i_2 - 2]) : (arr_1 [i_2 - 3] [i_3])))));
            var_19 = (arr_1 [i_2] [i_2]);
            var_20 += (arr_5 [i_3] [i_2 - 2]);
        }
        var_21 = ((((((arr_8 [i_2 + 1]) % (arr_6 [i_2])))) ? (((arr_8 [i_2]) | (arr_5 [i_2] [i_2]))) : (arr_8 [i_2])));
    }
    var_22 = var_1;
    var_23 = (max((((max(var_11, var_2)) | (!var_7))), ((((min(var_9, var_13))) ? ((var_0 ? var_13 : var_2)) : ((min(var_4, var_9)))))));
    #pragma endscop
}
