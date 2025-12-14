/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            {
                var_17 = (((max(((2130706432 ? (arr_4 [i_0] [i_1] [i_1]) : (arr_1 [18]))), var_12)) + (arr_0 [i_0] [i_0])));
                var_18 &= ((((((arr_3 [1]) * (arr_4 [i_0] [i_0] [i_0])))) <= ((((min(1991464140, 4294967295))) ? -8793455516279269870 : (max(-8793455516279269871, 647043240))))));
                var_19 = (0 == var_5);
                var_20 = (min(var_20, var_12));
                var_21 = (1 * 1);
            }
        }
    }
    var_22 = ((-6093265706370883456 ? (max(1, var_3)) : (max(9223372036854775789, (3416793098 | 203)))));
    var_23 = 9050738170431876536;
    var_24 *= (((max(var_14, (var_9 == 127))) % ((((var_9 == -262144) < var_15)))));

    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            var_25 = (((((arr_6 [i_2] [i_2]) >> (2200666787 - 2200666779)))) / (var_11 | 181834291));
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 16;i_6 += 1)
                    {
                        {
                            var_26 = (152 - var_14);
                            var_27 = (max(var_27, 878174197));
                            var_28 *= var_13;
                            var_29 = (min(var_29, 0));
                            var_30 = (((-1820026626 | 2200666782) && 8793455516279269870));
                        }
                    }
                }
            }
            arr_17 [i_2] [i_2] [i_3] = (((((-127 - 1) >= 8793455516279269870)) ? (arr_13 [i_3] [i_3]) : (1889584091 > var_3)));
        }
        var_31 = var_15;
        var_32 *= (arr_5 [i_2] [i_2]);
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                {
                    var_33 = ((arr_15 [i_2] [i_7] [i_8] [i_2]) << ((((arr_11 [i_8]) == (arr_5 [i_2] [i_8])))));
                    var_34 = ((((((((arr_16 [i_2]) / var_10)) * var_13))) ? (arr_4 [i_2] [i_2] [13]) : (min(((799922054 ? 834313404 : 0)), (((arr_21 [i_2] [i_7] [i_8]) | var_13))))));
                }
            }
        }
    }
    #pragma endscop
}
