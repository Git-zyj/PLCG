/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82524
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
    var_11 = min((((/* implicit */int) var_0)), (max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (var_4))), (((/* implicit */int) max((var_3), (var_3)))))));
    var_12 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))))), (max((((long long int) var_3)), (((/* implicit */long long int) min((((/* implicit */int) var_9)), (var_4))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned short) var_1)))))));
                    var_14 &= ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_0)))))))), (((((/* implicit */_Bool) min((((/* implicit */short) var_1)), (var_7)))) ? (var_10) : (((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (var_2))))))));
                }
            } 
        } 
    } 
}
