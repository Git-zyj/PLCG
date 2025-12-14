/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64861
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
    var_15 = ((/* implicit */signed char) min((max((((/* implicit */unsigned int) (signed char)69)), (4294967273U))), (((unsigned int) 4294967273U))));
    var_16 = ((/* implicit */unsigned short) var_1);
    /* LoopNest 3 */
    for (unsigned int i_0 = 4; i_0 < 9; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0 - 2] [7LL] [i_0 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [(_Bool)1])) ? (((arr_5 [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1]) ^ (arr_5 [i_2 + 1] [i_2 + 1] [(signed char)8] [i_2 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1])))));
                    var_17 *= ((((/* implicit */_Bool) max((((/* implicit */long long int) ((signed char) 23U))), (var_6)))) ? (arr_7 [i_1]) : (arr_7 [5ULL]));
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 2; i_3 < 8; i_3 += 1) /* same iter space */
                    {
                        arr_11 [(signed char)6] [i_3] [i_3] = ((/* implicit */signed char) (+(((((/* implicit */int) arr_0 [i_3 - 1])) << (((((/* implicit */int) arr_0 [i_3 - 1])) - (55)))))));
                        arr_12 [i_2] [(short)1] [i_3] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) max((var_5), (1824148146U)))) ? (max((var_10), (var_2))) : (var_12))));
                    }
                    for (unsigned short i_4 = 2; i_4 < 8; i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_2] [i_4] [i_2] [i_2] [(signed char)4] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) (signed char)-1))) > ((+(((/* implicit */int) ((signed char) arr_0 [i_0])))))));
                        var_18 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0])))))) : (min(((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0]))) : (550536429777376882LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (arr_2 [i_4]) : (arr_7 [i_1]))))))));
                        arr_16 [i_0] [i_1] [i_2 - 1] [i_0] [i_1] [(unsigned short)6] = max(((-((-(3831196334U))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_2 + 1])) ^ (((/* implicit */int) arr_13 [i_0] [i_2 + 1] [i_2 + 1] [i_2] [i_4]))))));
                    }
                    for (unsigned short i_5 = 2; i_5 < 8; i_5 += 1) /* same iter space */
                    {
                        arr_20 [i_0] [i_0] [i_1] [i_2] [i_5 - 1] = ((/* implicit */unsigned int) ((long long int) (signed char)-89));
                        arr_21 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(11430135007626833338ULL)))) ? (max((((((/* implicit */_Bool) 2930071809U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0 - 3] [i_1] [i_2] [i_2 - 1] [i_2] [i_5]))) : (463770962U))), (((arr_2 [i_5]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))))) : (max((((unsigned int) arr_6 [i_2 + 1])), ((+(var_2)))))));
                        arr_22 [i_1] [i_0 - 2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 4294967273U)) ? (((/* implicit */long long int) 463770961U)) : (((((/* implicit */_Bool) var_12)) ? (-550536429777376883LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)57))))))) < (((/* implicit */long long int) 23U))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) var_11))))))));
                            var_20 += ((/* implicit */unsigned int) ((signed char) arr_19 [i_5 - 2] [i_2 - 1] [(_Bool)1] [i_2] [i_2] [i_2]));
                            arr_25 [i_0] = ((/* implicit */signed char) arr_10 [i_0] [i_1] [i_2] [i_5 + 2] [i_6]);
                            arr_26 [7ULL] [(signed char)0] [i_2] [i_2] [i_5 + 2] [7ULL] = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) 23U)))));
                            arr_27 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_23 [4] [i_0 - 3] [i_2 + 1] [i_0 - 3] [9U]))));
                        }
                    }
                    for (unsigned short i_7 = 2; i_7 < 8; i_7 += 1) /* same iter space */
                    {
                        arr_30 [i_7 + 2] [i_0 - 1] = ((/* implicit */unsigned int) ((max((((/* implicit */long long int) max((((/* implicit */unsigned int) (short)24969)), (3711629216U)))), (max((-8921808208589979536LL), (arr_28 [i_7] [4LL] [i_1] [i_0]))))) | ((+(((((-8921808208589979536LL) + (9223372036854775807LL))) >> (23U)))))));
                        var_21 = ((/* implicit */signed char) ((((((((/* implicit */int) (signed char)74)) | (((/* implicit */int) var_8)))) == (((/* implicit */int) min((((/* implicit */short) arr_23 [i_0] [i_0] [i_0] [i_2 - 1] [i_1])), (arr_17 [i_7 + 2] [i_2] [2ULL] [i_1] [i_0])))))) ? (arr_10 [4U] [i_1] [(unsigned short)2] [i_0 - 2] [i_7 + 1]) : (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_29 [i_0 - 4] [i_1])))) ? (((((/* implicit */_Bool) arr_24 [i_0] [i_0 + 1] [i_1] [i_1] [i_1] [i_0] [7U])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [(signed char)1] [i_1] [i_1] [i_7 + 1] [i_0 - 2] [i_0 - 2] [i_0]))) : (var_3))) : (max((var_5), (3831196332U))))))));
                    }
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned int) min((var_22), (var_9)));
}
