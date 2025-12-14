/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_20 = (((max(var_16, (arr_3 [i_0] [i_0])))) ? var_18 : (((arr_2 [i_0]) ? (~var_11) : ((var_3 ^ (arr_2 [6]))))));
                arr_4 [18] [18] = (min(((min((arr_2 [3]), var_15))), (((~(8634700201736696350 < 14065331940610264538))))));
            }
        }
    }
    var_21 = (min(var_21, 6129));
    #pragma endscop
}
