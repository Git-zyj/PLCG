/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90798
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] = arr_1 [i_0];
        var_16 = ((/* implicit */int) ((short) (_Bool)1));
        var_17 = ((/* implicit */long long int) ((((arr_1 [i_0]) <= (var_10))) ? (((((4294967277U) <= (arr_1 [i_0]))) ? (min((((/* implicit */unsigned int) var_1)), (arr_1 [12]))) : (max((((/* implicit */unsigned int) (_Bool)1)), (arr_1 [i_0]))))) : ((+(max((159935206U), (((/* implicit */unsigned int) var_15))))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_2 = 1; i_2 < 13; i_2 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                for (short i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    for (signed char i_5 = 3; i_5 < 16; i_5 += 2) 
                    {
                        {
                            var_18 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1] [i_2 + 2] [i_5 - 2] [i_3])) ? (864691128455135232ULL) : (((/* implicit */unsigned long long int) arr_11 [i_5] [i_2 - 1] [i_5 - 1] [i_3]))));
                            arr_15 [i_2] [i_1] [i_1] [(_Bool)1] [i_3] [i_4] [(signed char)16] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_2 + 1] [i_2 + 3])) >> (((18446744073709551615ULL) - (18446744073709551595ULL)))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned short i_6 = 1; i_6 < 14; i_6 += 4) 
            {
                var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_4 [i_1])) ? (4ULL) : (0ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (!((_Bool)1))))));
            }
        }
        for (unsigned char i_7 = 1; i_7 < 16; i_7 += 4) 
        {
            var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [(_Bool)1] [i_7 - 1])) ? (((/* implicit */int) arr_8 [(short)8] [(unsigned char)0] [(short)8])) : (((/* implicit */int) arr_8 [12ULL] [i_7 + 1] [12ULL]))));
            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (+(arr_19 [i_7 - 1] [i_7 - 1] [i_7 + 1]))))));
        }
        var_23 = ((/* implicit */int) ((((arr_0 [5U]) & (((/* implicit */long long int) ((/* implicit */int) var_11))))) - (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1] [i_1] [4LL] [i_1])))));
        arr_22 [i_1] = ((((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (unsigned short)15593))))) | ((+(((/* implicit */int) (signed char)76)))));
    }
    var_24 = ((/* implicit */long long int) max((var_24), (min((((/* implicit */long long int) (~(max((3670016), (((/* implicit */int) (short)0))))))), (max((((/* implicit */long long int) ((-904694454) == (((/* implicit */int) (unsigned char)194))))), (min((var_5), (((/* implicit */long long int) 159935206U))))))))));
}
