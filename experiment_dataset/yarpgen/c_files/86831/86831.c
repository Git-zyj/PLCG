/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((67 ? -117 : 699197694215477378))) & ((((65514 ? var_4 : var_5)) ^ var_19))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_1] [i_1] [i_1] = var_3;
                    var_21 = (min(var_21, (((((min(((8358620272899335102 ? var_15 : (arr_3 [i_1]))), var_5))) ? 3655379484 : ((((min(var_5, 1))))))))));
                    arr_7 [i_0] [i_1] [i_2] [1] = (((min(0, 1)) ? (!18) : ((min(var_17, var_9)))));
                }
            }
        }
    }
    var_22 -= 30;
    #pragma endscop
}
