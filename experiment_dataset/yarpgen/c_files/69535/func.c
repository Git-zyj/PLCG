/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69535
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
    var_12 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((int) (signed char)15))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)75)) != (((/* implicit */int) var_1))))) : (((/* implicit */int) var_10)))) >> (((/* implicit */int) var_4))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (3243641284424910474LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-16)))));
        var_14 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0]))) >> (max(((~(((/* implicit */int) var_10)))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [(_Bool)1]))))))));
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) (signed char)-39)) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)162)) : (((/* implicit */int) arr_0 [i_0] [i_0])))) : (((((/* implicit */int) (signed char)-19)) ^ (((/* implicit */int) (signed char)-15)))))) : (((((/* implicit */int) (short)16)) >> (((var_8) + (1722456897)))))));
    }
    for (unsigned char i_1 = 2; i_1 < 16; i_1 += 2) 
    {
        var_16 ^= ((/* implicit */int) var_3);
        arr_5 [i_1] = ((((/* implicit */_Bool) (unsigned char)170)) ? (var_8) : (((((/* implicit */_Bool) (signed char)-20)) ? (((/* implicit */int) (short)-27655)) : (((/* implicit */int) (signed char)-16)))));
        var_17 += ((/* implicit */unsigned char) (~(((/* implicit */int) max(((short)5094), (((/* implicit */short) arr_0 [i_1 + 1] [i_1 + 1])))))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        arr_8 [i_2] = ((/* implicit */int) 2873852800U);
        arr_9 [i_2] [i_2] = ((/* implicit */short) (~(((((/* implicit */int) max((((/* implicit */unsigned char) arr_6 [2] [2])), (arr_0 [i_2] [i_2])))) >> (((((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) (unsigned char)149)))) - (6058)))))));
        var_18 &= ((/* implicit */unsigned long long int) var_3);
    }
}
