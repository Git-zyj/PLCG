/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    var_11 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_12 = 18121850900504541217;
                arr_6 [i_0] [i_0] [i_0] = (((((var_7 && 49031) >> (-1753985263 + 1753985267)))) | 17934945426848284072);
                var_13 = 324893173205010390;
            }
        }
    }
    var_14 |= ((!(!var_2)));
    #pragma endscop
}
