/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((var_1 % 180) != 65535))) != var_12);

    for (int i_0 = 1; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_16 += (arr_0 [i_0 + 2]);
        var_17 = ((+((((arr_0 [i_0 + 1]) >= (arr_0 [i_0 + 4]))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 13;i_3 += 1)
                {
                    {
                        var_18 = (min(var_18, ((((((arr_8 [i_0] [i_1] [i_1 + 1] [i_3 + 1]) ? var_9 : (arr_8 [i_0 + 2] [i_1 + 1] [i_1 + 1] [i_3]))) >> (((min(((max((arr_3 [i_0 + 1] [i_1] [i_3]), var_3))), (min((arr_5 [i_3] [1]), (arr_3 [i_0 + 1] [i_1 + 1] [i_3]))))) - 110)))))));
                        arr_9 [i_1] = (max((min(2, -1313599228)), -104));
                        var_19 += ((65534 ? 31 : 147));
                        arr_10 [i_1] [i_1 + 1] [i_1 + 1] [i_2] [i_3] = var_0;
                    }
                }
            }
        }
        var_20 += (arr_5 [8] [0]);
    }
    for (int i_4 = 1; i_4 < 10;i_4 += 1) /* same iter space */
    {
        var_21 += var_2;
        var_22 = (arr_12 [i_4] [i_4]);
        arr_15 [i_4] = (min((max((arr_14 [i_4 + 4]), (arr_12 [i_4 - 1] [i_4 + 1]))), var_13));
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            {
                var_23 = (max(var_23, ((max((65533 | 4721471552011784659), (arr_18 [i_5] [i_5]))))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 14;i_8 += 1)
                    {
                        {
                            var_24 = (28966 >= 2);

                            for (int i_9 = 2; i_9 < 13;i_9 += 1)
                            {
                                arr_27 [i_5] [i_6] [i_7] [i_7] [i_9] = -var_10;
                                var_25 += (arr_19 [i_6] [5]);
                            }
                        }
                    }
                }
                var_26 |= ((((((arr_23 [i_5] [i_6] [i_6]) ? 1 : var_0)) | (arr_23 [i_5] [i_6] [i_5]))));
            }
        }
    }
    var_27 = var_3;
    #pragma endscop
}
