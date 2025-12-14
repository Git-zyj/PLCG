/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(((~((max(-92, 92))))), 731095867));
    var_14 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_1] [i_2] [i_3] = (((min(var_4, var_11)) <= (((((!(arr_8 [i_0] [i_1] [i_1] [i_1]))))))));
                            var_15 = (max((-47 && 11587387757466166549), 2314436020));
                            var_16 = ((((arr_6 [i_0] [i_0] [i_1] [i_2] [i_3]) ^ 5638807838405514600)));
                            var_17 = -7707022324790380648;
                            var_18 += ((((-69 ? (((max((arr_1 [i_0]), -17853)))) : (4027768301 ^ var_9))) == var_5));
                        }
                    }
                }
                var_19 = (min(var_19, var_11));
                var_20 = (max(var_20, ((((4654070667329003599 - var_12) % ((((arr_0 [i_0]) ? (arr_3 [i_0] [i_1] [i_0]) : 5638807838405514600))))))));

                for (int i_4 = 1; i_4 < 10;i_4 += 1)
                {
                    arr_13 [i_1] [i_4] = ((((((((arr_8 [i_0] [3] [i_0] [i_4 + 1]) ? -7143 : var_6))) ? (var_5 % var_11) : (arr_1 [i_0]))) * 1464037829));
                    var_21 = 23551;
                    var_22 = (((arr_4 [i_4 + 1] [i_4 + 1] [i_4 + 1]) ? (((arr_5 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 + 2]) ? (arr_4 [i_4 + 2] [i_4 - 1] [i_4 + 4]) : (arr_4 [i_4 + 2] [i_4 - 1] [i_4 + 4]))) : (((arr_4 [i_4 + 1] [i_4 - 1] [i_4 - 1]) ^ (arr_5 [i_4 - 1] [i_4 - 1] [i_4 + 2] [i_4 + 3])))));
                    var_23 = ((731095873 <= ((-(arr_8 [7] [7] [i_4] [i_4 - 1])))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_24 = (max(9, (min(-7707022324790380655, 69))));
                                var_25 = (min(var_25, (((!(!-var_9))))));
                                var_26 &= (arr_10 [i_6] [i_1] [i_4 + 3] [i_4 - 1]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
