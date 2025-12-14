/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((var_2 >= (max(var_0, 4294967295))))));
    var_11 = ((((((1703076011 ? var_0 : 8456931952315028938)))) > ((8456931952315028930 ? var_8 : var_6))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 = (max((((-8456931952315028942 == (!48)))), ((var_0 ? (~var_1) : -var_0))));
        var_13 = (max(var_13, var_7));
    }
    for (int i_1 = 3; i_1 < 21;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_9 [i_1] = (((((+(((arr_7 [i_1]) ? var_4 : var_4))))) ? 12578 : ((-17040 * ((var_8 ? (arr_5 [i_1 - 1]) : 32758))))));
            arr_10 [i_1] [i_1] = (!var_1);
        }
        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            arr_14 [i_1] [i_3 + 3] = var_7;
            var_14 = (((arr_3 [i_1]) <= (min(var_6, (arr_12 [i_1] [i_3] [i_1])))));
        }
        var_15 = (min(var_15, (arr_5 [i_1])));

        /* vectorizable */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 4; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_16 = -var_2;
                            arr_28 [i_1] [i_1] [i_5] = ((arr_16 [i_1]) - ((var_4 ? var_3 : 24204)));
                            arr_29 [i_7 + 2] [i_6] [i_1] [i_1] [i_4] [i_1] = (403513053 / -3227795605133323675);
                            arr_30 [i_1] [i_1] [20] [20] [i_7 + 2] [i_6] [i_7 - 2] = var_9;
                        }
                    }
                }
                arr_31 [i_1] [i_1] = (arr_22 [i_1 - 2] [i_1]);
                arr_32 [i_1] [i_1] [i_1] = (((arr_3 [i_1]) ? ((var_4 ? var_9 : (arr_3 [i_1]))) : var_9));
                /* LoopNest 2 */
                for (int i_8 = 3; i_8 < 22;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        {
                            var_17 = (min(var_17, ((((arr_3 [i_9]) >= 7936)))));
                            arr_39 [i_9] [22] [i_1] [i_4] [i_1] [i_4] [i_1 - 2] = (216 ? -268435456 : 3227795605133323674);
                        }
                    }
                }
            }
            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                arr_42 [i_1 - 1] [i_1] [i_10] = -287226416;
                var_18 = (min(var_18, (!-var_2)));
            }
            var_19 = (min(var_19, 4080));
        }
    }
    #pragma endscop
}
