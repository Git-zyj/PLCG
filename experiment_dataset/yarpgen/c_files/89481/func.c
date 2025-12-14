/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89481
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
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */int) arr_1 [i_2] [i_1])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (max((0LL), (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_18))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-18373)) ? (((/* implicit */int) (unsigned char)157)) : (807365588)))) ? (((/* implicit */int) arr_6 [i_0] [i_1])) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)30415)))))))));
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))))), (((((/* implicit */_Bool) 807365588)) ? (6231476516926570891LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)138)))))));
                }
                for (int i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_20 = ((((/* implicit */_Bool) 6231476516926570891LL)) ? (((/* implicit */unsigned long long int) 1739865703)) : (((((/* implicit */_Bool) 10243596211948188740ULL)) ? (((/* implicit */unsigned long long int) -6231476516926570895LL)) : (10243596211948188740ULL))));
                        var_21 = ((/* implicit */int) max((((arr_3 [i_0] [(_Bool)1]) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) max((var_8), ((short)18373))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_3] [i_3])) ? (((/* implicit */int) min((var_9), (((/* implicit */short) arr_3 [i_0] [i_4]))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) (short)18368)))))))));
                        var_22 = ((/* implicit */unsigned short) max((-1701541086), (((/* implicit */int) (signed char)-50))));
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((arr_3 [i_3] [i_3]) ? (arr_15 [(signed char)17] [i_1] [i_3] [i_4]) : (((/* implicit */int) (signed char)49)))) : (((/* implicit */int) arr_13 [i_1] [i_1] [i_4]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 929500279)), (4075833057462468578ULL)))) ? (((/* implicit */long long int) arr_15 [i_0] [i_1] [i_4] [i_4])) : (((((/* implicit */_Bool) var_15)) ? (6231476516926570891LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [(signed char)12])))))))) : (((((/* implicit */_Bool) (short)-26448)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17730))) : (9577166937357291497ULL)))));
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (max((var_18), (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) ((/* implicit */int) (short)-26689)))))) ? (((((/* implicit */_Bool) (signed char)-54)) ? (((/* implicit */int) (short)18359)) : (((/* implicit */int) (signed char)50)))) : (var_13)));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_18 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-47)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_3] [i_0]))) : (min((min((((/* implicit */long long int) arr_6 [i_0] [i_0])), (var_18))), (((/* implicit */long long int) var_2))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            var_25 ^= ((/* implicit */unsigned short) ((var_5) ? (((/* implicit */unsigned long long int) arr_17 [i_3] [i_6])) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_20 [i_0] [i_0] [i_1] [i_5])))));
                            arr_22 [(signed char)2] [(short)6] [i_3] [i_5] [i_3] [12ULL] [i_5] &= ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-21)) ? (6160168199659146499LL) : (6231476516926570891LL)));
                            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_3])) ? (arr_17 [i_0] [(short)0]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
                            var_27 = ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_5] [i_6])) ? (arr_5 [i_6] [i_5] [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [(signed char)4] [i_5] [(signed char)4] [i_0])) ? (((/* implicit */int) arr_13 [i_6] [i_3] [i_1])) : (((/* implicit */int) (unsigned char)29)))))));
                            arr_23 [4ULL] [i_5] [i_3] [(unsigned short)17] [i_3] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-22021)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_12 [i_0] [(short)2] [i_3] [i_5]))));
                        }
                        for (int i_7 = 3; i_7 < 17; i_7 += 3) 
                        {
                            arr_27 [i_5] = ((/* implicit */long long int) var_1);
                            arr_28 [i_1] [i_1] [i_5] [i_1] = arr_16 [i_0];
                        }
                    }
                    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 576460752301326336LL)) ? (((((/* implicit */_Bool) -4701614379710532402LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_3] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-79))) : (var_16))))) : (((/* implicit */long long int) min((((/* implicit */int) (signed char)-28)), (721265285))))));
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_8 = 2; i_8 < 17; i_8 += 1) 
                {
                    var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) arr_11 [i_0] [i_0]))));
                    var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), ((signed char)107)))) ? (min((((/* implicit */unsigned long long int) arr_5 [i_8 - 2] [(short)10] [(signed char)16])), (((((/* implicit */_Bool) var_2)) ? (arr_20 [(signed char)6] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_0]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [(_Bool)1])))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)18359)))) : (var_10)))))))));
                    var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-123)) : (((((/* implicit */_Bool) (short)-1696)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)20))))))) : (min((((/* implicit */unsigned long long int) min((-1), (((/* implicit */int) var_8))))), (arr_20 [i_0] [i_1] [i_1] [i_0])))));
                }
                for (signed char i_9 = 0; i_9 < 18; i_9 += 4) 
                {
                    arr_35 [i_0] [i_0] [i_0] = min((max((min((((/* implicit */long long int) var_10)), (arr_17 [i_1] [(short)6]))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)18359)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)119))))))), (((/* implicit */long long int) max(((short)-18375), (arr_29 [i_0] [i_9] [i_9] [i_0])))));
                    var_32 = ((/* implicit */short) var_3);
                    var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (short)-18373)), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)31056)) : (((/* implicit */int) arr_4 [i_0] [(signed char)9] [i_9]))))))) ? (((/* implicit */long long int) (((_Bool)1) ? (((((/* implicit */_Bool) arr_31 [i_0])) ? (((/* implicit */int) arr_16 [i_9])) : (((/* implicit */int) (short)-18374)))) : (((/* implicit */int) (unsigned char)192))))) : (-2LL)));
                    var_34 *= ((/* implicit */signed char) ((((/* implicit */_Bool) max(((signed char)119), ((signed char)117)))) ? (((((/* implicit */_Bool) arr_17 [i_0] [i_0])) ? (((((/* implicit */_Bool) (unsigned char)226)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-21))))) : (var_16))) : (((((/* implicit */_Bool) min(((short)-18399), (((/* implicit */short) (signed char)37))))) ? (6231476516926570891LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_34 [i_1] [i_1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)235)))))))));
                }
            }
        } 
    } 
    var_35 |= ((/* implicit */short) var_17);
    var_36 -= ((/* implicit */signed char) min((var_11), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (15931351187422213656ULL)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5)))))));
}
