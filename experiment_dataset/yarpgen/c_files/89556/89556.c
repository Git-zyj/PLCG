/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;
    var_13 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_0] [i_1] [i_0] = ((((((arr_0 [i_0] [i_1 + 2]) >= (arr_8 [i_1 - 2] [i_1])))) == 1));
                    var_14 = ((!(((-(((arr_4 [i_0]) % (-32767 - 1))))))));
                }
            }
        }
    }
    var_15 += ((var_2 ? -var_4 : 3992848010));
    #pragma endscop
}
