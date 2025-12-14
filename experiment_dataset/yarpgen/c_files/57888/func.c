/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57888
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) arr_1 [i_0] [i_0]);
        arr_5 [i_0] = ((/* implicit */unsigned int) ((max((((/* implicit */long long int) min((((/* implicit */int) arr_0 [i_0] [i_0])), (var_0)))), (((((/* implicit */_Bool) (short)27540)) ? (arr_2 [i_0] [i_0]) : (arr_3 [i_0]))))) ^ (arr_2 [i_0] [i_0])));
    }
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
    {
        var_20 -= ((/* implicit */unsigned short) min((((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1]))) / (max((((/* implicit */long long int) arr_7 [i_1] [i_1])), (var_18))))), (((/* implicit */long long int) arr_6 [i_1]))));
        var_21 += ((/* implicit */signed char) ((((/* implicit */int) max((arr_6 [i_1]), (arr_6 [i_1])))) - (((((/* implicit */int) max((arr_8 [i_1] [i_1]), (((/* implicit */unsigned char) arr_6 [i_1]))))) / (((((/* implicit */int) arr_7 [i_1] [i_1])) * (((/* implicit */int) (signed char)-82))))))));
        arr_9 [i_1] [i_1] = ((/* implicit */short) ((unsigned short) min((max((((/* implicit */int) (short)16333)), (3))), (((/* implicit */int) var_5)))));
        arr_10 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */int) arr_6 [i_1])) - (((/* implicit */int) arr_6 [i_1])))) : ((+(((/* implicit */int) (short)16333))))))) ? (((((((/* implicit */int) arr_8 [i_1] [i_1])) - (((/* implicit */int) arr_8 [i_1] [i_1])))) * ((-(((/* implicit */int) arr_6 [i_1])))))) : (((((/* implicit */int) arr_8 [i_1] [i_1])) * (((/* implicit */int) arr_8 [i_1] [i_1])))));
    }
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) /* same iter space */
    {
        arr_15 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((/* implicit */int) arr_7 [i_2] [i_2])) : (((/* implicit */int) min((arr_8 [i_2] [i_2]), (((/* implicit */unsigned char) arr_6 [i_2])))))))) ? (((/* implicit */int) min((arr_14 [i_2] [i_2]), (arr_14 [i_2] [i_2])))) : (((/* implicit */int) arr_8 [i_2] [i_2]))));
        arr_16 [i_2] = ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_8 [i_2] [i_2]))))));
        var_22 = ((/* implicit */_Bool) (+(max((arr_12 [i_2] [i_2]), (((/* implicit */int) arr_13 [i_2]))))));
        arr_17 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)-64)), ((unsigned short)60097)))) ? (((((/* implicit */int) (signed char)36)) >> (((((/* implicit */int) (unsigned short)5438)) - (5423))))) : (((/* implicit */int) (unsigned char)97))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (((((/* implicit */_Bool) -7972505697261529397LL)) ? (7972505697261529396LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
    }
    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) /* same iter space */
    {
        var_23 ^= ((/* implicit */unsigned short) ((((long long int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_7 [15] [15])))) * (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_3])) ? ((-(((/* implicit */int) arr_19 [i_3] [i_3])))) : (((/* implicit */int) var_12)))))));
        var_24 = ((/* implicit */signed char) arr_20 [i_3]);
    }
    var_25 = ((/* implicit */long long int) var_17);
    var_26 = ((/* implicit */unsigned char) var_3);
    var_27 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) + (min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) - (var_4)))), (var_2)))));
}
