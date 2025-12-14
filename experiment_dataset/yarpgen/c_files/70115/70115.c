/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((64885 ? (min(18118, var_11)) : 650));
    var_13 = (!var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_14 -= 229;
                        var_15 = (((max(var_9, (max(1, var_1)))) < (((0 * (46504 / var_2))))));
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        var_16 = max((((!(arr_12 [i_4] [i_2] [i_2] [i_0])))), (((arr_12 [i_0] [i_1] [i_2] [i_4]) ? (arr_12 [i_0] [i_1] [i_2] [i_1]) : (arr_12 [6] [i_1] [i_2] [6]))));
                        var_17 = (((((-(((arr_13 [i_0] [i_1] [i_0] [i_4] [i_1] [i_2]) ? (arr_5 [2]) : 64885))))) ? var_3 : ((((var_8 >= -3882830772413277308) ? (var_3 == 67) : var_6)))));
                        var_18 = 22772;
                    }

                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        var_19 = ((46504 ? ((~(min((arr_0 [i_0]), -582139920)))) : ((((max((arr_7 [i_0] [i_1] [i_1] [i_2]), (arr_3 [i_1]))) >> ((0 ? -22773 : 0)))))));
                        var_20 |= (max(1, (arr_14 [i_5] [i_5])));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_21 ^= -var_9;
                        var_22 += ((!((!(arr_1 [i_0])))));
                    }
                    var_23 = 0;
                    arr_18 [i_2] [i_2] [i_2] = (max((-32767 - 1), 10546855593681742887));
                    arr_19 [i_2] [i_1] [5] [i_2] = ((((((min((arr_14 [i_2] [i_2]), var_11))) ? 0 : (min((arr_9 [i_2] [i_1] [i_1] [10] [i_2]), var_8)))) != ((((((((arr_17 [i_2]) ? 14409 : 0))) != 18446744073709551615))))));
                }
                var_24 = (max((~0), ((max(-1711193736, var_7)))));
                arr_20 [i_0] [i_0] = ((64885 == ((((-(arr_17 [10])))))));
                var_25 += (min((65535 < 1), ((1 ? (max(6495855395875794507, var_5)) : (arr_17 [6])))));
            }
        }
    }
    #pragma endscop
}
