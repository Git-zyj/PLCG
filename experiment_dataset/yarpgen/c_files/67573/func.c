/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67573
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
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_15 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967294U)) ? (max((((/* implicit */int) var_0)), (arr_0 [i_0]))) : (((/* implicit */int) var_10))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((int) arr_1 [i_0] [(signed char)3])) & (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        arr_3 [i_0] = ((/* implicit */short) (-(((unsigned long long int) ((long long int) 4294967294U)))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 3; i_1 < 17; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            arr_8 [i_2] = ((/* implicit */unsigned short) arr_7 [i_1] [i_2] [i_2]);
            arr_9 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (var_14) : (((/* implicit */unsigned long long int) var_2))));
            arr_10 [i_1] [i_1] &= ((/* implicit */long long int) ((((/* implicit */int) var_5)) << (((((int) arr_7 [i_1] [i_2] [13U])) - (1099142457)))));
            /* LoopSeq 4 */
            for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                arr_15 [14LL] [i_2] [i_3] = ((/* implicit */long long int) ((signed char) var_1));
                arr_16 [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned char) arr_6 [i_1 - 3]));
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_1 - 3] [i_1 + 1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_0)))))));
                /* LoopSeq 3 */
                for (unsigned char i_4 = 1; i_4 < 17; i_4 += 1) 
                {
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) 2U)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                    var_18 |= (+(((var_10) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : ((-9223372036854775807LL - 1LL)))));
                    arr_19 [i_1] [i_1] [i_1] [i_4] |= ((/* implicit */long long int) (!(((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_3])) && (((/* implicit */_Bool) arr_12 [i_3] [i_4]))))));
                }
                for (unsigned char i_5 = 3; i_5 < 16; i_5 += 2) 
                {
                    arr_24 [i_5] [i_2] [i_3] = ((1125899906842623LL) - (((/* implicit */long long int) ((/* implicit */int) var_6))));
                    /* LoopSeq 2 */
                    for (long long int i_6 = 1; i_6 < 15; i_6 += 4) 
                    {
                        arr_28 [i_1] [i_3] [i_3] [i_1] [i_6] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_3] [i_2] [i_3] [i_6 - 1] [i_6])) ? (arr_18 [i_1] [i_1] [i_3] [i_6 + 1] [i_1]) : (arr_18 [i_1] [i_2] [i_3] [i_6 + 2] [i_2])));
                        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_1 + 1])) ? (var_13) : (arr_12 [i_1] [i_1 - 2])));
                    }
                    for (unsigned char i_7 = 3; i_7 < 16; i_7 += 2) 
                    {
                        var_20 = (((_Bool)1) ? (1125899906842623LL) : (((/* implicit */long long int) 0U)));
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_1 - 3] [i_1 - 3] [i_5 - 3] [i_1 - 3])) ? (((/* implicit */int) arr_13 [i_1 + 1] [i_1 + 1] [i_5 + 1] [i_5])) : (((/* implicit */int) arr_13 [i_1 - 2] [i_5] [i_5 + 2] [i_5]))));
                        arr_32 [i_5] = ((/* implicit */unsigned char) (~(-8258713134594917656LL)));
                        arr_33 [i_5] [i_3] = ((/* implicit */_Bool) (+(arr_12 [i_1] [i_5 - 2])));
                    }
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_1 - 1] [i_1 - 3] [i_1 - 3] [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_23 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1]))));
                }
                for (long long int i_8 = 0; i_8 < 18; i_8 += 2) 
                {
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -4147946287314458217LL)) ? (((/* implicit */int) arr_31 [i_1 - 3] [4LL] [i_3] [i_3] [i_2] [(unsigned short)12] [i_8])) : (var_2)));
                    var_24 = ((/* implicit */long long int) ((var_10) ? (arr_4 [i_1 - 3]) : (((/* implicit */int) arr_11 [i_1 - 1]))));
                    var_25 |= ((4294967271U) >= (((/* implicit */unsigned int) -1101022170)));
                }
                var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((short) arr_22 [i_1] [i_1] [12ULL] [i_1 - 3] [i_3])))));
            }
            for (int i_9 = 2; i_9 < 16; i_9 += 2) /* same iter space */
            {
                arr_38 [i_1] [i_2] [i_9] = ((/* implicit */unsigned short) arr_35 [i_1] [i_9] [i_9 - 1] [i_1 - 2]);
                var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)179))))))));
            }
            for (int i_10 = 2; i_10 < 16; i_10 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_11 = 1; i_11 < 17; i_11 += 2) 
                {
                    for (unsigned int i_12 = 0; i_12 < 18; i_12 += 1) 
                    {
                        {
                            arr_49 [i_11] = ((/* implicit */signed char) ((unsigned char) arr_14 [i_1 + 1] [i_1 - 3] [i_10 + 1] [i_11 + 1]));
                            arr_50 [i_1] [0] [i_1] [(unsigned char)4] [i_11] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_20 [i_10 + 2] [i_11] [i_1 - 3] [i_11 + 1] [i_12]))));
                            arr_51 [i_11] [i_2] [i_2] [9U] [i_2] = ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) (~(var_2)))) : (var_14));
                            arr_52 [i_12] [i_11] [7ULL] [i_2] [i_2] [i_11] [i_1 - 3] = ((/* implicit */_Bool) var_6);
                            var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_42 [i_10 + 2] [i_11 + 1] [i_10 + 2] [i_1 - 2])))))));
                        }
                    } 
                } 
                var_29 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))));
            }
            for (unsigned long long int i_13 = 0; i_13 < 18; i_13 += 1) 
            {
                arr_55 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2U)) ? (((/* implicit */int) arr_20 [i_1 + 1] [12LL] [14LL] [i_1 - 3] [i_1])) : (var_9)));
                var_30 |= ((/* implicit */short) (-(((/* implicit */int) arr_34 [i_1 - 3] [i_1 - 3] [i_1 + 1] [(unsigned char)5] [i_1 - 2]))));
            }
        }
        var_31 *= ((/* implicit */signed char) ((arr_18 [i_1 - 3] [i_1 + 1] [i_1] [i_1 - 2] [i_1]) ^ (arr_18 [i_1 - 1] [i_1 - 3] [i_1] [i_1 - 3] [15U])));
    }
    for (unsigned short i_14 = 0; i_14 < 10; i_14 += 4) 
    {
        var_32 = ((/* implicit */long long int) arr_17 [i_14] [i_14] [(_Bool)1] [i_14]);
        /* LoopNest 3 */
        for (long long int i_15 = 0; i_15 < 10; i_15 += 1) 
        {
            for (unsigned int i_16 = 0; i_16 < 10; i_16 += 1) 
            {
                for (unsigned short i_17 = 3; i_17 < 9; i_17 += 4) 
                {
                    {
                        var_33 = ((/* implicit */signed char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_14 [i_17 - 2] [i_17 - 1] [i_17 - 3] [i_17]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) arr_41 [i_14] [i_15] [i_16])) : (arr_7 [i_14] [i_16] [i_17 + 1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_68 [i_14] [i_14] [i_14])))) : (min((-8468756739524657933LL), (((/* implicit */long long int) 4294967283U))))))));
                        arr_69 [i_14] [i_15] [i_16] [i_17] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((var_6), (min((var_6), (((/* implicit */unsigned short) (unsigned char)179)))))))));
                        arr_70 [i_14] [i_15] [i_14] [i_17] &= ((/* implicit */_Bool) max(((unsigned short)15983), (((/* implicit */unsigned short) (!(((_Bool) var_2)))))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_18 = 2; i_18 < 15; i_18 += 1) 
    {
        arr_73 [i_18] = ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_71 [i_18])))) > (((((/* implicit */_Bool) 8468756739524657933LL)) ? ((+(((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) (_Bool)1))))))));
        arr_74 [i_18] [(signed char)18] &= ((/* implicit */_Bool) var_8);
        /* LoopNest 2 */
        for (unsigned char i_19 = 0; i_19 < 19; i_19 += 2) 
        {
            for (long long int i_20 = 1; i_20 < 18; i_20 += 1) 
            {
                {
                    arr_80 [i_18 + 2] [i_18] [i_18] [i_18] = (((!(((/* implicit */_Bool) 2U)))) ? (((/* implicit */int) var_7)) : ((+(((/* implicit */int) var_11)))));
                    var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_77 [0ULL] [i_19] [i_18 - 2] [i_18])) : (((/* implicit */int) (unsigned char)208)))), (((/* implicit */int) ((unsigned char) arr_77 [i_19] [i_19] [i_18 - 2] [(signed char)0]))))))));
                    arr_81 [i_18] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((long long int) 2U)), (((/* implicit */long long int) min((4004095038U), (((/* implicit */unsigned int) (unsigned short)15983)))))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) arr_71 [i_18])) ? (((/* implicit */int) (short)9112)) : (((/* implicit */int) arr_71 [i_18]))))));
                    var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) (~(((/* implicit */int) (signed char)81)))))));
                    var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) var_9))));
                }
            } 
        } 
        var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_76 [i_18 - 1] [5]))) : (arr_78 [i_18] [i_18 - 1] [i_18]))) <= (arr_78 [i_18] [i_18 + 3] [i_18]))))));
        var_38 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_78 [i_18] [i_18 + 4] [i_18 + 3]))))) < (((/* implicit */int) ((arr_75 [i_18 - 1] [i_18 + 4] [i_18 + 1]) < (((/* implicit */long long int) ((var_1) << (((/* implicit */int) var_5))))))))));
    }
    var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_2), (((int) var_10))))) ? ((~(((/* implicit */int) var_3)))) : (((/* implicit */int) var_7))));
    var_40 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) min((var_11), (var_7))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_4))))))) : (var_14)));
    var_41 = ((/* implicit */long long int) (((+(((((/* implicit */unsigned int) ((/* implicit */int) var_3))) + (4294967294U))))) >= (((/* implicit */unsigned int) var_2))));
}
