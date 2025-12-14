/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (((-((max((var_11 || var_6), var_9))))))));
    var_20 = -var_13;

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_21 = (arr_0 [i_0]);
        var_22 = var_16;
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_23 = (((arr_2 [i_1 - 1]) ? ((-(arr_1 [i_1]))) : var_15));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        var_24 *= (((arr_1 [1]) + var_8));
                        var_25 = 2464142673;
                        var_26 = (var_9 ? (((arr_4 [i_1 + 1]) ? (arr_1 [i_1 - 1]) : var_8)) : 4095);
                        var_27 = (max((((-32767 - 1) ^ var_9)), (((arr_5 [i_1] [i_2] [i_2]) ? (arr_5 [i_1 + 1] [1] [1]) : -32760))));
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 4; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                {
                    var_28 = (max((arr_20 [i_5] [i_5] [7]), (arr_0 [1])));
                    var_29 *= 4277051418;
                }
            }
        }
        var_30 = (arr_11 [1]);
    }
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        var_31 += ((((min((~48569), 58654))) ? ((min(-42, 1))) : (max(-32759, -2147483647))));
        var_32 *= ((var_16 < ((-2147483647 ? 6882 : 1837767848))));
        var_33 = arr_23 [i_8];
    }
    var_34 = var_2;
    var_35 = ((-var_11 ? (((69 ? var_9 : 2464142673))) : (-8527724679030725225 - var_18)));
    #pragma endscop
}
