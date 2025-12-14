/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;
    var_20 += min((!-var_11), var_16);
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_21 += ((((((arr_5 [i_0 - 1]) ? (arr_5 [i_0 - 2]) : 884377882))) ? (((var_12 >= (min(var_12, 1504932101))))) : 3410589412));
                    var_22 = (min(var_22, (arr_0 [i_0])));
                    var_23 = (max(var_23, ((((min((((var_11 > (arr_5 [i_2])))), (min(-8810302066684000423, 18446744073709551615)))) <= 73)))));
                }
            }
        }
    }
    #pragma endscop
}
