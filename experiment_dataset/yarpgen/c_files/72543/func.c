/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72543
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_13 = ((((/* implicit */_Bool) (-(arr_0 [i_1 + 1])))) ? (((arr_0 [i_1 + 1]) / (arr_0 [i_1 + 2]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1 + 1])))))));
                                arr_10 [i_4] [i_1] [i_2] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) arr_8 [i_1 + 2] [i_1] [i_2] [(signed char)3] [(signed char)12]);
                            }
                        } 
                    } 
                    arr_11 [(short)7] [(short)7] [i_1] [i_2] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */long long int) (~(((/* implicit */int) arr_7 [(_Bool)1] [12U] [i_2 - 1] [i_1] [(_Bool)1]))))) != ((-(arr_0 [i_2]))))));
                    /* LoopSeq 4 */
                    for (short i_5 = 0; i_5 < 17; i_5 += 4) /* same iter space */
                    {
                        var_14 = ((/* implicit */unsigned char) (-(((min((((/* implicit */unsigned long long int) var_11)), (arr_9 [i_0] [i_1] [i_2] [13LL] [i_5]))) | (min((arr_15 [i_5] [i_2] [i_5] [i_2] [i_1 + 1] [i_0]), (((/* implicit */unsigned long long int) arr_3 [i_0]))))))));
                        arr_16 [i_1] = ((/* implicit */signed char) (-((-(((/* implicit */int) ((signed char) (unsigned short)13432)))))));
                        arr_17 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)13432))) || (((/* implicit */_Bool) (((~(((/* implicit */int) arr_5 [i_1])))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [2ULL] [i_1] [i_2 - 1] [i_0] [(unsigned short)7]))))))))));
                        var_15 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_0] [(short)4] [(short)4] [i_2] [i_5])))))));
                    }
                    /* vectorizable */
                    for (short i_6 = 0; i_6 < 17; i_6 += 4) /* same iter space */
                    {
                        var_16 ^= ((signed char) (unsigned short)52121);
                        arr_20 [i_1] [i_1] [i_1] [i_6] [i_6] = ((arr_14 [i_1] [i_1 + 2] [i_1 + 1]) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_2 + 1] [i_1] [(unsigned short)13] [i_2 - 1] [i_2])) ? (((/* implicit */int) arr_7 [i_2 + 1] [i_2] [i_2] [i_6] [i_2])) : (arr_2 [i_0])))));
                        arr_21 [i_1 - 1] [i_2] [i_1] [i_6] [i_0] [i_2] = ((/* implicit */signed char) (-((+(((/* implicit */int) arr_6 [i_1]))))));
                    }
                    for (signed char i_7 = 4; i_7 < 14; i_7 += 4) 
                    {
                        arr_24 [i_0] [i_1 + 2] [i_1] [i_7 + 3] = ((/* implicit */unsigned long long int) ((var_1) == (((/* implicit */unsigned long long int) (~(arr_12 [i_7 + 3] [i_2] [i_1] [i_2 - 1] [i_1]))))));
                        arr_25 [i_1] [i_2] [i_1 + 1] [i_1] = ((/* implicit */unsigned short) ((int) max((arr_15 [i_1 + 2] [i_2 - 1] [(unsigned char)4] [i_7 - 3] [i_7] [(_Bool)1]), (arr_15 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_7 - 3] [i_7 - 4] [i_7]))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) arr_18 [i_1 + 1] [(_Bool)1] [i_2 + 1] [(short)7] [i_2] [i_8]))) != (max((((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_1] [i_0])), ((-(((/* implicit */int) arr_4 [i_2]))))))));
                        arr_28 [i_1 + 2] [i_8] [i_1] [i_1 + 2] [i_0] = ((/* implicit */signed char) var_4);
                    }
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) max(((unsigned short)26031), (((/* implicit */unsigned short) arr_23 [14ULL] [14ULL]))))) * (max((((/* implicit */int) arr_26 [i_0] [(signed char)14] [(_Bool)1])), (arr_2 [i_0])))))) || (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)26031)))))));
        arr_29 [(unsigned char)10] = ((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_27 [i_0] [i_0] [i_0])) >> (((((/* implicit */int) arr_27 [i_0] [i_0] [i_0])) - (69))))));
    }
    var_19 = ((/* implicit */short) var_6);
    var_20 = ((/* implicit */unsigned short) 21U);
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((min((min((((/* implicit */unsigned int) 2147483637)), (var_6))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (unsigned char)62)), (var_2)))))) - (46U)))));
    var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) > (max((var_6), (((/* implicit */unsigned int) var_0))))));
}
