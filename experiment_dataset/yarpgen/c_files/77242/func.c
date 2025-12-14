/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77242
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
    var_19 = ((/* implicit */unsigned short) ((var_1) ? (((/* implicit */long long int) (~(max((-1266222821), (((/* implicit */int) var_1))))))) : (max((((long long int) var_8)), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (var_8) : (var_13))))))));
    var_20 -= ((/* implicit */unsigned int) ((unsigned long long int) 1266222810));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 4; i_0 < 21; i_0 += 4) 
    {
        var_21 = ((/* implicit */unsigned short) max((((/* implicit */int) ((_Bool) ((((/* implicit */int) var_7)) / (((/* implicit */int) arr_2 [i_0])))))), ((+(-1266222821)))));
        var_22 = ((/* implicit */int) (+(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [12])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0 + 1] [i_0])))), (((var_17) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))))));
        var_23 = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) (unsigned char)97)), (max((0LL), (((/* implicit */long long int) arr_2 [i_0 + 1])))))) > (((/* implicit */long long int) min((max((arr_0 [11LL]), (((/* implicit */int) var_15)))), (((/* implicit */int) (unsigned short)16905)))))));
    }
    var_24 -= ((/* implicit */unsigned long long int) var_6);
    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)159)) : (((/* implicit */int) var_9))))) + (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) - (var_5)))))) ? (min((((/* implicit */unsigned int) max((((/* implicit */short) var_18)), (var_9)))), (((((/* implicit */_Bool) -6096566295388812976LL)) ? (((/* implicit */unsigned int) var_8)) : (var_5))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
}
