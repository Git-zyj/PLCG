/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= (max(((var_9 ? ((1 ? 1 : 1)) : var_15)), (1 - -125)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_7 [i_1] [8] [i_1] = -var_10;
                arr_8 [i_0] [6] = (max((1481107844 & 237), ((((5514584096962178230 ? var_0 : (arr_4 [7])))))));
                arr_9 [13] [i_1] [i_1] = (min((max(((5514584096962178244 ? 1216869031394317585 : var_8)), 118)), -359344499));
                arr_10 [i_0] [14] [1] = ((((max((min(var_10, var_11)), (32767 & 1)))) ? ((var_15 ? 1 : 2813859450)) : 0));
            }
        }
    }
    var_19 = -290592729;
    #pragma endscop
}
