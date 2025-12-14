/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_7, (!var_17)));
    var_20 = ((((min(-5910419350277860684, ((max(18273, 255)))))) || ((max(var_14, (-18273 - 1185858014))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_21 -= (!-2995);
                var_22 &= (max((arr_0 [i_0 - 1]), ((min((arr_0 [i_0 + 1]), (arr_4 [i_0 + 1] [i_0 + 1]))))));
                arr_6 [i_1] = (((80 - 15) ? (min(3208079338398323049, ((min(1, 26672))))) : ((min(56, 56)))));
            }
        }
    }
    #pragma endscop
}
