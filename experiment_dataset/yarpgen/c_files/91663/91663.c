/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((~(min((arr_0 [i_0 - 1] [i_0 - 1]), ((1 ? -11243 : 1))))));
        var_15 = ((((max((!var_7), (arr_0 [i_0 - 1] [i_0])))) ? 6 : var_7));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    arr_10 [i_1] [i_3] = (~var_8);
                    arr_11 [i_1] = 0;
                    var_16 = ((var_6 ? (~34) : (arr_6 [3] [i_1])));
                }
            }
        }
        arr_12 [i_1] = ((-53 ? (arr_8 [i_1]) : 9260));

        for (int i_4 = 1; i_4 < 17;i_4 += 1)
        {
            var_17 = (((((-20751 ? (arr_5 [i_1]) : 3083638699))) ? (arr_3 [i_1]) : (arr_7 [i_4 + 3] [i_4 + 3] [i_1])));
            var_18 = (max(var_18, (((-787972141 ? (arr_14 [i_1] [i_1] [i_4 + 3]) : var_8)))));
        }
    }
    var_19 = (max(var_4, var_2));
    #pragma endscop
}
