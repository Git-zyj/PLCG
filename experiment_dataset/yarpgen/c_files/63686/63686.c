/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_19 = (max((~-1844177358971041748), ((14390627006991967745 * (min(4056117066717583858, 15775557256492156242))))));
                arr_5 [i_0] [i_0] = (!((min(-85682468, 18446744073709551615))));
            }
        }
    }
    var_20 = ((~(((((18062664321233959466 ? 2715590081306765690 : 24693))) ? ((min(2782256604, 127))) : ((-1844177358971041748 ? 17779073209780248803 : 4142645651))))));
    #pragma endscop
}
