/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_0 ? (!1) : ((var_4 ? ((215 ? 560046849 : 1)) : (~560046851)))));
    var_11 = (var_0 ^ 13);
    var_12 = ((((var_1 ? ((60057 ? var_6 : -3033160566272758260)) : var_5))) && (((~(!-3033160566272758265)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = (((((!(var_3 >= var_6)))) + (((!(var_3 > var_9))))));
                arr_6 [i_0] = -var_0;
            }
        }
    }
    #pragma endscop
}
