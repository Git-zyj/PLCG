/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98052
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
    var_18 = ((/* implicit */_Bool) max((((/* implicit */long long int) max((var_6), (((/* implicit */int) var_16))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_14)), (var_11)))) ? (((var_3) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)199)), ((short)21744)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) (short)-21750)) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) arr_0 [0U])))));
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) arr_1 [i_0]))));
    }
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+((+(((/* implicit */int) (signed char)9))))))) || (((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) arr_1 [i_1]))))))));
        var_22 |= ((/* implicit */short) min(((+(((var_4) / (((/* implicit */long long int) ((/* implicit */int) var_15))))))), (((/* implicit */long long int) var_10))));
        var_23 = ((/* implicit */long long int) ((signed char) max((arr_5 [i_1]), (((/* implicit */unsigned int) arr_1 [i_1])))));
    }
    var_24 = ((/* implicit */short) var_14);
    var_25 -= max((max((((/* implicit */int) var_9)), ((+(var_10))))), (((/* implicit */int) var_11)));
}
