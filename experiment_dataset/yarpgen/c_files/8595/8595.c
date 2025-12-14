/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((!((!(!0)))));
    var_19 = 55288;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_14 [i_0] [1] [i_1] [i_1] [i_3] = (min(((max(((-(arr_8 [i_3] [i_1 - 1]))), 77))), ((~(~var_1)))));
                        var_20 = ((-(((arr_13 [i_1 - 1] [i_1 + 1] [i_2 + 1]) | var_7))));
                    }
                    arr_15 [i_1] = ((~(((-(arr_11 [i_0] [i_1 + 2] [i_2 - 2] [15] [i_2 + 2]))))));
                }
                arr_16 [i_1] [i_1] = (max(((min(var_7, -1))), (min((6318633227853849755 * var_5), var_2))));
            }
        }
    }
    #pragma endscop
}
