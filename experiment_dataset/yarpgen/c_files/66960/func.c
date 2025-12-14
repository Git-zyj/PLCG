/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66960
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
    var_12 &= ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-8))))) > ((+(var_2))))), ((!(((/* implicit */_Bool) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) (_Bool)1)))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [10U] [10U])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)59793))) : (var_1)))) ? (0ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)24)) * (((/* implicit */int) (unsigned short)13598)))))))) ? (((((/* implicit */_Bool) min((arr_2 [i_0]), (((/* implicit */unsigned char) (signed char)-8))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) <= (1388296499U)))) : (((/* implicit */int) var_11)))) : (127)));
        arr_3 [i_0] &= ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))));
    }
    for (unsigned char i_1 = 1; i_1 < 16; i_1 += 2) 
    {
        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)-18364)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)-28)))) * (((((/* implicit */int) max((arr_6 [i_1 - 1]), (arr_6 [(unsigned char)9])))) * (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (short)18363)))))))))));
        arr_8 [i_1] = ((/* implicit */_Bool) (((+(((/* implicit */int) arr_5 [i_1 - 1])))) / (((/* implicit */int) max((arr_5 [i_1 + 1]), (arr_5 [i_1 + 1]))))));
    }
    var_15 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 4095)))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */int) var_9)) + (((/* implicit */int) var_8))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_8)) | (((/* implicit */int) var_4))))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((int) min((min(((unsigned short)13595), ((unsigned short)51941))), (min((((/* implicit */unsigned short) (signed char)123)), (var_9)))))))));
}
