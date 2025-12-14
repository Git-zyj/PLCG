/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_1] = (max((2083164493 != 1838587387), (((-191652114 ? var_9 : -441)))));
                    var_10 += ((-((31 ? -65493 : var_4))));
                }
            }
        }
    }
    var_11 += (((!var_5) ^ (((~456802160) ? var_2 : (((56 ? 243 : -120)))))));
    #pragma endscop
}
