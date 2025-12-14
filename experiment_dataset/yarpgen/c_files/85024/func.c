/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85024
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
    var_15 = ((/* implicit */int) var_6);
    var_16 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_6)))) && (max((var_14), (var_14)))))), (13898885836275296887ULL));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned char) max((max((min((((/* implicit */unsigned long long int) arr_4 [i_0])), (var_7))), (((/* implicit */unsigned long long int) ((int) 14641603605013281679ULL))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_1 [i_0] [i_1])), (-2013179996)))))))));
                var_18 = var_12;
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) max((max((((int) var_14)), ((+(((/* implicit */int) var_14)))))), (-2013180017)));
}
