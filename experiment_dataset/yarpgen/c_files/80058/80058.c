/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                {
                    var_13 = 2103220681;
                    var_14 = (((((32099 && (arr_6 [14] [i_2 - 2] [i_2])))) - (!-1)));
                    var_15 = (min((20798 + 10701050375227177151), 15492757781758172510));
                }
            }
        }
        arr_9 [i_0] [i_0] = ((max(3, 1842)));
        var_16 = ((var_10 ? var_3 : ((((min(var_1, var_0))) ? (-32389 - 97449036) : (var_11 / var_4)))));

        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_17 = (((var_5 ? var_8 : 37603)));
            var_18 += var_1;
            var_19 = (~2953986291951379106);
            arr_13 [i_3] = (2869698508470682250 == 27907);
        }
        /* vectorizable */
        for (int i_4 = 1; i_4 < 23;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 2; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_20 += (((arr_4 [i_7] [i_6] [i_5 - 1]) ? (arr_1 [i_4 + 1] [5]) : (!1039472770)));
                            arr_25 [i_0] [i_0] [i_4] [i_5] [i_4] [4] [i_7 - 2] = var_0;
                        }
                    }
                }
            }
            var_21 = (max(var_21, 0));
            var_22 = var_4;
            var_23 = (((50 << 1) | 65535));
            /* LoopNest 3 */
            for (int i_8 = 1; i_8 < 22;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 21;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        {
                            var_24 = (-8740626677670881354 && 65525);
                            arr_34 [i_0] [i_4] [i_8] [i_4] [i_10] [i_10] = ((((((-78 + 2147483647) << (2377438685853867524 - 2377438685853867524)))) ? 19 : 1047620649));
                        }
                    }
                }
            }
        }
    }
    for (int i_11 = 1; i_11 < 10;i_11 += 1)
    {
        var_25 = ((15492757781758172499 ? 52765 : -85));
        var_26 = (((1666986365 ? 127 : 1)));
        var_27 = 15243244284072366546;
    }
    for (int i_12 = 0; i_12 < 23;i_12 += 1)
    {
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 23;i_13 += 1)
        {
            for (int i_14 = 4; i_14 < 20;i_14 += 1)
            {
                for (int i_15 = 3; i_15 < 22;i_15 += 1)
                {
                    {
                        var_28 ^= arr_19 [15] [i_13] [15];
                        var_29 *= ((((min((arr_11 [i_15 + 1]), var_3))) ? ((((arr_11 [i_15 - 2]) != var_5))) : (!var_4)));
                        var_30 += (((((394627164 ? (!9218868437227405312) : (var_0 >= var_1)))) ? 32768 : (((var_4 || 192) & -var_12))));
                    }
                }
            }
        }
        var_31 = ((!(1 > 1666986365)));
        var_32 = (max(var_32, (arr_14 [8] [8])));
        var_33 = ((!(((2100618609 ? 3224349612 : 3416812717673325647)))));
    }
    var_34 = var_2;
    var_35 = var_6;
    #pragma endscop
}
