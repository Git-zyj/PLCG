/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84066
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
    for (unsigned char i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        arr_4 [(unsigned char)2] = ((/* implicit */unsigned char) (signed char)0);
        arr_5 [i_0] = ((/* implicit */short) (~(2147483647)));
        arr_6 [i_0] |= ((/* implicit */unsigned long long int) arr_2 [i_0] [i_0 - 1]);
        arr_7 [i_0] [i_0 - 3] = ((/* implicit */unsigned char) arr_3 [19ULL]);
        arr_8 [i_0] [i_0] = ((/* implicit */unsigned char) (~((+(((/* implicit */int) arr_1 [i_0 - 3]))))));
    }
    for (short i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        arr_13 [i_1] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_11 [i_1]))))) ? (((/* implicit */unsigned long long int) arr_0 [1] [1])) : ((~(arr_10 [i_1]))))) ^ (((/* implicit */unsigned long long int) min(((+(((/* implicit */int) (unsigned char)0)))), ((+(((/* implicit */int) arr_2 [i_1] [i_1]))))))));
        arr_14 [i_1] = ((/* implicit */unsigned short) (signed char)-9);
    }
    for (int i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        arr_17 [i_2] = ((/* implicit */_Bool) arr_12 [i_2] [i_2]);
        arr_18 [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [(unsigned char)20]))));
        arr_19 [i_2] [i_2] = ((/* implicit */short) max((((/* implicit */unsigned int) (signed char)8)), (((((/* implicit */_Bool) arr_2 [i_2] [i_2])) ? (arr_9 [i_2] [i_2]) : (((/* implicit */unsigned int) arr_15 [i_2] [i_2]))))));
        arr_20 [i_2] = arr_2 [i_2] [i_2];
    }
    /* vectorizable */
    for (unsigned char i_3 = 2; i_3 < 14; i_3 += 1) 
    {
        arr_23 [5ULL] [5ULL] = arr_0 [i_3] [i_3];
        arr_24 [i_3 - 2] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_3] [(unsigned char)11]))) & (arr_9 [i_3 + 1] [i_3 - 1])));
    }
    var_18 = ((/* implicit */unsigned char) (~(29660471U)));
    var_19 = ((/* implicit */int) ((((/* implicit */unsigned long long int) max(((+(((/* implicit */int) var_14)))), (((/* implicit */int) min((var_10), (((/* implicit */short) var_17)))))))) ^ (min((min((((/* implicit */unsigned long long int) var_9)), (var_16))), (((/* implicit */unsigned long long int) ((var_16) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))))));
}
