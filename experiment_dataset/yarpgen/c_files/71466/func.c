/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71466
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        var_14 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((arr_1 [i_0 - 1] [i_0]) << (((((/* implicit */int) arr_2 [i_0])) + (132))))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(unsigned char)5]))) | (arr_1 [i_0] [i_0]))))))) + (((((/* implicit */_Bool) ((short) var_0))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (arr_1 [(_Bool)1] [i_0])))));
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 - 2])) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 3])) : (((/* implicit */int) arr_0 [i_0 - 3] [i_0 - 3]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 0)) || (((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 - 2]))))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 2])) ? (((/* implicit */int) arr_0 [i_0] [i_0 - 3])) : (((/* implicit */int) arr_0 [15U] [i_0 + 2]))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_16 = ((/* implicit */signed char) ((((((/* implicit */int) arr_4 [i_1 - 1])) != (((/* implicit */int) arr_4 [i_1 - 1])))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1 - 1])) % (((/* implicit */int) arr_4 [i_1 - 1])))))));
        arr_5 [i_1 - 1] = ((((((/* implicit */_Bool) 8)) ? (6) : (((/* implicit */int) ((((/* implicit */int) arr_3 [i_1])) > (-9)))))) >= (((/* implicit */int) arr_3 [i_1])));
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) arr_4 [i_1 - 1]))) & (((((/* implicit */_Bool) 0)) ? (((/* implicit */int) arr_3 [i_1 - 1])) : (-9)))));
        arr_6 [i_1] = ((/* implicit */unsigned int) arr_3 [i_1 - 1]);
        var_18 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) -12)) ? (min((-9), (((/* implicit */int) arr_3 [i_1 - 1])))) : (-9)));
    }
    for (unsigned char i_2 = 3; i_2 < 14; i_2 += 2) 
    {
        arr_10 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_2 - 3]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_9 [i_2])) != (arr_1 [i_2 - 3] [i_2 - 2]))))) : (((unsigned long long int) arr_1 [i_2 - 3] [12U]))));
        var_19 = ((/* implicit */signed char) (+(max((((var_10) ? (((/* implicit */int) var_6)) : (arr_9 [i_2]))), (((((/* implicit */_Bool) arr_2 [i_2])) ? (-9) : (((/* implicit */int) arr_7 [i_2]))))))));
    }
    for (int i_3 = 0; i_3 < 18; i_3 += 4) 
    {
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) arr_11 [i_3]))));
        /* LoopSeq 1 */
        for (short i_4 = 1; i_4 < 17; i_4 += 1) 
        {
            var_21 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) 9)) ? (arr_12 [i_4] [i_3]) : (((/* implicit */unsigned int) -8)))) > (arr_12 [i_4 - 1] [i_4 - 1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) 8)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_4])))))))) : (var_12)));
            var_22 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_4] [i_3])) ? (arr_13 [i_4] [i_3]) : (((/* implicit */unsigned long long int) -4))))) ? (((((/* implicit */_Bool) arr_12 [17ULL] [9])) ? (arr_13 [i_4] [i_3]) : (arr_13 [i_4] [i_3]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8)) ? (0) : (arr_15 [i_4] [i_4] [i_4 + 1])))));
        }
    }
    var_23 = ((/* implicit */unsigned long long int) var_11);
    var_24 = var_5;
    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) var_5))));
    var_26 = ((/* implicit */unsigned long long int) var_8);
}
