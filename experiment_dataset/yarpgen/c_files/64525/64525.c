/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_18 -= (max((((arr_7 [i_0] [i_0] [i_1]) & (~36528))), 65535));
                var_19 = ((12199875399184356413 ? (((max(65526, -1821509334)))) : ((((!(arr_1 [i_0]))) ? (min(-5619195026364886823, (arr_6 [i_0] [i_0] [i_0]))) : (arr_4 [i_0] [i_1])))));
            }
        }
    }
    var_20 = ((!((min(var_13, 5619195026364886824)))));
    var_21 = (11 != 65534);
    #pragma endscop
}
