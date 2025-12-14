/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [12] [i_0 + 2] [11] = ((~((((((arr_4 [2]) ? 142 : var_1))) ? ((max((arr_1 [i_0 + 2]), (-127 - 1)))) : (((-32767 - 1) % (arr_4 [i_0 + 2])))))));
                arr_7 [1] [10] [i_0 + 3] = (((((((max(100, (arr_0 [7])))) ? (min(var_3, (arr_4 [9]))) : 8992966781789622804))) ? (!82) : ((min((arr_5 [1] [16] [i_0 + 2]), (max((arr_3 [13] [1] [i_0 + 3]), 1)))))));
                arr_8 [i_0 + 2] [i_0 + 3] [5] = ((+((+((max((arr_4 [i_0 + 3]), 18704)))))));
                var_12 -= ((var_10 ? (((((-(arr_3 [3] [5] [i_0 + 2])))) ? ((5888902729166317886 ? -28073 : (arr_2 [1]))) : (((0 ? 71 : (arr_0 [1])))))) : ((((((((arr_4 [5]) ? 0 : (-127 - 1)))) && (arr_0 [i_0 + 2])))))));
            }
        }
    }
    var_13 = 1;
    var_14 = ((var_8 - ((((((-2053295935867726727 ? 87 : var_10))) ? (max(824786280, 1)) : (!95))))));
    var_15 = var_6;
    #pragma endscop
}
