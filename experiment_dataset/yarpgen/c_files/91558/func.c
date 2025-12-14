/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91558
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
    var_19 = ((/* implicit */unsigned int) (unsigned short)36971);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (long long int i_2 = 0; i_2 < 11; i_2 += 3) /* same iter space */
            {
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */long long int) (((~(arr_5 [i_0]))) + (((/* implicit */int) var_10))))) <= (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2])) ? (arr_9 [i_0] [i_1] [i_2]) : (arr_9 [i_0] [i_1] [i_2]))))))));
                arr_12 [i_1] [i_1] [i_0] = (unsigned char)15;
            }
            for (long long int i_3 = 0; i_3 < 11; i_3 += 3) /* same iter space */
            {
                arr_16 [i_0] [i_1] [i_0] [8] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) ((signed char) (unsigned char)15))) : (((((/* implicit */_Bool) -848181531)) ? (((/* implicit */int) (signed char)-104)) : (((/* implicit */int) (short)6826)))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_21 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) 17179869183ULL)) ? (((/* implicit */int) arr_20 [i_1] [i_4])) : (((/* implicit */int) arr_7 [i_3] [i_3])))) <= (((((/* implicit */int) arr_19 [i_0] [i_1] [i_0] [i_4] [i_4])) ^ (848181509))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) -1308504649)) ? (((/* implicit */int) arr_14 [i_0] [i_1] [i_4] [i_5])) : (-848181529)))) < (var_15)))) : (((((/* implicit */_Bool) (short)32762)) ? (((/* implicit */int) arr_13 [8] [i_4] [i_5])) : (((/* implicit */int) arr_13 [i_5] [i_1] [i_4]))))));
                        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) var_7)) : (var_6))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32762)) ? (((/* implicit */int) arr_15 [i_0] [i_3] [i_4])) : (((/* implicit */int) var_14))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [1LL] [(short)4]))))))));
                        var_23 = ((/* implicit */int) min((var_15), (arr_11 [(unsigned short)1])));
                    }
                    var_24 += ((/* implicit */long long int) arr_1 [i_1] [i_3]);
                    arr_21 [i_0] [i_4] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_11 [i_0]) - (arr_11 [i_3])))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_11 [i_1]) < (arr_11 [i_0]))))) : (((arr_11 [i_4]) | (arr_11 [8LL])))));
                    arr_22 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) min(((((+(var_7))) / (((/* implicit */int) arr_14 [i_4] [i_0] [i_1] [i_0])))), (((/* implicit */int) min((((unsigned char) -443382862)), (((/* implicit */unsigned char) (signed char)58)))))));
                    arr_23 [i_0] [i_1] [i_3] [i_1] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_4)) : (var_5))))) ^ (((((/* implicit */int) ((short) var_5))) & (((int) (short)8479))))));
                }
                var_25 *= ((/* implicit */short) arr_10 [i_0]);
                arr_24 [i_0] [i_0] [i_0] [(_Bool)0] &= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_3] [8LL] [(unsigned short)7] [2] [(unsigned short)7] [i_0]))) - ((-(arr_17 [i_0])))));
                var_26 = ((/* implicit */int) arr_13 [i_0] [1] [3LL]);
            }
            var_27 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) min((2008651501), (848181521)))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65530)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)254))) : (17179869183ULL)))) ? (((/* implicit */unsigned int) -848181529)) : (((unsigned int) arr_15 [i_0] [i_0] [i_0]))))));
            var_28 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)8128)) ? (arr_9 [i_0] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6706))))) > (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [(unsigned char)3])) ? (arr_5 [i_0]) : (((/* implicit */int) var_10))))))))) < (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_0 [2ULL])), (arr_8 [i_1] [(unsigned short)1])))) ? (((((/* implicit */_Bool) var_10)) ? (arr_8 [i_1] [i_1]) : (((/* implicit */unsigned long long int) arr_11 [i_0])))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_0] [i_0] [i_0])) + (-1413552112))))))));
        }
        arr_25 [i_0] = ((/* implicit */_Bool) (((-(((/* implicit */int) min(((unsigned char)38), (arr_3 [i_0])))))) | (((((/* implicit */_Bool) -231479594)) ? (-848181529) : (((/* implicit */int) arr_3 [i_0]))))));
    }
}
