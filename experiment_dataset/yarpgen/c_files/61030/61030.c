/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;
    var_13 = ((var_5 ? var_1 : ((var_8 ^ ((var_5 ? var_8 : var_3))))));
    var_14 = ((((((((1 ? 8 : 201))) ? var_2 : 30780))) ? ((((-30782 ? 2670090017 : var_3)))) : var_7));
    var_15 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] &= (((arr_5 [6] [i_0]) ? var_8 : (((arr_0 [18] [18]) % (arr_0 [i_0] [i_1])))));
                arr_7 [8] [i_1] = 18;
                var_16 = (min(var_16, ((max(((((var_5 ? (arr_1 [i_0]) : (arr_3 [i_0] [i_0]))) * ((((!(arr_4 [i_0] [i_0]))))))), (((-18 ? (arr_1 [i_0]) : var_9))))))));
            }
        }
    }
    #pragma endscop
}
