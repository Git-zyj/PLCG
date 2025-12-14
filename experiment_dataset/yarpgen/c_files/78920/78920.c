/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_11 ? (!16804250240708427134) : var_8));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = ((-(min((((arr_1 [9]) ? 1163161804167371918 : var_1)), ((min(32382, var_2)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_0] [3] = (33776997205278720 ? ((-10 ? 18075 : 913332828)) : (arr_0 [i_0]));
                    arr_9 [i_0] [i_0] [i_2] [i_1] = var_16;
                }
            }
        }
        var_19 = (min((min((arr_6 [i_0] [i_0] [i_0]), 913332828)), (arr_6 [i_0] [i_0] [i_0])));
        arr_10 [0] [i_0] = (((arr_0 [i_0]) ? ((var_4 ? ((var_9 ? var_10 : 9)) : ((65535 ? var_10 : (arr_7 [i_0] [i_0] [3]))))) : var_2));
    }
    var_20 *= var_10;
    var_21 &= var_7;
    #pragma endscop
}
