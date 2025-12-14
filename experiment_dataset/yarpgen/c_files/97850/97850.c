/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -50;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_16 = (((((((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? 50 : (113 - 14790)))) ? (((((min(-104, (arr_1 [i_0] [i_0])))) ? -55 : -2948))) : ((2815222012 ? (arr_0 [i_0]) : 4227858432))));
        var_17 = ((((min(-16, (arr_1 [i_0] [i_0])))) ? ((-((16 >> (177 - 133))))) : ((((((max(-34, -39))) > (1479745295 != var_3)))))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1] [i_1] [i_0] [i_0] = (-(((min(-113, (arr_4 [2] [i_2] [i_3]))))));
                        var_18 = (~((((-97 ? var_4 : (arr_9 [i_0]))) | (((50 ? (arr_7 [i_1] [i_1]) : (arr_7 [i_0] [i_1])))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
