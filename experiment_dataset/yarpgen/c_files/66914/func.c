/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66914
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */unsigned int) (~((-((+(8538801543419282542ULL)))))));
                /* LoopSeq 3 */
                for (int i_2 = 1; i_2 < 11; i_2 += 1) /* same iter space */
                {
                    arr_8 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(max((((/* implicit */unsigned int) var_7)), (arr_0 [i_0])))))) ? (((/* implicit */int) max((min((var_0), (((/* implicit */unsigned short) arr_5 [i_0] [i_1] [i_1])))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-58)))))))) : ((~(((((/* implicit */_Bool) arr_0 [1])) ? (((/* implicit */int) (signed char)34)) : (((/* implicit */int) var_12))))))));
                    var_15 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) (~(arr_7 [i_0] [i_0] [i_2 + 1])))) ? ((+(((/* implicit */int) (short)-14082)))) : (((((/* implicit */int) var_13)) << (((var_8) - (11896549087768640591ULL))))))));
                }
                for (int i_3 = 1; i_3 < 11; i_3 += 1) /* same iter space */
                {
                    var_16 |= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((_Bool) arr_5 [(unsigned char)9] [(unsigned char)9] [(unsigned char)9]))), (max((arr_7 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) var_1))))))) ? (max((((/* implicit */unsigned int) var_1)), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-14099))) : (arr_6 [i_0]))))) : (((/* implicit */unsigned int) min(((+(((/* implicit */int) var_11)))), (((/* implicit */int) (unsigned char)0)))))));
                    var_17 -= (~(min(((~(((/* implicit */int) (signed char)120)))), ((-(((/* implicit */int) arr_5 [i_1] [i_1] [i_3])))))));
                    arr_11 [i_3] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (17919531569912622091ULL)))) ? (arr_6 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)237), (((/* implicit */unsigned char) (signed char)120)))))))), (max((arr_0 [i_0]), (((/* implicit */unsigned int) (+(((/* implicit */int) (short)16387)))))))));
                }
                for (short i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    var_18 = ((/* implicit */unsigned short) ((((arr_6 [i_0]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) (+(arr_6 [i_0])))) : (max((((/* implicit */unsigned long long int) (unsigned char)63)), (13024964355638860449ULL)))));
                    /* LoopSeq 4 */
                    for (signed char i_5 = 1; i_5 < 11; i_5 += 3) 
                    {
                        arr_18 [i_0] [i_1] [i_0] [i_0] [i_1] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_15 [3ULL] [i_5 + 1] [i_5 + 2])), (2731249714U)))) ? (788290098U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_15 [i_0] [i_5 - 1] [i_5 + 1])) : (((/* implicit */int) var_11)))))));
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((((min((((/* implicit */long long int) (unsigned char)9)), (arr_16 [i_0] [i_0] [i_4] [i_0] [i_5 + 2]))) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (1952181394))) - (250)))))) ? (((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 2266941913U)))) : (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)71))) : (13024964355638860443ULL))))) : (min((((/* implicit */unsigned long long int) ((arr_16 [i_0] [i_1] [i_4] [i_4] [i_1]) / (((/* implicit */long long int) var_1))))), (max((((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0])), (var_8))))))))));
                        var_20 = ((/* implicit */unsigned int) var_14);
                    }
                    for (signed char i_6 = 3; i_6 < 11; i_6 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (~(((/* implicit */int) arr_21 [i_0] [i_0] [i_6] [i_4] [i_4] [i_6]))))) ? (((((/* implicit */_Bool) arr_13 [i_6] [(unsigned short)8] [i_0])) ? (11231988922695973188ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (max((((/* implicit */unsigned long long int) arr_9 [i_4] [i_6] [0U])), (var_8)))))));
                        arr_23 [i_0] [i_0] [i_6] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned char) 1770717780U));
                        arr_24 [i_6 - 3] [i_6] [i_6] [(short)0] = ((/* implicit */unsigned char) max((5421779718070691173ULL), (((/* implicit */unsigned long long int) -942861808))));
                    }
                    for (unsigned short i_7 = 2; i_7 < 11; i_7 += 2) /* same iter space */
                    {
                        arr_29 [i_0] [i_1] [i_1] [i_7] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (-((+(var_1)))))), (max((((/* implicit */unsigned long long int) 1671748901)), (((17088310317961392247ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-838)))))))));
                        var_22 += arr_28 [i_0] [2] [7U] [i_1] [i_0];
                        /* LoopSeq 1 */
                        for (signed char i_8 = 0; i_8 < 13; i_8 += 3) 
                        {
                            var_23 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(min((arr_7 [i_7] [i_4] [i_0]), (((/* implicit */unsigned int) arr_22 [i_7] [i_7 + 1]))))))) ? (((/* implicit */long long int) (~(min((arr_0 [i_0]), (((/* implicit */unsigned int) (signed char)-82))))))) : (((long long int) min((var_0), (((/* implicit */unsigned short) var_11)))))));
                            var_24 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_25 [i_4] [i_4] [i_4] [3U] [i_4] [i_4])) ? (((/* implicit */int) arr_28 [i_7] [i_7] [i_7] [i_7 + 2] [i_7 + 1])) : (((/* implicit */int) (!(arr_3 [i_0] [i_0])))))), (((/* implicit */int) arr_25 [i_0] [i_1] [i_4] [i_7] [i_8] [i_4]))));
                            var_25 -= ((/* implicit */unsigned char) (~(max(((~(5421779718070691167ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)(-127 - 1))))))))));
                            arr_32 [i_8] [i_7] [1U] [i_1] [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17088310317961392247ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_10 [i_0] [i_1] [i_4])))) : (((1358433755748159360ULL) << (((((/* implicit */int) arr_25 [i_0] [i_1] [i_1] [i_4] [i_7 - 2] [i_1])) - (8946))))))), (((/* implicit */unsigned long long int) min((764317915U), (((/* implicit */unsigned int) (~(((/* implicit */int) (short)1677))))))))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned char i_9 = 4; i_9 < 12; i_9 += 4) 
                        {
                            arr_36 [6LL] [6LL] [i_7] [i_7] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) 1358433755748159368ULL)))))));
                            arr_37 [i_9] [i_0] [i_4] [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((int) var_10))))) ? (((/* implicit */int) (unsigned char)98)) : (((/* implicit */int) var_11))));
                        }
                        /* vectorizable */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            arr_41 [i_10] [i_7] [i_10] = ((/* implicit */_Bool) var_4);
                            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_10] [(short)10] [i_10])) || (((/* implicit */_Bool) var_14)))))) : (((((/* implicit */_Bool) var_0)) ? (1073741760U) : (((/* implicit */unsigned int) var_1)))))))));
                            arr_42 [i_0] [i_4] |= ((/* implicit */unsigned char) var_0);
                            arr_43 [i_10] [i_10] [i_7 + 1] [i_10] = ((/* implicit */signed char) (+((-2147483647 - 1))));
                            var_27 |= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_4])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)82)))) / (((/* implicit */int) arr_12 [i_0] [i_0] [(signed char)10] [i_0]))));
                        }
                    }
                    for (unsigned short i_11 = 2; i_11 < 11; i_11 += 2) /* same iter space */
                    {
                        arr_46 [i_0] [i_0] [i_1] [0] [1] [1] = ((/* implicit */unsigned long long int) (+(-19)));
                        arr_47 [(short)10] [(signed char)12] [i_4] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) (unsigned char)239);
                        arr_48 [i_0] [i_0] [i_4] = ((/* implicit */short) (~((~(((((/* implicit */_Bool) (short)-14096)) ? (((/* implicit */int) (unsigned short)47789)) : (((/* implicit */int) (short)22635))))))));
                    }
                }
                arr_49 [i_0] [i_0] = ((/* implicit */long long int) (~((-(max((7ULL), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_1]))))))));
                arr_50 [i_0] [i_1] = ((/* implicit */signed char) min((((((/* implicit */_Bool) -2033466640)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_6))))) : (max((((/* implicit */unsigned int) (unsigned short)12884)), (var_4))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) (signed char)82))))))))));
                var_28 = ((/* implicit */_Bool) max((min(((~(((/* implicit */int) arr_25 [3] [(signed char)9] [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */int) var_6)))), (max((((((/* implicit */int) (short)22635)) | (((/* implicit */int) var_6)))), ((~(((/* implicit */int) var_3))))))));
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (~(min((1620597347), (((/* implicit */int) var_0))))))), ((~((~(var_10)))))));
}
