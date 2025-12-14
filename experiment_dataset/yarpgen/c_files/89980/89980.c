/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_4 [i_1] [i_1] [i_1] = ((((((max(var_6, var_4))) == var_7)) ? var_9 : (((((16128 ? 49417 : 16128)) != -1869185953)))));
            var_10 -= ((((min(var_3, var_2))) ? (arr_2 [i_1]) : (min(-var_4, (((var_3 > (arr_3 [i_0]))))))));
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_7 [i_2] [i_2] = ((((max((arr_3 [i_0]), var_5))) ? ((1286195379 ? 2431957031 : 18782)) : ((((!(arr_5 [i_2] [i_2] [i_0])))))));
            var_11 = (((((((var_9 ? var_0 : (arr_6 [i_2] [4] [i_0]))) & var_6))) | (max((var_4 | var_2), (((var_1 ? var_3 : (arr_3 [i_2]))))))));
        }
        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            arr_11 [i_3] = ((((!((min(var_1, var_3)))))) % var_6);
            var_12 = ((2431957031 ? var_1 : -93));
        }
        for (int i_4 = 3; i_4 < 18;i_4 += 1)
        {

            /* vectorizable */
            for (int i_5 = 2; i_5 < 19;i_5 += 1)
            {
                var_13 &= (((~(arr_8 [i_5]))));
                var_14 = ((var_3 ? (arr_14 [i_4 - 1] [i_4 + 2] [i_5 + 1]) : var_9));
                arr_16 [i_0] [2] [i_5] [i_5] = (!var_1);
                var_15 = (max(var_15, ((var_2 ? 1863010265 : 4084906429212341371))));
                var_16 = ((((-(arr_9 [i_4] [i_5])))) ? (arr_5 [i_5 + 1] [i_4 + 1] [i_4 + 1]) : var_7);
            }
            var_17 = (((min((arr_14 [i_4 + 2] [i_4 - 2] [i_0]), (arr_14 [i_4 - 2] [i_4 - 3] [i_4])))) ? (((var_9 == (arr_14 [4] [i_4 + 2] [i_4])))) : (max(var_3, var_7)));
            arr_17 [14] [14] [14] = (min((((arr_14 [i_0] [i_4 - 3] [i_0]) ? (arr_14 [i_0] [i_4 - 3] [i_4 + 1]) : (arr_9 [i_0] [14]))), ((((max(-4084906429212341384, 4084906429212341368))) ? ((59976 ? -32302 : var_4)) : (var_4 / var_7)))));
        }
        var_18 -= (~(((((var_2 & (arr_2 [i_0])))) ? (arr_5 [i_0] [i_0] [i_0]) : var_0)));
        arr_18 [i_0] [i_0] = ((4084906429212341371 ? 4386 : var_4));
        var_19 = (max(var_19, ((min(((((arr_6 [i_0] [i_0] [i_0]) ? (arr_6 [i_0] [i_0] [i_0]) : var_6))), (max(var_2, var_1)))))));
        arr_19 [i_0] = ((-(max((max(var_5, var_8)), (((var_0 ? var_8 : var_6)))))));
    }
    var_20 = ((var_6 - (((!var_0) ? var_6 : (((var_7 + 2147483647) << var_4))))));
    var_21 = max((max((((var_2 ? var_1 : var_8))), var_5)), var_2);
    var_22 &= (min((((var_9 * var_7) ? var_7 : var_7)), ((var_9 ^ (var_1 >= var_4)))));
    #pragma endscop
}
