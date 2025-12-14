/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_14 = (min((((arr_1 [11] [i_0]) - 11400542806391072900)), ((((arr_1 [i_0] [3]) >> (((~52805) + 52821)))))));
        arr_2 [i_0] = (!(!-7046201267318478715));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            {
                var_15 = ((+(((arr_7 [i_1] [i_1] [i_2]) >> (((min((arr_5 [i_1] [i_2]), 536870904)) - 38695))))));
                var_16 = ((((max((arr_4 [i_1] [i_2]), (arr_6 [i_1] [i_1] [i_2]))))) % (((arr_3 [i_1] [1]) % (arr_5 [i_1] [i_1]))));
                arr_8 [i_2] [i_2] = (min((min((((~(arr_4 [i_1] [i_2])))), 7046201267318478716)), -582302725));
                arr_9 [i_2] = ((((((min(0, 16434))) ? 127 : (((!(arr_5 [i_1] [4])))))) | (min(var_5, 1))));
            }
        }
    }
    var_17 = var_4;
    #pragma endscop
}
