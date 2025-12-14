/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7737
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) : (((var_4) ? (((((/* implicit */_Bool) (unsigned char)215)) ? (560046849U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : ((~(560046851U)))))));
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) (unsigned short)13))));
    var_12 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (unsigned short)60057)) ? (var_6) : (((/* implicit */unsigned long long int) -3033160566272758260LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) && (((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) -3033160566272758265LL)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) >= (var_6)))))) + (((/* implicit */int) (!(((((/* implicit */int) var_3)) > (((/* implicit */int) var_9)))))))));
                arr_6 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_0))));
            }
        } 
    } 
}
