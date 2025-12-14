/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64648
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) (((-(((arr_0 [i_0]) + (((/* implicit */long long int) var_11)))))) / (arr_1 [i_0])));
        arr_3 [8LL] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_16) : (((/* implicit */unsigned long long int) arr_0 [i_0]))))) || (((/* implicit */_Bool) arr_1 [i_0])))))));
        /* LoopNest 3 */
        for (long long int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    {
                        var_18 = arr_1 [i_2];
                        var_19 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) var_7))) % ((((-(((/* implicit */int) arr_5 [(signed char)11] [i_0])))) | (((/* implicit */int) arr_6 [(signed char)17] [i_1] [i_2]))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_4 = 3; i_4 < 13; i_4 += 3) 
    {
        arr_15 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)60094))))) ? (arr_4 [i_4] [i_4 - 3]) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_8))))));
        var_20 -= ((/* implicit */signed char) ((unsigned short) ((((((/* implicit */_Bool) 4294967295U)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-85))))) | (((/* implicit */long long int) ((unsigned int) arr_1 [12LL]))))));
    }
    for (long long int i_5 = 0; i_5 < 21; i_5 += 3) 
    {
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [8LL] [i_5] [i_5] [i_5])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)41632)) ? (((/* implicit */int) (unsigned short)41648)) : (((/* implicit */int) (_Bool)0))))) : (((long long int) (signed char)44))));
        var_22 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_6 [i_5] [i_5] [i_5])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_5])))))));
        var_23 = ((/* implicit */unsigned int) arr_5 [(unsigned short)22] [i_5]);
        var_24 = ((/* implicit */short) (~(min((var_11), (((/* implicit */unsigned int) arr_17 [i_5]))))));
        var_25 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_10)) ? (arr_11 [i_5] [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (signed char)69)))))), (((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)16379)))));
    }
    var_26 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_9)) ? (((var_12) % (var_16))) : (((/* implicit */unsigned long long int) var_14))))));
}
