/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92449
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
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        var_10 = ((/* implicit */short) max((var_10), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)(-32767 - 1))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned short)6330)) : (((/* implicit */int) arr_1 [i_0]))))))) ? (((/* implicit */unsigned long long int) var_2)) : (((((arr_0 [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32766))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0 - 2]))))))))));
        var_11 += ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((min(((_Bool)0), (arr_1 [i_0]))) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (max((var_2), (((/* implicit */int) arr_1 [(signed char)3]))))))), (max((((/* implicit */unsigned long long int) ((_Bool) var_3))), (arr_0 [i_0])))));
        var_12 += ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */int) min(((short)-7881), ((short)-32755)))), ((~(var_2))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        arr_4 [i_1] [i_1] = (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)2048)) ? (var_1) : (arr_3 [i_1] [i_1]))) | (((unsigned long long int) (short)(-32767 - 1)))))));
        var_13 = ((/* implicit */signed char) arr_3 [i_1] [i_1]);
        var_14 ^= ((/* implicit */_Bool) arr_3 [i_1] [i_1]);
    }
    for (unsigned char i_2 = 2; i_2 < 11; i_2 += 2) 
    {
        var_15 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (~(((((((/* implicit */int) (short)-32745)) + (2147483647))) >> (((/* implicit */int) (_Bool)1))))))), (((unsigned long long int) arr_5 [i_2 + 2] [i_2 - 2]))));
        var_16 = var_6;
        arr_8 [i_2 - 2] = ((/* implicit */short) (signed char)-75);
        arr_9 [i_2] = ((/* implicit */long long int) arr_5 [i_2] [i_2]);
    }
    for (unsigned int i_3 = 2; i_3 < 12; i_3 += 1) 
    {
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((short) ((var_5) ? (arr_3 [i_3 - 2] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
        arr_12 [(unsigned char)13] [i_3] |= ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) ((long long int) (short)-32755))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((arr_10 [i_3] [i_3 + 2]) % (((/* implicit */long long int) 1546959267)))))));
        var_18 = ((/* implicit */unsigned char) min((var_18), (var_8)));
    }
    var_19 *= max((var_4), (((/* implicit */unsigned int) var_8)));
    var_20 = ((/* implicit */unsigned long long int) ((long long int) (unsigned char)134));
}
