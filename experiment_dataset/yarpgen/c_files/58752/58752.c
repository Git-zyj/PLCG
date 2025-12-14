/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_17 |= ((((((var_6 ? 52287 : 4458527299746650231)) << var_15)) ^ 8801699007254821538));
        var_18 = (max(var_18, (((arr_2 [9]) ? ((((!((1746984131 <= (arr_2 [i_0]))))))) : (max(1746984122, 13988216773962901384))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_19 |= ((-(((arr_1 [i_3]) + ((((arr_2 [i_2]) > (arr_5 [i_0]))))))));

                        for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
                        {
                            var_20 += ((+((max((arr_1 [i_3]), (arr_1 [i_3]))))));
                            var_21 -= (arr_3 [i_3]);
                            var_22 = (max(var_22, ((((arr_11 [i_0 + 1] [i_0 - 1] [i_0 - 1]) ? -4189037028216085894 : (((((arr_10 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 - 1]) < (arr_9 [i_3] [i_0 - 1] [i_0 - 1]))))))))));
                            var_23 ^= 15180;
                        }
                        for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                        {
                            arr_14 [i_0] [3] [i_0] [i_3] [i_5] = (arr_1 [i_0]);
                            var_24 *= ((((arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]) ? var_7 : 12601)) < (arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1]));
                            var_25 = var_12;
                        }
                    }
                }
            }
        }
    }

    for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
    {
        arr_18 [i_6] = (!var_12);
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    {
                        arr_27 [i_6] [i_7] [i_7] [10] [i_7] = ((-(((arr_25 [13] [i_7] [i_7] [i_7]) - var_12))));
                        var_26 = (~4294967295);
                        var_27 ^= (min(((min(((max(var_0, -23719))), ((6327056763057344804 ? 52 : 5700))))), var_14));
                    }
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
    {
        var_28 = ((-((-(((arr_30 [i_10]) ? 34 : var_7))))));
        var_29 = (((((var_2 <= (arr_19 [i_10]))) ? ((var_6 - (arr_19 [i_10]))) : var_0)));
    }
    #pragma endscop
}
