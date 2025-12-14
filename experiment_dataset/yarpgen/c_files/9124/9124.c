/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (~(max((~var_15), (~471082089724043799))));

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max((max((var_0 + -6175630811767144339), -var_7)), -11094930701130315940));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_18 = ((((!(arr_5 [i_0] [i_2] [11])))));
                    var_19 ^= (((((5127095857665534424 ? var_16 : var_14))) ? 1287745430643124279 : 2146435072));
                    var_20 = (min((arr_4 [i_0 + 3]), (((((arr_5 [11] [i_2] [i_2]) ? (arr_4 [i_0]) : -8606772177447135395))))));
                    var_21 ^= (!4065416614);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                {
                    var_22 ^= (((-3538894993724913591 ^ 42260) ? (((arr_3 [i_4]) ^ var_10)) : ((-(arr_3 [i_3])))));
                    var_23 |= ((-var_16 < ((max(222840361, 65535)))));
                    var_24 = ((-((((max(9223372036854775807, (-9223372036854775807 - 1)))) ? ((-2471567053797830522 ? var_0 : 2331767352621761236)) : (arr_16 [i_3] [i_4] [i_5])))));
                    arr_17 [i_3] [i_4] [i_5] = (max((((!(!var_13)))), 8433103794668228957));
                }
            }
        }
    }
    #pragma endscop
}
