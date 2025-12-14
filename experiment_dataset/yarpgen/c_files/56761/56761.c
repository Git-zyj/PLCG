/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_14 = ((((14776207317730235671 ? 1 : (arr_8 [i_1 - 1] [i_1] [i_1]))) < (!1)));
                    var_15 &= 0;
                    var_16 = ((((6793792547929924177 ? -18148 : 1))) ? (min((arr_6 [i_1 - 1] [i_1 + 1]), (arr_9 [i_0]))) : (min((((var_1 ? 0 : 1))), (max(18446744073709551615, var_3)))));
                    var_17 |= ((3 ? ((~((1024 ? 1 : (arr_3 [i_2] [i_2] [i_0]))))) : (max((arr_3 [i_0] [i_2] [i_2]), ((min(var_8, (arr_2 [i_0] [i_2]))))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    var_18 *= 1;
                    var_19 = (((var_3 != var_8) ? (((min((arr_10 [i_0] [i_0] [i_0]), (arr_1 [i_4]))))) : (((((1000 ? var_7 : (arr_13 [i_0] [i_3 - 2] [i_4])))) ? var_5 : (arr_9 [i_0])))));
                    var_20 = 3670536755979315936;
                    var_21 = var_6;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        var_22 += ((-1642190709 ? 1 : ((var_3 / (arr_15 [i_5] [i_5])))));
        var_23 += var_10;
    }
    var_24 |= -var_8;
    var_25 = (min(var_25, ((min(120, var_1)))));
    var_26 -= (max(((((var_4 > 20431) ^ var_1))), var_3));
    var_27 = (9432 || var_11);
    #pragma endscop
}
