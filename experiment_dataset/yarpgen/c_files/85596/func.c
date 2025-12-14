/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85596
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
    var_13 = ((/* implicit */short) ((((((/* implicit */_Bool) 2592773610365171911LL)) ? (14874338748964742210ULL) : (3572405324744809412ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 1; i_2 < 23; i_2 += 4) 
                {
                    var_14 ^= (((!(((/* implicit */_Bool) ((3572405324744809428ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))) ? (((((/* implicit */_Bool) 7276695038312681106LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((4535539186888066359LL) <= (((/* implicit */long long int) 660721355U)))))) : (((((/* implicit */_Bool) (signed char)36)) ? (11042288124045891296ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12776))))))) : (((((/* implicit */_Bool) (+(var_12)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) 858231451U)) : (8218182045628267097LL)))) : ((~(11042288124045891295ULL))))));
                    var_15 = (i_0 % 2 == 0) ? ((-(((((arr_5 [i_2 - 1] [i_0]) + (2147483647))) >> (((arr_5 [i_2 - 1] [i_0]) + (649945190))))))) : ((-(((((((arr_5 [i_2 - 1] [i_0]) - (2147483647))) + (2147483647))) >> (((((arr_5 [i_2 - 1] [i_0]) + (649945190))) - (1543754419)))))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        var_16 = var_2;
                        arr_15 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 68293969873484382LL)) ? (((((((/* implicit */_Bool) 3499644774U)) ? (((/* implicit */unsigned long long int) 858231461U)) : (11042288124045891303ULL))) ^ (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))))) : ((+(((7404455949663660330ULL) * (((/* implicit */unsigned long long int) -3691370682537121884LL))))))));
                    }
                    for (unsigned int i_4 = 2; i_4 < 21; i_4 += 2) /* same iter space */
                    {
                        var_17 -= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_0)))))))) % (((((/* implicit */_Bool) max((var_6), (((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) var_0)) ? (-68293969873484382LL) : (((/* implicit */long long int) 621381299U))))))));
                        arr_20 [i_4] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((unsigned long long int) -1471689288));
                        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(15801921328489143229ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)184))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) + (2160498383U)))))) ? (((((/* implicit */_Bool) 660721373U)) ? (((/* implicit */unsigned int) var_2)) : (min((3634245915U), (((/* implicit */unsigned int) 179085614)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) 795322512U))) ? (((/* implicit */int) var_8)) : (var_2)))))))));
                        arr_21 [i_0] [i_4 + 3] [i_2] [i_1] [i_0] = ((/* implicit */short) max((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)118))) + (arr_9 [i_0] [i_2 + 1] [i_4 + 3]))), (((/* implicit */unsigned int) (-((+(689192098))))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) 
                        {
                            arr_25 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) -2178949769057906632LL)) ? (max((((/* implicit */long long int) var_1)), (arr_11 [i_0] [i_4] [22LL] [i_0]))) : (68293969873484394LL)))));
                            arr_26 [i_2] [i_0] [i_2 + 1] [(unsigned char)22] [1] = ((/* implicit */long long int) var_5);
                        }
                        for (unsigned int i_6 = 1; i_6 < 22; i_6 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned char) var_0);
                            var_20 = ((/* implicit */long long int) min((((/* implicit */int) (unsigned char)131)), ((-(((/* implicit */int) (unsigned short)28035))))));
                        }
                    }
                    for (unsigned int i_7 = 2; i_7 < 21; i_7 += 2) /* same iter space */
                    {
                        arr_31 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((short) var_5));
                        arr_32 [(signed char)16] [i_1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2178949769057906628LL)) ? (((14874338748964742188ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)16))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)72)))))) ? (((/* implicit */long long int) 3608872790U)) : (max((((/* implicit */long long int) var_2)), (-2178949769057906632LL)))));
                        arr_33 [i_0] [i_1] [i_2] [i_7] = ((/* implicit */unsigned long long int) 5766764291673617021LL);
                        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) arr_28 [i_0] [i_0] [i_0] [i_0]))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 24; i_8 += 2) 
                    {
                        arr_37 [i_0] [i_0] [(short)22] [i_8] = ((/* implicit */long long int) ((int) (~(((/* implicit */int) arr_36 [i_2] [i_2 + 1] [i_2 + 1] [i_2 - 1])))));
                        /* LoopSeq 1 */
                        for (int i_9 = 0; i_9 < 24; i_9 += 2) 
                        {
                            arr_41 [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)12455)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)85))))) : (((unsigned long long int) var_8)))) ^ (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 894838691)) ? (((/* implicit */int) arr_39 [(unsigned short)14] [i_1] [i_2] [i_8] [(unsigned short)8])) : (((/* implicit */int) (signed char)23)))), (((/* implicit */int) arr_4 [i_2 - 1] [i_8] [i_0])))))));
                            var_22 = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)1164)) + (-1124095074)))) ? (((/* implicit */int) ((short) 660721329U))) : (((/* implicit */int) var_10))))));
                        }
                    }
                    arr_42 [i_0] [i_0] [i_2 + 1] [i_0] = ((/* implicit */int) var_9);
                }
                for (unsigned int i_10 = 1; i_10 < 22; i_10 += 3) /* same iter space */
                {
                    var_23 = ((/* implicit */signed char) ((12924661729224634962ULL) >> (((((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) | (((/* implicit */int) (signed char)-46))))) * ((~(3572405324744809434ULL))))) - (17341409798570325521ULL)))));
                    var_24 -= ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)188))));
                }
                for (unsigned int i_11 = 1; i_11 < 22; i_11 += 3) /* same iter space */
                {
                    var_25 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_0] [i_1] [i_11] [i_1] [i_0]))) % (15147086659576043875ULL)))))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) -8963560177252139146LL))))) % (((((/* implicit */_Bool) 10759346316439189528ULL)) ? (((/* implicit */int) (unsigned char)184)) : (((/* implicit */int) arr_16 [i_0] [i_0] [i_1] [i_11 - 1] [i_11])))))) : ((-(((1794122878) * (((/* implicit */int) (_Bool)0))))))));
                    var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((max((-2649357185297070394LL), (((/* implicit */long long int) var_11)))) <= (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)10053)))))))))))));
                    var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) arr_19 [i_0] [i_1] [i_1] [i_11]))));
                }
                var_28 = ((/* implicit */unsigned long long int) ((unsigned char) (+(((/* implicit */int) arr_10 [i_0])))));
                /* LoopNest 2 */
                for (long long int i_12 = 3; i_12 < 22; i_12 += 4) 
                {
                    for (unsigned short i_13 = 1; i_13 < 23; i_13 += 3) 
                    {
                        {
                            arr_51 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_38 [i_13 - 1] [i_1] [i_12 - 2])) ? (arr_47 [i_12] [i_12 + 2] [i_13 + 1]) : (arr_47 [i_12 + 1] [i_12 + 2] [i_13 - 1])))));
                            arr_52 [i_0] [i_1] [i_12] [i_1] = ((/* implicit */short) (-(((/* implicit */int) max((((/* implicit */unsigned short) var_4)), ((unsigned short)14411))))));
                            var_29 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (min((((/* implicit */unsigned long long int) var_1)), (13644033363729397089ULL))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
