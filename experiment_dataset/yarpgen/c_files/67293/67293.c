/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-943354457 ? 7 : 28679));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_20 = (min(943354457, 943354457));
                var_21 -= ((-(((((((arr_2 [13]) ? (arr_4 [i_0] [i_0]) : 943354457))) && (arr_0 [i_0] [i_1]))))));
                var_22 = (((arr_3 [i_0] [i_1] [i_1]) ? (((arr_0 [i_0] [15]) - (arr_0 [i_0] [i_1]))) : ((((arr_0 [i_0] [i_1]) < (arr_3 [i_0] [i_1] [i_0]))))));
                var_23 = (max(var_23, (arr_1 [i_1])));
                arr_5 [i_0] [i_1] = (arr_3 [i_0] [i_1] [i_1]);
            }
        }
    }
    var_24 += var_16;
    var_25 ^= 943354457;

    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = var_7;
        arr_10 [i_2] [i_2] = ((!(arr_2 [i_2])));
        arr_11 [i_2] [8] = (arr_7 [i_2]);
        var_26 = (max(var_26, (((var_4 < ((-((16 ? 13457384355940987802 : var_16)))))))));
        arr_12 [i_2] = ((((!(((~(arr_2 [i_2]))))))));
    }
    #pragma endscop
}
