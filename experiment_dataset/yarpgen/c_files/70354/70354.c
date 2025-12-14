/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_1] [5] [i_1] = arr_3 [i_0] [0];
                var_20 = (min(var_20, (((((!(arr_2 [i_0] [i_1]))))))));
                var_21 = ((((min(((min((arr_1 [i_1] [i_0]), (arr_0 [i_1])))), var_18))) ? ((-(arr_2 [i_0] [i_1]))) : (arr_4 [i_0] [i_1] [i_1])));
            }
        }
    }
    var_22 = ((((((var_4 | var_5) ^ (var_11 / 1)))) || ((((((var_8 >> (var_6 + 1532011695)))) ? ((17873661021126656 ? 1 : 129)) : var_12)))));
    #pragma endscop
}
