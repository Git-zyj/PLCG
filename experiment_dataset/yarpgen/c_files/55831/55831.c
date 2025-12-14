/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_18 = (arr_0 [i_0]);

                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    var_19 = (((((~var_6) == var_14)) ? (~-1650807211) : ((max((arr_4 [i_2 - 2] [i_2 - 2] [i_2 - 2]), var_9)))));
                    var_20 ^= ((((((max(var_6, var_5))) || (((-1650807213 ? var_4 : var_0))))) || var_3));
                    var_21 = (arr_8 [i_2 - 1] [i_2] [i_2 - 1] [i_2 + 1]);
                    var_22 += (min(((((arr_2 [i_0] [i_2]) ? 1650807217 : ((var_16 ? (arr_4 [i_1] [i_1] [i_1]) : (arr_7 [i_0] [i_0] [i_1] [i_1])))))), ((~(arr_0 [i_1])))));
                }
                var_23 = (!14);
                var_24 = (arr_6 [i_1] [i_1] [i_0] [i_0]);
                var_25 ^= (arr_0 [i_0]);
            }
        }
    }
    var_26 = (max(((((var_11 ? var_17 : var_16)) - (var_4 || var_10))), ((~(!var_11)))));
    var_27 = ((var_0 ? var_4 : (((23163 ? 125 : 23184)))));
    #pragma endscop
}
