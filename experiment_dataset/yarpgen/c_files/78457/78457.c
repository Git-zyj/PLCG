/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= ((((((!((min(var_14, var_12))))))) + (((max(var_0, var_3)) - -var_4))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [15] = (min((min((arr_5 [i_0] [i_1]), (arr_5 [i_0] [i_1]))), (arr_5 [i_0] [0])));
                arr_7 [i_0] [i_0] [i_1] = (max(((min((arr_0 [i_0] [i_1]), (arr_3 [i_0])))), (min(((~(arr_1 [i_0]))), (((!(arr_0 [i_0] [i_1]))))))));
            }
        }
    }
    #pragma endscop
}
