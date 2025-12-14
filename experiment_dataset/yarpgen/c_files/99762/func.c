/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99762
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_13 = (-(var_2));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    var_14 = ((/* implicit */signed char) arr_5 [i_2] [(short)11]);
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 1; i_3 < 13; i_3 += 1) /* same iter space */
                    {
                        arr_9 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)-5), ((signed char)-5))))) + ((+(var_6)))));
                        var_15 = ((/* implicit */unsigned short) min(((-(((((/* implicit */_Bool) -1843138465)) ? (((/* implicit */int) (short)15295)) : (((/* implicit */int) arr_1 [i_0])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_7 [i_0] [5] [5] [5] [i_3])) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_3 - 1] [i_1])) : (((/* implicit */int) arr_4 [i_0] [i_1]))))));
                        arr_10 [i_3] = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) (!(arr_2 [i_0] [i_1] [i_0])))) : (((/* implicit */int) ((((/* implicit */int) (signed char)15)) <= (((/* implicit */int) var_1)))))))), (((((/* implicit */_Bool) (unsigned short)1938)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (-1LL))) : (((/* implicit */long long int) (~(var_12))))))));
                        var_16 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) -2009871386)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)180))))));
                        var_17 = ((/* implicit */unsigned char) arr_6 [i_2] [i_2] [i_3] [i_3] [i_3] [i_3 + 1]);
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 1; i_4 < 13; i_4 += 1) /* same iter space */
                    {
                        arr_14 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? ((+(((/* implicit */int) var_5)))) : (((/* implicit */int) var_7))));
                        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_4 + 1] [i_4 + 2] [i_4 + 1] [i_4] [i_4 + 1]))) + (arr_13 [i_0] [i_1] [i_0]))))));
                    }
                    arr_15 [i_0] [14U] [i_2] = ((/* implicit */unsigned char) (((-(((/* implicit */int) ((arr_3 [i_0] [i_1] [i_2]) >= (((/* implicit */int) var_1))))))) * (((/* implicit */int) arr_1 [i_0]))));
                }
                var_19 ^= (~((+(((((/* implicit */int) var_8)) + (arr_5 [i_0] [i_0]))))));
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */int) (signed char)1)) == (((var_3) ? ((~(((/* implicit */int) (signed char)96)))) : (((((/* implicit */int) (unsigned char)0)) | (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_1])))))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_5 = 2; i_5 < 17; i_5 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_6 = 0; i_6 < 20; i_6 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_7 = 2; i_7 < 18; i_7 += 2) 
            {
                var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) max((max((((/* implicit */int) var_11)), (-1221791767))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4))))))) + (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_5 + 3] [i_5]))) | (8748785845529425559LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_5 + 1] [i_7 + 2] [i_6]))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)231))) & (var_9)))))));
                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) var_9))));
            }
            for (int i_8 = 2; i_8 < 19; i_8 += 2) 
            {
                var_23 = ((/* implicit */signed char) (_Bool)0);
                var_24 += ((/* implicit */_Bool) ((((/* implicit */_Bool) -1221791767)) ? (13247594291266189813ULL) : (((/* implicit */unsigned long long int) 914018596U))));
                arr_25 [i_5 + 2] [i_5 + 2] = var_10;
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 20; i_9 += 4) 
                {
                    for (short i_10 = 0; i_10 < 20; i_10 += 4) 
                    {
                        {
                            arr_32 [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */int) arr_28 [i_5] [i_5] [i_5] [(unsigned short)1])) > (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_29 [i_5 - 2] [i_5 - 2] [i_5] [i_5 - 2]) / (((/* implicit */int) arr_24 [i_8] [i_9]))))))))));
                            arr_33 [i_5 - 1] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (+(((/* implicit */int) arr_31 [i_5 + 1] [i_6] [i_5 + 1] [i_5 + 1] [i_8 + 1] [i_9] [i_8 + 1]))))) ? (min((var_6), (((/* implicit */unsigned int) arr_31 [i_5] [i_8] [i_8] [i_9] [i_6] [i_6] [i_8 + 1])))) : (max((((/* implicit */unsigned int) arr_21 [i_9] [i_9])), (var_9))))), (((/* implicit */unsigned int) min((var_12), (((/* implicit */int) var_0)))))));
                            arr_34 [i_5] [i_5] [i_8] [i_8] [i_9] [0U] [i_10] &= ((/* implicit */unsigned short) (~(6ULL)));
                            var_25 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_0))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */signed char) min((((/* implicit */int) max(((unsigned char)227), (((/* implicit */unsigned char) (_Bool)1))))), (min((((/* implicit */int) min((var_10), (((/* implicit */short) arr_30 [i_5 - 2] [i_5 - 2] [i_6] [16] [17] [i_8] [i_8]))))), (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) arr_18 [i_8] [i_5])) : (((/* implicit */int) arr_18 [i_5] [i_5]))))))));
            }
            for (int i_11 = 1; i_11 < 19; i_11 += 4) 
            {
                var_27 = ((((/* implicit */unsigned int) max((((/* implicit */int) (signed char)6)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_35 [i_11 + 1] [i_6] [(signed char)17])) : (((/* implicit */int) arr_26 [i_6]))))))) / (((((/* implicit */_Bool) (-(((/* implicit */int) arr_30 [i_5 - 2] [i_5] [i_5 - 2] [i_6] [i_6] [i_11 + 1] [i_11 + 1]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_5] [i_5]))) - (263819094U))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (var_0))))))));
                arr_37 [i_11] = ((/* implicit */unsigned char) var_6);
                /* LoopSeq 1 */
                for (signed char i_12 = 0; i_12 < 20; i_12 += 2) 
                {
                    var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)36)) <= (((/* implicit */int) arr_36 [i_5 + 2] [i_5] [i_5 + 3])))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)121)) != (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) var_7)) ? ((+(((/* implicit */int) arr_35 [i_5] [i_12] [i_5])))) : (max((1598776366), (((/* implicit */int) arr_28 [i_5] [i_6] [i_6] [i_12])))))))))));
                    var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) (+(var_6))))));
                }
                arr_40 [i_5 - 1] [i_6] [i_11 + 1] [i_5 - 1] = ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_20 [i_5 + 1] [i_11 - 1] [i_5 + 1])))) / (arr_23 [i_5] [i_5])));
            }
            /* LoopNest 3 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (short i_14 = 0; i_14 < 20; i_14 += 2) 
                {
                    for (unsigned short i_15 = 0; i_15 < 20; i_15 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) arr_24 [i_5] [i_5])), (((max((arr_44 [i_5] [i_5] [i_14] [i_14]), (((/* implicit */unsigned int) arr_22 [i_5] [i_6] [i_5])))) << ((((~(((/* implicit */int) (_Bool)1)))) + (24))))))))));
                            arr_48 [i_15] [i_13] [i_13] [(short)17] [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_5] [i_5 - 2] [i_5])) - (((/* implicit */int) arr_30 [1] [1] [i_6] [i_6] [(unsigned short)19] [i_6] [i_6]))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_16 = 0; i_16 < 20; i_16 += 3) 
        {
            var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [19] [i_16] [i_5])) ? (((((/* implicit */int) arr_28 [i_5] [i_5] [i_5] [i_5 + 1])) * (((/* implicit */int) arr_31 [i_5] [i_5] [i_5] [i_5 - 1] [i_5] [(unsigned short)18] [i_16])))) : (max(((+(((/* implicit */int) arr_39 [i_5] [i_16])))), (((/* implicit */int) ((((/* implicit */int) (unsigned short)40187)) > (((/* implicit */int) var_7)))))))));
            arr_51 [i_5] [i_16] [i_16] = ((/* implicit */short) (-(((/* implicit */int) arr_28 [i_5] [i_16] [i_16] [i_5]))));
            var_32 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)109))));
            var_33 ^= var_5;
        }
        arr_52 [i_5] [i_5] = max((((/* implicit */unsigned char) arr_27 [i_5] [i_5] [i_5 + 3] [i_5] [i_5 + 3] [i_5 + 3])), (arr_18 [(short)8] [(short)8]));
        arr_53 [i_5 - 2] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) - (((var_1) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_31 [i_5] [i_5 + 2] [i_5 + 2] [i_5 + 2] [i_5 + 3] [17LL] [i_5]), (arr_27 [i_5] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]))))) : (max((var_9), (((/* implicit */unsigned int) (unsigned short)34127))))))));
        /* LoopSeq 1 */
        for (unsigned char i_17 = 0; i_17 < 20; i_17 += 2) 
        {
            var_34 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)31706)) ? (1278127489) : (((/* implicit */int) arr_47 [i_17])))) > (((/* implicit */int) (unsigned char)211))));
            var_35 = ((/* implicit */short) (-(((/* implicit */int) var_5))));
        }
    }
    /* vectorizable */
    for (signed char i_18 = 3; i_18 < 21; i_18 += 2) 
    {
        arr_60 [i_18] = ((/* implicit */unsigned char) ((arr_58 [i_18]) >= (((/* implicit */long long int) (~(((/* implicit */int) (short)29440)))))));
        arr_61 [i_18] = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_59 [i_18])))) + ((~(505467286)))));
        var_36 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_57 [i_18 - 2])) + (((/* implicit */int) arr_57 [i_18 - 2]))));
    }
    var_37 = ((/* implicit */short) (_Bool)1);
    var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? ((~((~(var_9))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
}
