/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72428
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_5 [i_1] = ((/* implicit */int) max((((((/* implicit */_Bool) 2266952222424058147ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_8))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_7)), (-7902356646219488991LL))))));
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 1) /* same iter space */
                {
                    arr_9 [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)58), (((/* implicit */signed char) var_7)))))) - (((unsigned long long int) var_12))))) ? (((-7517043964866676677LL) - (arr_4 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_9))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) /* same iter space */
                    {
                        arr_14 [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((unsigned char) (signed char)-58))) : (((/* implicit */int) ((_Bool) (_Bool)1)))));
                        arr_15 [i_0] [7ULL] [i_2] [7ULL] [(_Bool)1] = ((/* implicit */unsigned short) ((unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) * (var_13))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_7))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 2) /* same iter space */
                    {
                        arr_18 [i_0] [i_1] [i_2] [i_4] [i_1] = ((long long int) ((arr_11 [i_0] [i_0] [i_0] [i_1] [i_0] [(unsigned char)11]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_8)));
                        arr_19 [i_0] [i_1] [i_0] [i_1] [6ULL] [6ULL] |= ((/* implicit */unsigned int) (signed char)58);
                        arr_20 [i_2] [i_2] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]);
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 2) /* same iter space */
                    {
                        arr_24 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((_Bool) ((_Bool) (short)26713)));
                        arr_25 [i_0] [i_0] = ((/* implicit */short) ((unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 953638767)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28945))) : (var_8)))))));
                    }
                }
                for (unsigned long long int i_6 = 1; i_6 < 12; i_6 += 1) /* same iter space */
                {
                    arr_29 [i_0] = ((/* implicit */unsigned short) var_8);
                    arr_30 [i_0] [i_1] [i_1] [i_6] = ((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]);
                }
                for (short i_7 = 1; i_7 < 12; i_7 += 3) 
                {
                    arr_33 [i_0] [(short)7] [i_0] [(short)7] = (!(((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) 434042316)) ? (((/* implicit */int) (unsigned char)47)) : (434042316))))));
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 13; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 1; i_9 < 10; i_9 += 4) 
                        {
                            {
                                arr_39 [i_7] [(_Bool)1] [i_7] [i_7 - 1] [i_0] [i_7 - 1] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_16 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 - 1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_12)))), (((/* implicit */int) var_3))));
                                arr_40 [i_0] [i_0] [i_1] [(unsigned char)9] [i_0] [i_0] [(_Bool)1] = min((((((/* implicit */_Bool) ((int) (short)26685))) ? (((/* implicit */int) max((((/* implicit */short) (signed char)-59)), (var_12)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-59))))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))));
                            }
                        } 
                    } 
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    arr_43 [i_0] [i_10] [i_10] [i_0] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17505566455661476986ULL)) ? (((/* implicit */int) (short)-28948)) : (-434042316)))) / (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (-1345439685) : (((/* implicit */int) (short)-15746))))) - (((((/* implicit */_Bool) (short)-26692)) ? (arr_3 [i_0] [i_0] [i_10]) : (((/* implicit */unsigned long long int) 434042324)))))));
                    arr_44 [i_10] [4ULL] [i_10] [i_10] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6971513549698430434ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-74))) : (arr_12 [i_1] [i_1])))) ? (((/* implicit */int) max((var_2), (((/* implicit */unsigned short) arr_16 [i_0] [(unsigned short)6] [i_0] [(_Bool)0]))))) : (((/* implicit */int) min((var_4), (((/* implicit */unsigned short) (short)-26690))))))));
                    arr_45 [i_10] [i_10] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))), (min((arr_23 [i_0] [i_0] [i_0] [i_1] [i_0] [i_10]), (((/* implicit */unsigned long long int) arr_2 [i_0]))))));
                    arr_46 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -676458543)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (7971530585765946874LL))))))) >> (((((/* implicit */_Bool) 1378174935U)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) (unsigned char)200))))) : (((/* implicit */int) (signed char)118))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_11 = 1; i_11 < 12; i_11 += 4) 
                    {
                        arr_50 [i_0] [i_1] [i_1] [i_10] [(unsigned char)6] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) (signed char)77))) ? (((unsigned long long int) var_10)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_3))))));
                        arr_51 [i_11] [i_1] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_27 [i_11] [i_11 - 1] [i_10] [i_11]))));
                    }
                }
                arr_52 [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((arr_8 [i_0] [1ULL] [1]) ? (((/* implicit */int) (_Bool)1)) : (max((((/* implicit */int) (unsigned short)40349)), (2146229370))))) : (((/* implicit */int) var_9))));
            }
        } 
    } 
    var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) var_4))));
}
