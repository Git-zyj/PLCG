/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_4 ? var_9 : var_12));

    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        var_17 = 2937840933;

        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            arr_6 [i_0] = (!((((arr_5 [i_0]) ? (arr_5 [i_0]) : (arr_5 [i_0])))));
            var_18 = (((arr_0 [i_1 + 1]) ? (arr_0 [i_0 + 2]) : (arr_4 [i_0 + 2])));
        }
        for (int i_2 = 4; i_2 < 9;i_2 += 1)
        {
            arr_9 [i_0] = ((!(arr_4 [i_0 - 2])));
            arr_10 [i_2 - 3] [i_0] [i_0] = ((!(((-230914441 ^ (arr_7 [i_0 + 3]))))));
            var_19 = ((((arr_1 [i_2 + 1] [i_2 - 3]) ? var_10 : var_7)));
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            var_20 = var_12;
            var_21 = 65407;
            var_22 *= (min((arr_13 [i_3] [i_3]), (((((var_14 ? (arr_1 [i_0] [i_0]) : -2488260300423680802))) ? -9190646766059844152 : (((arr_2 [i_0]) ? var_15 : (arr_14 [i_0] [i_3] [i_3])))))));
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        var_23 = var_0;
        arr_17 [i_4] = ((-312924007 ? (-8045892449624937150 ^ var_4) : (!-6)));
        arr_18 [4] = (!3778686731);
        var_24 = 0;
    }
    #pragma endscop
}
