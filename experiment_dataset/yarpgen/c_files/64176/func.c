/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64176
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
    var_10 = ((/* implicit */short) var_3);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))));
        var_11 += ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [10U]))) / (var_8))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-89)))))));
        var_12 *= ((/* implicit */_Bool) min((min((((var_6) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [0LL]))))), (((/* implicit */unsigned int) min((arr_0 [(unsigned char)20]), (((/* implicit */unsigned short) (unsigned char)74))))))), (var_6)));
        arr_3 [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (((~(-67108864LL))) >> ((((+(((/* implicit */int) (unsigned short)36172)))) - (36170)))))), (((max((((/* implicit */unsigned long long int) arr_0 [i_0])), (var_8))) >> (((((((/* implicit */_Bool) arr_0 [i_0])) ? (14772529609378612343ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) - (14772529609378612311ULL)))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_13 += ((/* implicit */unsigned long long int) var_7);
                    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) max((((/* implicit */int) ((((/* implicit */_Bool) ((18446744073709551615ULL) << (((/* implicit */int) arr_1 [(signed char)2]))))) || (((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_7))))))), (min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_7 [i_1] [i_1] [6ULL])) : (((/* implicit */int) (unsigned char)173)))), (((((/* implicit */int) arr_7 [i_0] [i_0] [6ULL])) / (((/* implicit */int) var_5)))))))))));
                }
            } 
        } 
    }
}
