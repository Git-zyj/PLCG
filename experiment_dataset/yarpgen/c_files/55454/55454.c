/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_17 += (((242 - 13) - 13));
                    var_18 &= ((min(13, 0)));
                }
            }
        }
        var_19 -= (13 || 232);
        var_20 |= (min((min(9064186753304788756, 1820377371)), ((min((4080188172 | 19052), (108 < 281474708275200))))));
        var_21 = (214779124 & 13);
        var_22 = (((0 - 242) && (29360 - 214779124)));
    }
    var_23 |= -1;
    var_24 = ((min(0, (171 + 0))));
    var_25 ^= var_8;
    #pragma endscop
}
