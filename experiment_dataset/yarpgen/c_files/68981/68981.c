/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_20 = (min(var_20, ((max((((-(arr_5 [i_0 + 1] [1])))), (((arr_0 [12]) - (arr_5 [i_1 + 1] [i_0]))))))));
                var_21 = (max(var_21, (((((min(12, ((674708375 ? 225 : 22720))))) > (max(((var_9 ? 3866046328 : 1029561219)), (arr_5 [i_0] [i_1 + 2]))))))));
            }
        }
    }
    #pragma endscop
}
