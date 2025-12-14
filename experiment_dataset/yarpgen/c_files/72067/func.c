/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72067
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
    var_15 = max((((((/* implicit */unsigned int) ((int) (unsigned char)244))) - (((((/* implicit */_Bool) (signed char)-90)) ? (((/* implicit */unsigned int) 790808568)) : (var_12))))), (((/* implicit */unsigned int) (signed char)-74)));
    var_16 = ((/* implicit */unsigned short) var_13);
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (max((((/* implicit */int) var_9)), ((-(((/* implicit */int) (unsigned char)0)))))) : (((/* implicit */int) ((signed char) (unsigned short)44438)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        var_18 = ((/* implicit */int) ((max((((/* implicit */unsigned int) var_13)), (arr_1 [i_0 + 1] [i_0 - 1]))) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) max((((/* implicit */unsigned short) var_3)), ((unsigned short)62563)))))))));
        var_19 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) max(((signed char)102), ((signed char)49)))), ((unsigned short)62563)));
        var_20 = ((/* implicit */_Bool) ((((_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */int) var_11)) : (((((int) var_10)) | (((/* implicit */int) var_4))))));
    }
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+((+(596084275U))))))));
        var_22 = ((/* implicit */unsigned char) min(((~(((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1]))) : (arr_1 [(signed char)10] [(signed char)10]))))), (min((((unsigned int) (signed char)11)), (((/* implicit */unsigned int) min(((signed char)106), ((signed char)-126))))))));
    }
}
