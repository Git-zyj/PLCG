/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88400
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        arr_2 [16LL] [i_0 - 1] = ((/* implicit */signed char) 427551762U);
        var_14 = ((/* implicit */int) 18446744073709551615ULL);
        arr_3 [i_0 + 1] = ((/* implicit */unsigned short) arr_0 [i_0 - 1]);
    }
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned int) ((max((arr_6 [i_1]), (((/* implicit */int) (short)32767)))) / (((/* implicit */int) (unsigned short)2322))));
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) arr_1 [i_1] [i_1]))));
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) max((((((/* implicit */int) arr_7 [i_1])) + (((/* implicit */int) arr_5 [i_1])))), (((/* implicit */int) arr_0 [i_1])))))));
    }
    var_17 |= ((/* implicit */signed char) var_6);
    var_18 = ((/* implicit */int) max((((min((((/* implicit */unsigned long long int) (_Bool)0)), (var_5))) / (max((var_5), (((/* implicit */unsigned long long int) var_13)))))), (((/* implicit */unsigned long long int) var_2))));
}
