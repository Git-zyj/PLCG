/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83449
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
    var_14 = var_9;
    /* LoopSeq 2 */
    for (unsigned short i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        var_15 -= ((/* implicit */short) ((unsigned char) max(((unsigned short)65535), (((/* implicit */unsigned short) var_0)))));
        arr_4 [i_0] = ((/* implicit */int) ((((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) arr_1 [i_0])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (var_12)))) ? (((/* implicit */int) arr_0 [i_0] [i_0 - 4])) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))))) : (((((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0] [i_0]))))) ^ (((unsigned int) arr_1 [i_0]))))));
        /* LoopSeq 2 */
        for (int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            arr_9 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) min(((unsigned short)65522), (((/* implicit */unsigned short) arr_8 [i_0] [i_0] [i_1 - 1]))))) * (((((/* implicit */int) var_3)) / (((/* implicit */int) arr_8 [i_1 + 2] [i_0] [8]))))));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                /* LoopSeq 1 */
                for (signed char i_3 = 4; i_3 < 16; i_3 += 3) 
                {
                    arr_17 [i_0] [i_0 - 2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) (-((~(((/* implicit */int) (unsigned short)0))))));
                    /* LoopSeq 2 */
                    for (int i_4 = 4; i_4 < 14; i_4 += 3) /* same iter space */
                    {
                        var_16 *= ((/* implicit */short) ((((max((((/* implicit */unsigned long long int) (unsigned short)0)), (arr_6 [i_1] [i_3]))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)17194)) : (((/* implicit */int) var_2))))))) ? (arr_6 [i_1] [i_3 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)7))))))));
                        arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_0 - 2]) : (arr_3 [i_0 + 2])))) ? (arr_3 [i_0]) : (((/* implicit */long long int) max((((/* implicit */unsigned int) var_9)), (arr_12 [i_0] [i_4 + 1] [i_1 + 1]))))));
                        arr_21 [i_4] [i_4] [i_0] [16U] [i_4] = ((/* implicit */short) arr_7 [i_0] [i_0] [i_3 - 3]);
                    }
                    for (int i_5 = 4; i_5 < 14; i_5 += 3) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_6 [i_1] [i_1 - 2]), (arr_6 [i_1] [i_1 - 2])))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned char)66)) % (((/* implicit */int) var_11)))))) : (arr_11 [i_0] [i_1] [(unsigned char)14]))))));
                        var_18 = ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_2]))) == (((((/* implicit */_Bool) arr_11 [i_0 - 4] [i_0] [16U])) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) arr_11 [i_0] [i_0] [i_0])) : (arr_3 [i_1 + 2]))) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0 + 3] [i_0] [i_0 + 3] [i_0] [i_0] [i_0] [(short)13]))))));
                        arr_26 [i_5] [i_5] [i_0] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */int) (short)2185);
                    }
                }
                arr_27 [i_0] = ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((/* implicit */long long int) ((unsigned int) (~(((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_1] [i_2] [i_2])))))) : (((((/* implicit */_Bool) arr_11 [i_2] [i_0] [i_0])) ? (arr_3 [i_0 - 3]) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0 + 2] [i_0] [i_1] [i_0 + 2] [i_0 + 2] [i_0] [i_2]))))));
            }
        }
        for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)17194))));
            arr_30 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_23 [1] [5LL] [(short)7] [i_0] [14ULL] [i_0 - 1]), (arr_11 [i_0 + 3] [i_0] [i_6]))))));
        }
    }
    for (unsigned char i_7 = 0; i_7 < 18; i_7 += 3) 
    {
        arr_35 [i_7] = ((/* implicit */short) min((min((((/* implicit */unsigned int) arr_33 [i_7] [i_7])), (arr_31 [i_7]))), (((arr_31 [i_7]) + (arr_31 [i_7])))));
        arr_36 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)65522)) : (((/* implicit */int) var_3))))))))) : (min((((/* implicit */unsigned int) max((var_9), (var_11)))), (((((/* implicit */unsigned int) arr_32 [i_7])) * (arr_31 [i_7])))))));
    }
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) var_1))));
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) 1056911608))));
}
