/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91967
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */int) var_9)) << (((((/* implicit */int) var_9)) - (14667)))))))) ? (((var_4) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) > (1ULL)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)0))));
                arr_5 [i_0] [i_0] [i_0 - 2] = ((/* implicit */int) ((unsigned int) ((((/* implicit */int) arr_1 [(unsigned char)22])) & (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_1 [i_1])))))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */signed char) 3613717247575689905ULL);
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) ((unsigned int) (~(((/* implicit */int) ((unsigned short) var_8))))));
    var_17 = ((/* implicit */_Bool) var_4);
}
