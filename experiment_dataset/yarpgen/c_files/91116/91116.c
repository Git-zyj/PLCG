/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_10;
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_11 = (((((((((arr_3 [i_0]) + (arr_8 [i_0] [i_1] [i_1] [i_0])))) ? (arr_4 [i_0] [i_1 + 1] [i_2 + 2]) : var_7))) && (arr_1 [i_1 + 4])));
                    var_12 = (min(var_12, (((((~((var_8 ? (arr_3 [i_0]) : var_8))))) ? (min((~var_5), (arr_0 [i_0] [i_1]))) : ((((((arr_7 [i_0]) && 65530)))))))));
                }
            }
        }
        arr_10 [i_0] = (((max((max((arr_1 [i_0]), var_4)), (arr_5 [i_0] [i_0] [i_0])))) ? ((((((var_1 ? var_1 : (arr_5 [i_0] [i_0] [i_0])))) || var_3))) : var_2);
    }
    for (int i_3 = 3; i_3 < 8;i_3 += 1)
    {

        for (int i_4 = 1; i_4 < 7;i_4 += 1)
        {
            arr_15 [i_3 - 3] [i_3] = ((!(((-(arr_12 [i_3]))))));
            var_13 = var_6;
            var_14 = (((arr_0 [i_3] [i_4]) ? (arr_7 [i_3]) : ((max(((((arr_6 [i_3]) >= var_9))), var_5)))));
        }
        arr_16 [i_3] = 214;
        var_15 = (((arr_0 [i_3 + 2] [i_3]) ? (((!(arr_14 [i_3 + 2] [i_3] [i_3 + 2])))) : (arr_0 [i_3 + 2] [i_3 - 1])));
    }
    var_16 -= var_9;
    #pragma endscop
}
