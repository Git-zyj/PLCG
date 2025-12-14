/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_19 = min((max((((arr_0 [i_0]) ? (arr_0 [i_0]) : var_12)), (arr_0 [i_0]))), (max((arr_0 [i_0]), (3664896324 - var_11))));
        arr_4 [i_0 - 1] [1] = ((((((arr_2 [i_0 - 1] [i_0]) ? (arr_3 [5] [5]) : (arr_1 [i_0 + 1] [i_0 - 2])))) ? (((arr_3 [i_0] [i_0]) ? (arr_2 [i_0 - 1] [i_0]) : (arr_3 [i_0 + 1] [i_0 - 1]))) : (arr_1 [i_0 - 2] [i_0 - 2])));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 7;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 9;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 6;i_5 += 1)
                        {
                            {
                                arr_19 [i_1] [i_2 + 1] [i_1] [i_4] [i_5 + 3] = (min((((max(var_4, (arr_7 [i_5] [i_5 - 2] [i_5]))) / (arr_5 [i_1]))), (((1981875464 != (arr_0 [i_3 - 2]))))));
                                var_20 = (arr_16 [0] [i_2 + 2] [5] [i_2 + 1] [i_2 + 1]);
                            }
                        }
                    }
                    var_21 = ((!((((arr_10 [i_2 - 2] [i_2 - 2]) + (arr_10 [i_2 + 3] [i_2 + 3]))))));
                    arr_20 [i_1] [i_1] [i_1] &= (((min(8575388922516639644, (arr_0 [i_1])))));
                }
            }
        }
    }
    var_22 |= (((max((min(var_10, var_4)), -0)) | (var_13 << var_14)));
    #pragma endscop
}
