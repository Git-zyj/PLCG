/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98464
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
    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) min((((/* implicit */int) var_6)), ((~(((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1)))))))))));
    var_14 = var_3;
    var_15 |= ((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned long long int) max((((((/* implicit */int) var_11)) + (((/* implicit */int) var_1)))), (((/* implicit */int) (!((_Bool)1)))))))));
    var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */int) max((var_7), (((/* implicit */unsigned char) (signed char)-80))))) : ((-(((/* implicit */int) var_8)))))) >> (((((/* implicit */int) var_9)) - (9968)))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned int) max((arr_0 [i_0] [i_0]), (((/* implicit */long long int) var_6)))));
        var_17 -= ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) var_1))))), ((-(arr_1 [i_0] [i_0])))));
        arr_4 [i_0] = ((/* implicit */unsigned char) var_2);
    }
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        arr_9 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_6 [i_1] [i_1])) != (var_10)))) != (((/* implicit */int) ((((var_12) << (((((/* implicit */int) arr_7 [i_1])) - (46141))))) == (((/* implicit */unsigned int) ((/* implicit */int) (short)-9977))))))));
        var_18 *= ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)79)) ? (2246980238U) : (((/* implicit */unsigned int) 892968196))))) || (((/* implicit */_Bool) ((unsigned char) (unsigned char)13))))));
    }
}
