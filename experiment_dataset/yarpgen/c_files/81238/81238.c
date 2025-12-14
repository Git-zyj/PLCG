/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = ((+(((arr_0 [i_1 - 1] [i_1 - 1]) % (arr_0 [i_1 - 2] [i_1 + 1])))));
                arr_6 [i_1] [i_1] [i_0] = ((((((arr_1 [i_1 - 2]) - (!-2851731490650525890)))) ? 60722 : ((((((!(arr_1 [i_1]))))) | ((1150536604164071526 ? (arr_2 [i_0]) : 132))))));
                var_14 += ((var_13 - ((((max(var_8, var_13))) ? (arr_3 [i_0] [i_1 - 2]) : (((arr_0 [i_0] [i_1]) ? 0 : (arr_3 [i_0] [i_1])))))));
                arr_7 [i_0] [i_1] [i_1] = (((((arr_0 [i_1 - 2] [i_1]) + ((var_13 ? var_1 : -51)))) ^ (-7515111749111250028 && 3482589664)));
            }
        }
    }
    var_15 = (min(((var_12 ? (((var_12 ? var_12 : var_12))) : ((943405090 ? var_2 : var_2)))), var_4));
    #pragma endscop
}
