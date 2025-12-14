/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                var_15 = ((((max(117, (max(127, 108))))) ? ((((((117 ? 147 : 1121501860331520))) ? 60840 : (~0)))) : (((~117) ? ((min(213480938, 103))) : (~1121501860331517)))));
                var_16 = 4129892901;
            }
        }
    }
    var_17 = ((((((97 ? 1 : 10)) ? (min(11869056611314209181, -2147483631)) : (min(152, 1340519926490620914))))));
    var_18 = (max(32437, 29652));
    var_19 = 63;
    var_20 = 3006466598;
    #pragma endscop
}
