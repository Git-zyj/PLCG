/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (8692376333607327353 ? -15279 : 5992803213008877290);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_19 = (((((((arr_1 [i_0]) < (arr_1 [i_1]))))) == -885969277));
                var_20 = (arr_4 [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_21 = (max(var_21, (arr_2 [i_0] [i_1])));
                            var_22 = (((-(((var_14 != (arr_7 [i_0] [i_1] [i_2])))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
