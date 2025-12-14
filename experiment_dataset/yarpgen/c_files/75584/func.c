/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75584
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
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        arr_3 [i_0] = max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])));
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_2 [i_0 + 2] [i_0 + 1])) ? (((/* implicit */int) arr_2 [i_0 + 2] [i_0 - 1])) : (((/* implicit */int) arr_2 [i_0 + 2] [i_0 + 2])))))))));
        var_19 *= ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)139), ((unsigned char)121))))) < (arr_0 [i_0 - 2] [i_0 - 2]))) ? ((+(((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) ((unsigned char) (-(((/* implicit */int) (unsigned char)217))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned char)143)), ((~(((/* implicit */int) var_11))))));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))))) : (arr_6 [i_1])))));
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) != (var_2))))) : (var_17))) >> (((((/* implicit */int) (unsigned char)97)) - (74))))))));
    }
    var_23 = ((/* implicit */unsigned long long int) var_2);
    var_24 = ((/* implicit */unsigned char) var_2);
    var_25 -= ((/* implicit */unsigned char) var_3);
    var_26 = var_0;
}
