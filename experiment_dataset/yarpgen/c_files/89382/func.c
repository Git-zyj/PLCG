/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89382
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_11 = var_0;
    var_12 = ((/* implicit */int) max((((/* implicit */unsigned int) 356306982)), (1898893630U)));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */long long int) (-(356306982)));
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */signed char) (+(6451229035483367388LL)));
                }
            } 
        } 
    } 
}
