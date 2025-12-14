/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 3350465385;
    var_16 = ((-((((((var_7 ? var_13 : var_14))) <= (min(244, 3350465385)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_0] = (((2732066258 >> 1) ? (((arr_1 [i_0] [i_1]) ? (1 * 1) : (~211))) : (arr_2 [i_1])));
                arr_9 [6] [i_0] [i_1] = (((((min(3437406873, 947346790))) ? -110 : (arr_4 [4] [i_0]))));
                arr_10 [i_0] = (!(arr_4 [i_0] [i_0]));
            }
        }
    }
    var_17 = ((((((var_5 <= (var_9 - var_7))))) ^ ((((3564999270567001578 ? var_4 : var_2)) + 1))));
    #pragma endscop
}
