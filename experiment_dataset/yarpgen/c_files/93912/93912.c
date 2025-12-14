/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 1391539507;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_12 = (max((!0), ((-1391539507 ? 16384 : (arr_1 [i_1])))));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_13 = 17781892901040668281;
                            var_14 = (max(var_14, 48));
                        }
                    }
                }
                var_15 = 3035097406024899435;
                var_16 = (max(15411646667684652180, ((max(var_9, 17849)))));
            }
        }
    }
    var_17 = (!5183000769808472878);
    #pragma endscop
}
