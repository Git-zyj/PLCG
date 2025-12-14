/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [1] = ((((max(((max(0, (arr_2 [i_0])))), ((var_12 ? 1 : 1))))) ? var_10 : ((((max(0, (arr_0 [i_2] [i_1])))) ? var_3 : (arr_2 [i_0])))));
                    arr_10 [i_0] = max((max(var_1, (min((arr_8 [i_0] [i_1 + 1] [i_0]), (arr_1 [i_0]))))), (((max((arr_0 [i_0] [i_2]), 56)))));
                }
            }
        }
    }
    var_14 *= var_4;

    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_15 = max(var_8, 1);
        var_16 = (!(~1));
    }
    #pragma endscop
}
