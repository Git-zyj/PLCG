/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 = (max((!4171062300), ((((min(14330750033897376802, 4384727668024269215))) ? 14062016405685282400 : 516096))));
                    var_16 = ((108 && ((max((arr_3 [i_1 + 1] [i_1] [i_1 + 1]), (arr_2 [i_1 - 2] [i_1 - 1] [i_1 - 3]))))));
                }
            }
        }
    }
    #pragma endscop
}
