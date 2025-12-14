/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77180
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
    var_19 = ((/* implicit */short) ((1366497332U) != (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        var_20 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-113)))))));
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_0 [i_0]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))))));
        arr_3 [i_0] = min((((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0 - 2])) | (((/* implicit */int) arr_1 [i_0 + 1]))))), (2131707527U));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            arr_8 [i_0] [i_1] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_2 [i_0])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (short)11583)))))));
            arr_9 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0]);
        }
        for (short i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) -5422850435500844531LL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2] [i_0] [i_0])))))))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) min((((/* implicit */short) arr_10 [i_0])), ((short)4639)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 3; i_3 < 15; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    {
                        arr_16 [i_0] [i_4] [i_0] [13U] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) min((min((((/* implicit */unsigned short) var_11)), (arr_6 [(short)14] [i_4]))), ((unsigned short)31984)))) : (((((/* implicit */_Bool) ((((/* implicit */int) (short)-7143)) - (((/* implicit */int) arr_10 [i_0]))))) ? (((/* implicit */int) arr_14 [i_4] [i_3 + 1] [i_2] [i_2])) : ((~(((/* implicit */int) arr_0 [i_0 - 1]))))))));
                        var_23 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)31988))));
                    }
                } 
            } 
        }
        var_24 -= ((/* implicit */short) ((arr_0 [i_0 - 2]) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)2896)))))) : (min((var_14), (((/* implicit */unsigned int) (unsigned char)143))))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 3) 
    {
        arr_20 [i_5] = var_18;
        /* LoopSeq 2 */
        for (unsigned short i_6 = 4; i_6 < 10; i_6 += 1) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) var_1)), (var_8))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_5] [i_6])) ? (((/* implicit */int) (short)-30339)) : (((/* implicit */int) (_Bool)0)))))));
            var_26 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((arr_5 [i_6 - 3] [i_6 - 1] [i_6 - 3]) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)38))))))));
            var_27 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_7 [i_5] [i_6 + 1] [i_6 - 4])) ? (arr_7 [i_5] [i_6 + 1] [i_6 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) ((unsigned char) (signed char)4)))));
        }
        for (unsigned short i_7 = 4; i_7 < 10; i_7 += 1) /* same iter space */
        {
            arr_25 [i_5] [i_5] = ((/* implicit */unsigned char) max(((short)-7145), (((/* implicit */short) (_Bool)1))));
            /* LoopNest 3 */
            for (short i_8 = 0; i_8 < 11; i_8 += 4) 
            {
                for (unsigned int i_9 = 1; i_9 < 9; i_9 += 3) 
                {
                    for (short i_10 = 2; i_10 < 7; i_10 += 1) 
                    {
                        {
                            arr_34 [i_5] [i_9] [i_8] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_14 [i_7 - 1] [i_9] [i_9] [i_9 + 1]) ? (((/* implicit */int) arr_14 [i_5] [i_8] [i_8] [i_8])) : (((/* implicit */int) (signed char)7))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_14 [(signed char)3] [(short)12] [i_7 - 4] [(short)12])), (var_15)))) : (max((((/* implicit */unsigned long long int) arr_30 [i_5] [i_8] [i_8] [i_9] [i_5] [i_5])), (var_9)))));
                            var_28 = ((/* implicit */short) arr_13 [i_10 + 4] [4U] [i_7 - 2] [i_7 - 2]);
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (signed char i_11 = 0; i_11 < 11; i_11 += 4) 
            {
                /* LoopSeq 3 */
                for (short i_12 = 2; i_12 < 9; i_12 += 3) 
                {
                    var_29 = ((/* implicit */unsigned int) min((var_29), (((((arr_0 [i_5]) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [i_11])) ? (((/* implicit */int) (signed char)71)) : (((/* implicit */int) arr_14 [i_5] [i_5] [i_5] [i_12]))))) : (arr_31 [i_7 + 1] [i_11] [i_12 + 1] [i_7 + 1] [i_12 + 1]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((831424810U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)54)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1052)) ? (((/* implicit */int) (signed char)-104)) : (((/* implicit */int) (unsigned char)215)))))))))))));
                    var_30 = ((/* implicit */signed char) ((var_8) << (((((((/* implicit */long long int) 2656872936U)) ^ (568563823514728992LL))) - (568563820933878703LL)))));
                }
                for (long long int i_13 = 2; i_13 < 10; i_13 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_14 = 0; i_14 < 11; i_14 += 4) 
                    {
                        var_31 &= ((/* implicit */unsigned long long int) (((_Bool)1) ? (-568563823514728970LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)34)))));
                        arr_46 [i_5] = ((/* implicit */unsigned char) max((((var_17) ^ (arr_29 [i_5] [i_7 - 3] [i_7 - 3] [i_7 - 3] [i_14] [i_13 - 1]))), (((/* implicit */unsigned int) ((_Bool) 2065365537)))));
                        arr_47 [i_5] [i_11] [i_5] = ((/* implicit */unsigned char) (-(((var_3) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_13 + 1] [i_5] [i_7 - 3]))) : (11004310758853443110ULL)))));
                    }
                    var_32 = ((/* implicit */unsigned int) 17872967034608598960ULL);
                    arr_48 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */long long int) (short)-11434);
                    arr_49 [i_5] [i_7] [i_5] [i_7] [(unsigned short)0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) (unsigned short)58462))) || (((/* implicit */_Bool) (unsigned short)2627))));
                }
                for (unsigned char i_15 = 1; i_15 < 9; i_15 += 2) 
                {
                    var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)197)) ? (2534892057201831324ULL) : (((/* implicit */unsigned long long int) max(((+(2009792843207649225LL))), (((/* implicit */long long int) (_Bool)0)))))));
                    arr_53 [i_5] [i_7 - 1] [i_5] [(_Bool)1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_12 [i_15 + 2] [i_7 - 4] [i_5]))));
                    arr_54 [i_5] [i_7 - 4] [i_7] = ((/* implicit */_Bool) (+(((((/* implicit */int) arr_0 [i_15 + 2])) & (((/* implicit */int) arr_14 [i_15 - 1] [i_15 + 1] [i_15 + 1] [i_15 + 2]))))));
                    var_34 &= (-(((/* implicit */int) arr_11 [i_11])));
                }
                /* LoopNest 2 */
                for (signed char i_16 = 0; i_16 < 11; i_16 += 3) 
                {
                    for (unsigned char i_17 = 3; i_17 < 8; i_17 += 4) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned long long int) (_Bool)0);
                            var_36 *= ((/* implicit */signed char) min((((((/* implicit */_Bool) ((long long int) var_0))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) max((var_4), (((/* implicit */short) (unsigned char)45))))))), (((((/* implicit */int) (!(((/* implicit */_Bool) (short)307))))) & (((/* implicit */int) max((arr_50 [i_5] [i_11] [i_16] [i_17]), (arr_40 [i_7 - 4] [i_16]))))))));
                            arr_60 [i_5] [10ULL] [i_5] [(unsigned char)9] [i_17] = ((/* implicit */short) var_6);
                            arr_61 [i_7] [i_7] [i_5] [(unsigned char)1] [i_7 + 1] [i_7 + 1] [i_7] = ((/* implicit */unsigned char) 5896396828256012653LL);
                        }
                    } 
                } 
                arr_62 [i_5] = ((/* implicit */long long int) ((((((/* implicit */int) arr_33 [i_7 - 3] [i_7 - 4] [i_7 - 3] [i_5] [i_7 - 3])) < (((/* implicit */int) arr_33 [i_7 - 4] [i_7 - 2] [(unsigned char)6] [i_5] [i_11])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_11] [i_7 - 1] [i_11] [i_5] [(short)7]))) : (min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) 1515764141U)), (var_7)))), (((var_9) >> (((/* implicit */int) (_Bool)1))))))));
                arr_63 [i_5] [(unsigned short)1] [i_11] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_39 [3U] [5ULL] [i_7 - 4] [i_5]))))) ^ ((~((~(1844217752U)))))));
            }
            for (long long int i_18 = 4; i_18 < 10; i_18 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_19 = 0; i_19 < 11; i_19 += 3) 
                {
                    /* LoopSeq 1 */
                    for (short i_20 = 1; i_20 < 7; i_20 += 3) 
                    {
                        var_37 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_66 [i_18] [4U] [i_18])), (var_14)))) ? ((-(arr_5 [i_5] [i_7] [i_18]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_14) == (var_1)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_5] [i_5] [i_18 - 4])))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)113)) << (((((/* implicit */int) (short)-31244)) + (31263)))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (4455712415658267458LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (short)26829))))))));
                        arr_71 [i_20] [i_5] [i_5] [7U] = ((/* implicit */long long int) max((((((var_8) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_5] [10U] [i_18] [i_5]))))) ? (arr_42 [i_18 + 1] [i_18 - 3]) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))))), (2779203154U)));
                        var_38 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)27718)) : (((/* implicit */int) (short)-5857))))) | (max((((/* implicit */unsigned int) (short)5836)), (var_15)))))) ? (((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_0)))) + (((/* implicit */int) min(((short)-5836), (((/* implicit */short) var_18))))))) : (((/* implicit */int) ((short) var_11)))));
                        var_39 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_65 [i_19] [i_5] [i_5]))));
                    }
                    arr_72 [i_5] [i_7 - 2] [i_18 - 4] [i_7 - 2] = ((/* implicit */short) var_11);
                }
                arr_73 [i_5] = ((/* implicit */short) max((arr_70 [i_18] [i_18] [i_18] [i_18 - 2] [i_18 + 1] [i_18] [i_18 - 4]), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)76)) && ((_Bool)0))))));
                var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_16)) / (((/* implicit */int) (short)26482))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)10023)) ? (1727978956U) : (var_17)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_28 [i_5] [i_5] [i_5]))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)250))) * (2146072846U)))), (((((/* implicit */_Bool) arr_56 [i_5] [(_Bool)0] [i_5] [i_18 - 3])) ? (1957705244018682895ULL) : (((/* implicit */unsigned long long int) 1700600497U))))))));
                /* LoopNest 2 */
                for (unsigned char i_21 = 2; i_21 < 10; i_21 += 1) 
                {
                    for (signed char i_22 = 0; i_22 < 11; i_22 += 1) 
                    {
                        {
                            arr_81 [i_5] [i_21] [i_18 - 1] = min((3050191055502488147LL), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)35093))))));
                            var_41 = ((/* implicit */unsigned short) (short)-24064);
                            var_42 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_31 [i_7] [i_7] [i_21 - 1] [i_21 + 1] [(unsigned short)5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30442))) : (var_17))) >> (((max((((/* implicit */unsigned int) (short)-8098)), (arr_31 [i_18] [i_18] [i_18] [i_21 + 1] [i_21 + 1]))) - (4294959185U)))));
                            arr_82 [i_5] [i_5] [i_5] [i_5] [i_5] = ((((/* implicit */unsigned long long int) ((var_14) / (((/* implicit */unsigned int) ((/* implicit */int) arr_79 [i_7 - 4] [i_18 - 4] [i_21] [i_21 + 1] [i_5] [i_21 + 1])))))) * ((+(9607282562881042382ULL))));
                            var_43 = ((/* implicit */long long int) min(((unsigned short)35093), (((/* implicit */unsigned short) (signed char)-52))));
                        }
                    } 
                } 
            }
            var_44 = ((/* implicit */unsigned short) min((((arr_68 [i_5] [i_5] [i_5] [i_7 - 3]) ? (((/* implicit */int) arr_68 [i_7] [i_7] [i_5] [i_7])) : (((/* implicit */int) arr_66 [i_5] [i_5] [i_5])))), ((-(((/* implicit */int) arr_79 [i_5] [i_5] [i_5] [i_5] [i_5] [i_7 - 2]))))));
        }
    }
}
