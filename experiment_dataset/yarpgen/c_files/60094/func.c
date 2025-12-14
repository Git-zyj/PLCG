/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60094
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        arr_10 [i_0] [i_1] [i_0] [i_3] = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 0U)))) ? (((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_4)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (9223372036854775781LL))))))) ? (((((/* implicit */_Bool) (unsigned char)217)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_3 [i_0 - 3]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) min((var_7), (((/* implicit */unsigned char) (_Bool)0))))), (max((var_1), (var_1))))))));
                        arr_11 [i_0] [i_0] [i_0] [i_3] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)234)) << (((((/* implicit */int) (unsigned char)223)) - (218)))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_4 = 2; i_4 < 17; i_4 += 1) 
                        {
                            var_15 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_12 [i_0] [14ULL] [i_2] [i_3] [i_4 + 1])) : (((/* implicit */int) var_8))))) ? (((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0 + 4] [i_0])) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_2)))));
                            var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) var_13)) ^ (((/* implicit */int) var_4))))))));
                            var_17 = ((/* implicit */unsigned char) arr_12 [i_0] [i_0] [i_0] [i_0 + 1] [i_0]);
                            arr_15 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) var_14))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned char i_5 = 2; i_5 < 19; i_5 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (-(((/* implicit */int) var_9)))))));
                        var_19 = ((/* implicit */unsigned int) ((signed char) var_12));
                        arr_19 [i_0] [9U] [9U] [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_0 + 2] [i_0 + 2] [i_2] [i_5 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) 18446744073709551614ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_6 [i_0])))));
                        arr_20 [i_5] [i_5] &= ((/* implicit */short) var_7);
                        /* LoopSeq 1 */
                        for (int i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            arr_23 [2U] [i_5] [i_2] &= ((/* implicit */_Bool) ((signed char) 18446744073709551609ULL));
                            arr_24 [i_0] [i_1] [13U] [i_5 + 1] [i_1] [i_2] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (arr_1 [i_5 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                            arr_25 [i_0] [i_5] = ((/* implicit */short) arr_22 [i_0 + 1] [i_5 + 1] [i_5] [i_6]);
                            arr_26 [i_0 + 1] [(short)15] [i_2] [i_2] [i_0] [i_6] = ((/* implicit */signed char) var_7);
                        }
                    }
                    var_20 = ((/* implicit */int) var_12);
                    arr_27 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (unsigned char)39)) ? (((/* implicit */int) (unsigned char)204)) : (((/* implicit */int) arr_4 [i_0 - 2] [i_0] [i_0] [i_0 + 2]))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((_Bool) var_0)))));
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967273U)) ? (((/* implicit */unsigned int) 0)) : (1245446118U)));
}
