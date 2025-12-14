/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((((var_7 ? var_10 : var_1))) ? var_6 : var_9))) < var_4));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_13 = var_10;
                arr_4 [i_1] [7] [i_1] = ((((min((((arr_3 [i_0 + 2] [i_1]) ? 5863262413119734695 : (arr_3 [i_0] [i_0]))), ((min(var_7, 1)))))) ? ((((!(arr_2 [i_0 + 4]))))) : 17080035049063347359));
                var_14 = -1;

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_15 = 4294967295;
                    arr_8 [i_0] = ((((((-var_4 + 9223372036854775807) << (((var_2 + 6444) - 48))))) + 31));
                    var_16 += (((!-20) ? var_6 : (((var_3 ? (((arr_5 [i_0]) ? (arr_7 [i_0]) : 2958)) : (arr_0 [i_0 + 4]))))));
                }
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    var_17 = (((((138 ? 65529 : (arr_5 [i_0 + 3])))) ? (arr_2 [i_0]) : ((((arr_9 [i_0 + 4]) ? -333 : 1)))));
                    var_18 = (arr_9 [i_0]);
                    var_19 = (((arr_6 [i_0 + 1]) ? -224 : (!3913820604067936484)));

                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        var_20 = arr_7 [i_0 - 1];
                        var_21 = (max(var_21, -2975));
                    }
                    for (int i_5 = 2; i_5 < 15;i_5 += 1)
                    {
                        var_22 = (((4 ? ((65532 ? (arr_0 [i_0 + 2]) : 1)) : (((-5503994949492452898 && (arr_13 [i_3] [i_3] [i_3] [i_3])))))));
                        arr_17 [i_3] = ((((((max((arr_5 [i_5]), var_4))) ? 16 : ((2958 ? 36269 : 0))))) ? -2958 : (((arr_11 [i_0] [i_3] [i_0 + 1] [i_5 + 1]) ? -3913820604067936484 : (arr_11 [i_0] [i_3] [11] [i_5]))));
                        var_23 = (arr_2 [i_1]);
                    }
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        var_24 = (max((arr_18 [i_3]), (min((arr_1 [i_6]), 14))));
                        var_25 = (min(var_25, ((1056025728 ? ((((arr_7 [i_0 + 1]) ? 22 : (arr_7 [i_0 + 4])))) : (~-3913820604067936485)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
