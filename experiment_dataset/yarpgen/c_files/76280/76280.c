/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((var_12 + 9223372036854775807) >> (var_5 - 732473534)));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_14 = var_8;
        arr_3 [i_0] = (min((arr_1 [i_0]), (((arr_1 [i_0]) ^ (arr_2 [i_0])))));
    }
    var_15 = (~var_3);

    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        arr_8 [i_1 - 1] = (arr_6 [i_1 + 1]);
        arr_9 [i_1] = ((-((~(arr_5 [i_1 - 1] [i_1 - 1])))));
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    {
                        arr_18 [i_2 + 2] [i_3] [3] = 28663;
                        arr_19 [i_1 + 1] [i_2] [i_3 - 1] [i_3 - 1] = (arr_4 [4]);
                    }
                }
            }
        }
        arr_20 [i_1] = (max(1, -24736));
        arr_21 [22] = (((((((max(1, 24721))) <= (arr_16 [i_1] [i_1 + 1] [i_1 + 1] [i_1])))) ^ (((arr_16 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]) & (arr_16 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 - 1])))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        var_16 = 5863235038312295502;
        arr_24 [i_5] = (arr_0 [i_5] [i_5]);
    }
    #pragma endscop
}
