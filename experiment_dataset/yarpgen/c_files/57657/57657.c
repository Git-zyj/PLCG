/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((var_5 == var_3) ? (min(var_10, var_8)) : (max(var_10, var_4)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_12 = (min(((min((arr_4 [i_0] [i_2]), (arr_0 [i_0] [i_0])))), (((arr_1 [i_0]) ? ((~(arr_0 [13] [i_1]))) : ((max((arr_2 [i_1]), (arr_4 [i_0] [i_0]))))))));
                    var_13 = (max(var_0, (arr_2 [i_0])));
                    var_14 = (min(((((((arr_1 [i_0]) ? (arr_6 [i_0] [18]) : (arr_3 [i_0])))) ? ((((!(arr_5 [i_2] [i_0]))))) : 14680064)), (!-14680046)));
                    arr_7 [i_2] [i_1] = ((((min(var_0, (arr_5 [i_1] [i_2])))) ? (arr_5 [i_1] [i_2]) : ((((arr_5 [i_2] [i_1]) ? (arr_5 [i_0] [i_1]) : (arr_5 [i_0] [i_2]))))));
                }
            }
        }
    }
    var_15 = ((max((max(var_0, var_8)), var_8)));
    #pragma endscop
}
