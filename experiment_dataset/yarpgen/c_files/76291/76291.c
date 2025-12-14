/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 23;i_2 += 1)
            {
                {
                    var_20 = ((-2410 ? ((((6 ? 375900079 : var_6)))) : ((~(max((arr_4 [i_0] [i_0] [i_0]), 22))))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = (max(3381190721, 3919067230));
                    var_21 = (min(var_21, ((((max(var_4, (arr_1 [i_2 + 2] [i_2 - 3]))))))));
                    var_22 *= -0;
                }
            }
        }
    }
    var_23 *= (((((((min(-12926, 47579))) ? 60087 : 1))) - (max(var_13, var_1))));
    #pragma endscop
}
