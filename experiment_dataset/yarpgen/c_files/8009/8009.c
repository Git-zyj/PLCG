/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_6 == ((min(((min(var_1, var_8))), (max(var_3, var_3))))));
    var_13 ^= var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_14 = (max(var_14, ((min(-var_10, (((min(var_2, var_10)) / (((-1 ? -1 : 32759))))))))));
                var_15 = (((((~(((!(-2147483647 - 1))))))) ? ((max((min(-32759, 65519)), -32759))) : 112));
                var_16 ^= (min((max(((max(var_1, var_0))), (var_9 ^ var_10))), var_0));
            }
        }
    }
    var_17 = ((((max(var_5, -var_8))) ? var_11 : (((((((0 ? -1570133503 : 6))) || var_5))))));
    #pragma endscop
}
