/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63078
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
    var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (-2147483630))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        var_15 &= ((/* implicit */_Bool) var_13);
                        arr_8 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) var_11))) && (((/* implicit */_Bool) 4277691105U))));
                        /* LoopSeq 4 */
                        for (int i_4 = 1; i_4 < 9; i_4 += 3) 
                        {
                            var_16 = ((/* implicit */_Bool) ((((_Bool) ((unsigned char) var_0))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-(-2060496949)))) ? (((int) var_3)) : ((~(((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? ((+(var_11))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))))))));
                            arr_12 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((+(((/* implicit */int) var_13)))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_3]))))))))));
                        }
                        for (int i_5 = 0; i_5 < 12; i_5 += 2) /* same iter space */
                        {
                            arr_16 [i_5] [i_5] [i_2] [i_0] [i_5] [i_2] [i_0] = ((/* implicit */int) ((unsigned int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (arr_10 [i_0] [i_1] [i_5])))))));
                            var_17 = ((/* implicit */int) (((!((_Bool)1))) ? (var_11) : (((/* implicit */long long int) ((int) arr_10 [i_0 - 2] [i_3] [(signed char)5])))));
                        }
                        for (int i_6 = 0; i_6 < 12; i_6 += 2) /* same iter space */
                        {
                            var_18 = ((/* implicit */_Bool) 0LL);
                            arr_20 [(_Bool)1] [i_0] [i_6] = ((/* implicit */unsigned short) ((unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-101)), (5642793513590243720LL)))))));
                            var_19 = ((int) (+(((/* implicit */int) (!(arr_5 [i_0]))))));
                        }
                        for (int i_7 = 0; i_7 < 12; i_7 += 2) /* same iter space */
                        {
                            arr_24 [i_3] [i_3] [10U] [i_0] [i_3] [2U] = ((/* implicit */unsigned long long int) (((+(arr_0 [i_0] [i_0]))) | (((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) var_10))) != (var_11))) ? (((/* implicit */int) var_2)) : (arr_18 [i_0] [i_0] [i_2] [i_3] [i_1] [i_7] [i_7]))))));
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) -2099465669)) ? (((/* implicit */int) (signed char)113)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) var_2)) : (arr_17 [i_3] [i_3] [i_3] [i_3] [i_3])));
                        }
                    }
                    for (signed char i_8 = 0; i_8 < 12; i_8 += 1) 
                    {
                        var_21 += ((/* implicit */unsigned int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1))))))));
                        arr_28 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) (-((+(-1)))));
                        var_22 = ((/* implicit */unsigned int) 2060496952);
                    }
                    for (int i_9 = 0; i_9 < 12; i_9 += 3) /* same iter space */
                    {
                        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (((~((-2147483647 - 1)))) << (((max((arr_14 [6]), (((/* implicit */int) var_8)))) - (1)))))) ? (((((/* implicit */_Bool) ((unsigned char) var_2))) ? (((((/* implicit */_Bool) var_13)) ? (var_1) : (var_1))) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((var_11) + (3188786822118863139LL)))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65535)) >> (((arr_14 [4]) + (1198685343))))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_10 = 0; i_10 < 12; i_10 += 3) 
                        {
                            var_24 ^= (_Bool)1;
                            var_25 ^= ((/* implicit */_Bool) var_5);
                        }
                        for (unsigned short i_11 = 0; i_11 < 12; i_11 += 4) 
                        {
                            arr_36 [7] [i_0] = ((((/* implicit */_Bool) max((((((/* implicit */int) var_4)) + (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) max((((/* implicit */int) (_Bool)0)), (arr_15 [i_0 - 1] [i_1])))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)5928)), (var_1)))) ? (((((/* implicit */long long int) ((/* implicit */int) var_2))) / (var_11))) : (((/* implicit */long long int) ((int) (_Bool)1))))));
                            arr_37 [i_0] [i_1] [i_0] [i_9] [9] = ((((int) var_12)) >= ((~(arr_13 [i_0] [i_0] [i_1] [i_2] [i_2] [i_9] [i_11]))));
                            var_26 -= ((/* implicit */unsigned int) (_Bool)1);
                            arr_38 [i_11] [i_0] [i_0] [i_11] [i_11] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_17 [i_0] [i_0 - 2] [i_0 - 1] [i_0] [i_0 - 2])))) ? (((/* implicit */unsigned long long int) 8388576U)) : (((((/* implicit */_Bool) arr_34 [i_2] [i_2])) ? (((unsigned long long int) (short)-32758)) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7)))))))));
                        }
                        arr_39 [i_0] [i_1] [i_2] [i_0] = (~((-(((((/* implicit */_Bool) var_6)) ? (1845037354) : (((/* implicit */int) var_9)))))));
                        arr_40 [i_1] [i_2] [i_0] [i_9] [i_9] [7LL] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) var_7)))));
                    }
                    for (int i_12 = 0; i_12 < 12; i_12 += 3) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) 2060496954))));
                        arr_44 [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned long long int) ((int) ((((unsigned int) var_0)) >> (((var_12) - (1566004088U))))));
                        /* LoopSeq 4 */
                        for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) /* same iter space */
                        {
                            arr_49 [i_0] = ((/* implicit */signed char) (_Bool)1);
                            arr_50 [i_0] [i_12] [i_2] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) -1936915014)) : (var_1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0])) ? (((((/* implicit */_Bool) -2227504449044403559LL)) ? (((/* implicit */unsigned int) arr_48 [i_0] [i_1] [i_2] [i_12] [i_13])) : (arr_21 [i_0] [i_0] [i_1] [i_2] [i_12] [i_12] [i_13 + 1]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)247)))))))));
                            arr_51 [i_0] [i_1] [i_0] [i_12] [i_13] = ((/* implicit */unsigned int) ((_Bool) ((((_Bool) arr_5 [i_12])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1824967607))))) : (((/* implicit */int) ((short) 10262401527936956779ULL))))));
                        }
                        for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) /* same iter space */
                        {
                            arr_54 [i_14] [i_0] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) arr_47 [i_0 - 2] [i_1] [i_2] [i_12] [i_14]);
                            arr_55 [i_0] [i_0] [i_1] [i_1] [i_1] [i_12] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_0 - 2] [i_14 + 1] [i_2]))));
                            var_28 = ((/* implicit */int) max((((/* implicit */unsigned int) ((signed char) arr_15 [i_1] [i_0 - 2]))), (((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)241)), (arr_10 [i_12] [i_1] [i_0 - 1]))))) * (var_1)))));
                        }
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            arr_58 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)0)));
                            var_29 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_12)))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (4280886543U))) : (((/* implicit */unsigned int) (-(1402331253))))));
                            arr_59 [i_0] [i_15] [i_15] [i_0 + 1] [i_0] [i_15] [i_15] = ((/* implicit */unsigned long long int) 2147483615);
                            arr_60 [i_2] [i_0] = ((/* implicit */unsigned int) 10262401527936956779ULL);
                        }
                        for (unsigned char i_16 = 1; i_16 < 11; i_16 += 4) 
                        {
                            var_30 = ((/* implicit */unsigned int) max((((/* implicit */int) min((arr_53 [i_0 + 1] [i_1] [i_0] [i_12] [i_16 - 1]), (((/* implicit */unsigned char) (_Bool)1))))), (((((/* implicit */int) var_4)) - (((/* implicit */int) arr_53 [i_2] [i_1] [i_0] [i_0 + 1] [i_16]))))));
                            var_31 = ((/* implicit */unsigned char) var_2);
                        }
                    }
                    arr_64 [4ULL] [4ULL] [i_2] [6U] &= ((/* implicit */long long int) -1);
                    arr_65 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_57 [i_0] [i_0])) ? (1690679578U) : (var_1)))) ? (((unsigned int) var_13)) : (((/* implicit */unsigned int) (+(-2147483612))))))) ? (((((/* implicit */_Bool) var_6)) ? (max((1839902468), (((/* implicit */int) (signed char)-28)))) : (((/* implicit */int) ((_Bool) var_0))))) : (max((((/* implicit */int) var_4)), ((~(((/* implicit */int) var_2))))))));
                    var_32 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * ((~((+(15640374170547725606ULL)))))));
                }
            } 
        } 
    } 
}
