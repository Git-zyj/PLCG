/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= ((~(max(-var_7, (!1780)))));
    var_19 &= var_3;

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_20 ^= ((((min((arr_1 [10]), 1))) + ((~(arr_0 [2])))));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_21 = -8720146138633868010;
                    var_22 = (((1 >= 1) || (arr_7 [i_1] [i_1 - 3] [i_1] [i_1])));
                    var_23 = var_14;
                    var_24 ^= (max((arr_4 [i_0 + 2]), (((arr_2 [i_0 - 2]) >> (18177022162707807427 - 18177022162707807419)))));
                }
            }
        }
        arr_8 [i_0] = ((-(((arr_6 [i_0 - 2] [i_0 - 2]) * var_7))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_25 = ((var_11 || ((!(8720146138633868009 || 1)))));
        var_26 = 8720146138633868003;
        arr_11 [i_3] = (arr_10 [i_3]);
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
    {
        var_27 = 149;
        arr_15 [i_4] = ((max((arr_14 [i_4]), 5)));
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
    {
        var_28 = 1;
        arr_18 [i_5] [i_5] = ((-1 * (arr_9 [i_5])));
        var_29 = (((min((max((arr_16 [i_5]), 18446744073709551608)), (arr_9 [i_5]))) != (33 && var_6)));
        var_30 = (((arr_12 [i_5]) + ((17039 + (arr_9 [i_5])))));
        var_31 = (min((-925301879359572067 || 269721911001744198), (min(((((arr_13 [i_5]) && (arr_12 [i_5])))), -1661326146))));
    }
    #pragma endscop
}
