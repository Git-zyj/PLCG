/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61222
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
    var_16 = ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((((/* implicit */_Bool) (unsigned char)145)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 987447203)) ? (((/* implicit */int) (unsigned char)91)) : (987447203)))) : (644611995U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)65))));
    var_17 = ((/* implicit */signed char) (((-(((/* implicit */int) ((unsigned char) var_9))))) + (((/* implicit */int) (signed char)-66))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) /* same iter space */
                    {
                        arr_14 [i_2] [i_2] [(unsigned char)9] [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_2 - 1] [i_0 + 1] [i_3]))));
                        arr_15 [i_0 - 2] [i_1] [i_2 - 1] [i_2] = ((/* implicit */unsigned int) ((unsigned long long int) ((arr_4 [6LL] [6LL]) ? (2039269950417547019LL) : (606187053093857144LL))));
                        /* LoopSeq 2 */
                        for (signed char i_4 = 1; i_4 < 13; i_4 += 4) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((unsigned char) var_0)))));
                            arr_18 [i_0] [i_3] [i_2] [i_3] [i_4] [i_2] = ((/* implicit */unsigned char) (+(1718221646520878156LL)));
                            var_19 *= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_2 - 1] [i_3] [i_2] [i_1] [i_2] [i_1]))) ^ (((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)247))) : (3295361590682938068LL)))));
                        }
                        for (signed char i_5 = 1; i_5 < 13; i_5 += 4) /* same iter space */
                        {
                            arr_22 [i_0 + 1] [i_2] [i_0 + 1] [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_0 - 2] [i_0 - 2])) ? (-615966221) : (((/* implicit */int) arr_6 [i_2 - 1] [i_0 - 2] [i_0 + 1]))));
                            arr_23 [i_0] [1] [i_2] [i_3] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [(short)6] [i_2 - 1] [i_1])) ? (arr_10 [i_2] [i_2 - 1] [i_2]) : (arr_10 [i_2] [i_2 - 1] [i_2])));
                            arr_24 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)74)) ? (((/* implicit */int) (unsigned short)44324)) : (-1916286504)));
                        }
                    }
                    /* vectorizable */
                    for (unsigned char i_6 = 0; i_6 < 14; i_6 += 2) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned char) (+(var_9)));
                        /* LoopSeq 3 */
                        for (int i_7 = 1; i_7 < 11; i_7 += 4) 
                        {
                            var_21 = ((/* implicit */signed char) (unsigned char)8);
                            arr_31 [i_0] [i_1] [i_2] [i_6] [i_7] = ((/* implicit */_Bool) 4109914633U);
                            arr_32 [i_0] [i_0] [i_2] [5U] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2 - 1] [i_2 - 1])) ? (((/* implicit */int) arr_2 [i_2 - 1] [i_2 - 1])) : (-1693118760)));
                        }
                        for (signed char i_8 = 0; i_8 < 14; i_8 += 3) 
                        {
                            arr_35 [i_2] [i_6] [(signed char)11] [(signed char)7] [i_2] = ((/* implicit */_Bool) arr_8 [i_2 - 1] [i_2] [(unsigned char)6]);
                            var_22 *= ((/* implicit */signed char) ((int) ((signed char) (_Bool)1)));
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) var_6))));
                            arr_36 [i_0] [i_1] [i_0] [i_2] [i_2 - 1] [i_6] [i_8] = ((/* implicit */_Bool) ((((/* implicit */int) arr_17 [(signed char)1] [i_2] [i_2] [i_2] [i_2] [(_Bool)1])) + (((/* implicit */int) arr_6 [i_0] [i_0 - 2] [i_2 - 1]))));
                            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) 15865706122579895149ULL))));
                        }
                        for (unsigned char i_9 = 2; i_9 < 11; i_9 += 4) 
                        {
                            var_25 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_28 [i_9] [i_9] [i_9 - 1] [i_9] [i_9 + 1] [i_9 - 2])) ? (((/* implicit */long long int) ((((/* implicit */int) var_11)) + (((/* implicit */int) (unsigned short)10254))))) : ((-9223372036854775807LL - 1LL))));
                            var_26 *= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)110)) ? (var_10) : (((/* implicit */long long int) var_2)))) ^ (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_17 [(short)10] [i_9] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1]))))));
                        }
                        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) arr_11 [i_1] [i_2] [i_1] [i_1]))));
                    }
                    /* vectorizable */
                    for (unsigned char i_10 = 0; i_10 < 14; i_10 += 2) /* same iter space */
                    {
                        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (-1392549240) : (((/* implicit */int) (signed char)-60))));
                        var_29 *= ((/* implicit */signed char) arr_39 [4ULL] [i_2] [i_2] [4ULL] [i_0]);
                    }
                    var_30 = ((/* implicit */short) (+(max((arr_38 [i_2]), (arr_38 [i_2])))));
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */signed char) 1125350151028736LL);
}
