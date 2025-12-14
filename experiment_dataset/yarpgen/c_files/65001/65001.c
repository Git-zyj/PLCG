/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~var_1);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_17 = ((((var_10 ? (arr_2 [i_0]) : (-127 - 1))) >= (min((arr_2 [i_0]), ((min(29522, (-127 - 1))))))));

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_18 = (arr_1 [i_0] [i_0]);
                    arr_8 [i_0] [i_1] [i_1] = (min(((min(1, 332813867))), (min((arr_3 [i_0 + 1] [i_0] [i_1]), var_11))));
                    arr_9 [i_0] [i_1] [i_1] = ((~((-14625 - (arr_0 [i_2])))));
                    arr_10 [i_1] [i_1] [i_2] = (min(((var_10 ? (arr_1 [i_0 - 2] [1]) : (arr_4 [i_0 + 2]))), (((1622220633 != (arr_4 [i_0 - 2]))))));
                }
                var_19 = ((-((min((arr_7 [4] [0] [i_0 - 1]), -30327)))));
            }
        }
    }
    var_20 = var_13;
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 19;i_4 += 1)
        {
            {
                var_21 = (max(var_21, (((~((min(var_11, (arr_6 [i_3] [2] [9])))))))));
                var_22 = var_13;
                arr_16 [i_3] [i_3] [i_3] = (arr_12 [i_3]);
            }
        }
    }
    #pragma endscop
}
