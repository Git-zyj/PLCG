/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= var_7;
    var_15 = (max(-1249252064, -124));
    var_16 = var_13;
    var_17 = (min(var_17, (~var_13)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_1] [10] [i_0] = (((((arr_5 [i_1]) ? (arr_2 [2]) : (arr_1 [i_1]))) != ((var_5 ? var_13 : (((1 < (arr_1 [i_0]))))))));
                arr_7 [i_0] [i_1] = (((((arr_1 [i_1]) * ((max(101, var_6)))))) ? ((max((arr_0 [i_0]), ((-(arr_2 [14])))))) : (((~(arr_5 [i_1])))));
                var_18 = (((arr_2 [i_0]) ? ((((((arr_2 [i_0]) ? 0 : (arr_2 [i_0])))) ? (arr_0 [i_1]) : (arr_4 [i_0] [i_1] [i_1]))) : ((min(235, ((1 ? -2116782994 : 101)))))));
            }
        }
    }
    #pragma endscop
}
