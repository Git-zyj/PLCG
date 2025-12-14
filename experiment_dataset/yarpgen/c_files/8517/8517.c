/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (var_5 % var_8)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_21 = (~-1387622852);
                arr_6 [i_1] [i_1] = (((((-3012 ? (((arr_0 [i_1]) ? 0 : (arr_5 [i_0] [i_1]))) : (arr_1 [i_0])))) ? (min((arr_2 [i_0] [6]), (arr_4 [i_0] [i_1]))) : (arr_1 [i_1])));
                arr_7 [i_1] [i_1] = (max((+-8646911284551352320), (((-((~(arr_4 [i_0] [i_0]))))))));
                var_22 = (max(var_22, ((max(var_17, (((!(arr_0 [i_0])))))))));
                var_23 = ((!((max(((var_6 ? 45 : 51)), (arr_4 [3] [i_0]))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_24 = (((!47) > (((((arr_9 [i_2]) * var_18)) / 1))));
        var_25 = ((!((!(arr_9 [i_2])))));
    }
    for (int i_3 = 1; i_3 < 19;i_3 += 1)
    {
        var_26 = (-((var_13 ? (arr_12 [i_3]) : var_5)));
        arr_14 [i_3] = (max(((1 ? 16920789676593497232 : 47)), 9799832789158199290));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    {
                        arr_23 [i_6] [i_3] [i_3] [i_3 + 1] = 16897;
                        var_27 = (max(-48, (max(8064, -8047))));
                        var_28 = var_9;
                        var_29 = ((-(max((max(5279918798937538476, 3458764513820540928)), ((min(var_17, var_19)))))));
                    }
                }
            }
        }
        var_30 = (min(var_30, ((max((((8646911284551352320 & 1) % (3796103074674289649 % 14281))), var_10)))));
    }
    #pragma endscop
}
