/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((max(var_3, (var_4 || var_8))) ? (((min(0, 1)))) : (((max(var_14, 1)) | var_7))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [11] [i_1] = ((((((-95 + 2147483647) >> (var_4 - 1334217766)))) ? (((var_12 != (1 != var_6)))) : (((!(arr_4 [i_1 - 3] [i_1 - 2]))))));
                var_19 |= (max(((((1 & (arr_0 [i_0 - 1]))) / var_9)), ((((0 != var_17) <= (arr_2 [i_0 - 2]))))));
            }
        }
    }
    #pragma endscop
}
