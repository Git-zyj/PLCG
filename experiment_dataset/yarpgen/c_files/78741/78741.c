/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_16 = (max(var_16, (max(4, 1))));
        arr_3 [i_0] [i_0 + 1] = (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] = var_12;
        var_17 &= (0 ? (((arr_4 [i_1]) ? (arr_4 [i_1]) : (arr_5 [i_1]))) : ((((((arr_4 [i_1]) ? 1203098426 : var_1))))));
        var_18 = (((((28 ? -1203098414 : 1))) ? (((-var_15 ? ((max(-1203098415, 1))) : (arr_4 [i_1])))) : ((964322189787873370 ? (((arr_5 [i_1]) ? 2368374866789430901 : 28)) : ((max(9223372036854775807, 156)))))));
        arr_7 [i_1] [i_1] = ((var_10 ? (((((~var_1) + 2147483647)) << ((((((136 ? -1203098427 : 227)) + 1203098456)) - 29)))) : (((7138722337492687313 % 10) ? (arr_5 [11]) : ((-(arr_5 [i_1])))))));
    }
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            {
                var_19 = ((!((min((max(233, -7138722337492687301)), var_11)))));
                arr_14 [i_3] [1] [i_3] = -3387181742264890704;
                var_20 = (max(var_20, (((-34 ? (((-1203098395 ? -1203098427 : 252))) : 0)))));
            }
        }
    }
    var_21 = (min(var_21, (((+(max((var_9 * var_5), -4157750462892773217)))))));
    var_22 += 3504271310;
    #pragma endscop
}
