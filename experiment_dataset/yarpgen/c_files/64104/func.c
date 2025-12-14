/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64104
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
    var_13 = ((/* implicit */signed char) ((unsigned char) (short)32767));
    var_14 = ((/* implicit */unsigned long long int) var_11);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_15 = ((/* implicit */short) ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)120))))) / (min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)32762)) ? (((/* implicit */int) (unsigned short)65431)) : (((/* implicit */int) (short)-1))))), (min((arr_2 [i_0]), (((/* implicit */long long int) arr_3 [i_0]))))))));
        var_16 = ((/* implicit */long long int) (-(((/* implicit */int) ((signed char) (~(((/* implicit */int) var_1))))))));
        var_17 = ((/* implicit */signed char) max((((/* implicit */unsigned short) arr_0 [i_0])), (((unsigned short) max((((/* implicit */int) arr_1 [i_0])), (1597539058))))));
        var_18 = ((/* implicit */unsigned long long int) var_6);
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)105)) ? (min((((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) - (arr_2 [i_0]))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)142))))))) : (((/* implicit */long long int) ((/* implicit */int) (short)-23374)))));
    }
    var_20 = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_11), (((/* implicit */long long int) (short)-2412))))) ? ((~(var_7))) : (((/* implicit */long long int) ((/* implicit */int) max(((short)-2436), (((/* implicit */short) (unsigned char)221))))))))) : ((-(var_12))));
}
