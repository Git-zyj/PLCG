/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_12, (((((min(15, 164298112))) <= var_4)))));
    var_18 = (min(var_18, 164298103));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_0] = (min(((min(164298103, 164298088))), ((-164298100 ? 7550736060039212100 : -24))));
                    arr_9 [i_0 + 1] [i_0] [i_0] = (((((((2 ? 164298112 : 0)) ^ ((4140897939 ? -164298118 : 0))))) | ((14680064 >> (((max(164298117, -164298117)) - 164298116))))));
                }
            }
        }
    }
    #pragma endscop
}
