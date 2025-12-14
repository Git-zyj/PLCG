/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98726
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
    var_15 = ((/* implicit */int) var_5);
    var_16 = ((/* implicit */_Bool) min((var_5), (var_8)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [(unsigned char)7] = ((/* implicit */_Bool) 3058945158969089371LL);
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) min((((/* implicit */long long int) max((((var_10) ? (var_4) : (((/* implicit */int) var_3)))), (var_12)))), (max((((/* implicit */long long int) var_3)), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [(unsigned char)8] [0LL] [(_Bool)1]))) : (3058945158969089378LL))))))))));
            }
        } 
    } 
    var_18 -= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) ? (max((3058945158969089361LL), (((/* implicit */long long int) min((var_12), (1073737728)))))) : (((/* implicit */long long int) max((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (var_14)))), (var_9))))));
}
