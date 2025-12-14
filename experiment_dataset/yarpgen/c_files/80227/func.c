/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80227
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_12 |= ((/* implicit */unsigned short) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) % (15644949021000275663ULL))) >= (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)63)), (4263922306U)))))) || (((/* implicit */_Bool) 894296233U))));
                    var_13 -= ((/* implicit */_Bool) min(((~(var_7))), (((/* implicit */unsigned int) arr_2 [i_0]))));
                }
            } 
        } 
    } 
    var_14 *= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) (unsigned char)201)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) min((var_1), (((/* implicit */unsigned short) var_6))))))), ((-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4))))))));
    var_15 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) == (224219990)))), (((((/* implicit */_Bool) var_6)) ? (min((((/* implicit */unsigned int) var_8)), (894296233U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (var_8))))))));
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((unsigned long long int) 894296201U))));
}
