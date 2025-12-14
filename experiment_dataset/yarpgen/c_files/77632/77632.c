/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_10 += (((var_8 + 16) ^ -363743176));
                var_11 -= (((arr_2 [20]) >= (arr_5 [i_0] [i_0] [i_1])));
                arr_6 [20] |= ((((arr_1 [i_0 + 2]) == (171 % 53894))));
            }
        }
    }
    var_12 = (min(534743830, (((var_9 ^ var_1) ? var_7 : (((min(1, 43260))))))));
    var_13 |= var_6;
    #pragma endscop
}
