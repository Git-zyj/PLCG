/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((max(var_1, 5117064847754571122)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_15 *= (((((arr_1 [i_0] [i_0]) + 2147483647)) >> 1));
        var_16 += (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        var_17 = (min(var_17, (((((0 ? 1 : 1)) << (arr_5 [i_1 - 2] [i_1 + 2]))))));

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 23;i_4 += 1)
                {
                    {
                        arr_13 [i_3] [i_4] = -105;
                        var_18 &= (arr_6 [i_1 + 2]);
                        var_19 = -10;
                        arr_14 [1] [i_3 - 1] [23] [23] [i_1] = var_0;
                        var_20 = 1;
                    }
                }
            }
            var_21 ^= var_1;
            var_22 = (min(var_22, 1191014755));
        }
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            var_23 = 1;
            arr_17 [i_1] [i_1] = (((arr_4 [i_1 + 2]) ? ((var_0 ? var_3 : 14120801872074407171)) : 5556090515079545397));
        }
    }
    for (int i_6 = 4; i_6 < 14;i_6 += 1)
    {

        for (int i_7 = 1; i_7 < 15;i_7 += 1)
        {
            var_24 *= 1;
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 14;i_9 += 1)
                {
                    {
                        arr_27 [i_8] [i_7] = (min((arr_21 [i_6 + 2]), 0));
                        var_25 = ((var_13 ? 1 : ((((1 ? 1 : 1))))));
                    }
                }
            }
        }
        arr_28 [2] = (1 & 29068);
        var_26 |= min((((((3551688211060244951 ? 1 : 1))) ? ((max((arr_15 [i_6] [i_6]), 1))) : 0)), (!1));
        var_27 *= ((var_7 ? 1 : 1));
    }
    for (int i_10 = 2; i_10 < 16;i_10 += 1)
    {
        var_28 *= (arr_4 [i_10 + 2]);
        arr_32 [10] |= (((!var_4) == ((((max(var_0, var_7))) + (((arr_10 [i_10] [i_10] [i_10] [i_10 + 2] [i_10]) ^ -707))))));
    }
    #pragma endscop
}
