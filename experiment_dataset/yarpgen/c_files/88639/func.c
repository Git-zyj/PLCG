/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88639
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)230))))) ? (min((((((/* implicit */_Bool) (unsigned char)25)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_2 [i_0])))), (((((/* implicit */int) (signed char)127)) & (((/* implicit */int) arr_2 [i_0])))))) : (min((((/* implicit */int) arr_2 [i_0])), (((arr_0 [i_0]) ? (1478796243) : (((/* implicit */int) arr_0 [i_0]))))))));
        var_16 *= ((/* implicit */unsigned char) (((((~(585800669))) >= (((((((/* implicit */int) (signed char)-74)) + (2147483647))) >> (((((/* implicit */int) arr_1 [i_0])) - (148))))))) ? ((((~(((/* implicit */int) arr_0 [i_0])))) ^ (((((/* implicit */_Bool) 1478796249)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) >> (((((/* implicit */int) (short)28672)) - (28647)))))) || (((/* implicit */_Bool) arr_2 [i_0])))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                var_17 = ((/* implicit */long long int) max((((/* implicit */int) (unsigned char)255)), (-1)));
                var_18 *= ((/* implicit */signed char) (-2147483647 - 1));
            }
            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) max((((/* implicit */int) arr_6 [i_0] [i_1] [i_1])), ((-(((((/* implicit */_Bool) -1478796249)) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) : (((/* implicit */int) (_Bool)0)))))))))));
            /* LoopSeq 2 */
            for (signed char i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                arr_10 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_9 [i_0] [i_1] [i_3]) : (arr_5 [i_3])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) 585800650))) % (1478796248)))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)206))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3] [i_1] [i_0]))) + (var_14))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_0] [i_1] [i_3])))))))));
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) arr_6 [i_0] [i_1] [i_3]))));
                arr_11 [i_3] [i_1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_1 [i_1])), (((int) arr_1 [i_0])))))));
            }
            for (int i_4 = 3; i_4 < 21; i_4 += 1) 
            {
                arr_14 [i_0] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned char)50)) : (((/* implicit */int) (_Bool)1))));
                arr_15 [i_4] [i_4] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1] [i_4])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1879048192))))) : (((/* implicit */int) ((short) (unsigned short)15872))))) + (((/* implicit */int) ((((/* implicit */int) (short)7562)) < (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)2649)))))))));
                var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(arr_4 [i_4 - 1]))))));
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_4 + 1] [i_4 - 3] [i_4 - 3])) | (((/* implicit */int) arr_6 [i_4 - 3] [i_4 + 2] [i_4 - 2]))))) ? (((/* implicit */unsigned int) arr_9 [i_4] [i_1] [i_0])) : ((-(2981252470U)))));
            }
            var_23 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (short)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)255)), (arr_7 [i_0] [i_1] [i_0] [i_0]))))) : (max((var_6), (((/* implicit */unsigned long long int) arr_13 [i_1] [i_1])))))), (max((((((/* implicit */_Bool) arr_12 [i_0])) ? (((/* implicit */unsigned long long int) 2147483647)) : (arr_12 [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_0] [i_1])) >= (1))))))));
        }
        for (unsigned int i_5 = 2; i_5 < 22; i_5 += 1) 
        {
            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) -2)) ? (1515607777U) : (((/* implicit */unsigned int) arr_5 [i_5]))));
            /* LoopSeq 2 */
            for (unsigned char i_6 = 3; i_6 < 22; i_6 += 2) 
            {
                arr_22 [i_6] = ((/* implicit */unsigned short) ((max((((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_5])) || (((/* implicit */_Bool) arr_5 [i_0]))))), (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_21 [i_6] [i_5] [i_0])))))) + (((arr_16 [i_6 - 3] [i_0]) ? (16776704) : (((/* implicit */int) min((((/* implicit */signed char) arr_0 [i_0])), ((signed char)-97))))))));
                arr_23 [i_6] [i_5] [i_0] [i_0] = max((((/* implicit */unsigned short) ((arr_9 [i_0] [i_5] [i_6]) != (arr_9 [i_0] [i_5] [i_6])))), (max(((unsigned short)31744), ((unsigned short)64648))));
                var_25 = ((/* implicit */short) min(((+(min((((/* implicit */int) arr_8 [i_5])), (arr_9 [i_0] [i_0] [i_0]))))), (((((/* implicit */_Bool) min(((unsigned char)0), ((unsigned char)162)))) ? (((((/* implicit */_Bool) arr_12 [i_0])) ? (((/* implicit */int) arr_19 [i_6] [i_5])) : (1478796234))) : (((/* implicit */int) min(((unsigned short)887), (((/* implicit */unsigned short) (short)32759)))))))));
            }
            for (unsigned char i_7 = 0; i_7 < 23; i_7 += 2) 
            {
                arr_27 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_26 [i_5 - 2] [i_5] [i_5])) ? (arr_26 [i_5 - 1] [i_5] [i_5]) : (arr_26 [i_5 - 2] [i_5] [i_5]))), (((/* implicit */long long int) (unsigned short)1023))));
                arr_28 [i_5] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (signed char)96)), (4ULL)));
                arr_29 [i_0] [i_0] &= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_0] [i_5] [i_7])) | (-1478796249)))) ? (((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) (unsigned char)167)) : (((/* implicit */int) (unsigned short)65535)))) : (((((/* implicit */_Bool) -1478796249)) ? (13) : (((/* implicit */int) (signed char)-31))))))));
            }
            arr_30 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned char)99), (((/* implicit */unsigned char) (signed char)13))))))))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (long long int i_8 = 0; i_8 < 23; i_8 += 4) 
            {
                var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) arr_18 [i_0] [i_5] [i_5 - 2]))));
                var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 421511606U)) ? (((/* implicit */int) arr_21 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_16 [i_0] [i_0]))))) || (((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_8 [i_5])))));
            }
            for (unsigned int i_9 = 0; i_9 < 23; i_9 += 2) 
            {
                var_28 = ((/* implicit */int) arr_3 [i_9] [i_5] [i_9]);
                arr_35 [i_0] [i_5] [i_9] &= ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((((/* implicit */int) (unsigned char)255)) | (2147483644))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0])))))))), (((((/* implicit */_Bool) (-(1478796249)))) ? (((/* implicit */int) min((arr_17 [i_5] [i_9]), (((/* implicit */unsigned short) arr_34 [i_5]))))) : (((/* implicit */int) (signed char)-1))))));
                arr_36 [i_0] [i_5] [i_9] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max(((+(((/* implicit */int) (_Bool)1)))), ((-(((/* implicit */int) arr_17 [i_0] [i_9])))))))));
            }
            for (int i_10 = 0; i_10 < 23; i_10 += 1) 
            {
                var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [i_10] [i_5] [i_0] [i_0])) ? ((+(1820483681U))) : (((/* implicit */unsigned int) (~((~(((/* implicit */int) (short)-1)))))))));
                arr_39 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */short) (~((-(((/* implicit */int) (_Bool)1))))));
                arr_40 [i_10] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_5 - 2] [i_5] [i_5])) ? (arr_37 [i_5 + 1] [i_5] [i_5]) : (((/* implicit */unsigned long long int) 293816393)))))));
            }
            for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 2) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_12 = 2; i_12 < 19; i_12 += 2) 
                {
                    arr_46 [i_0] = ((/* implicit */signed char) arr_6 [i_0] [i_12] [i_11]);
                    var_30 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) var_4))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)57046)) | (((/* implicit */int) (_Bool)1))))) : (18446744073709551615ULL)));
                }
                /* LoopSeq 3 */
                for (signed char i_13 = 0; i_13 < 23; i_13 += 4) 
                {
                    arr_49 [i_0] [i_5] [i_11] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)238)) ? (4294967295U) : (((/* implicit */unsigned int) 1223388649))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_14 = 0; i_14 < 23; i_14 += 2) 
                    {
                        arr_53 [i_14] [i_13] [i_11] [i_5] [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) arr_2 [i_11])) == (((/* implicit */int) (unsigned short)874)))) ? (((/* implicit */int) arr_6 [i_5 - 2] [i_5 - 1] [i_5 - 1])) : (((/* implicit */int) arr_17 [i_0] [i_5 - 1]))));
                        arr_54 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)888))));
                        var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65530)) ? ((~(((/* implicit */int) var_0)))) : (((/* implicit */int) arr_24 [i_11] [i_5 - 1])))))));
                    }
                    var_32 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_21 [i_0] [i_5] [i_13])) ? (arr_5 [i_0]) : (((/* implicit */int) (unsigned char)63))))));
                }
                for (long long int i_15 = 4; i_15 < 20; i_15 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (signed char i_16 = 0; i_16 < 23; i_16 += 2) 
                    {
                        var_33 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) 3584)) ? (arr_51 [i_15] [i_5] [i_11] [i_15 - 2] [i_16]) : (((/* implicit */int) arr_57 [i_0] [i_11] [i_11] [i_15] [i_16]))))));
                        arr_59 [i_0] [i_5] [i_11] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_5 - 2]))))) ? ((~(((/* implicit */int) arr_57 [i_0] [i_5 - 1] [i_11] [i_15 + 3] [i_16])))) : (((/* implicit */int) (_Bool)1))));
                        arr_60 [i_0] [i_5] [i_11] [i_15] [i_16] = ((/* implicit */unsigned int) max((((/* implicit */int) ((((((/* implicit */_Bool) arr_47 [i_5])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_19 [i_0] [i_11])))) > (2043797834)))), (max((((/* implicit */int) arr_33 [i_5 - 1] [i_11] [i_11] [i_15 - 3])), (-2147483631)))));
                    }
                    for (unsigned short i_17 = 2; i_17 < 22; i_17 += 3) 
                    {
                        var_34 = ((/* implicit */unsigned char) min((min((((/* implicit */long long int) arr_57 [i_0] [i_5] [i_11] [i_15] [i_17])), (0LL))), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) (signed char)(-127 - 1))))))))));
                        var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 1014484309887698670LL)) ? (((/* implicit */int) arr_41 [i_0])) : ((((_Bool)1) ? (((/* implicit */int) (unsigned short)42410)) : (((/* implicit */int) (short)11814)))))))));
                    }
                    var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(0U)))) ? ((+(((/* implicit */int) arr_38 [i_0] [i_5] [i_11] [i_15])))) : (((((/* implicit */int) arr_32 [i_15] [i_11] [i_5] [i_0])) + (((/* implicit */int) arr_21 [i_0] [i_5] [i_15]))))))) ? (max((max((-23LL), (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) ((arr_52 [i_0] [i_5] [i_11] [i_15] [i_15]) != (((/* implicit */unsigned long long int) -4))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_15 + 3] [i_5 - 2])) ? (arr_4 [i_5 - 2]) : (((/* implicit */unsigned int) arr_9 [i_0] [i_15 + 2] [i_5 + 1])))))));
                    arr_63 [i_0] = ((/* implicit */int) (!(((((((/* implicit */_Bool) arr_13 [i_0] [i_5])) ? (arr_51 [i_15] [i_5] [i_11] [i_0] [i_0]) : (((/* implicit */int) (unsigned char)127)))) > (((/* implicit */int) arr_6 [i_5 - 2] [i_5 - 2] [i_15 - 1]))))));
                    arr_64 [i_0] [i_5] [i_11] [i_11] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_57 [i_15] [i_15 + 1] [i_15] [i_15 - 4] [i_15]) ? (((/* implicit */int) arr_57 [i_15] [i_15 + 1] [i_15] [i_15 + 1] [i_15])) : (((/* implicit */int) (signed char)-106))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) (unsigned short)26343)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_15]))) : (4294967283U)))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_56 [i_0] [i_0] [i_0] [i_0] [i_0]))) & ((~(9187343239835811840LL)))))));
                    var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */int) (unsigned short)23141)) | (((/* implicit */int) min((arr_56 [i_15] [i_11] [i_5] [i_0] [i_0]), (((/* implicit */unsigned short) (signed char)-1))))))) : (((((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (unsigned short)65532)))) ? (1960649510) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_0] [i_5] [i_11] [i_15])))))))));
                }
                /* vectorizable */
                for (long long int i_18 = 4; i_18 < 20; i_18 += 3) /* same iter space */
                {
                    var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)191))) + (arr_26 [i_0] [i_18 - 3] [i_5 - 1]))))));
                    var_39 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_56 [i_0] [i_5] [i_5] [i_5] [i_5 - 2])) ? ((+(((/* implicit */int) (signed char)-112)))) : (((((/* implicit */int) arr_45 [i_0] [i_0])) | (((/* implicit */int) arr_20 [i_0]))))));
                }
            }
            var_40 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_3 [i_0] [i_0] [i_0])), (130023424U)))) ? (max((0LL), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) 4294967283U)));
        }
        var_41 = (+(((/* implicit */int) (signed char)-32)));
        var_42 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_31 [i_0])) + (((/* implicit */int) (unsigned short)44025)))) * (((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [i_0]))))) ? (0LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)35)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15579))) : (9230424022845036741ULL)))) ? (((/* implicit */int) arr_19 [i_0] [i_0])) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (unsigned short)42389)) : (((/* implicit */int) arr_47 [i_0])))))))));
    }
    var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)32767)) ? (max((((/* implicit */unsigned long long int) (unsigned char)245)), (((var_6) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)47))))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5)))))));
}
