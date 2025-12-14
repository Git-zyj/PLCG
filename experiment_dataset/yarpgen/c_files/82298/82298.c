/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_19 = (min(var_19, (~var_8)));
                            var_20 = (min((((!(arr_9 [i_0] [i_0] [i_0] [i_0])))), ((((var_17 == (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]))) ? var_10 : (min((-9223372036854775807 - 1), var_18))))));
                            arr_10 [i_0] [i_0] [i_0] [i_0] = (min(var_11, var_11));
                            arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((-2960122029291342468 ? var_13 : -2079709933)) ^ (((!1) ? (var_8 == -25966) : ((95 ? (arr_6 [i_0] [i_0] [i_0] [i_0] [i_0]) : var_17))))));
                        }
                    }
                }
                arr_12 [i_0] [i_0] = 104;
                arr_13 [i_0] [i_0] = ((((min(60808, (arr_2 [i_0] [i_0] [i_0])))) ? (min((arr_2 [i_0] [i_0] [i_0]), var_1)) : var_17));
                var_21 = ((((((!(arr_0 [i_1]))))) + (min((arr_0 [i_0]), (arr_0 [i_1])))));
            }
        }
    }
    var_22 = ((-(((!(((118 ? 4426 : 17172550919703278709))))))));
    #pragma endscop
}
