/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82637
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 6; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        var_17 ^= ((/* implicit */short) ((((/* implicit */_Bool) min((4236608830U), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) (unsigned char)226)), (var_15))))))) || (((/* implicit */_Bool) max((((((/* implicit */_Bool) var_12)) ? (var_7) : (15690458571231536131ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_14)), (var_16)))))))));
                        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (+(max((((/* implicit */unsigned long long int) ((long long int) var_11))), (((unsigned long long int) var_12)))))))));
                        var_19 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43786))) % (min((min((var_0), (((/* implicit */unsigned long long int) (unsigned short)55404)))), (((/* implicit */unsigned long long int) max(((unsigned short)55404), ((unsigned short)4252)))))));
                        var_20 ^= ((/* implicit */unsigned long long int) (-(min((((/* implicit */long long int) var_10)), (0LL)))));
                    }
                    for (unsigned int i_4 = 2; i_4 < 8; i_4 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 0; i_5 < 10; i_5 += 1) 
                        {
                            var_21 = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_2 - 1] [i_4 + 2])) ? (((/* implicit */int) (unsigned char)188)) : (((/* implicit */int) var_16))))), (min((((/* implicit */unsigned int) var_9)), (arr_4 [i_4 - 1] [i_2 + 2] [i_1 - 3] [i_1 - 3]))));
                            var_22 ^= ((/* implicit */unsigned char) ((unsigned long long int) (~((~(-1LL))))));
                            var_23 ^= ((/* implicit */unsigned long long int) var_13);
                        }
                        arr_14 [i_0] [i_1] [i_2 + 1] [i_4 + 2] = ((/* implicit */short) var_6);
                        /* LoopSeq 1 */
                        for (long long int i_6 = 1; i_6 < 9; i_6 += 2) 
                        {
                            var_24 -= ((/* implicit */unsigned short) (unsigned char)255);
                            var_25 += ((/* implicit */unsigned char) ((((var_13) & (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_15))))))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))))) != ((+(var_1)))))))));
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = max((((unsigned long long int) min((((/* implicit */unsigned long long int) arr_5 [i_6 - 1] [i_0] [i_1] [i_0])), (var_1)))), (((/* implicit */unsigned long long int) (+(((((/* implicit */int) (unsigned char)67)) >> (((((/* implicit */int) (unsigned char)188)) - (165)))))))));
                            arr_19 [i_6] [i_4] [i_2] [i_1 - 2] [i_0] = ((/* implicit */unsigned long long int) ((short) var_4));
                        }
                        var_26 = var_1;
                    }
                    for (unsigned int i_7 = 2; i_7 < 8; i_7 += 2) /* same iter space */
                    {
                        arr_22 [i_0] [i_0] [i_2] [i_7] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_5 [i_0] [i_1 - 3] [i_2 + 3] [i_7])))) ? (var_1) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)26)) | (((/* implicit */int) var_2))))))) != (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)4032)), (-2555806892992916431LL))))));
                        /* LoopSeq 1 */
                        for (int i_8 = 0; i_8 < 10; i_8 += 1) 
                        {
                            arr_27 [i_0] [i_1 - 3] [i_2 + 1] [i_7] [i_7] = max((min((min((((/* implicit */unsigned long long int) var_6)), (var_8))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_3)))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_8] [i_7] [i_2] [i_1 - 2] [i_0])) ^ (((/* implicit */int) var_4))))), (min((var_11), (((/* implicit */unsigned long long int) arr_20 [i_0] [i_0] [i_2 + 4] [i_0])))))));
                            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_13)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)15860))) : (((unsigned int) (unsigned short)10131))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) (unsigned char)0))) ? (arr_8 [i_0] [i_1] [i_1] [i_2 + 4] [i_2 + 4] [i_2 + 4]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10132)))))) : (min((((/* implicit */unsigned long long int) ((unsigned char) var_11))), (arr_23 [i_7] [i_7 - 1] [i_7 + 1] [i_7 + 2] [i_7])))));
                            arr_28 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) (-(var_3))))) || (((/* implicit */_Bool) max((max((var_16), (var_15))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_2))))))))));
                            var_28 = ((/* implicit */short) ((unsigned char) min((var_14), (var_4))));
                            arr_29 [i_8] [i_2] = ((/* implicit */short) ((unsigned short) ((((/* implicit */int) var_9)) << (((arr_23 [i_1] [i_1 - 2] [i_1] [i_1] [i_1]) - (15419539782514121757ULL))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 10; i_9 += 1) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */signed char) min((max((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_4))))), (arr_34 [i_10] [i_0] [i_10] [i_1] [i_0]))), (((/* implicit */long long int) max(((-(((/* implicit */int) var_5)))), (((/* implicit */int) var_15)))))));
                                arr_37 [i_0] [i_1] [i_10] [i_9] [i_10] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)14987)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)188))) : (13654284348410477055ULL)))) || (((/* implicit */_Bool) var_11)))))));
                                var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) ((unsigned char) ((int) 13236822772793987591ULL))))));
                                arr_38 [i_0] [i_0] [i_1] [i_1 - 3] [i_10] [i_9] [i_0] = ((/* implicit */signed char) min((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9171123970034352994ULL)) ? (-2555806892992916431LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)46))))))));
                            }
                        } 
                    } 
                    arr_39 [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) 3709968235U))) ? (((/* implicit */int) max((arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */short) (unsigned char)16))))) : (((/* implicit */int) (!(((/* implicit */_Bool) -449887092288681197LL)))))))), (((unsigned int) ((unsigned long long int) 11214670382705791903ULL)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 3) 
    {
        for (unsigned int i_12 = 4; i_12 < 11; i_12 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_13 = 0; i_13 < 14; i_13 += 4) 
                {
                    var_31 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (short)6674)), (7244223365308862557LL)));
                    var_32 += ((/* implicit */signed char) ((short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_14))) & (2334513017U))) > (((/* implicit */unsigned int) ((/* implicit */int) ((7431990360962308505ULL) >= (var_8))))))));
                    arr_49 [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((unsigned int) var_14))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) (short)-15984)) < (((/* implicit */int) var_4)))))))) : (((((/* implicit */_Bool) var_8)) ? (arr_40 [i_12]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12392717232541686002ULL)) ? (((/* implicit */int) arr_46 [i_12])) : (((/* implicit */int) var_14)))))))));
                }
                for (unsigned short i_14 = 0; i_14 < 14; i_14 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_15 = 0; i_15 < 14; i_15 += 3) 
                    {
                        for (unsigned char i_16 = 0; i_16 < 14; i_16 += 3) 
                        {
                            {
                                var_33 = ((/* implicit */unsigned long long int) var_9);
                                arr_60 [i_11] [i_15] [i_14] [i_15] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)205)) - (((/* implicit */int) var_12))))) ? (((/* implicit */int) min((var_10), (((/* implicit */unsigned short) var_14))))) : (((/* implicit */int) var_16))))) ? (max((((/* implicit */unsigned long long int) (~(1905797338)))), (((unsigned long long int) arr_54 [i_15] [i_14] [i_15] [i_15])))) : (((/* implicit */unsigned long long int) (+(var_3))))));
                                var_34 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_8), (var_0)))) ? (((/* implicit */unsigned int) (+((~(((/* implicit */int) (short)-26319))))))) : (2147483648U)));
                                var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) var_13))));
                                var_36 = ((/* implicit */unsigned long long int) (~((+(705180251U)))));
                            }
                        } 
                    } 
                    arr_61 [i_11] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) ((var_3) == (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))) - (((var_13) << (((17948843303976544465ULL) - (17948843303976544465ULL))))))) * (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_17 = 0; i_17 < 14; i_17 += 4) 
                {
                    var_37 &= ((/* implicit */unsigned short) var_1);
                    var_38 += min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)121)))))) ? (min((var_7), (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) max((0LL), (((/* implicit */long long int) arr_57 [i_11] [i_12] [i_17] [i_17]))))))), ((~(((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_64 [i_17] [i_11] [i_12] [i_11]))))));
                }
                /* vectorizable */
                for (unsigned char i_18 = 0; i_18 < 14; i_18 += 1) 
                {
                    var_39 = ((/* implicit */short) ((unsigned long long int) arr_62 [i_12 + 2] [i_12 - 4] [i_12 - 3]));
                    var_40 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)14745))));
                }
                var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((arr_62 [i_11] [i_12] [i_11]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))) ? (min((((/* implicit */unsigned long long int) ((unsigned short) arr_58 [i_11] [i_12]))), (max((var_11), (((/* implicit */unsigned long long int) -8155600776520959499LL)))))) : (((/* implicit */unsigned long long int) min(((+(2147483648U))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_65 [i_11] [i_11] [i_12 + 3] [i_12 - 4])))))))))))));
            }
        } 
    } 
    var_42 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) < (((((371129555285789342ULL) >> (((var_8) - (6982119721517294696ULL))))) << (((min((((/* implicit */long long int) var_3)), (var_13))) - (1853429153LL)))))));
}
