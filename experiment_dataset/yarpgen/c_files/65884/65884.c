/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_2));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_8 [i_1] [i_1] = (((arr_3 [i_0 + 1] [i_0 - 1]) % (-32767 - 1)));
                arr_9 [i_0 + 1] [12] [i_1] = (((5588860181386428944 ? var_6 : ((8802667573282995943 ? 21164 : 7)))));
                arr_10 [i_1] [i_1] = ((-(!259515097361677045)));
                var_13 = (min(var_13, (((-(41523 / 7466886399980851793))))));
            }
        }
    }
    #pragma endscop
}
