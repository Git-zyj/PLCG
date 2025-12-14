/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87782
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
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_13 = min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_1 [0LL])))) : (((arr_0 [i_0]) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60072))))))), (min((((/* implicit */long long int) ((unsigned short) (unsigned char)60))), (((((/* implicit */_Bool) (unsigned short)31238)) ? (((/* implicit */long long int) 2814458808U)) : (6397375796443090681LL))))));
        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) min((((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)118)), (arr_1 [i_0])))), (((max((((/* implicit */long long int) arr_1 [4ULL])), (3178163119878242518LL))) / (((((arr_0 [i_0]) + (9223372036854775807LL))) >> (((/* implicit */int) (signed char)16)))))))))));
        var_15 = ((/* implicit */unsigned int) (unsigned char)0);
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) 58720256U);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 2) /* same iter space */
                    {
                        var_17 = (-(((((((((/* implicit */int) (signed char)80)) - (((/* implicit */int) (unsigned short)1016)))) + (2147483647))) >> (((max((((/* implicit */unsigned long long int) arr_4 [i_2] [i_3 + 1])), (14954697707171183312ULL))) - (14954697707171183297ULL))))));
                        var_18 = ((/* implicit */int) (_Bool)1);
                    }
                    for (unsigned long long int i_4 = 1; i_4 < 13; i_4 += 2) /* same iter space */
                    {
                        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_4 + 1])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned char)255))))) ? (((((/* implicit */_Bool) arr_6 [i_4] [i_4] [i_4 + 1])) ? (arr_6 [i_4 + 1] [i_4] [i_4 + 1]) : (arr_6 [i_4] [i_4 + 1] [i_4 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [i_4 - 1]) <= (((/* implicit */long long int) var_4)))))))))));
                        /* LoopSeq 4 */
                        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 3) /* same iter space */
                        {
                            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */_Bool) ((signed char) ((0LL) < (((/* implicit */long long int) ((/* implicit */int) var_10))))))) ? (((/* implicit */unsigned int) var_5)) : (((((/* implicit */_Bool) 1120268543U)) ? (((/* implicit */unsigned int) arr_15 [i_0] [(short)0] [i_0])) : (1974352138U))))))));
                            arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) ? (-1997277684) : (((/* implicit */int) (signed char)64))));
                            var_21 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_15 [i_4] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (((arr_13 [i_0] [i_0] [i_0] [i_0] [(signed char)3] [i_0]) % (((/* implicit */long long int) ((/* implicit */int) var_10))))))) == (max((((/* implicit */long long int) arr_12 [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_4])), (3085393016926991255LL)))));
                        }
                        /* vectorizable */
                        for (unsigned int i_6 = 0; i_6 < 14; i_6 += 3) /* same iter space */
                        {
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_6] [4] [i_2] [i_1]))))) : (((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */unsigned long long int) 8874741198924164127LL)) : (4398046510976ULL)))));
                            var_23 = ((/* implicit */int) ((1587344881U) < (arr_1 [i_0])));
                            var_24 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned int) arr_15 [i_6] [i_2] [i_2])) <= (4122365330U)))) >> (((((((((/* implicit */int) (short)-1)) + (2147483647))) >> (((/* implicit */int) (_Bool)1)))) - (1073741803)))));
                        }
                        for (int i_7 = 0; i_7 < 14; i_7 += 4) /* same iter space */
                        {
                            arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [6U] = ((/* implicit */unsigned int) min((var_5), ((~(((/* implicit */int) var_8))))));
                            arr_26 [i_0] [i_1] [(short)0] [i_4] [7U] = ((((/* implicit */_Bool) max((-844759278721076084LL), (((/* implicit */long long int) arr_16 [5LL] [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_7]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)-26698)), (arr_7 [i_4])))) ? (((/* implicit */int) ((unsigned short) 2295173091U))) : (((/* implicit */int) arr_12 [13U] [13U] [i_4 + 1] [13U] [i_4] [i_2]))))) : (((((/* implicit */_Bool) (signed char)-114)) ? (arr_1 [i_4 + 1]) : (arr_1 [i_4 + 1]))));
                        }
                        for (int i_8 = 0; i_8 < 14; i_8 += 4) /* same iter space */
                        {
                            arr_30 [i_8] [(signed char)4] [(_Bool)0] [i_1] [i_0] = ((/* implicit */unsigned int) 7115128599786057324LL);
                            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_2] [i_8] [6ULL])) >> (((max((arr_19 [i_2] [i_1] [i_2] [i_4] [i_1] [i_8]), (((/* implicit */unsigned int) (signed char)22)))) - (1898873666U)))))), (((((/* implicit */_Bool) max((19818432018641970ULL), (((/* implicit */unsigned long long int) arr_15 [i_0] [i_8] [(short)1]))))) ? (((unsigned long long int) 13843248768439024602ULL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))))));
                        }
                    }
                }
            } 
        } 
    }
    var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -1618566289))));
}
