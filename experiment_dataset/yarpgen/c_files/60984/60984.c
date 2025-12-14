/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (((((72057594037927935 ? 18374686479671623686 : 0))) ? (((arr_0 [i_0 + 1]) ? 135 : -1896367103942099104)) : ((((!(arr_4 [i_1 - 1] [i_1 - 1])))))));
                arr_6 [i_0] = (~(((arr_1 [10]) - (((1 ? 1 : 120))))));
                var_16 = (min(var_16, ((var_13 ? ((((arr_1 [i_1 - 2]) ? (~45) : (((!(arr_0 [i_1 - 1]))))))) : (min(((139 ? 230 : 12447652867531254468)), 1))))));
            }
        }
    }
    var_17 = (min(var_17, var_1));
    var_18 = 1;
    var_19 = ((-(((((var_10 ? 41 : 1))) ^ ((4503599627370495 ? 1 : 18446744073709551609))))));
    #pragma endscop
}
