/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_18 = (max(var_18, ((((((254 ? 1 : 266945380))) ? 9007199254675456 : (((-1 ? 1 : ((1 ? 1 : 26))))))))));
                var_19 = ((!(((4294967291 ? 1 : ((-2029692853 ? 51072 : 2029692853)))))));
                var_20 &= ((((max((max(-2029692860, -2029692839)), ((max(1, 1)))))) ? (((max(1, 1)))) : (((!0) ? (((140733193388032 ? 16711680 : 61539))) : (min(0, 1))))));
                var_21 = (((~((max(1, 1))))));
                var_22 = 1;
            }
        }
    }
    var_23 = 1;
    var_24 = (max((min(((124 ? 1 : 4611686018427387904)), 154)), (((((max(65535, 1))) ? (min(729725298, 0)) : ((1073741822 ? 2097152 : 5)))))));
    #pragma endscop
}
