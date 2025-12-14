/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 4;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (18446744073709551615 - 192231643385921906);
                arr_6 [i_0] [i_0] [i_0] = (((3 - var_7) / ((62333 ? 8 : 18254512430323629709))));
                arr_7 [i_0] = ((-(var_7 + var_5)));
                var_14 = (((((max((arr_0 [i_0]), var_11)) - -2410144420014453307)) * (((min(28321, (!-93)))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 12;i_3 += 1)
        {
            {
                var_15 = (((!var_6) * (((-var_4 || ((var_8 <= (arr_0 [i_2]))))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {

                            for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                            {
                                var_16 = 65535;
                                var_17 = (max((((arr_16 [7] [i_3] [i_3 - 3] [i_3 - 1]) % (min(var_12, var_7)))), var_7));
                                arr_25 [i_2] [i_3] = (max(var_3, (3957752 == var_5)));
                                var_18 = ((-((~((var_3 ? (arr_11 [i_2] [i_3] [2]) : (arr_20 [i_2] [i_2] [i_3] [i_2] [i_3] [i_6])))))));
                            }
                            for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                            {
                                var_19 = (min(var_19, ((((max(3957752, (~192231643385921906))) | (max((max(0, var_4)), (~var_2))))))));
                                var_20 = (max(var_20, ((max(((-(arr_28 [i_2] [i_3 - 3] [i_3] [i_7] [10] [i_3 - 1] [i_3]))), ((~(((arr_0 [i_2]) & var_6)))))))));
                                var_21 = (!(!var_3));
                                arr_30 [i_5] [i_5] [i_3] [i_5] = ((-(min((arr_23 [i_3 - 2] [i_3] [4]), 18254512430323629716))));
                                var_22 = (var_3 ? var_0 : (((192231643385921906 || 11) ? (min(18446744073709551615, var_3)) : var_10)));
                            }
                            var_23 = (max(var_23, ((max((((~var_8) ^ 362305721772375028)), -var_0)))));
                            var_24 = var_8;
                            var_25 = ((-((((max(192231643385921921, var_10))) ? (((arr_26 [i_2] [i_3] [i_3]) / var_12)) : var_12))));
                        }
                    }
                }
                var_26 = (max(var_26, (arr_13 [i_2])));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        {
                            var_27 = (min((min(-24, 8)), (((-181 * ((var_4 ? var_10 : 4294967285)))))));
                            var_28 = ((-(((((var_3 ? (arr_4 [i_2] [i_9]) : var_9))) ? (~11) : (((var_6 ? (arr_1 [i_2]) : var_11)))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
