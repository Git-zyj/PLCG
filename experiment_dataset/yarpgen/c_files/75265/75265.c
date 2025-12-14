/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        var_18 ^= (arr_8 [i_0 + 1] [i_1] [i_3 - 1] [i_3] [i_2 + 1] [i_2 + 1]);
                        var_19 = (min(var_19, 1023));
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        var_20 += ((-90 ? (arr_6 [i_0] [i_0 + 1] [i_0 - 1]) : 49495));
                        var_21 = ((1019 == (1 && var_0)));
                    }
                    arr_11 [i_0 + 3] [4] [i_2 - 1] = (((((var_0 <= (arr_9 [i_0] [i_1] [i_2] [i_0] [5])))) == (arr_9 [i_2 + 2] [i_1] [i_2 - 1] [i_0] [i_0 - 2])));
                }
            }
        }
        arr_12 [i_0 + 2] = (((arr_0 [i_0 + 3]) ? (arr_0 [i_0 - 2]) : 0));
    }
    var_22 |= var_6;

    for (int i_5 = 3; i_5 < 19;i_5 += 1)
    {
        arr_17 [i_5 - 2] [i_5] = (min(((-1023 ? (((1492987552 ? 32766 : 1))) : var_11)), (max(3309253451, 188))));
        var_23 = ((-60 ? -1006 : ((1 ? var_2 : 32736))));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_24 = (max(var_24, (((((((arr_16 [i_6]) >= 0))) * var_5)))));

        /* vectorizable */
        for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
        {
            arr_25 [i_6] = (arr_0 [i_7]);
            arr_26 [i_6] = (((((arr_20 [i_6] [i_6]) - (arr_18 [i_6]))) > (~110)));
            var_25 = (min(var_25, -46));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
        {
            var_26 = (arr_29 [i_6]);
            arr_30 [i_6] = ((((-31616 ? (arr_8 [i_6] [6] [i_6] [i_8] [i_8] [i_8]) : var_9))) && var_11);
            var_27 = ((-(arr_21 [i_6])));
        }
        arr_31 [i_6] = (min((((((arr_20 [i_6] [i_6]) || 192)) ? ((((arr_8 [1] [i_6] [i_6] [13] [13] [13]) >> (16376 - 16356)))) : (29740 % -1959969521854633493))), var_10));
        arr_32 [i_6] = (((((-1 ? (8191 <= 4294967295) : ((7488432095657257627 ? 65530 : (arr_14 [i_6])))))) * (((arr_27 [i_6] [i_6]) ? 67108863 : (arr_4 [i_6] [i_6] [i_6])))));
    }
    for (int i_9 = 0; i_9 < 19;i_9 += 1)
    {
        arr_36 [4] = (((2 - 1) ? 1221164335 : 111));
        var_28 = (min(var_28, ((((min((63 < -5517638983374575348), (max(21753, 731393659)))) > ((((var_3 ? -1043 : var_14)) ^ var_4)))))));
    }
    var_29 = (((((67 + 1) & -var_16)) - (((((-1572143244 ? 684244567 : 8289405387059339489)) <= (182 / var_11))))));
    #pragma endscop
}
