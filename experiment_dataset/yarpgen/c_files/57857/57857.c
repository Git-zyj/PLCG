/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!1);
    var_13 = ((3316284115644297882 ? (~4190208) : (~-3576515218880041927)));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_14 = var_7;
        var_15 -= (arr_1 [i_0] [i_0 + 1]);
    }
    for (int i_1 = 2; i_1 < 10;i_1 += 1) /* same iter space */
    {
        arr_6 [0] [i_1] |= 13331000229526369488;
        arr_7 [i_1] = (((136 ? -3576515218880041927 : (((55 ? var_0 : (arr_5 [i_1])))))));
    }
    /* vectorizable */
    for (int i_2 = 4; i_2 < 20;i_2 += 1)
    {
        var_16 = (max(var_16, ((var_2 ? (arr_10 [i_2 - 4]) : 1))));
        arr_11 [i_2 + 1] = ((3957299474 ? 120 : (246 > 0)));
        arr_12 [16] = 115;

        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            arr_17 [17] [i_2 - 1] [i_3] = (--1);
            arr_18 [15] [1] = -139;

            for (int i_4 = 3; i_4 < 20;i_4 += 1)
            {
                var_17 = (((arr_8 [i_2]) ? (((3752250822 > (arr_8 [i_2])))) : ((158 ? var_0 : 11269))));
                var_18 = (((var_10 ? 3996273587354868346 : 6)));
                var_19 = (max(var_19, var_7));
                arr_21 [i_4] [19] [i_4] &= ((255 ? (arr_19 [i_4 + 1] [i_4 - 3] [i_4 - 3]) : (arr_16 [i_2 + 1])));
            }
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                var_20 = ((arr_9 [i_2 - 1]) ? 227 : (arr_9 [i_2 - 3]));
                var_21 |= (((11938 || var_8) ? (arr_8 [i_2 - 1]) : -7264334841832738090));
            }
            var_22 = (max(var_22, ((((var_3 + 9223372036854775807) << (14 - 13))))));
        }
        for (int i_6 = 4; i_6 < 19;i_6 += 1)
        {
            var_23 = (max(var_23, ((((arr_22 [16] [16] [i_6 - 1] [i_6]) <= (arr_22 [i_6] [i_6 - 4] [i_6 - 3] [i_6 - 1]))))));
            arr_27 [10] [7] [i_6] = (1 + 150);
            var_24 |= (((arr_25 [i_2 - 4] [i_6 - 3]) - 53598));
            var_25 = 25970;
        }
        var_26 = (max(var_26, -1151913139));
    }
    #pragma endscop
}
