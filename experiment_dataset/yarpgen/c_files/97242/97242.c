/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= ((3840 ? 3842 : var_14));
    var_16 = ((((!(var_1 || var_0))) ? ((((var_1 || (((var_3 >> (var_13 + 1413448156)))))))) : var_12));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_17 = (((((~125) || (arr_2 [i_1] [10]))) ? ((3822 ? ((max(var_3, (arr_0 [i_0])))) : 0)) : (arr_0 [i_0])));
                arr_5 [i_1] [i_1] [i_1] = (((~(arr_2 [4] [13]))));
            }
        }
    }
    var_18 = -3845;
    #pragma endscop
}
