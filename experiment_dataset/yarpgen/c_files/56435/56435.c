/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 32640;
    var_21 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        arr_12 [i_0] = (((var_15 ? (arr_4 [i_0] [i_1] [i_3]) : (min((arr_11 [i_0]), (arr_3 [i_1]))))));
                        arr_13 [3] [3] [i_0] [3] = (max(9680289039079529514, (((((arr_4 [i_2] [i_2] [i_2]) ? -40 : 17122017676363870410))))));
                    }
                    var_22 = (((-(arr_3 [i_0 - 2]))));
                }
            }
        }
    }
    #pragma endscop
}
