/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((max(((-(arr_1 [i_0]))), ((61 * (arr_0 [i_0]))))));
        arr_3 [1] [i_0] = ((min(2047, (61 < 1))));
        var_10 *= (0 + 10144);
    }
    var_11 = ((!(+-7977)));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            {
                arr_8 [i_1] [i_1] [0] = (arr_7 [i_1] [i_2] [i_1]);
                /* LoopNest 2 */
                for (int i_3 = 3; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        {
                            var_12 = (min(var_12, (((-((-var_7 * (-9 == 15115))))))));
                            arr_13 [i_1] [i_1] [i_3] [i_1] [i_1] = ((((((var_9 / var_5) ? (((min(var_4, (arr_11 [1] [1] [i_3 - 3]))))) : (arr_10 [i_3 + 2] [i_3] [i_3 - 3] [i_3 - 1])))) ? (max((((arr_1 [i_2]) ? (arr_10 [i_1] [i_3] [i_3] [i_4]) : 178)), (arr_10 [i_1] [i_3] [i_1] [i_4]))) : (max((arr_4 [i_4]), (var_7 * -71)))));
                        }
                    }
                }
            }
        }
    }
    var_13 = ((!(((((var_3 ? var_9 : var_0))) < var_2))));
    var_14 = (max(var_14, (((!var_7) * ((2036 % ((173 ? 16174082969097501184 : var_4))))))));
    #pragma endscop
}
