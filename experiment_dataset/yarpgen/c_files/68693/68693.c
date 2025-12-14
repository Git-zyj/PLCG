/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= 53128;
    var_16 = (max(var_16, var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] |= (arr_2 [i_0] [i_1] [i_1]);
                var_17 &= 53128;
                arr_5 [i_1] = ((((max((var_10 % var_9), (~1734902754592980157)))) ? 12390 : ((189 + ((~(arr_2 [13] [i_1] [i_1])))))));
                arr_6 [i_0] [i_0] [14] = (((((arr_3 [i_0] [i_0] [i_1]) ? (((arr_1 [i_1] [7]) ? var_11 : -6597462330900946333)) : (-114 / var_0))) + 12941));
            }
        }
    }
    #pragma endscop
}
