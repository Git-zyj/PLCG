/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((4294967288 & var_11) & (min(((var_9 ? var_2 : var_8)), (57995 | var_11)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_17 = (arr_2 [i_0] [i_1]);
                    arr_7 [i_1] [i_1] [13] [i_2] = (((((0 ? -2147483630 : 1))) ? var_6 : 1));
                    var_18 |= (1 && (arr_0 [i_0] [i_1]));
                    var_19 = (((128 / 1) && -740195004));
                }
                var_20 = ((((max(var_12, 2147483630))) ? (!1) : ((((var_8 | -32766) <= var_3)))));
            }
        }
    }

    for (int i_3 = 4; i_3 < 16;i_3 += 1)
    {
        var_21 = ((((((min(32767, 0))) ? 0 : (-358633482 == var_7))) % ((var_1 ? (16352 % var_15) : ((min(1, var_10)))))));
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                {
                    var_22 *= (((((((((!(arr_3 [15] [15]))))) < (min((arr_13 [i_3] [0] [14]), 122))))) | (((((8 >> (7845183927480921872 - 7845183927480921863)))) ? ((min(1, var_13))) : (arr_5 [17] [17] [17] [8])))));
                    arr_15 [i_5] [i_5] [i_5] [i_5] = ((~(arr_12 [i_3 - 2])));
                }
            }
        }
        var_23 = (min(((-((15937 ? var_15 : var_4)))), ((min((arr_0 [i_3 - 4] [i_3 - 2]), 1)))));
    }
    for (int i_6 = 1; i_6 < 14;i_6 += 1)
    {
        var_24 = (min(var_24, var_5));
        arr_19 [i_6] = (~var_6);
    }
    var_25 |= var_3;
    #pragma endscop
}
