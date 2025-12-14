/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((248 ? 32 : -6906704067465097815)) - var_15));
    var_18 = (max((!53678846), ((((3048855108 ? 6906704067465097793 : 32)) + (((min(508, 1))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = (6906704067465097800 | 6906704067465097813);
                var_20 = ((min((9223372036854775807 || 1), (min(-1133442133, -3680744739219346679)))));
            }
        }
    }
    var_21 = ((var_4 ? (-6906704067465097809 && -19) : ((((~-26292) != (max(-1133442136, 0)))))));
    #pragma endscop
}
