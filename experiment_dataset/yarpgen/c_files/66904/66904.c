/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            var_15 = (((((((arr_7 [i_0]) ? -14909 : 2147483640)) + 2147483647)) << (((-218633071 + 218633091) - 20))));
            var_16 = (max(var_16, (arr_1 [20])));
            var_17 = (((arr_5 [i_1] [i_1] [i_1]) + (arr_1 [i_0])));
        }
        arr_8 [i_0] [i_0] = var_3;
    }
    var_18 -= (4503599627370494 < 109);
    #pragma endscop
}
