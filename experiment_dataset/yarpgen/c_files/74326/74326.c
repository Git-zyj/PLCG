/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~var_3);
    var_15 += (((((var_7 ? -403461543 : var_6))) ? (max((~var_1), ((((-9223372036854775807 - 1) < var_13))))) : (((((min(403461543, var_5))) ? (105 && var_5) : ((var_6 ? 1 : var_6)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_16 += ((~(arr_1 [i_0])));
                    var_17 += (((((var_4 ? 1 : (arr_5 [i_0] [i_1] [i_1])))) * (((var_6 / 1) ? (((arr_5 [i_0] [i_0] [i_2]) / var_10)) : 17931499613370482854))));
                    var_18 = (min(var_0, (((var_2 != (arr_2 [i_2]))))));
                }
            }
        }
    }
    #pragma endscop
}
