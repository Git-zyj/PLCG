/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_14 ? var_18 : ((600273855375385403 << (((var_8 & var_18) - 2150762781))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                var_20 = 600273855375385423;
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        {
                            var_21 = (~6194913687448843164);
                            arr_13 [i_0] [i_0] [i_1] [i_4] = var_12;
                            var_22 = (((4431573918993839855 != var_4) != var_18));
                        }
                    }
                }
                var_23 = (arr_3 [i_1] [i_1 + 2]);
                arr_14 [i_1] [i_1] [i_1] = var_4;
            }
            arr_15 [12] [12] [i_1] = var_11;
            var_24 = -6194913687448843172;
        }
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            var_25 |= var_16;
            arr_18 [i_0] = (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
            var_26 = (min(var_26, (((max(var_17, var_3)) | (((min((arr_4 [i_0] [i_0] [i_0] [i_0]), var_15))))))));
        }
        arr_19 [i_0] [i_0] = (arr_1 [i_0]);
    }
    var_27 = (max(var_12, var_3));
    var_28 = var_16;
    #pragma endscop
}
