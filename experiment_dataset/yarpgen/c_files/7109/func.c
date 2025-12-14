/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7109
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) max((((((/* implicit */_Bool) -2182260516671327160LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) arr_1 [i_0] [i_0])))))));
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) min((((((/* implicit */long long int) max(((-2147483647 - 1)), (((/* implicit */int) var_10))))) | (((long long int) arr_2 [i_0] [(_Bool)1])))), (((/* implicit */long long int) (short)-24577)))))));
        arr_3 [i_0] = ((((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned short)50062)) - (((/* implicit */int) (unsigned short)31744))))))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15501))));
        var_18 = ((/* implicit */_Bool) var_14);
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_0 [i_0])))))));
    }
    var_20 = ((/* implicit */unsigned int) ((unsigned short) max((((/* implicit */short) var_12)), (var_10))));
    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) max((max((((/* implicit */int) var_9)), (((((/* implicit */int) (unsigned short)50048)) * (((/* implicit */int) var_9)))))), ((((-(((/* implicit */int) (_Bool)1)))) % (((/* implicit */int) (unsigned short)15473)))))))));
    var_22 = ((/* implicit */int) -2182260516671327181LL);
}
