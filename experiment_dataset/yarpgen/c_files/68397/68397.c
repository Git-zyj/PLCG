/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((0 ? 21 : (255 - 103)));
    var_16 = ((!((((~var_9) ? (0 / 33554431) : (((var_4 ? var_1 : var_0))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_17 -= (1 ? (((((0 ? 92 : 92))) ? 0 : 1669266003)) : ((((((1669266003 ? 156 : -67))) ? 66 : 101))));
                                var_18 += (!((((-107 && -93) & 111))));
                            }
                        }
                    }
                }
                var_19 = ((~((((var_7 || (arr_6 [2] [i_1] [5]))) ? (!3945607487) : ((var_7 * (arr_5 [i_0] [i_0] [i_0 + 1])))))));
            }
        }
    }

    for (int i_5 = 1; i_5 < 12;i_5 += 1)
    {
        arr_17 [i_5] &= ((((((~0) + ((var_2 ? (arr_8 [i_5] [i_5]) : (arr_12 [i_5] [i_5] [3] [i_5] [i_5])))))) ? (((var_7 | var_9) ? (3159636976 % -87) : (~var_1))) : -2681397869));
        arr_18 [i_5 + 2] = ((var_12 ? (((~66) ? ((36 ? var_9 : 4051069829)) : (29 > 116))) : (((((((arr_1 [i_5]) ? 117 : var_13)) < (((174 & (arr_0 [i_5] [3]))))))))));
        var_20 = ((((((1 < 2625701293) ? 13 : ((-(arr_2 [i_5])))))) || ((((((var_11 ? (arr_0 [8] [i_5]) : (arr_15 [i_5] [i_5])))) ? (((-(arr_1 [i_5 + 2])))) : (var_7 % 15))))));
        var_21 = (min(var_21, ((((((~((var_11 << (12649845842277525461 - 12649845842277525460)))))) ? (((((((!(arr_10 [i_5] [14] [1] [1]))))) > ((18446744073709551609 ? (arr_14 [i_5] [i_5] [i_5] [i_5 + 1] [i_5] [i_5] [i_5]) : var_5))))) : (arr_2 [i_5]))))));
    }
    #pragma endscop
}
