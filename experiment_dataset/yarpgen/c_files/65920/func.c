/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65920
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
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 7; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) * (var_3)))) * (((var_17) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))));
        var_18 = ((/* implicit */signed char) arr_0 [i_0 + 3]);
    }
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 29360128)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)169)) : (arr_6 [i_1])))) : (min((((/* implicit */unsigned int) arr_6 [i_1])), (arr_4 [i_1])))))) ? (((/* implicit */unsigned int) min((min((arr_6 [i_1]), (1005967548))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)-24577)))))))) : (arr_4 [i_1])));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */int) arr_5 [i_1])) / (((/* implicit */int) arr_5 [17LL])))), (((/* implicit */int) arr_5 [i_1]))))) ? (((arr_6 [i_1]) >> (((arr_6 [i_1]) - (149743952))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1])))))));
    }
    for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */signed char) (!(((/* implicit */_Bool) var_17))))), ((signed char)34))))));
        var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)253)), (var_2)))), (max((arr_6 [19LL]), (arr_6 [i_2])))))) & ((+(arr_8 [i_2])))));
    }
    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) var_15))));
}
