/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = 27544;
        var_13 -= (min(27517, (!18446744073709551615)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, (!255)));
                    var_15 = (min((((((max(26, (arr_0 [i_0])))) < 27544))), (min((var_11 % var_11), (~var_9)))));
                }
            }
        }
        var_16 = -131072;
        arr_10 [i_0] = ((((max((!var_7), 249))) ^ (var_5 >= -2116759684)));
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 17;i_5 += 1)
            {
                {
                    arr_20 [i_3] [i_4] [i_4] [i_4] = (((!var_4) ? (min(3682230260188756389, (arr_15 [i_3]))) : (var_4 > 71)));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_17 = (min(var_17, ((min((((min(-731967598, -1452571568)) + 22085)), ((~(arr_21 [i_7 + 1] [i_4] [i_4] [i_5 + 1]))))))));
                                arr_26 [18] [i_3] [8] [7] [i_7] [0] = var_9;
                            }
                        }
                    }
                    arr_27 [i_3] [10] = (var_12 + 255);
                }
            }
        }
    }
    var_18 = var_0;

    /* vectorizable */
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        var_19 = 18;
        arr_31 [i_8] [i_8] = (!255);
    }
    #pragma endscop
}
