/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91684
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((unsigned char)242), ((unsigned char)51)))) ? (((/* implicit */int) ((unsigned char) var_9))) : (((/* implicit */int) var_15))))), (max((var_17), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)40621)))))))));
                var_19 = ((/* implicit */unsigned long long int) arr_0 [i_1]);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) var_10);
    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) max(((-(var_9))), (var_14))))));
    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) max((var_9), (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)57939))) <= (6130297200514193918LL))))))))))));
}
