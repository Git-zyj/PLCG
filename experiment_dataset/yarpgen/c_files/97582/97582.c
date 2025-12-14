/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = max(var_11, var_4);
    var_13 = (min(var_13, ((((((((0 != (-127 - 1))) ? 4294967294 : (-127 - 1)))) ? ((23 ? var_6 : 6)) : (((!((max(18446744073709551615, 125)))))))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_14 &= ((-((1549369011540286859 ? 1 : 33148))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_15 = arr_4 [i_2] [8] [i_2];
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_16 = min((((-(arr_13 [i_0] [i_1] [i_2] [i_3])))), (arr_14 [i_0] [i_1] [i_0] [i_3] [i_4] [i_2]));
                                var_17 = (max(var_17, ((min((max(8828619083516095130, (arr_5 [i_0] [i_0] [i_1]))), ((((min((arr_4 [i_2] [i_1] [i_0]), (arr_5 [i_0] [i_0] [i_0]))) % 1933700612))))))));
                                var_18 = 0;
                                arr_16 [i_0] [i_2] [i_0] [i_3] [i_2] [7] = (-((-((max(var_7, (arr_10 [8] [i_2] [4])))))));
                            }
                        }
                    }
                }
            }
        }
        var_19 = (min(var_19, ((max((((!(arr_1 [i_0])))), (((arr_3 [i_0]) << (arr_8 [i_0] [i_0] [2]))))))));
    }
    #pragma endscop
}
