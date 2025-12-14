/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71712
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
    var_13 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(6085234335681817168LL)))) ? (((/* implicit */int) max(((_Bool)0), ((_Bool)1)))) : ((-(((/* implicit */int) var_7))))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_2))), (var_2)))) : (max((((var_9) * (12366808719712514467ULL))), (var_9)))));
    var_14 = ((/* implicit */int) var_7);
    var_15 -= ((/* implicit */_Bool) ((unsigned char) (_Bool)0));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_16 |= var_12;
                var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-67))))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4095))) <= (arr_0 [(signed char)9] [i_0]))))));
                arr_5 [i_1] [i_0] = ((/* implicit */unsigned short) (_Bool)1);
            }
        } 
    } 
}
