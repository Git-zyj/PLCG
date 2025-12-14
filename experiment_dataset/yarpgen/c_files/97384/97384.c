/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, ((max(((max(var_7, var_5))), (max(7, 18446744073709551608)))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = (((((((var_9 ? var_6 : 146))) >= ((-2994681512113572564 | (arr_0 [19]))))) ? (((max(1, 18446744073709551613)) ^ (max(var_2, 18446744073709551606)))) : ((min((((18446744073709551595 ? -1 : var_1))), (max((arr_0 [1]), (arr_1 [i_0]))))))));
        var_13 = (min((arr_2 [i_0]), ((-(max(9, 2))))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 23;i_3 += 1)
            {
                {
                    arr_12 [i_1] [i_2] [i_2] [i_3] = ((!(((-(arr_8 [i_3 - 1] [9]))))));
                    var_14 = ((((min((arr_8 [i_3 + 2] [i_3 + 2]), (arr_5 [i_3 + 2])))) ? (arr_5 [i_3 + 2]) : (arr_5 [i_3 + 1])));
                    arr_13 [22] [i_1] [i_1] [i_1] = arr_4 [i_1];
                }
            }
        }
        arr_14 [1] [1] = (min(1, 18446744073709551598));
        arr_15 [i_1] [i_1] = (arr_5 [i_1]);
    }
    #pragma endscop
}
