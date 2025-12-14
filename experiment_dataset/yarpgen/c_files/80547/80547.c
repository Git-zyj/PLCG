/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((min(((~(19455 <= 16384))), var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_15 &= (((var_2 && (((var_7 >> (var_13 - 4298709445580010401)))))) ? (((((((16384 | (arr_3 [17])))) && var_9)))) : (667292657 >= 16384));
                var_16 = min((min(49162, (49155 + 16384))), (((49136 && (((49151 | (arr_4 [i_0] [i_0]))))))));
                var_17 = ((!(((((arr_3 [i_0]) || var_12)) && var_6))));
            }
        }
    }
    #pragma endscop
}
