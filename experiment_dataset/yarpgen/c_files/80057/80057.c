/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_17;

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_2 [14] = (max((((arr_1 [1]) ? (arr_1 [i_0]) : (3034972841 - 3019403085))), (arr_0 [i_0] [i_0])));
        var_20 += ((!((((((14 && (arr_0 [i_0] [1]))))) == ((0 ? var_5 : (arr_1 [i_0])))))));
        var_21 = arr_1 [5];
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = (arr_4 [i_1]);
        arr_6 [i_1] = (max((arr_3 [i_1] [i_1]), ((max(41365, (arr_0 [i_1] [i_1]))))));
        var_22 = (max(var_22, ((max(-100, (max((max((arr_0 [i_1] [i_1]), 249)), ((((arr_0 [i_1] [i_1]) > 2409918098))))))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    {
                        arr_14 [i_1] [i_1] [i_1] = ((~((-(arr_13 [15] [15])))));
                        var_23 = (max(var_23, (arr_10 [i_2])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
