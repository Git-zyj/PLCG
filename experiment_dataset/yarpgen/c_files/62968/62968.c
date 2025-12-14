/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((min(var_12, 2046573395)), (((32767 != var_13) ? var_10 : var_10))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        var_16 = (((((((arr_0 [i_3 - 1] [i_3 - 1]) && (arr_0 [i_3 - 1] [i_3 - 1]))))) & (((arr_0 [i_3 - 1] [i_3 - 1]) ? (arr_0 [i_3 - 1] [i_3 - 1]) : 2046573395))));
                        var_17 = (min(((((((arr_0 [3] [3]) ? var_1 : (arr_10 [i_0] [7]))) >= ((((arr_0 [3] [i_1]) >> (var_12 + 6228515836515551688))))))), 13780377340180034400));
                        var_18 = (((35500 > 4666366733529517215) || ((min(13780377340180034400, (arr_7 [i_3 - 1] [i_3] [i_3 - 1] [1]))))));
                        var_19 = (((arr_4 [i_0] [i_3 - 1]) ? (arr_7 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1]) : 5377203974867787003));
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        arr_14 [i_0] [i_1] [i_0] [i_4] = (arr_13 [i_0]);
                        var_20 = (arr_13 [i_0]);
                        var_21 = (min((((!(var_9 > 5296199034562114258)))), 17592186044415));
                    }
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        var_22 = ((-(((arr_10 [i_1] [0]) & (arr_9 [i_0] [i_1] [i_2])))));
                        var_23 = ((((18446726481523507201 ? 18446726481523507201 : 6583)) < (((min((arr_1 [i_1] [i_0]), (arr_13 [i_0]))) * ((((arr_13 [i_0]) / (arr_16 [i_0] [i_0] [i_1] [6] [i_2] [5]))))))));
                    }
                    var_24 = (arr_0 [i_0] [i_1]);
                    var_25 = (((((((arr_5 [i_0] [i_0]) * 35488))) ? (min(var_7, 224)) : ((((!(arr_2 [i_0]))))))));
                }
            }
        }
    }
    #pragma endscop
}
