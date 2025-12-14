/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_18 += 5456;
                var_19 ^= ((886228646 * (((~26402) & 3404347478))));
            }
        }
    }
    var_20 &= (min(8983323445960663736, (((9463420627748887855 / 9463420627748887880) << 53))));
    var_21 = (min(var_21, ((((55 << (8943246049301192975 - 8943246049301192961)))))));
    var_22 = (min((((!(!5532)))), ((min(7329922156397317619, 1)))));
    #pragma endscop
}
