/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -9213638744911085358;
    var_18 = ((((((var_12 != var_10) == ((var_6 ? var_2 : 53431))))) >> (var_0 - 10666)));
    var_19 = (var_9 != var_6);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = ((var_6 <= (arr_1 [i_0 + 2] [i_0 + 2])));
                arr_8 [i_1] [i_0 - 2] = ((635 / ((((!var_4) <= ((((arr_5 [i_1]) >= (arr_6 [17] [17] [17])))))))));
                var_20 = (min((min(-9213638744911085358, (((var_10 > (arr_1 [i_0 - 3] [i_0 - 3])))))), (arr_4 [i_1])));
                arr_9 [i_1] [11] = (arr_4 [i_0 - 2]);
            }
        }
    }
    #pragma endscop
}
