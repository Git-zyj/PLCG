/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((28924 * ((var_9 ? var_0 : (var_2 - var_5)))));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = ((((127 / (arr_0 [i_0 + 2])))) ? (((!((!(arr_1 [i_0] [i_0 - 1])))))) : ((((arr_0 [i_0 + 2]) < (arr_0 [i_0 + 2])))));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                var_12 = ((!((min(((min(125, 101))), (arr_3 [i_0] [i_1] [i_2]))))));
                arr_8 [i_0] [i_0] [i_1] [i_2] = (arr_7 [i_0] [i_1] [i_2]);
            }
            arr_9 [i_0 + 2] = (((arr_5 [i_0 - 1] [i_1] [i_1]) ? (max((arr_3 [i_0 - 1] [i_1] [i_0 + 2]), (arr_3 [i_1] [i_1] [i_0 - 1]))) : (((min((max((arr_5 [i_0] [i_0] [i_0]), (arr_6 [i_0] [i_0] [i_1]))), var_4))))));
            arr_10 [i_1] = var_5;
            var_13 = ((125 % (arr_6 [i_0] [i_0] [i_1])));

            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                var_14 = var_4;
                arr_15 [i_0] [i_3] = ((131 ? -65 : -3));
            }
        }
        arr_16 [i_0] = ((62231 ? (arr_7 [i_0] [i_0] [i_0]) : var_1));
        var_15 += (arr_12 [i_0 - 1] [i_0] [i_0] [i_0]);
    }
    #pragma endscop
}
