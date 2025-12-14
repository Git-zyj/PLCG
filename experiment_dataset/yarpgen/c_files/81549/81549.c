/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max((max(44598, ((31744 ? 3230201923 : 18446744073709551615)))), (((((6 ? -3827256989728023874 : 64891))) ? (max(0, 16600973196549910762)) : (((650 ? -13868 : 1)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_21 = ((((min(80, 0))) ? (!120) : (!1)));
                    var_22 ^= (((((1 ? 34915 : 1))) ? 1 : (max(1, 425))));
                }
            }
        }
    }
    var_23 &= (((((3830199758435757154 ? (((1 ? 127 : 1))) : (((-9223372036854775807 - 1) - -1))))) ? (~var_11) : ((((((13865 ? 1 : -1))) ? (!-13871) : (30522 & 127))))));
    #pragma endscop
}
