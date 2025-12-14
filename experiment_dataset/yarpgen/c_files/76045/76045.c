/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1 + 2] [i_1 - 2] = (max(((174 >> ((((max(195, 32946))) - 32928)))), (((arr_1 [i_1 - 1] [i_1 + 2]) ? 1530654369 : 57))));
                var_14 = (max((((!(arr_4 [i_0])))), (max(57, 7706200151141336692))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_15 += 174;
        var_16 = (min(var_16, 219));
        var_17 = ((((arr_1 [i_2] [14]) ? var_7 : (arr_0 [3]))));
        var_18 |= (((arr_1 [i_2] [6]) <= (arr_9 [i_2])));
        arr_10 [i_2] [i_2] = var_8;
    }
    var_19 = (var_6 & 1530654353);
    #pragma endscop
}
