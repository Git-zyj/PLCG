/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73391
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
    var_19 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) var_6))) << (((/* implicit */int) min((var_13), (((/* implicit */unsigned char) var_11)))))))) & (((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_10)), ((unsigned short)59681))))) : (var_0)))));
    var_20 = ((/* implicit */_Bool) (+((((!(((/* implicit */_Bool) (signed char)107)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_7)) != (var_2))))) : (((long long int) var_17))))));
    var_21 = ((/* implicit */short) var_2);
    var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)0))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1 + 2] [i_1]))));
                var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) min((((/* implicit */long long int) -901652226)), (5158251825575970503LL))))));
            }
        } 
    } 
}
