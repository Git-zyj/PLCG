/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67264
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
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) var_4))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 2])) - (50265)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0]))));
        var_18 += ((/* implicit */unsigned char) ((max((((/* implicit */long long int) var_16)), (9223372036854775807LL))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */int) arr_0 [i_0 + 1] [i_0])) : (((/* implicit */int) (unsigned short)34631)))))));
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)30905)) + (((/* implicit */int) arr_1 [i_0 - 2]))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-114)) >= (((/* implicit */int) (unsigned char)255)))))) <= (max((((/* implicit */long long int) arr_1 [i_0])), (4158155965428343616LL)))))) : (((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) (_Bool)1))))))))));
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0] [i_0])))), (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 2]))))) ? (((((/* implicit */_Bool) (-(281474976710655ULL)))) ? (9223372036854775786LL) : (((/* implicit */long long int) max((((/* implicit */unsigned int) var_15)), (var_8)))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)1)))) >= (((/* implicit */int) var_4)))))))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 2; i_1 < 21; i_1 += 4) /* same iter space */
    {
        var_21 += ((/* implicit */unsigned int) arr_5 [i_1] [i_1]);
        var_22 += ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_4))) / (9223372036854775807LL)));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-122))) ^ (6545348659729778263ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))))));
        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (unsigned short)40860)) : (((/* implicit */int) arr_4 [(_Bool)1]))))) ? (((((/* implicit */_Bool) arr_8 [i_2])) ? (arr_9 [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
        var_25 += ((/* implicit */short) ((((var_3) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2]))))) & (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_14))))));
        var_26 += ((/* implicit */unsigned char) arr_0 [i_2] [(signed char)11]);
    }
    var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) max(((-(((/* implicit */int) var_0)))), (((((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL))))) ? (((((/* implicit */_Bool) 619163450U)) ? (((/* implicit */int) (short)-21027)) : (((/* implicit */int) (unsigned short)34631)))) : ((-(((/* implicit */int) (unsigned char)206)))))))))));
}
