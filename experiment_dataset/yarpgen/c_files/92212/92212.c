/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0 - 3] = (((((var_6 ? 1 : 0))) ? (((-8844598299827689554 && (arr_1 [i_0 - 2] [i_0 - 3])))) : -7871568375478778392));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_9 [10] [i_3] [i_3] = (min((arr_3 [i_2] [i_3]), (!0)));
                        var_12 = ((-(!253)));
                        arr_10 [i_0] [i_1] [i_1] [i_3] = ((((6686374691733550350 ? 3338571509299334419 : 2))) ? (0 > 0) : (((!(arr_8 [i_0 + 1] [i_3] [i_0 - 2] [21])))));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] [5] = (min((arr_11 [i_4]), (922371665 <= 0)));
        var_13 = arr_11 [i_4];
        var_14 = (((((~((246 | (arr_8 [6] [0] [0] [0])))))) ? ((((arr_6 [i_4] [i_4] [1]) ? (arr_3 [i_4] [i_4]) : (arr_3 [12] [i_4])))) : (min((65535 - 123), (min(var_7, 2))))));
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 9;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 9;i_6 += 1)
            {
                {
                    var_15 &= (((((min(var_2, var_1))) ? var_5 : ((90857241 ? var_2 : 19)))));
                    arr_22 [i_6] = (min((((~(arr_5 [i_4] [i_5])))), (max(var_6, 11607406969199174544))));
                    var_16 = 9223372036854775807;
                    var_17 = ((var_6 ^ (arr_4 [i_5 - 1] [i_6 - 2])));
                    var_18 *= var_3;
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
    {
        var_19 -= (((~(-32767 - 1))));
        var_20 = (max(var_20, (((-((min((arr_17 [i_7] [i_7]), (arr_17 [i_7] [i_7])))))))));
        var_21 &= ((-5519 + 2147483647) << ((((((207 ? (min(var_4, var_3)) : 86)) + 1817911303)) - 22)));
    }
    var_22 = (((((0 * var_9) ? (1168408226983680126 >= 0) : 28120)) << (((~var_8) - 1788976117))));
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                {
                    var_23 &= min(2018144060, (((((4189373577 ? (arr_30 [i_10]) : (arr_27 [i_10])))) ? (arr_28 [i_10]) : (((var_7 ? (arr_31 [i_8] [i_10] [i_10]) : 2))))));
                    arr_34 [i_8] [21] [i_10] [i_8] = var_4;
                }
            }
        }
    }
    var_24 = 5;
    #pragma endscop
}
