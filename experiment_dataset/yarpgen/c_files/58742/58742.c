/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 6;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 8;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1 - 2] [i_2] [i_3] = (((arr_7 [i_2] [i_2]) | 52842));
                        arr_11 [i_0] [i_1] = arr_0 [i_0] [i_0];
                        var_19 = (4294967295 + 248);
                    }
                }
            }
            arr_12 [i_0] [i_1] = (-(var_3 / var_15));
            arr_13 [i_1 - 1] |= (var_8 ^ 255);

            for (int i_4 = 1; i_4 < 7;i_4 += 1)
            {

                for (int i_5 = 4; i_5 < 8;i_5 += 1)
                {
                    arr_20 [i_5] [i_1 + 1] [i_4 + 2] = (arr_5 [1] [1] [1]);
                    arr_21 [i_0] [i_0] [i_5] [i_1 - 3] [i_4] [7] = (((((27235 >> (((arr_5 [i_0] [0] [i_4 - 1]) - 1836751756))))) ? ((244 ? -1 : 3271644871)) : (arr_17 [i_0] [8] [1])));
                }
                var_20 = (min(var_20, ((((24878 >> (3424 - 3397)))))));
                arr_22 [i_0] [i_0] [i_0] = ((-(!2940644062)));
            }
        }
        arr_23 [i_0] = ((1 ? var_17 : (arr_14 [0] [i_0] [i_0])));
    }
    for (int i_6 = 2; i_6 < 17;i_6 += 1)
    {
        var_21 = (min((((!(arr_25 [i_6])))), var_13));
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                {
                    arr_33 [i_7] [i_7 + 3] [i_7] [i_7] = ((-(min((arr_26 [6]), (arr_32 [i_6 + 1] [i_7] [i_6 - 2])))));
                    arr_34 [i_7] [i_7] [i_7] = 7;
                }
            }
        }
        var_22 = (arr_26 [i_6]);
    }
    var_23 = ((-(max(0, (-9223372036854775807 - 1)))));
    var_24 = var_10;
    #pragma endscop
}
