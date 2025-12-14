/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57478
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_19 = (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-79)));
                var_20 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (arr_1 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_3 [(unsigned short)8] [i_1]) : (arr_3 [(unsigned short)0] [i_1])))) ? (((((/* implicit */_Bool) arr_2 [i_1] [i_1] [0LL])) ? (5685399802405210169ULL) : (var_4))) : (((((/* implicit */_Bool) arr_1 [(signed char)2] [i_1])) ? (var_7) : (((/* implicit */unsigned long long int) var_17)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_1 [(unsigned short)6] [i_1])))))))))))));
            }
        } 
    } 
    var_22 = (((!((_Bool)1))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)253)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)79)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)226)) ? (((/* implicit */int) (unsigned char)253)) : (((/* implicit */int) var_16))))) : (((long long int) 2147483647)))) : (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */long long int) 2147483647)) : (288230376151711743LL))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_2 = 2; i_2 < 11; i_2 += 1) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned char) ((unsigned short) var_5));
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (var_5) : (((/* implicit */int) var_16))));
    }
    for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            for (unsigned int i_5 = 1; i_5 < 19; i_5 += 4) 
            {
                {
                    arr_17 [i_3] [i_4] [i_5 + 2] = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)41169))))))) ? (((((/* implicit */_Bool) min((arr_11 [i_3]), (arr_11 [i_3])))) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (short)1))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) 67108863)) : (arr_11 [i_3]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_11 [i_3])))) ? (((/* implicit */int) ((_Bool) var_13))) : (((((/* implicit */_Bool) arr_15 [i_3] [i_3] [i_5])) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) arr_12 [i_3] [i_3])))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 2; i_7 < 19; i_7 += 1) 
                        {
                            arr_25 [i_3] [i_3] [i_4] [i_5] [i_6] [i_7] = (!(((/* implicit */_Bool) (+(arr_18 [i_3] [i_4] [(unsigned short)16] [i_6] [i_3])))));
                            arr_26 [i_3] [i_7] [i_6] [i_5] [i_4] [18ULL] [i_3] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) (unsigned short)24367)))));
                        }
                        var_24 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_12 [i_3] [i_3]))));
                        arr_27 [i_6] [i_5] [i_3] [i_4] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_3] [i_3] [i_3])) ? (-2952523) : (((/* implicit */int) (short)-14))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_3])))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)78))) : (arr_15 [(_Bool)1] [i_3] [i_6])))));
                    }
                    var_25 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_20 [i_5 - 1] [i_5 - 1] [i_5])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_20 [i_5 + 3] [i_5 + 2] [i_5]))))));
                }
            } 
        } 
        var_26 = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_13 [i_3])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((int) (unsigned char)236))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_3] [i_3])))))) : (((((/* implicit */_Bool) (short)-17)) ? (((/* implicit */unsigned long long int) arr_14 [i_3] [i_3] [i_3] [i_3])) : (var_7))));
        arr_28 [i_3] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((long long int) (((_Bool)1) ? (var_5) : (((/* implicit */int) (short)21925)))))), (((((/* implicit */_Bool) 0LL)) ? (((((/* implicit */_Bool) var_7)) ? (var_13) : (((/* implicit */unsigned long long int) arr_18 [i_3] [i_3] [i_3] [i_3] [i_3])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_3] [i_3] [i_3])))))));
    }
}
