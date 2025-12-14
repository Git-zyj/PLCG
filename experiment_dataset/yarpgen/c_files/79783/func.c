/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79783
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
    var_15 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_6)), (var_11)))) ? (((((/* implicit */_Bool) (unsigned short)62324)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3211))) : (8034665380677556305LL)))))), (((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))))) ^ (((((/* implicit */_Bool) var_11)) ? (var_14) : (((/* implicit */unsigned long long int) var_4))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_2 [(short)2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? ((-(((/* implicit */int) max(((unsigned short)3211), (((/* implicit */unsigned short) var_1))))))) : (((/* implicit */int) ((((/* implicit */long long int) (+(var_0)))) < (min((((/* implicit */long long int) var_13)), (arr_1 [i_0] [i_0]))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((signed char) (unsigned char)61))), (arr_1 [i_0] [i_0])));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            var_16 *= 3314173653U;
            arr_7 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_5 [i_0] [i_0] [i_1]), (((/* implicit */unsigned int) var_2))))) ? (((((/* implicit */_Bool) (unsigned short)3212)) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) var_12)))) : (((/* implicit */int) max((((/* implicit */unsigned char) var_12)), (arr_6 [i_0]))))));
        }
        arr_8 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)62325)) ? (((((long long int) var_7)) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))))) : (((/* implicit */long long int) ((/* implicit */int) max((min((((/* implicit */unsigned short) var_6)), ((unsigned short)3211))), ((unsigned short)3211)))))));
    }
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (var_4) : (588531340)))), (max((3164571870U), (((/* implicit */unsigned int) var_4)))))) : (((/* implicit */unsigned int) -588531340))));
}
