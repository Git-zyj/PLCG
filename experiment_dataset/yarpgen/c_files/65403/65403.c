/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_19 *= (((~3) <= (((~var_12) / -63794))));
                    var_20 = (((~7) > (((((arr_6 [i_2] [i_1] [i_0]) ? var_1 : (arr_7 [i_2] [i_0] [i_0]))) & (var_15 || var_10)))));
                    var_21 = ((!(((((max(11, var_16))) * ((min(var_16, -120))))))));
                    arr_10 [i_0] [i_2] = (max(246, (((!((max(var_12, var_4))))))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {
        var_22 = (var_13 < (var_16 * 0));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                {
                    var_23 = (((((arr_15 [19] [19]) & 119)) & (~var_9)));
                    arr_18 [i_3] [i_3] = (((((arr_3 [12] [i_5]) ? -1040189254 : -112)) / ((var_2 ? 114 : (arr_8 [2] [i_4] [i_4] [10])))));
                }
            }
        }
        var_24 = (((((var_5 ? 245 : 1))) * ((4294967295 ? (arr_6 [10] [22] [10]) : (arr_8 [15] [11] [11] [0])))));
        arr_19 [1] [i_3] = (3732176733 >= -117);
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        var_25 |= ((((max((((arr_3 [i_6] [i_6]) >= (arr_17 [i_6] [i_6]))), (!2147483647)))) * (((-1 == ((((arr_7 [i_6] [i_6] [i_6]) != var_2))))))));
        var_26 = max(((-2722479528 != (((arr_6 [i_6] [i_6] [i_6]) & 248)))), ((!((!(arr_15 [i_6] [i_6]))))));
    }
    var_27 = ((((((min(238, var_4))) % var_6)) & 161));
    #pragma endscop
}
