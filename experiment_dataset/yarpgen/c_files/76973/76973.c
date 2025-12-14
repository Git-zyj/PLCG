/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_21 += (((((((17992600213843873654 - (-32767 - 1))) * (arr_3 [i_1])))) ? ((~(arr_1 [i_1]))) : (((((-(arr_1 [i_1])))) ? (((arr_3 [i_0]) >> (-108 + 134))) : (((arr_0 [i_1]) ? (arr_1 [i_0]) : (arr_4 [i_0])))))));
                arr_5 [i_0] = (((-22366 + 2147483647) >> 1));
                var_22 = (min(var_22, ((((((arr_3 [10]) ? (((arr_0 [i_1]) ? (arr_1 [i_0]) : (arr_1 [i_1]))) : (((arr_1 [6]) - 7633)))) - (arr_4 [i_1]))))));
                arr_6 [i_0] [i_0] = (((arr_2 [3] [i_0]) ? (max((arr_2 [i_0] [i_1]), (min((arr_0 [i_0]), (arr_1 [i_0]))))) : (min(((min((arr_2 [i_0] [i_1]), (arr_2 [i_0] [i_1])))), (arr_4 [6])))));
            }
        }
    }
    var_23 = 10191003111081684686;
    #pragma endscop
}
