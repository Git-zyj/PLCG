/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((!(((((max(var_0, var_1))) ? var_3 : (var_0 + var_9))))));
    var_19 = var_4;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_20 = (min((((((~(arr_4 [i_0] [i_1] [i_2])))) ? (arr_2 [i_0] [i_0]) : ((~(arr_0 [i_0] [i_1]))))), (((arr_8 [i_1]) ? ((~(arr_5 [i_0] [i_0] [18]))) : ((min((arr_8 [i_0]), (arr_5 [23] [23] [23]))))))));
                    var_21 = ((((((arr_10 [i_2] [i_0]) != (arr_7 [i_0] [i_1])))) * (((!(arr_4 [i_0] [i_1] [21]))))));
                    var_22 = (arr_5 [i_0] [i_0] [i_0]);
                    arr_11 [i_0] [i_0] [i_1] [i_2] = ((((min((arr_6 [i_0]), ((7 >> (18180 - 18177)))))) ? (arr_8 [i_1]) : ((max((arr_4 [i_2] [i_1] [i_2]), (arr_2 [i_0] [i_1]))))));
                    arr_12 [i_0] [i_1] [i_0] = ((((min((arr_7 [i_0] [i_2]), (((arr_1 [i_0]) ^ (arr_7 [i_0] [i_1])))))) ? (max(((((arr_4 [i_2] [i_1] [21]) < (arr_4 [i_2] [1] [1])))), (arr_7 [i_1] [i_0]))) : (((((arr_10 [i_1] [i_2]) > (arr_10 [i_0] [i_1])))))));
                }
            }
        }
        var_23 = (3101431751 && 536862720);
        var_24 = (max(var_24, ((((72 < 18446744073709551602) >> (((((((~(arr_3 [i_0])))) ? (((arr_0 [i_0] [i_0]) - (arr_1 [i_0]))) : (((min((arr_8 [19]), (arr_3 [i_0]))))))) - 6368799979592427864)))))));
    }
    var_25 = (min(var_15, ((min(var_9, var_3)))));
    #pragma endscop
}
