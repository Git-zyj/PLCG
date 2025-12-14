/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, ((min(var_5, ((-((1 ? var_16 : var_4)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0] = (arr_2 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_1] [i_0] [1] [10] [i_3] = ((((((arr_8 [i_2] [i_2] [i_2] [i_2 + 2]) >= var_8))) - var_1));
                            var_18 = (((((78 == (arr_11 [i_2 + 1] [i_2 + 3] [i_2 + 2] [i_2 + 1] [i_2 + 2] [i_2 - 1])))) / (arr_8 [i_2 + 1] [i_2 + 3] [i_2 + 2] [i_2 + 1])));

                            for (int i_4 = 3; i_4 < 12;i_4 += 1) /* same iter space */
                            {
                                var_19 = ((-79 ? 73 : -97));
                                var_20 = ((((((102 * var_2) ? (2982944222 < var_7) : (18010456205406930924 >= var_7)))) / (min(((((arr_6 [i_0] [i_0]) != 0))), (((arr_10 [0] [5] [5] [i_3]) ? (arr_1 [i_1]) : 1))))));
                            }
                            for (int i_5 = 3; i_5 < 12;i_5 += 1) /* same iter space */
                            {
                                arr_21 [i_0] = (arr_4 [i_0]);
                                var_21 ^= ((!((max(var_5, (arr_20 [i_0] [i_1] [i_5] [i_1] [i_5]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (min(var_12, 21));
    #pragma endscop
}
