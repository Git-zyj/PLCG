/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= ((((max(var_14, (var_8 != var_4)))) <= var_0));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = 150;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    var_21 = var_0;
                    arr_7 [i_0 - 1] [i_1 + 3] [i_1 + 3] [i_0] = var_1;
                    arr_8 [i_0 + 1] [i_0] [2] = ((~(min((arr_1 [i_2]), -17224))));
                    var_22 -= 0;
                    arr_9 [i_0] [i_0] [i_0] = (~var_15);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    var_23 = 30;
                    arr_16 [i_0] [i_0] [i_4] = (!144115183780888576);
                }
            }
        }
        var_24 = ((!((min(var_5, var_2)))));
        arr_17 [i_0] [i_0] = ((~(((((max(1, -17232))) && var_4)))));
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        arr_22 [3] [i_5] = var_4;
        var_25 = (min(((max(var_13, var_7))), (((arr_10 [i_5]) ? -29604 : var_5))));
        var_26 = (max(1592, (arr_1 [17])));
        var_27 = (arr_1 [i_5]);
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 24;i_6 += 1)
    {
        arr_25 [i_6] = (((~-17224) << (((arr_23 [2] [14]) - 162))));
        arr_26 [i_6] [i_6] = ((!(arr_24 [i_6 - 1])));
    }
    var_28 = (((((((var_6 ? var_17 : var_14)) >> (109 - 102)))) ? ((max((-1603 <= 2404), (~-1593)))) : (min((min(-59, 2320037997395852834)), (1619 & 11162)))));
    #pragma endscop
}
