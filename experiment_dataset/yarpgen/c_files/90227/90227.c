/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1] = (((((1486224517 ? 2147483647 : (-2147483647 - 1))))) << 0);
                var_13 = ((+(((0 >= 54407) - 2147483647))));
                var_14 = 2147483647;
            }
        }
    }
    var_15 = 0;
    var_16 = ((((19221 ? (((2041631140 ? -1 : 0))) : ((0 ? -21241 : 3723617352))))) + ((((1 ? -25345 : 7953159983928493317)) + 1173466839480910146)));
    #pragma endscop
}
