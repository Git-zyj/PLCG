/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_19 = (max((((!(arr_1 [i_0])))), ((-(!27562)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {

                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            var_20 = (max((arr_8 [i_4 - 2] [i_4 - 2] [i_4 - 2] [3] [i_4]), (arr_8 [i_4 - 2] [i_4] [i_4] [i_4] [i_4])));
                            arr_11 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((((max(-3004, (arr_6 [i_1] [i_3] [i_1] [i_1])))) || ((max((arr_7 [i_0] [i_1] [i_2] [9]), (((arr_10 [i_0] [i_0] [i_1] [i_1] [i_0] [i_3] [i_4 + 1]) ? var_18 : (arr_10 [3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))))))));
                            var_21 *= (((((arr_10 [1] [5] [5] [i_4] [i_4 - 2] [0] [0]) ? (arr_10 [i_4] [i_4] [i_4] [i_4] [i_4 - 2] [i_4 - 1] [i_4]) : var_18)) / ((~(arr_10 [7] [i_4] [7] [7] [i_4 - 1] [i_4] [5])))));
                        }
                        arr_12 [5] [3] = (((((arr_3 [i_0]) || (arr_3 [i_3]))) ? (((arr_3 [i_0]) >> (((arr_3 [i_2]) - 61508)))) : ((3049 << (9234 - 9227)))));
                        var_22 = ((~((~(arr_8 [3] [3] [i_1] [i_2] [i_3])))));
                        var_23 = ((((((!(arr_9 [7] [i_1] [i_1] [i_1] [i_1]))))) / ((-(arr_3 [i_3])))));
                    }
                }
            }
        }
    }
    var_24 = (!3047);
    var_25 = ((~(((((var_10 ? (-32767 - 1) : var_13)) > var_5)))));
    #pragma endscop
}
