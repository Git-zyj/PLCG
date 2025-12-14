/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68816
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned char) arr_0 [18ULL]);
        var_15 ^= ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) | ((~(8796093020160ULL))))), (((/* implicit */unsigned long long int) ((unsigned short) var_1)))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)24965)) >> (((arr_5 [i_1]) - (6468648780900834515LL)))));
        var_16 -= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((arr_1 [17LL] [17LL]) - (arr_1 [i_1] [i_1])))) + (arr_4 [(signed char)4])));
        arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_8)))) ? (((/* implicit */unsigned long long int) min((min((((/* implicit */int) (unsigned char)146)), (arr_2 [i_1]))), (((65011712) / (arr_2 [i_1])))))) : ((~(min((8796093020144ULL), (((/* implicit */unsigned long long int) arr_2 [i_1]))))))));
    }
    for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) /* same iter space */
    {
        arr_10 [i_2] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((11641025649209650546ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [(signed char)0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)32))) : (arr_5 [i_2]))))))) ? (arr_4 [(short)0]) : (((/* implicit */unsigned long long int) arr_2 [(_Bool)1]))));
        var_17 = ((/* implicit */short) ((((/* implicit */int) (short)24976)) | (((/* implicit */int) (_Bool)0))));
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_3 [i_2]) >> (((arr_3 [i_2]) - (16025176)))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)28930)) < (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) ((unsigned short) ((int) var_3))))));
        var_19 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (2464464570U) : (((((/* implicit */_Bool) arr_9 [i_2])) ? (1609224112U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63)))))))));
    }
}
