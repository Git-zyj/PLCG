/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(((min((max(var_3, var_3)), ((max(var_0, var_0)))))), (min(((min(0, var_13))), (max(var_8, 817616018335079728))))));
    var_17 = (min((min(((max(var_11, var_9))), (max(var_1, var_1)))), ((min(((min(246, var_0))), (min(var_15, var_11)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_18 += (min((min((min(9, (arr_0 [i_0]))), ((min(var_13, var_4))))), (max(((max(0, var_7))), (min(-3634406765608744238, var_15))))));
                            var_19 -= (min((min(((max(189, var_3))), (min(6279033958965603314, 41)))), ((min(((min((arr_7 [i_3] [i_3] [i_3] [i_3]), 4))), (min(216, (arr_2 [i_1] [1]))))))));

                            for (int i_4 = 0; i_4 < 11;i_4 += 1)
                            {
                                var_20 = (max(var_20, ((min((min(((max((arr_11 [i_4] [i_1 + 2] [i_2] [i_3] [i_1 + 2] [i_4] [i_2]), var_13))), (max(var_14, 9)))), (min((max(38, 4064)), ((max((arr_12 [3] [i_1] [i_2] [i_1] [i_4]), (arr_7 [i_0] [i_1] [i_0] [i_3])))))))))));
                                var_21 = (min((min(((max((arr_1 [i_0]), var_13))), (min(61470, var_1)))), ((max((min((arr_4 [i_0] [i_1] [i_3] [i_4]), (arr_11 [i_0] [i_0] [i_0] [i_2] [i_3] [i_3] [i_4]))), ((min(62345, (arr_11 [i_0] [i_1] [1] [i_2] [i_2] [i_3] [0])))))))));
                                var_22 &= (min((min((min(var_1, var_2)), ((min((arr_1 [i_2]), 181))))), ((min((min(var_3, var_12)), (min(var_14, var_15)))))));
                                arr_13 [i_0] [i_0] [i_1] [i_2] [i_2] [i_0] [i_4] = (min((max((max((arr_8 [i_0] [5] [i_2] [1]), -6279033958965603324)), (max(-2199128841179687621, 194)))), (min((min((arr_0 [i_3]), (arr_5 [i_0] [i_0]))), ((max(451, 36678)))))));
                                var_23 = (max((min((min(-6279033958965603294, 4064)), -4909052706647928352)), 191));
                            }
                            arr_14 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3] &= (min((max(((max(var_2, (arr_1 [i_0])))), (min(56495, 12186171026874031714)))), (max((min(var_1, var_15)), ((min(0, var_8)))))));
                        }
                    }
                }
                var_24 = (max((max((min(var_3, var_9)), (max((arr_3 [i_0]), 26)))), (min(((max((arr_11 [i_0] [i_0] [i_0] [i_0] [1] [i_0] [i_1]), 0))), (max(var_14, var_13))))));
            }
        }
    }
    #pragma endscop
}
