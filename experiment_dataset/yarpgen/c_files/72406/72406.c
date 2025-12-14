/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (1 <= -105);
    var_11 = ((var_4 & (((((var_7 ? 149 : 125))) ? var_5 : ((-28 ? 1 : var_3))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_12 = 255;
                    var_13 = (max((((((20 ? (arr_3 [i_0] [i_0 - 1] [i_0]) : var_9))) ? (arr_8 [i_0] [i_0 - 1]) : -var_2)), ((max(((255 ? 1 : var_9)), var_2)))));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        arr_14 [i_0 + 1] [i_0] [i_0] [15] = ((((max((7 / var_4), ((-(arr_4 [i_0 + 1] [i_0 + 1] [i_3])))))) ? (var_0 == var_4) : (arr_11 [i_0 + 2] [i_0 - 1])));
                        var_14 = (arr_6 [14] [i_1] [i_1]);
                        arr_15 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] = (min((arr_9 [i_0]), (((12072535053591788336 ? 105 : 196608)))));
                    }
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        var_15 = (arr_18 [i_0 + 2] [i_0]);
                        var_16 = ((((max(((max(0, 1))), -1976533988))) ? 255 : -121));
                        arr_20 [i_0] [i_0] [i_0] = (((((~(arr_11 [i_1] [i_1]))) >= var_3)) ? (((arr_6 [i_0] [7] [i_0 - 1]) ? var_4 : (arr_8 [i_0] [i_0 + 2]))) : (((((((-1658187539 ? (arr_4 [i_0 + 1] [i_0] [i_0 + 1]) : 121))) == (arr_19 [i_0 + 1] [i_0]))))));
                        arr_21 [i_0] = (((max((arr_17 [i_0] [i_0]), var_4)) >> (min((!var_2), ((6374209020117763280 ? (arr_8 [i_0] [i_2]) : -1976533988))))));
                    }
                    arr_22 [i_0] [i_0] [i_2] = (arr_6 [i_0] [i_0 - 2] [i_0 - 2]);
                }
            }
        }
    }
    var_17 = var_0;
    #pragma endscop
}
