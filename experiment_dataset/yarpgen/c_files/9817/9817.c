/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = 65535;
                arr_7 [i_0] [i_0] = (9057476932615550240 - 65511);
            }
        }
    }
    var_19 = -3280004033223025965;
    var_20 = ((var_2 ? ((max(var_4, 3280004033223025965))) : (((-(var_1 >= 38))))));
    #pragma endscop
}
