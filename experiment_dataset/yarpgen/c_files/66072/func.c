/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66072
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_2)), (var_0)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (_Bool)0)) : (var_1)))) : (((((/* implicit */_Bool) var_3)) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))));
                arr_6 [i_0] = ((_Bool) max((var_6), (((/* implicit */unsigned long long int) (_Bool)1))));
            }
        } 
    } 
    var_15 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (-(var_1)))), (min((var_0), (((/* implicit */unsigned int) var_3))))))) ? (((/* implicit */long long int) min((((/* implicit */int) var_10)), ((((_Bool)0) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))))))) : ((((!((_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57860))) : ((~(1587596109668790285LL)))))));
    var_16 &= var_8;
    var_17 = ((/* implicit */unsigned char) var_2);
}
