/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= (max((min((((var_14 ? var_6 : var_6))), var_5)), ((min(((var_3 ? var_11 : var_11)), ((var_5 ? var_11 : var_12)))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_16 &= (max(var_7, ((-223223443 ? 254083642 : 48274))));
            var_17 = (min(var_17, 385255425331247869));
            var_18 |= ((-(((((var_4 ? var_14 : var_2))) ? (((max(var_7, (arr_4 [i_0] [i_1]))))) : ((var_7 ? var_5 : var_8))))));
        }
        for (int i_2 = 2; i_2 < 11;i_2 += 1) /* same iter space */
        {
            var_19 = (min(var_19, (arr_3 [8])));
            var_20 *= (((min(((var_14 ? var_4 : var_10)), ((var_3 ? var_11 : var_11)))) < var_4));
        }
        for (int i_3 = 2; i_3 < 11;i_3 += 1) /* same iter space */
        {
            var_21 += ((-((4459 ? ((max(-102, 140))) : 59851))));
            arr_10 [i_3] [i_0] |= (((min((((arr_6 [i_0] [i_0]) / var_9)), ((max((arr_6 [1] [i_3 + 1]), var_6)))))) ? var_6 : (min((arr_1 [i_0] [i_3 - 1]), (arr_1 [i_0] [i_0]))));
        }
        for (int i_4 = 2; i_4 < 11;i_4 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        {
                            var_22 += ((-(min(((min((arr_18 [4] [i_0] [i_0] [4]), var_12))), (((arr_15 [i_6] [i_0]) ? var_9 : var_0))))));
                            var_23 += (max((var_11 << var_12), (((min(var_1, var_5)) << ((((var_12 ? var_0 : var_12)) - 117))))));
                            var_24 = (max(var_24, (arr_3 [i_0])));
                            var_25 = (min(var_25, (((var_5 ? ((((min(var_9, var_10))) ? ((max(var_11, var_8))) : ((max(var_3, var_14))))) : (max(-102, (-97 + -254083642))))))));
                        }
                    }
                }
            }
            var_26 = (min(var_26, (((var_4 ? ((((((arr_4 [i_0] [i_4 - 2]) ? var_14 : (arr_5 [i_0])))) - ((72040001851883520 ? -127 : 611138843094816017)))) : ((((var_12 > var_2) / (arr_1 [i_4 + 1] [i_4])))))))));
            arr_22 [i_0] [i_0] |= ((((((arr_11 [i_0] [i_4 - 2]) * var_10))) ? (((arr_11 [i_0] [i_4 - 2]) >> (var_6 - 34246))) : (((arr_11 [3] [i_4 - 2]) ? (arr_11 [i_0] [i_4 - 2]) : var_8))));
        }
        arr_23 [i_0] [i_0] |= ((((((((var_1 >> (((arr_18 [1] [1] [i_0] [i_0]) + 13652))))) ? (var_11 & var_12) : var_14))) ? (max((min(611138843094816003, 59867)), (arr_17 [i_0]))) : ((min(var_9, ((max(-10150, 2333782249))))))));
        var_27 = (min(var_27, (((+(((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [7]) + ((-102 ? 611138843094816017 : 17261)))))))));
    }
    var_28 = (max(var_28, ((((((((var_8 >> (var_6 - 34240))) << ((var_8 ? var_1 : var_3))))) ? var_7 : ((var_5 ? (((18446744073709551615 ? -1564957206 : 1))) : (max(var_13, var_3)))))))));
    var_29 |= ((((((var_8 + var_1) ? var_8 : ((max(146, -5448)))))) | var_2));
    #pragma endscop
}
