/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70199
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
    var_19 *= ((/* implicit */signed char) (+(((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) | (var_8))) ^ (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_8)))))));
    var_20 *= ((/* implicit */unsigned long long int) var_15);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) max((((((/* implicit */_Bool) min((((/* implicit */int) arr_0 [i_0] [i_0])), (var_12)))) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))))), (((/* implicit */unsigned int) arr_0 [i_0] [i_0])))))));
        arr_2 [i_0] [i_0] &= ((/* implicit */unsigned long long int) arr_1 [i_0]);
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_9)), (((((/* implicit */_Bool) ((((/* implicit */int) (short)26892)) >> (((((/* implicit */int) (short)-13711)) + (13741)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) var_18)) > (arr_1 [i_0]))))) : (((((/* implicit */_Bool) 0)) ? (9071360677837985928LL) : (((/* implicit */long long int) ((/* implicit */int) (short)26898))))))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        var_23 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1] [(unsigned short)1])) | (((/* implicit */int) arr_4 [i_1] [10LL]))))) ? (((/* implicit */int) ((short) arr_1 [i_1]))) : (((/* implicit */int) max((arr_4 [(unsigned char)2] [i_1]), (((/* implicit */unsigned char) arr_0 [i_1] [i_1]))))))));
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) var_16))));
        var_25 = ((/* implicit */unsigned int) arr_4 [i_1] [i_1]);
        var_26 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) -1158215194)) : (3226355566231252954ULL))) << (((/* implicit */int) ((((/* implicit */int) ((-1158215194) <= (var_18)))) != (((int) arr_0 [i_1] [i_1])))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_3 = 2; i_3 < 14; i_3 += 1) 
            {
                var_27 += ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) ((0ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)50)))))))));
                var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3 + 1] [i_2] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_11 [i_1] [i_2] [i_1] [i_1])))) || (((/* implicit */_Bool) (signed char)-74))));
                var_29 = ((/* implicit */unsigned long long int) (unsigned short)5374);
                arr_12 [(unsigned char)4] |= ((/* implicit */short) arr_7 [i_1] [4U]);
            }
            var_30 = ((/* implicit */int) max((((unsigned int) max((((/* implicit */int) arr_0 [i_1] [i_1])), (var_11)))), (((/* implicit */unsigned int) ((int) ((2097024) / (((/* implicit */int) (unsigned short)38986))))))));
            var_31 = ((/* implicit */unsigned long long int) ((signed char) min((((unsigned short) arr_9 [i_1] [i_1] [i_1] [i_2 - 2])), (((/* implicit */unsigned short) arr_0 [i_2] [i_1])))));
        }
    }
}
