/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_0] = (min((max(((min((arr_5 [i_0] [i_0]), (arr_3 [i_0] [i_0])))), ((11 ? var_10 : var_12)))), var_14));
                    var_16 = (min(var_16, (arr_4 [i_0] [i_0] [i_0])));
                    var_17 = (max((min((((arr_2 [i_1] [i_2]) ? (arr_3 [i_0] [i_0]) : var_13)), (arr_0 [i_1]))), (max((((arr_4 [i_2] [i_1] [i_0]) ? var_3 : var_12)), (arr_2 [i_0] [i_0])))));

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_18 = (min(((((max((arr_10 [i_0] [i_0] [i_2] [i_3]), (arr_10 [i_1] [i_2] [i_1] [i_0])))) ? (max((arr_3 [i_0] [i_0]), (arr_6 [i_0]))) : (((~(arr_4 [i_1] [i_2] [i_2])))))), (arr_10 [i_0] [i_0] [i_2] [i_3])));
                        arr_12 [i_0] [i_1] [i_2] [i_0] = ((((((19215 ? 7121 : var_6)))) ? (((((var_13 ? (arr_11 [i_0] [i_0] [i_0] [i_2] [i_3]) : (arr_11 [i_0] [i_1] [i_0] [i_0] [i_3])))) ? (max((arr_3 [i_0] [i_0]), var_8)) : (((max((arr_5 [i_0] [i_0]), (arr_9 [i_0] [i_2] [i_0] [i_0]))))))) : ((((((!(arr_11 [i_3] [i_2] [i_0] [i_0] [i_0])))) % ((var_4 ? 508 : (arr_0 [i_1]))))))));
                        arr_13 [i_3] [i_0] [i_2] [i_1] [i_0] [i_0] = ((-((-((min((arr_0 [i_0]), (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                    }
                }
            }
        }
    }
    var_19 = var_14;
    #pragma endscop
}
