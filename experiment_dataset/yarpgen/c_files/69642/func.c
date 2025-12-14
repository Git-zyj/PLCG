/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69642
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
    var_19 = ((/* implicit */short) min((((/* implicit */unsigned int) var_18)), ((+(991348782U)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] [(signed char)18] = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)10)) * (((/* implicit */int) arr_2 [i_2 + 2]))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (3652435848375885723LL)))) : (((((/* implicit */int) (_Bool)0)) >> (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-125)) < (((/* implicit */int) (_Bool)1)))))) <= (min((var_15), (((/* implicit */unsigned int) (unsigned short)65322)))))))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 4) 
                    {
                        var_20 = ((((/* implicit */int) ((((/* implicit */_Bool) ((signed char) var_6))) && (((/* implicit */_Bool) min(((signed char)104), (((/* implicit */signed char) arr_4 [i_0] [i_1])))))))) <= (min((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_12)))), (((((/* implicit */int) (signed char)-125)) / (((/* implicit */int) (unsigned char)89)))))));
                        var_21 = (-(((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) var_13))) || (((/* implicit */_Bool) 3303618513U))))));
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            arr_14 [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */int) arr_7 [i_0])) % (((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) min((arr_10 [i_0] [(signed char)0]), (arr_10 [(short)4] [i_2]))))));
                            var_22 &= ((/* implicit */short) (+(((((/* implicit */int) var_3)) + (((/* implicit */int) (unsigned char)212))))));
                        }
                        for (unsigned char i_5 = 1; i_5 < 19; i_5 += 1) 
                        {
                            var_23 = ((/* implicit */signed char) max((min((((/* implicit */long long int) 3798556244U)), (var_13))), (((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) / (arr_16 [i_2] [i_0] [i_2]))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_3] [i_0] [i_5])) : (((/* implicit */int) var_14))))))))));
                            var_24 = ((/* implicit */signed char) (~(((((/* implicit */int) arr_6 [i_3 + 1] [(unsigned short)20] [i_2 + 1] [i_3])) >> (((/* implicit */int) arr_6 [i_3 - 1] [i_1] [i_2 + 2] [i_3]))))));
                        }
                        arr_17 [i_0] [i_1] [i_0] [i_3] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((arr_3 [i_0] [i_2]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))) ? (((long long int) (_Bool)1)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1)))))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) == (991348782U)))), (min((((/* implicit */unsigned int) (signed char)-118)), (991348770U))))))));
                        arr_18 [i_0] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_9 [i_2] [i_2 + 1] [(unsigned char)3] [i_2] [i_2] [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)140)) : (((/* implicit */int) (signed char)-83)))))));
                    }
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_25 = ((/* implicit */short) 496411025U);
                        arr_22 [i_1] [i_0] = ((((/* implicit */int) ((749203068108419145ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)90)))))) - (((/* implicit */int) arr_11 [i_0] [i_2] [i_2 + 1] [i_0])));
                        var_26 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_2 [i_0])) % (((/* implicit */int) var_18))))));
                    }
                    for (signed char i_7 = 1; i_7 < 20; i_7 += 2) 
                    {
                        var_27 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)141)), ((unsigned short)21853)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((short)-7), (((/* implicit */short) (_Bool)1)))))) : ((~(arr_16 [i_0] [i_1] [(short)4]))))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)57344)) ? (((/* implicit */int) (unsigned char)172)) : (((/* implicit */int) ((unsigned char) var_2))))))));
                        arr_25 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */int) var_6)) ^ (((/* implicit */int) (signed char)15)))), ((-(((/* implicit */int) (unsigned char)90))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_7])) && (((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_2]))))), (var_14))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (max((3552780441U), (((/* implicit */unsigned int) var_9)))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-68)))))));
                    }
                    for (short i_8 = 4; i_8 < 20; i_8 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_9 = 0; i_9 < 21; i_9 += 3) 
                        {
                            var_28 -= ((/* implicit */short) max(((((+(((/* implicit */int) (unsigned char)213)))) * ((-(((/* implicit */int) (unsigned short)57348)))))), (max(((~(((/* implicit */int) (unsigned short)65534)))), (((/* implicit */int) ((unsigned char) (signed char)125)))))));
                            arr_31 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */signed char) max((arr_28 [i_2 - 1] [(unsigned char)10] [(_Bool)1] [i_8] [i_8 + 1] [i_0] [i_8]), (arr_28 [i_2 + 2] [i_8] [i_8] [i_8 - 4] [i_8 - 4] [i_0] [i_9])))), (max((var_10), (((/* implicit */signed char) arr_28 [i_2 - 1] [i_8] [i_8] [i_8] [i_8 - 3] [i_0] [i_8 - 3]))))));
                            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)91))))) : (max((16673784006461520507ULL), (((/* implicit */unsigned long long int) (unsigned short)57344))))));
                            arr_32 [i_0] [(short)7] [i_0] [i_0] [i_0] [i_9] = ((/* implicit */signed char) arr_12 [i_0]);
                            arr_33 [i_0] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_11 [20U] [i_1] [i_2 + 1] [i_0])), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)8192)) : (((/* implicit */int) var_10))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_0]))) : (max(((+(arr_9 [4LL] [10LL] [i_2] [i_2] [i_9] [i_0]))), (((/* implicit */long long int) ((unsigned char) (unsigned char)212)))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_10 = 1; i_10 < 19; i_10 += 4) 
                        {
                            arr_36 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_21 [i_2 - 1] [i_2 + 2] [i_2 + 2] [i_2 + 2])) > (((/* implicit */int) arr_21 [i_2 + 1] [i_2 + 2] [i_2 + 1] [i_2 + 2]))));
                            var_30 = ((/* implicit */_Bool) (-((((_Bool)1) ? (3693602271028961851LL) : (((/* implicit */long long int) 72199371U))))));
                        }
                        arr_37 [i_0] [i_1] [i_0] [i_1] [(unsigned short)9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)41896))))) ? ((-(arr_20 [i_2 + 2]))) : (max((min((((/* implicit */long long int) arr_24 [i_0] [i_0] [i_8] [i_2] [i_1] [i_0])), (9077729203079435903LL))), (((/* implicit */long long int) arr_11 [i_8 - 4] [i_8] [i_8 - 1] [i_0]))))));
                        /* LoopSeq 3 */
                        for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) /* same iter space */
                        {
                            var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 16687829554090148337ULL)))) ? (((/* implicit */int) arr_38 [i_2] [i_2] [i_2 - 1] [i_2 + 1])) : (((/* implicit */int) max(((short)-8257), (var_9))))))) && (((/* implicit */_Bool) max((((unsigned short) 1772960067248031108ULL)), (((/* implicit */unsigned short) max(((short)-14317), (((/* implicit */short) (_Bool)1))))))))));
                            var_32 = min((max((min(((unsigned short)20003), (var_4))), (((/* implicit */unsigned short) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-88)))))), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)23752)) ? (var_11) : (((/* implicit */int) var_9)))) > ((-(((/* implicit */int) (unsigned short)57349))))))));
                        }
                        for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) /* same iter space */
                        {
                            arr_42 [i_0] = ((signed char) ((((/* implicit */int) max((arr_21 [i_0] [i_1] [i_2] [i_8 - 1]), (((/* implicit */unsigned short) (_Bool)0))))) / (((/* implicit */int) (unsigned short)57344))));
                            arr_43 [i_0] [i_0] [i_0] [i_0] [(unsigned char)9] [i_0] = ((/* implicit */unsigned short) max((12203795661959582466ULL), (((/* implicit */unsigned long long int) ((((-320389535) + (2147483647))) << (((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8192))) & (4179197599U))) - (8192U))))))));
                            arr_44 [(_Bool)1] [i_0] [i_2] [i_2 + 1] = ((/* implicit */unsigned short) max(((short)8272), (((/* implicit */short) (unsigned char)42))));
                        }
                        for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) /* same iter space */
                        {
                            arr_47 [i_0] [11] [i_13 + 1] [i_13] [i_13] [i_13] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) var_7))))))));
                            var_33 = ((/* implicit */unsigned int) (((~(((/* implicit */int) min((var_7), (((/* implicit */unsigned short) (unsigned char)214))))))) - ((~(((/* implicit */int) arr_2 [i_13 + 1]))))));
                            arr_48 [i_13] [i_0] = ((/* implicit */unsigned char) (-(((unsigned int) (~(((/* implicit */int) arr_24 [i_0] [i_0] [i_2] [i_0] [i_2] [i_0])))))));
                        }
                    }
                }
            } 
        } 
    } 
}
