/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-(((!((max(var_13, var_2))))))));
    var_15 = 2341345101180288404;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_16 = (~3595808438);
                    var_17 = ((((((var_3 ? (arr_3 [i_2]) : var_9)))) ? (arr_6 [i_0]) : (min((((var_2 && (arr_0 [i_1])))), ((1 ? 351493869 : (arr_4 [i_0])))))));
                    var_18 = (arr_5 [i_1 + 2] [i_1 + 2]);
                }
            }
        }
    }
    var_19 = ((var_7 ? var_0 : (((205 ? -16942 : 13169)))));
    #pragma endscop
}
