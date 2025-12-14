/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77915
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
    for (unsigned short i_0 = 4; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_0] [i_0] &= ((/* implicit */unsigned char) 15185525992176765750ULL);
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_7)))) ? (((int) var_17)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)60429)) : (((/* implicit */int) (unsigned short)60405))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_4), (var_10)))) ? (((/* implicit */int) var_6)) : (((int) var_9))))) : (max((var_5), (((/* implicit */unsigned long long int) (unsigned short)5106))))));
            }
        } 
    } 
    var_19 = (+(((/* implicit */int) var_15)));
}
