/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((min((var_1 - var_3), 4294966272)), ((((~17) ? var_9 : (var_3 % -101))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [4] [i_0] = var_7;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_11 = 554457099;

                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            arr_13 [i_0] [i_1] [i_1] [i_1] [i_3] [i_0] [i_4 - 1] = (!var_4);
                            arr_14 [i_0] [i_1] [i_0] [i_0] [i_3] [i_0] [i_4] = (!var_0);
                            arr_15 [5] [i_2] [i_3] [i_0] = (((-79 & var_3) / -554457112));
                        }
                        arr_16 [14] [i_1] [i_2] [i_0] = ((-(arr_1 [i_3] [i_2])));
                    }
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        var_12 = (!13823);
                        var_13 = 3842361550152447248;
                    }
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        var_14 = 78;

                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            var_15 = var_8;
                            var_16 = var_3;
                            var_17 = ((~(arr_22 [i_2])));
                        }
                        for (int i_8 = 1; i_8 < 16;i_8 += 1)
                        {
                            arr_30 [i_0] [i_0] = 34;
                            arr_31 [i_0] [i_0] = (arr_27 [i_6] [i_8] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1]);
                            var_18 = (((-8 >= var_9) <= var_3));
                            var_19 = (((234 <= 94) == var_0));
                            arr_32 [i_0] [i_0] [i_6] [i_8] = ((arr_21 [i_8 + 1] [i_8 + 1] [i_8 + 1]) ? var_5 : (!-4827446965921805058));
                        }
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((arr_35 [i_6] [i_2]) ? var_3 : var_7);
                            arr_37 [i_0] [i_0] [i_0] [i_0] [i_9] = (((arr_29 [i_2] [i_9]) ? var_9 : var_6));
                            var_20 = (arr_7 [i_1] [i_1]);
                        }
                        arr_38 [i_0] = ((13808 % -24) - -554457110);
                        arr_39 [i_0] [i_1] [i_2] [i_6] [i_2] = var_1;
                    }
                    var_21 = (!var_2);
                    arr_40 [5] [i_1] [i_0] = -4463411570665472190;
                    arr_41 [i_0] [i_1] = (((arr_22 [i_0]) ? -554457109 : (arr_20 [i_1] [i_1] [i_1] [i_2])));
                    var_22 = (~var_3);
                }
                for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
                {
                    arr_44 [i_1] [i_1] [i_10] [i_0] = (arr_19 [i_0] [i_0] [i_10] [i_10] [i_1]);
                    arr_45 [i_0] [i_0] = var_1;
                }
            }
        }
    }
    #pragma endscop
}
