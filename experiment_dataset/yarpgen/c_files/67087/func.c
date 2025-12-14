/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67087
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
    var_17 = ((/* implicit */_Bool) max((var_1), (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_18 *= ((/* implicit */int) (!(((/* implicit */_Bool) ((short) min((((/* implicit */int) arr_1 [6ULL] [i_0])), (arr_0 [i_0] [i_0])))))));
        arr_2 [i_0] = min((((/* implicit */unsigned int) ((((var_15) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))))) != (((((/* implicit */unsigned int) arr_0 [i_0] [i_0])) & (1U)))))), (min((((/* implicit */unsigned int) var_11)), (((((/* implicit */_Bool) var_5)) ? (7U) : (1069949677U))))));
        var_19 *= ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
    }
    for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        arr_5 [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_4 [i_1]) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_7)))))));
        arr_6 [i_1] [i_1] = ((/* implicit */int) var_13);
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            var_20 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)23)) ? (((/* implicit */int) (unsigned char)23)) : (((/* implicit */int) (unsigned char)23))))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)74)), ((unsigned char)241)))) : ((-(((/* implicit */int) arr_8 [i_2] [i_1]))))));
            /* LoopSeq 4 */
            for (short i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                arr_12 [i_3] [i_2] [i_3] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2] [i_3])) ? (((/* implicit */int) arr_3 [i_2] [i_3])) : (((/* implicit */int) arr_8 [i_1] [i_1])))))));
                arr_13 [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((unsigned int) (-(((unsigned int) arr_9 [i_1] [i_1])))));
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_2] [i_2])) % (((/* implicit */int) arr_9 [i_1] [i_2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1] [i_2]))))) : (((arr_11 [i_1] [i_2] [i_1] [i_3]) & (((/* implicit */int) arr_9 [i_1] [i_3]))))));
            }
            /* vectorizable */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                /* LoopSeq 1 */
                for (int i_5 = 0; i_5 < 22; i_5 += 2) 
                {
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_1] [i_2] [13U] [i_5])) ? (((/* implicit */unsigned int) arr_11 [i_2] [i_2] [i_2] [i_2])) : (197223059U)));
                    var_23 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 1373701631U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-20586))))));
                    arr_18 [i_1] [i_2] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (arr_16 [i_1] [i_2] [i_4] [i_5]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [i_1] [i_2])))))));
                }
                arr_19 [i_4] [i_2] [i_1] [i_1] = (-((-(((/* implicit */int) arr_14 [i_4])))));
                arr_20 [i_1] [i_1] [i_2] [(unsigned char)15] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)32467)) >> (((2921265664U) - (2921265645U)))));
                arr_21 [i_1] [i_2] [i_2] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */int) (short)-16284)) >= (arr_11 [(signed char)3] [i_2] [i_2] [i_4]))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))))) : (arr_16 [i_4] [i_2] [3ULL] [i_1])));
            }
            /* vectorizable */
            for (int i_6 = 1; i_6 < 20; i_6 += 1) /* same iter space */
            {
                var_24 = ((arr_22 [i_1] [i_1] [i_6] [i_6]) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-95)))))));
                var_25 &= ((((/* implicit */_Bool) arr_17 [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_6 + 1])) ? ((-(((/* implicit */int) var_15)))) : (((/* implicit */int) var_2)));
                var_26 = ((/* implicit */unsigned long long int) (signed char)0);
            }
            for (int i_7 = 1; i_7 < 20; i_7 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_8 = 0; i_8 < 22; i_8 += 1) 
                {
                    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                    {
                        {
                            arr_33 [i_1] [i_7 + 2] [i_8] [i_9 + 1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_7 + 1] [i_9 + 1] [i_7] [i_9 + 1])) ? (arr_31 [i_7 + 1] [i_2] [i_9 + 1] [i_9 + 1] [i_8] [i_8]) : (arr_31 [i_7 - 1] [i_2] [i_7] [i_9 + 1] [i_9] [i_9])))) / (max((((/* implicit */unsigned long long int) ((7U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_1] [i_9 + 1])))))), (((((/* implicit */_Bool) 1171078316)) ? (arr_25 [i_7] [i_8] [i_9]) : (((/* implicit */unsigned long long int) -2134623935))))))));
                            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) arr_22 [i_1] [i_2] [i_7] [i_8]))));
                            var_28 &= ((((/* implicit */_Bool) (~(var_5)))) ? (((/* implicit */int) arr_32 [i_1])) : (((/* implicit */int) arr_32 [i_2])));
                        }
                    } 
                } 
                var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_11 [i_7 + 2] [i_1] [i_2] [i_2])) && (((/* implicit */_Bool) arr_10 [i_1] [i_2])))) ? (arr_10 [i_7 + 1] [i_1]) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (289775224U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1])))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((197223073U) & (197223046U)))) ? (((/* implicit */unsigned int) (-(var_1)))) : (max((3091829306U), (2147483648U))))))));
                arr_34 [i_1] [i_1] = ((/* implicit */unsigned short) arr_10 [i_1] [i_7]);
            }
        }
        for (unsigned long long int i_10 = 3; i_10 < 21; i_10 += 3) 
        {
            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) (!((!(arr_32 [i_10 - 2]))))))));
            var_31 &= arr_36 [i_10 - 1];
            arr_39 [i_10 + 1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_10 - 1] [i_10 - 2]))))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_10 - 2] [i_10 - 2])))))));
        }
        /* LoopNest 3 */
        for (int i_11 = 2; i_11 < 21; i_11 += 2) 
        {
            for (unsigned short i_12 = 3; i_12 < 19; i_12 += 3) 
            {
                for (signed char i_13 = 0; i_13 < 22; i_13 += 2) 
                {
                    {
                        var_32 = ((/* implicit */int) ((((/* implicit */int) min((arr_3 [i_1] [i_11 - 2]), (arr_3 [i_1] [i_11 - 2])))) < (((/* implicit */int) min((((/* implicit */unsigned short) arr_24 [i_12 - 3] [i_11 - 1] [i_11 - 1])), (arr_3 [i_1] [i_11 - 1]))))));
                        var_33 = ((/* implicit */int) (-(arr_38 [(short)6] [i_11] [i_1])));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_14 = 0; i_14 < 15; i_14 += 2) 
    {
        var_34 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_14] [i_14] [i_14] [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_14] [i_14] [i_14] [i_14]))) : (var_6)))) ? (arr_48 [i_14]) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_46 [i_14])) & (((/* implicit */int) arr_46 [i_14])))))));
        /* LoopNest 3 */
        for (short i_15 = 0; i_15 < 15; i_15 += 1) 
        {
            for (unsigned int i_16 = 2; i_16 < 14; i_16 += 3) 
            {
                for (unsigned int i_17 = 0; i_17 < 15; i_17 += 1) 
                {
                    {
                        var_35 = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) ((0U) - (((/* implicit */unsigned int) arr_11 [i_15] [i_15] [i_15] [i_17]))))), (arr_41 [i_16 + 1]))) >> (((var_6) - (3556426055U)))));
                        var_36 = ((/* implicit */unsigned short) (-(min((((/* implicit */int) arr_55 [i_14] [i_14] [i_14] [i_14] [i_14])), (arr_26 [i_16 - 2] [i_15] [(unsigned char)6] [i_15])))));
                        var_37 = ((/* implicit */signed char) ((short) (short)13116));
                    }
                } 
            } 
        } 
        var_38 = ((/* implicit */unsigned char) ((((arr_32 [i_14]) ? (((/* implicit */int) arr_32 [i_14])) : (((/* implicit */int) arr_32 [i_14])))) + ((-(((/* implicit */int) arr_32 [i_14]))))));
        var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-111)) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)235)), (1U)))) : (15413680890732531510ULL)))) ? (((/* implicit */unsigned int) min((max((((/* implicit */int) arr_56 [i_14] [i_14] [i_14] [i_14])), (arr_50 [i_14] [i_14]))), ((-(((/* implicit */int) arr_56 [i_14] [i_14] [i_14] [i_14]))))))) : (197223046U)));
    }
    var_40 = ((/* implicit */short) ((((/* implicit */_Bool) min((var_0), (((/* implicit */int) (unsigned char)69))))) ? ((-(((/* implicit */int) ((((/* implicit */int) (short)2291)) != (((/* implicit */int) (unsigned char)255))))))) : (((/* implicit */int) (_Bool)1))));
    var_41 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_7))));
    var_42 = ((/* implicit */int) (((!(((/* implicit */_Bool) var_16)))) ? (var_5) : (((((/* implicit */_Bool) max((((/* implicit */short) var_2)), (var_9)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) % (var_0)))) : (var_10)))));
}
