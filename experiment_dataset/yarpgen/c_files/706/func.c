/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/706
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
    var_16 &= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)198)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_14)))) ? (((/* implicit */int) ((var_13) > (((/* implicit */long long int) ((/* implicit */int) var_9)))))) : (((/* implicit */int) ((unsigned short) var_2)))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_17 += ((/* implicit */unsigned char) var_12);
        arr_3 [i_0] &= ((/* implicit */short) ((_Bool) ((long long int) (signed char)-18)));
    }
    for (unsigned short i_1 = 3; i_1 < 21; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) arr_5 [i_1 + 3] [i_1]))) < (((/* implicit */int) max(((signed char)16), (var_1))))));
        arr_7 [i_1] [i_1 + 1] = ((/* implicit */unsigned int) var_15);
        var_18 ^= ((/* implicit */_Bool) ((((_Bool) ((unsigned short) arr_5 [i_1 + 3] [22LL]))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)29)) ? (((/* implicit */int) arr_4 [(short)22])) : (((/* implicit */int) arr_5 [i_1] [20]))))) ? (min((var_13), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 + 2] [(unsigned short)20]))))) : (((/* implicit */long long int) ((unsigned int) (unsigned char)66)))));
        arr_8 [i_1] = ((/* implicit */long long int) max((((((/* implicit */int) arr_4 [i_1])) + (((/* implicit */int) arr_4 [i_1])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1])))))));
    }
    for (short i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        var_19 |= ((/* implicit */unsigned short) arr_9 [6U] [i_2]);
        arr_11 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 12996508262108414351ULL)) || (((/* implicit */_Bool) (unsigned char)217))));
    }
    /* LoopSeq 2 */
    for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
    {
        arr_15 [6U] = ((/* implicit */int) max((var_14), (((/* implicit */unsigned int) arr_14 [i_3] [i_3]))));
        var_20 = ((/* implicit */unsigned short) (_Bool)1);
        arr_16 [i_3] [i_3] = ((/* implicit */unsigned char) min((((((/* implicit */int) var_10)) << (((3519551020U) - (3519551015U))))), (((/* implicit */int) arr_12 [i_3]))));
        arr_17 [i_3] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_3] [(_Bool)1]))) * (((unsigned long long int) arr_14 [i_3] [i_3])));
        arr_18 [i_3] |= ((/* implicit */signed char) ((arr_14 [8ULL] [i_3]) && (((/* implicit */_Bool) ((signed char) arr_14 [i_3] [(_Bool)1])))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 22; i_4 += 3) 
    {
        arr_21 [(_Bool)1] &= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)73)) + (((((/* implicit */_Bool) (unsigned char)19)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-115))))));
        var_21 *= ((/* implicit */unsigned short) var_4);
    }
}
