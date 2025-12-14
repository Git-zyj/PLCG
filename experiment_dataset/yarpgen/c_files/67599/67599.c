/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!1);
    var_18 = (min(var_18, var_5));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = (min(var_19, ((((arr_4 [i_1] [i_1] [i_0]) ? (max((((var_9 ? var_16 : 90))), var_5)) : ((((!(((1485629123671975370 >> (1425587963 - 1425587962)))))))))))));
                arr_5 [8] = var_2;
                var_20 = ((2869379307 && (!2869379336)));
            }
        }
    }
    #pragma endscop
}
