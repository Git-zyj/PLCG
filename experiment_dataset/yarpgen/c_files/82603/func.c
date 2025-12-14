/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82603
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
    for (unsigned char i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (short i_2 = 0; i_2 < 25; i_2 += 1) /* same iter space */
                {
                    arr_8 [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!((_Bool)1))))));
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])) >> (((/* implicit */int) arr_4 [i_0 - 3] [i_1]))));
                }
                for (short i_3 = 0; i_3 < 25; i_3 += 1) /* same iter space */
                {
                    arr_11 [i_0 - 1] = ((/* implicit */unsigned long long int) min((((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (arr_0 [i_0 + 1])))), ((((_Bool)1) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 + 2]))))));
                    arr_12 [i_1] = ((/* implicit */unsigned char) (unsigned short)63688);
                    /* LoopSeq 2 */
                    for (signed char i_4 = 1; i_4 < 24; i_4 += 3) /* same iter space */
                    {
                        arr_16 [i_4] [i_1] [i_1] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0 - 2] [i_4 - 1] [i_4 - 1] [i_4]))) : (var_13)))) ? (((unsigned int) arr_3 [i_0 - 2] [i_4 - 1])) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (!((_Bool)1))))))));
                        var_16 = ((/* implicit */signed char) ((_Bool) arr_13 [i_4] [i_4] [i_0 - 3] [i_4] [i_0 - 3]));
                    }
                    for (signed char i_5 = 1; i_5 < 24; i_5 += 3) /* same iter space */
                    {
                        arr_20 [i_3] = ((/* implicit */long long int) var_6);
                        var_17 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_5 - 1])) || (((/* implicit */_Bool) arr_13 [i_5 + 1] [i_5 + 1] [i_5] [i_1] [i_1])))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) var_1)))))) == (((((/* implicit */_Bool) arr_18 [i_5 - 1] [22] [i_1] [i_0])) ? (((/* implicit */long long int) arr_15 [i_1] [i_1] [i_1] [i_0])) : (-6281977553949058217LL))))))));
                        /* LoopSeq 1 */
                        for (long long int i_6 = 0; i_6 < 25; i_6 += 3) 
                        {
                            arr_23 [i_0 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) - ((~(((/* implicit */int) (unsigned char)187))))))) ? (((((/* implicit */_Bool) (short)32306)) ? ((+(((/* implicit */int) (unsigned short)27088)))) : (max((-381109783), (((/* implicit */int) arr_0 [i_3])))))) : (((/* implicit */int) min((((/* implicit */unsigned short) (short)19847)), ((unsigned short)63688))))));
                            arr_24 [(short)4] [i_6] = ((/* implicit */unsigned char) ((((arr_18 [i_0] [i_0 + 2] [i_0] [i_0 - 3]) > (min((((/* implicit */int) arr_3 [i_3] [10U])), (381109791))))) ? (((/* implicit */unsigned int) ((arr_18 [i_5 + 1] [i_5 + 1] [21] [21]) << (((((/* implicit */int) arr_13 [i_0 - 2] [i_1] [i_6] [i_1] [i_6])) + (7)))))) : (min((((/* implicit */unsigned int) var_9)), (max((((/* implicit */unsigned int) arr_17 [(unsigned short)19] [24] [i_1] [i_0 - 1])), (arr_15 [i_0] [i_0] [i_1] [i_0])))))));
                            var_18 = min((((((((/* implicit */int) var_8)) ^ (((/* implicit */int) arr_2 [i_3])))) * (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-57)) && (var_10)))))), ((+(((/* implicit */int) var_1)))));
                            arr_25 [i_3] = ((/* implicit */int) max(((unsigned char)0), (((/* implicit */unsigned char) (_Bool)1))));
                        }
                    }
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 4; i_9 < 23; i_9 += 2) 
                        {
                            {
                                var_19 &= ((/* implicit */long long int) ((min((((/* implicit */long long int) 4294967290U)), (((arr_34 [i_0] [i_7] [i_8] [i_9]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))))) != (((/* implicit */long long int) ((arr_21 [i_9] [(short)3] [(unsigned short)17] [i_9] [i_9 + 2] [(short)3]) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (unsigned char)0))))) : (max((((/* implicit */unsigned int) (_Bool)1)), (var_13))))))));
                                arr_37 [5] [i_1] [i_8] [i_8] [i_9] = ((/* implicit */unsigned short) var_12);
                            }
                        } 
                    } 
                    var_20 = ((((/* implicit */_Bool) var_9)) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) + (var_2))) << (((((((/* implicit */_Bool) var_9)) ? (33554431ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) - (33554398ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_26 [(short)3] [i_1] [i_1] [i_7])) * (((/* implicit */int) ((arr_29 [i_0] [i_1] [i_0]) > (((/* implicit */int) (signed char)-92)))))))));
                    arr_38 [(unsigned short)2] = ((/* implicit */int) ((unsigned char) ((((((/* implicit */unsigned long long int) 2430747990U)) <= (4611686018427387904ULL))) ? (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-14)))) : (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1)))))));
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (short i_11 = 1; i_11 < 24; i_11 += 1) 
                        {
                            {
                                arr_43 [i_0] [i_0] [i_7] [i_10] [i_11] [i_10] |= ((/* implicit */long long int) (-((-(((int) arr_2 [i_11 + 1]))))));
                                arr_44 [(short)22] [i_7] = (~(((/* implicit */int) var_8)));
                            }
                        } 
                    } 
                }
                for (unsigned char i_12 = 1; i_12 < 23; i_12 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_13 = 3; i_13 < 21; i_13 += 2) 
                    {
                        for (unsigned int i_14 = 0; i_14 < 25; i_14 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_51 [i_0] [i_1] [i_13])) ? (((/* implicit */int) arr_28 [i_12] [i_1] [i_12] [i_13 + 2])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_9 [i_14])) > (4611686018427387909ULL)))))), (((/* implicit */int) arr_26 [i_0 + 2] [i_0] [(short)5] [i_0 - 3]))));
                                var_22 = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) (_Bool)1)) > (arr_29 [i_0 - 1] [i_12 + 1] [i_13 + 3])))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)52)), ((unsigned short)19743)))) < (((/* implicit */int) (!(((/* implicit */_Bool) (short)-10684)))))));
                    arr_55 [i_1] [i_1] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-16494))) : (999831675U))), (((/* implicit */unsigned int) (unsigned short)27088))));
                }
                arr_56 [(short)20] [(short)20] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))), (max((((/* implicit */unsigned long long int) (short)-10692)), ((-(arr_51 [i_0] [i_1] [i_1])))))));
                var_24 = ((/* implicit */short) max((max((((/* implicit */unsigned int) (signed char)-19)), (arr_6 [i_1] [i_0] [i_0]))), (2763877048U)));
            }
        } 
    } 
    var_25 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (-2147483647 - 1))), (9223372036854775807LL)))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)384))) : (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)2040), (((/* implicit */unsigned short) var_6))))))))) ? (var_3) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) * (((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (signed char)77)))))))));
}
