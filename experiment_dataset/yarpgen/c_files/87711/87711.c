/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [4] [i_1] [4] = max((((((-2147483647 - 1) + 4962890495746660163)) + (arr_1 [i_0]))), ((min((!160), (arr_1 [i_0 + 1])))));
                var_19 = (((max((((arr_2 [i_0]) - (arr_3 [i_0] [i_1]))), ((((arr_3 [i_1] [i_0]) || -2147483639))))) <= (((max((arr_4 [i_0 + 1]), (arr_1 [i_0])))))));
            }
        }
    }
    var_20 = ((-(var_12 / -var_3)));
    var_21 = ((((min(-var_2, var_5))) && (((-16711680 / ((min(33876, var_13))))))));
    var_22 = -2690735420730843094;
    #pragma endscop
}
