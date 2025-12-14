/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max(((max((arr_0 [i_0] [i_0]), 1))), (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))));
        arr_3 [4] = ((((((!568519561) + ((max(51, (arr_1 [12] [12]))))))) ? (min((((arr_1 [10] [i_0]) - 56)), ((min(176, (arr_1 [i_0] [i_0])))))) : (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : 1))));
        var_15 = 72;
        var_16 = (max(var_16, (min((arr_0 [i_0] [6]), ((+((min((arr_0 [i_0] [8]), 1)))))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 4; i_1 < 22;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            {
                var_17 = ((((((((175 ? (arr_5 [i_2]) : (arr_7 [i_1])))) ? ((max(183, 72))) : ((~(arr_7 [17])))))) ? ((((max((arr_6 [i_1] [20]), (arr_4 [i_1 - 1]))) == (((78 ? 60 : (arr_6 [17] [17]))))))) : ((1 + (arr_7 [i_1 + 2])))));
                var_18 -= -84;
            }
        }
    }
    #pragma endscop
}
