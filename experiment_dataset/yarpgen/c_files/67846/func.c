/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67846
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
    var_15 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_0] [i_2] [i_2] &= ((/* implicit */unsigned char) min((((long long int) var_3)), (((/* implicit */long long int) min((((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_7))))), (arr_1 [i_0] [i_0]))))));
                    var_16 = ((/* implicit */long long int) (+(var_4)));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (-(((var_11) ? (var_5) : (((/* implicit */int) var_11))))))), (var_14)));
}
