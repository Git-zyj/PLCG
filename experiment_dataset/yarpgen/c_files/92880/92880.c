/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_21 = (((-(arr_6 [i_2] [i_0] [i_1] [i_0]))));
                    arr_8 [i_0] [6] [i_0] = (((arr_1 [i_0]) ? ((((!(arr_7 [i_0] [i_1] [i_1] [i_0]))))) : ((-(arr_3 [i_1] [i_1])))));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_1] [i_1] [i_2 + 1] [i_3] = (((((((arr_6 [i_0] [i_0] [i_0] [i_0]) ? (arr_9 [i_0] [i_2] [i_0] [3]) : (arr_0 [i_0] [i_0])))) ? ((-(arr_0 [i_0] [i_0]))) : (((arr_4 [i_0]) / (arr_4 [i_0]))))));
                        var_22 = (arr_9 [i_0] [5] [i_2] [i_2]);
                        var_23 ^= ((((!(arr_2 [i_2 + 2] [i_1])))));
                    }
                    var_24 = 11874;
                }
            }
        }
    }
    var_25 = (var_7 ? -90 : var_17);
    var_26 -= var_1;
    var_27 -= ((~(((!var_17) ? (var_1 != var_13) : var_10))));
    #pragma endscop
}
