/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= var_12;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] = (((-5484767110404925557 ^ 10329336276427730225) > (((((1878469171634448955 || -1) > (min(114692098673357451, 9223372036854775807))))))));
                var_19 = (max(var_19, (((171 > (-9 && -405957876))))));
                var_20 = (max(var_20, ((((119 > 0) / (max(16568274902075102660, 9)))))));
            }
        }
    }
    #pragma endscop
}
