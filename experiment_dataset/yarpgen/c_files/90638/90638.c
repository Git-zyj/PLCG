/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_2;
    var_18 = (min(var_18, (((var_5 - (((max(var_13, var_2)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2] = (min((arr_6 [i_0] [i_1]), ((((min(var_8, (arr_2 [8])))) | -4092657487121678265))));
                    arr_9 [i_0] [i_0] [i_1] [i_2] |= (arr_6 [6] [i_2]);
                    var_19 |= ((!(~4294967295)));
                }
            }
        }
    }
    #pragma endscop
}
