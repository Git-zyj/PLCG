/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_5 ? var_12 : var_9));
    var_19 = (min(var_19, ((max(var_6, (-1318602606 - 1))))));
    var_20 = var_13;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_21 = var_5;
        arr_4 [i_0] [18] |= ((+(((((-32760 ? (arr_3 [4] [4]) : (arr_2 [i_0] [i_0])))) ? (arr_0 [i_0] [i_0]) : ((min((arr_1 [i_0] [i_0]), 8820202842908269095)))))));
        var_22 = (((arr_3 [i_0] [4]) & (arr_3 [i_0] [i_0])));
        var_23 = ((1 ? 1 : 16942));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_7 [i_1] = (max(var_11, (arr_6 [i_1] [i_1])));
        var_24 = (min((!1117259248), (((((3177708047 ? 1 : 1))) ? (min(var_8, (arr_5 [i_1] [i_1]))) : (((max(var_6, var_17))))))));
        var_25 = ((1 || (((var_7 ? (!1) : (arr_5 [4] [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    var_26 &= ((~((1 | ((~(arr_15 [i_4])))))));
                    var_27 = (max((1 | 15246964745143602875), 31600));
                    var_28 |= 1;
                }
            }
        }
        var_29 ^= (min(-8820202842908269095, -8820202842908269095));
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 11;i_5 += 1)
    {
        var_30 = (max(var_30, (~var_16)));
        var_31 = var_2;
    }
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 10;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            {
                var_32 -= ((-8820202842908269096 - (((((arr_10 [i_6 + 1]) == (arr_10 [i_6 - 1])))))));
                var_33 = max(var_16, var_11);
                var_34 = max(-8820202842908269107, var_7);
                var_35 = (arr_0 [i_6] [i_7]);
            }
        }
    }
    #pragma endscop
}
