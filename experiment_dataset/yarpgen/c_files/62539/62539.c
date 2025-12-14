/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_13 += ((max(((var_3 ? var_4 : (arr_2 [i_0]))), (~-1))));
                arr_6 [i_0] [i_0] = 2828454881;
            }
        }
    }
    var_14 = (min(((var_8 ? (4294967290 < var_6) : ((133955584 ? 255 : 22496)))), ((((var_1 ? (-127 - 1) : 4161011712))))));
    #pragma endscop
}
