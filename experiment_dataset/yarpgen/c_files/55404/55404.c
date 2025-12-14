/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_4 ? (min((((78 << (((var_2 + 301290361) - 4))))), ((var_0 << (var_7 - 2292))))) : var_9));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_17 = var_13;
                    var_18 = (min(-4067892211, (arr_5 [i_0 - 1])));
                    var_19 = (max(var_19, ((((((arr_3 [i_0 - 1] [i_0 - 1] [0]) ? (!var_7) : (~var_9))) << (((max(19335, (((!(arr_0 [i_0])))))) - 19301)))))));
                }
            }
        }
    }
    var_20 = (!var_10);
    var_21 = var_1;
    #pragma endscop
}
