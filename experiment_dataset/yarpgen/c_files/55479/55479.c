/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= (min(((var_1 / (802154656 << 1))), (min((((-4572573700324277736 ? -14193 : 124))), (max(4294967270, 3492812639))))));
    var_12 = min(2074906181, (((4294967295 ? 49298 : 0))));
    var_13 = ((var_3 >> (((((161 && var_10) ? 562949936644096 : -2596210905)) - 562949936644041))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_0] = (var_7 ^ (((arr_2 [i_1 - 2] [i_1]) ? -14193 : (arr_4 [i_1 + 1] [1] [1]))));
                var_14 = ((14192 ? (max(((var_8 ? (arr_2 [i_0] [i_0]) : 57884)), (112 || var_3))) : (((var_6 ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 + 2]))))));
            }
        }
    }
    var_15 = (((max(-var_8, ((max(var_9, var_9))))) <= (((((-562949936644110 + 9223372036854775807) << (6 - 6)))))));
    #pragma endscop
}
