/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_15 = (((max((arr_2 [i_1]), (arr_2 [i_0])))) ? ((((arr_1 [i_0] [i_0]) <= (arr_3 [i_0] [i_0])))) : ((1 | (arr_5 [i_0]))));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_16 = ((((var_4 ? (arr_3 [i_0] [i_0]) : (arr_0 [i_0]))) ^ (((((1 ? var_1 : var_9)) / (min(-446, (-9223372036854775807 - 1))))))));
                    var_17 = ((((((min(1, 0)) ? (((min(0, -446)))) : ((-469 ? 1342931788062663795 : 1))))) ? 14151806022011606871 : -17914));
                }
            }
        }
    }
    var_18 = (!var_7);
    #pragma endscop
}
