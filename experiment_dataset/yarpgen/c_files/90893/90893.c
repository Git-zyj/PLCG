/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_17;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            arr_4 [i_1] = (arr_2 [i_0 - 2] [i_1 + 4] [i_1 + 1]);
            var_21 = (32767 == (arr_0 [i_0]));
            var_22 -= ((~(arr_0 [i_1 + 1])));
            arr_5 [i_1] = (((((~(arr_0 [8])))) ? (~1495615607) : 2799351689));
            arr_6 [i_1] = (((arr_2 [4] [i_1] [7]) ? (arr_1 [i_1 + 3] [i_0 - 2]) : (arr_1 [i_0 - 2] [i_1 - 1])));
        }
        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 12;i_5 += 1)
                    {
                        {
                            arr_19 [i_0] [i_2 + 2] [i_0] [i_2] [i_5] = ((~(-1314505360 || 2799351689)));
                            var_23 = (((((4294967283 / (arr_3 [3] [6])))) || (31 * var_3)));
                        }
                    }
                }
            }
            var_24 -= ((-(25 || 1)));
            var_25 += 32767;
            var_26 = ((-(!12)));
        }
        var_27 = (((arr_12 [5] [i_0]) << (1 - 1)));
    }
    for (int i_6 = 3; i_6 < 17;i_6 += 1)
    {
        var_28 = (min(var_28, (0 != 3079612281)));
        var_29 -= ((-(((31564 ? 3079612282 : -1)))));
        var_30 = (arr_22 [i_6 - 2]);

        /* vectorizable */
        for (int i_7 = 2; i_7 < 18;i_7 += 1) /* same iter space */
        {
            var_31 = (arr_24 [i_6]);
            var_32 = (arr_23 [i_6]);
        }
        for (int i_8 = 2; i_8 < 18;i_8 += 1) /* same iter space */
        {
            var_33 = ((min(var_10, -7499587505906042725)));
            var_34 = ((min((arr_21 [i_6 + 2] [i_8 - 2]), (arr_20 [i_6 + 2]))));
            var_35 = ((~((((((arr_22 [i_6]) * (arr_21 [i_6] [i_6])))) ? (arr_21 [i_6 + 1] [i_8 - 2]) : (arr_21 [i_6 + 1] [i_8 - 2])))));
            var_36 = (arr_21 [i_6] [i_6]);
        }
        for (int i_9 = 0; i_9 < 0;i_9 += 1)
        {
            var_37 = (min((arr_26 [i_6 - 3] [i_9 + 1]), (((((var_12 * (arr_25 [i_6])))) ? (arr_22 [i_9]) : (((arr_20 [i_6 - 3]) & (arr_21 [i_6] [3])))))));
            var_38 = (arr_27 [i_6 - 1] [i_6 - 1]);
            arr_30 [i_6] = ((+(((arr_21 [i_6 + 1] [i_9 + 1]) ? (arr_21 [i_6] [i_9 + 1]) : (arr_24 [i_6 - 1])))));
        }
        var_39 = (arr_26 [i_6] [2]);
    }
    #pragma endscop
}
