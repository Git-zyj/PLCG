/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_3, var_4));
    var_20 = var_18;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = ((65535 ? (((((3 ? 23854 : 45061)) | (!0)))) : (((~7944176992656175016) | (((arr_2 [i_0] [i_0]) | var_13))))));
        var_21 = 1686317351;

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_6 [i_1] = ((~((~(arr_4 [i_1] [i_1] [i_1])))));
            var_22 &= ((((((arr_0 [i_1] [i_1]) ? var_5 : 18446744073709551615)) ^ var_11)) >> ((((((var_6 ? 2608649944 : 2858671862))) || (var_4 <= var_18)))));
            arr_7 [i_1] [i_1] [i_1] = 2608649937;
            arr_8 [12] = 4459033048352763970;
            arr_9 [i_1] [i_1] [5] = (min((min((~var_14), (min((arr_1 [i_1]), var_4)))), (1686317351 >= 51671)));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_23 = (max(var_23, -3000291935));
                            arr_21 [i_0] [i_2] [i_0] [i_2] [i_5 + 2] = -1686317332;
                        }
                    }
                }
            }
            arr_22 [i_0] [i_2] = ((-20275 + 4294967289) ? (arr_10 [i_0] [i_0]) : -20268);
            var_24 = -var_17;
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        var_25 = 1686317349;
        arr_26 [i_6] = (((((var_1 ? 1294675354 : var_3))) ? (31884 ^ 56) : -3272932828));
        var_26 = (min(var_26, var_3));
    }
    #pragma endscop
}
