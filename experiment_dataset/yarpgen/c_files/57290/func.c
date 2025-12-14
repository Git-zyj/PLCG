/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57290
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
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned short) arr_2 [i_0] [i_0]);
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)54)) ? (arr_3 [i_0] [i_1]) : (arr_3 [i_0] [i_0]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((-1607400472740504614LL) < (((/* implicit */long long int) arr_2 [i_0] [i_1]))))))));
            }
        } 
    } 
    var_13 ^= ((/* implicit */int) var_6);
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 3) 
    {
        for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) 
            {
                {
                    arr_14 [i_2 - 1] [i_2] [i_2] = ((/* implicit */unsigned int) max(((-(((/* implicit */int) (!((_Bool)1)))))), (((((/* implicit */_Bool) (unsigned short)42721)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))))));
                    var_14 += ((/* implicit */signed char) min((max((arr_8 [i_2 - 1] [i_2 - 1]), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) ((-2634355721775566769LL) < (arr_8 [i_2] [i_2 - 1]))))));
                    /* LoopSeq 1 */
                    for (long long int i_5 = 1; i_5 < 13; i_5 += 1) 
                    {
                        var_15 = 2634355721775566769LL;
                        var_16 += ((/* implicit */signed char) (_Bool)1);
                        var_17 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_8 [i_2] [i_2])))) ? (max((((/* implicit */long long int) 9)), (-2634355721775566758LL))) : (((/* implicit */long long int) (~(((/* implicit */int) var_2)))))))), ((+(arr_3 [i_5 + 2] [i_2 + 1]))));
                        var_18 += ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)62688))))) ? ((+(((/* implicit */int) ((((/* implicit */int) (unsigned short)2848)) == (((/* implicit */int) var_7))))))) : (((/* implicit */int) ((((/* implicit */long long int) -118135495)) <= (-7277000970153651412LL)))));
                        arr_17 [i_5] [i_4] [i_3] [i_3] [i_3] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((-8365303078300265190LL) ^ (((/* implicit */long long int) 1340930105))))) ? (((/* implicit */int) (signed char)-14)) : (-597591709)));
                    }
                    /* LoopSeq 3 */
                    for (short i_6 = 0; i_6 < 15; i_6 += 4) /* same iter space */
                    {
                        arr_21 [i_2] [4LL] [4LL] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1991759640U)) ? (((/* implicit */unsigned long long int) var_11)) : (8444097917167155545ULL)));
                        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)27258)) ? (((/* implicit */int) (signed char)-66)) : (((/* implicit */int) (unsigned short)19361))));
                    }
                    for (short i_7 = 0; i_7 < 15; i_7 += 4) /* same iter space */
                    {
                        arr_24 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) var_1);
                        /* LoopSeq 4 */
                        for (long long int i_8 = 3; i_8 < 12; i_8 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (unsigned short)65271)) ? (-2634355721775566763LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-56))))), (((/* implicit */long long int) arr_13 [i_2 + 1] [i_8 - 2]))));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1607400472740504614LL)) ? (((long long int) (short)-28548)) : (((((arr_12 [i_2] [i_2]) / (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_2] [2] [i_2] [2] [i_8 - 1]))))) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_1))))))));
                        }
                        for (short i_9 = 0; i_9 < 15; i_9 += 1) 
                        {
                            arr_29 [i_9] [9ULL] [i_3] [i_7] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_28 [i_2 - 1] [i_2 + 1] [i_9] [9] [i_2 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)28532))) : (8444097917167155534ULL))) ^ (((unsigned long long int) arr_28 [i_2 - 1] [i_2 - 1] [i_9] [i_2] [i_2 - 1]))));
                            var_22 = ((/* implicit */int) ((((/* implicit */int) (signed char)-111)) <= ((-(((/* implicit */int) arr_13 [i_2 + 1] [i_2 + 1]))))));
                        }
                        for (long long int i_10 = 3; i_10 < 14; i_10 += 4) 
                        {
                            arr_32 [i_10] [i_7] [14ULL] [i_10] [i_10] = ((/* implicit */unsigned short) (+(7277000970153651435LL)));
                            var_23 = ((/* implicit */int) min((((((/* implicit */_Bool) 9871412132722854291ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [(_Bool)1] [i_2 + 1] [i_2] [i_2]))) : (4217246118369936318ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)62)))))));
                            var_24 = ((/* implicit */int) ((((/* implicit */long long int) max((arr_2 [i_10] [i_3]), (3211607410U)))) * (((long long int) 2641639025U))));
                        }
                        for (unsigned short i_11 = 0; i_11 < 15; i_11 += 3) 
                        {
                            var_25 = ((min((((/* implicit */long long int) max(((unsigned short)17756), (arr_15 [0LL] [6U] [i_3] [i_3] [i_2 + 1])))), (max((((/* implicit */long long int) (signed char)-64)), (6583284690021392546LL))))) <= (((/* implicit */long long int) ((/* implicit */int) var_2))));
                            arr_36 [(unsigned short)14] [(unsigned short)14] [(unsigned short)14] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_30 [i_2 + 1] [i_3] [i_3] [6])) == (((/* implicit */int) ((((/* implicit */int) arr_27 [i_2] [i_3] [(signed char)11] [i_7])) > (((/* implicit */int) (unsigned char)63))))))))) * (((((/* implicit */_Bool) 4442934518921516073ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2 - 1]))) : (((unsigned long long int) arr_12 [i_4] [i_3]))))));
                            var_26 ^= ((/* implicit */unsigned short) max((min((((((/* implicit */_Bool) arr_28 [i_2] [i_4] [i_7] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (5178929980503183786ULL))), (((/* implicit */unsigned long long int) ((arr_28 [i_2] [i_2] [i_3] [i_2 - 1] [i_2]) == (((/* implicit */int) arr_4 [i_2] [i_3]))))))), (((/* implicit */unsigned long long int) (+(1340930131))))));
                        }
                        arr_37 [i_7] [i_7] [i_4] [i_4] [13] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)49962)) ? (1292787180) : (((/* implicit */int) (short)6740))));
                        var_27 &= ((/* implicit */int) (+(12983700710908558659ULL)));
                        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)29)))))));
                    }
                    for (short i_12 = 0; i_12 < 15; i_12 += 4) /* same iter space */
                    {
                        var_29 = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */unsigned long long int) var_8)) : (6862978811144837117ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_2] [i_3] [i_4] [i_12])))))))), (((/* implicit */unsigned long long int) 3211607423U))));
                        var_30 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) 11939685075361542296ULL)) ? (((/* implicit */int) (unsigned short)57401)) : (((/* implicit */int) (short)-28558)))));
                    }
                    arr_40 [i_4] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((unsigned long long int) var_10)) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)18438)) < (((/* implicit */int) (unsigned short)15360))))))))), (max((var_10), (min((-7427605860222505412LL), (((/* implicit */long long int) arr_22 [i_2] [(unsigned short)6] [i_4] [i_4]))))))));
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */short) var_7);
}
