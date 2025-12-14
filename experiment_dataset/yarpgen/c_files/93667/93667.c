/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_0] = 1;
                    var_11 = 11622;
                    var_12 = 1;
                }
            }
        }
    }
    var_13 = (min(var_13, (~var_3)));

    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_14 ^= ((16 && ((min((16 << 13), 9663472400903157758)))));
            var_15 = ((+(((((var_6 ? (arr_9 [i_3] [i_3]) : var_2))) ? 1 : 131))));
            var_16 = ((65535 ? 3849005170 : 43471));
        }
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            arr_17 [i_3] [i_5] = 1;
            arr_18 [i_5] = (((((1 ? 255 : 3))) || (~1)));
        }
        var_17 = (((!(-2051237544919457996 || 65026))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                {
                    var_18 = (min(var_18, (((((var_6 ? ((1 ? (arr_15 [i_7]) : var_6)) : -1))) ? 127 : (((arr_19 [i_7] [i_6] [i_7]) + (arr_19 [i_7] [i_7] [i_7])))))));
                    var_19 = ((((((arr_9 [i_3] [i_7]) + ((1 ? (arr_10 [i_3]) : var_2))))) ? 18446744073709551615 : (((-(arr_10 [i_6]))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 4; i_8 < 12;i_8 += 1)
    {
        arr_27 [i_8] = ((((0 ? 1 : 44793)) >> (var_4 + 21806)));
        arr_28 [0] = ((-((14164305714082134727 ? 64 : 2051237544919457996))));
    }
    #pragma endscop
}
