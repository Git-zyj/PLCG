/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91398
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_7)) - (((((/* implicit */int) var_9)) - (((/* implicit */int) var_11)))))) * (((/* implicit */int) ((short) ((var_1) == (((/* implicit */int) var_2))))))));
        var_17 ^= ((/* implicit */signed char) var_3);
    }
    for (unsigned short i_1 = 2; i_1 < 19; i_1 += 4) 
    {
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned char) (-(((/* implicit */int) var_2)))))), (((((/* implicit */int) var_11)) >> (((((/* implicit */int) var_11)) - (9044))))))))));
        arr_5 [i_1 - 1] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */int) var_15)) | (((/* implicit */int) var_10))))), (((((/* implicit */long long int) ((/* implicit */int) (signed char)98))) | (-6027585375277780592LL)))));
        arr_6 [(short)3] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(((((/* implicit */int) var_0)) | (((/* implicit */int) var_8))))))) ^ (((long long int) var_11))));
        var_19 -= ((/* implicit */short) ((((/* implicit */int) var_2)) * (((((/* implicit */int) var_14)) / (((/* implicit */int) var_4))))));
        arr_7 [i_1 - 2] = ((/* implicit */_Bool) (~(((/* implicit */int) var_2))));
    }
    var_20 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_3)))) == (((((/* implicit */int) var_10)) - ((+(var_5)))))));
    var_21 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_1)), (var_6)));
    var_22 ^= ((/* implicit */unsigned int) (((~(((/* implicit */int) var_4)))) > (var_1)));
}
