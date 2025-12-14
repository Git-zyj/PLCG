/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6717
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
    for (short i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        var_14 = ((/* implicit */short) max(((-(((/* implicit */int) arr_2 [i_0 - 2] [i_0])))), (((/* implicit */int) var_3))));
        var_15 = ((/* implicit */unsigned long long int) (-(((arr_0 [10ULL]) ? (((((/* implicit */int) arr_2 [22LL] [i_0])) / (((/* implicit */int) var_2)))) : (1996883010)))));
        arr_3 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) min((((((/* implicit */_Bool) arr_1 [i_0] [i_0 + 1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_2 [i_0 + 1] [i_0])))), (((/* implicit */int) var_7))))), (((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)34761)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) : ((~(var_1)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_2 = 2; i_2 < 14; i_2 += 1) 
        {
            var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_2] [i_2 + 1])) ? (((/* implicit */int) ((short) arr_0 [i_2]))) : (((/* implicit */int) arr_6 [i_2] [i_2 - 2] [(unsigned short)6])))))));
            arr_9 [8U] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [(signed char)10] [i_2 + 2])) ? (arr_4 [i_1] [14ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [i_2 - 2])))));
            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_2 - 1] [(unsigned char)14])) ? (((/* implicit */int) arr_2 [i_2 + 1] [16ULL])) : (((/* implicit */int) arr_2 [i_2 + 2] [(short)14])))))));
            var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_5 [i_1]))));
        }
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (-(((long long int) arr_2 [10] [20ULL])))))));
    }
    var_20 ^= ((/* implicit */unsigned short) max((((/* implicit */long long int) (_Bool)0)), (((long long int) var_4))));
    var_21 = ((/* implicit */short) ((((/* implicit */int) ((short) 9223372036854775807LL))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (((((/* implicit */int) (short)-1)) / (((/* implicit */int) var_3)))) : (((/* implicit */int) var_4))))));
    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */int) var_9)) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (var_13) : (var_5)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) max(((short)11999), (((/* implicit */short) (_Bool)1))))))))))));
}
