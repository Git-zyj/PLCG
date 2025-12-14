/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84814
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
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) max((min((((/* implicit */unsigned int) var_9)), ((+(var_5))))), (((/* implicit */unsigned int) max((((((/* implicit */int) var_3)) | (((/* implicit */int) var_7)))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) > (var_11))))))))))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = max((((/* implicit */int) arr_1 [i_0])), ((+(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [14LL])))))));
        var_15 += ((/* implicit */_Bool) min((((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) > (var_10))) ? (((unsigned long long int) arr_1 [i_0])) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_6)), (arr_0 [i_0])))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) var_12))))), ((~(var_10))))))));
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((signed char) ((int) max((arr_0 [i_0]), (arr_0 [i_0]))))))));
        arr_3 [i_0] &= ((/* implicit */unsigned int) (+((~(((/* implicit */int) arr_1 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        var_17 = ((/* implicit */short) arr_5 [i_1] [(signed char)16]);
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((65535U) >> (((-447569916) + (447569920))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        arr_12 [6] = ((/* implicit */signed char) (+((+(var_10)))));
        var_18 = ((/* implicit */int) (+((~(var_8)))));
        var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_4 [i_2])) ? (var_0) : (((/* implicit */long long int) var_9)))) | (((/* implicit */long long int) (~(((/* implicit */int) arr_8 [i_2] [i_2])))))));
    }
    for (int i_3 = 0; i_3 < 23; i_3 += 3) 
    {
        arr_16 [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((unsigned short) arr_15 [i_3]))) || (((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_7)))))) ? (((((/* implicit */_Bool) ((int) arr_15 [i_3]))) ? (((/* implicit */unsigned int) ((arr_15 [i_3]) >> (((arr_14 [i_3]) + (248625677)))))) : ((+(arr_13 [i_3]))))) : (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_14 [i_3])) ? (var_6) : (((/* implicit */int) var_4)))))))));
        var_20 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(max((arr_13 [i_3]), (((/* implicit */unsigned int) var_4))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */long long int) arr_13 [i_3])) & (max((var_8), (((/* implicit */long long int) arr_14 [i_3]))))))));
    }
    var_21 = ((/* implicit */unsigned int) min((max((((/* implicit */int) ((((/* implicit */int) var_7)) > (var_6)))), ((+(var_6))))), (((((/* implicit */_Bool) -447569916)) ? (-447569913) : (((/* implicit */int) (_Bool)0))))));
}
