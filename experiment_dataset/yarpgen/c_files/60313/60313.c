/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_16 ^= 65535;
                var_17 = (max(var_17, ((~(arr_1 [i_0 - 1] [i_0 - 1])))));
            }
        }
    }
    var_18 = (max(var_18, var_3));
    var_19 &= var_9;

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_20 += ((!(((((var_15 ? var_5 : (arr_8 [i_2]))) - (min(159746953, var_5)))))));
        var_21 = (min(var_21, ((max((var_11 && var_10), 159746964)))));
    }
    for (int i_3 = 4; i_3 < 22;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 2; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    {
                        var_22 += ((!(arr_16 [i_6] [i_5] [7])));
                        arr_22 [i_3] [i_4] [i_4] [i_6] &= ((arr_18 [i_4 - 1]) >> (((((arr_18 [i_4 - 2]) ? 10659568565581980448 : (arr_18 [i_4 + 1]))) - 10659568565581980417)));
                        var_23 -= var_9;
                        var_24 += ((((~(arr_16 [i_5 - 1] [i_3 - 2] [i_4 - 1]))) * (((!(arr_12 [i_3 + 2] [i_3 + 2] [i_3 + 2]))))));
                    }
                }
            }
        }
        var_25 ^= (((((!(arr_16 [i_3 - 4] [i_3 - 2] [i_3 - 3])))) <= ((var_13 ^ (min((arr_17 [i_3] [1] [i_3]), (arr_18 [21])))))));
        var_26 += (1 ^ -159746954);
        var_27 ^= ((((((((arr_14 [i_3 - 1]) <= 1048572))) / (arr_9 [i_3]))) & ((var_5 | (arr_14 [i_3 - 3])))));
        var_28 ^= (-12202 > 3428155677);
    }
    #pragma endscop
}
