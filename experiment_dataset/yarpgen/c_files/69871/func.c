/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69871
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
    var_18 = ((/* implicit */unsigned char) var_16);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((unsigned short) min((min((((/* implicit */unsigned long long int) (_Bool)1)), (4878864060321948709ULL))), (((/* implicit */unsigned long long int) var_6))))))));
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((arr_0 [i_0]) | (arr_0 [i_0])))) : (max((((var_15) ? (((/* implicit */long long int) 4294967295U)) : (562949953420288LL))), (((/* implicit */long long int) min((((/* implicit */unsigned int) 1262830768)), (var_7))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) var_4);
    var_22 = ((/* implicit */long long int) var_10);
}
