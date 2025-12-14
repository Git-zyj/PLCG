/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61490
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
    var_20 = ((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned char) var_3))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (short i_4 = 0; i_4 < 13; i_4 += 3) 
                            {
                                var_21 = ((/* implicit */unsigned char) (unsigned short)41352);
                                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) arr_11 [i_3] [i_3] [i_2] [(unsigned char)11] [8LL]))))) < (((/* implicit */int) (_Bool)1)))))));
                                arr_12 [i_4] [i_4] [i_4] [i_3] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_18)))) : (((((/* implicit */int) (_Bool)1)) << (((arr_7 [i_0] [i_0] [i_2] [i_0]) - (9590129415539435165ULL)))))));
                                var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_8) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)36))) : (var_4)))) ? (arr_7 [i_3] [i_3] [i_2] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24201))))))));
                                arr_13 [i_1] [i_1] [i_2] [(unsigned char)1] [i_3] [i_1] = ((/* implicit */long long int) ((((((/* implicit */int) var_0)) != (((/* implicit */int) (short)31)))) ? (arr_2 [i_1] [(signed char)2]) : (((/* implicit */int) arr_8 [(_Bool)1] [i_2] [i_1] [i_4]))));
                            }
                            var_24 = max((((_Bool) ((long long int) var_6))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) > (min((((/* implicit */unsigned long long int) (short)-9658)), (arr_4 [i_3] [i_1] [i_2] [i_2]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_5 = 2; i_5 < 12; i_5 += 3) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (signed char)-15))));
                            var_26 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_8 [i_0] [(_Bool)1] [8] [(_Bool)1])) ? (-16LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_5] [6LL] [6] [(signed char)10]))))), (arr_19 [i_0] [0ULL] [i_5 - 1] [i_6])))) && (((/* implicit */_Bool) ((unsigned int) (signed char)81)))));
                            arr_20 [i_0] [(signed char)12] [i_1] [(signed char)12] = ((/* implicit */signed char) var_19);
                            arr_21 [i_0] [(unsigned short)8] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)7), (((/* implicit */signed char) (_Bool)1)))))) < (((var_11) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))) && (((/* implicit */_Bool) max((((/* implicit */int) min((((/* implicit */short) var_3)), ((short)18727)))), (((((/* implicit */_Bool) arr_19 [i_0] [i_1] [0U] [i_6])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_8)))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_7 = 0; i_7 < 13; i_7 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 2; i_8 < 11; i_8 += 3) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 3) 
                        {
                            {
                                var_27 ^= arr_11 [i_0] [i_1] [i_7] [i_8 + 2] [i_9];
                                var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) (signed char)-49))));
                                arr_30 [i_9] [i_1] [i_7] [i_8] [i_7] [i_8] = ((/* implicit */unsigned char) max((((/* implicit */int) ((((((/* implicit */_Bool) 1015808U)) ? (-737809081959677124LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4279))))) <= (((/* implicit */long long int) arr_2 [i_1] [5]))))), ((+(((/* implicit */int) ((((/* implicit */_Bool) 3655468853008848914ULL)) && (arr_11 [i_0] [i_1] [i_7] [i_1] [(short)8]))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_10 = 0; i_10 < 13; i_10 += 2) /* same iter space */
                    {
                        var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((((long long int) var_5)) < (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_10]))))))));
                        var_30 = ((/* implicit */long long int) arr_0 [i_0]);
                    }
                    for (signed char i_11 = 0; i_11 < 13; i_11 += 2) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (unsigned long long int i_12 = 2; i_12 < 12; i_12 += 4) 
                        {
                            var_31 += ((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)237)), (((((((/* implicit */_Bool) arr_29 [i_0] [i_1] [i_0] [i_11] [i_12 - 1] [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (4102065508868084809LL))) * (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_31 [i_12 - 1] [i_0] [i_7] [i_0] [i_0]))))))));
                            arr_40 [i_1] = ((((/* implicit */unsigned long long int) 657878417U)) - (max((arr_29 [i_0] [i_0] [i_1] [i_7] [i_11] [i_12 - 2]), (arr_29 [i_0] [i_11] [i_11] [i_7] [i_1] [i_0]))));
                            var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) (((~(((/* implicit */int) var_15)))) != (((/* implicit */int) var_3)))))) : (281473902968832LL)));
                            var_33 = ((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_12 + 1]);
                        }
                        for (unsigned int i_13 = 3; i_13 < 12; i_13 += 2) 
                        {
                            arr_44 [i_0] [1U] [1U] [i_1] [1U] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_13] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (short)-20)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (var_11)))));
                            var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) var_12))));
                            var_35 = ((/* implicit */unsigned short) ((((arr_17 [i_1]) ? (((/* implicit */int) arr_17 [i_1])) : (((/* implicit */int) arr_17 [i_1])))) == ((+(((/* implicit */int) ((unsigned char) 4102065508868084808LL)))))));
                            arr_45 [i_1] [i_1] [i_1] [i_11] [i_13] = ((_Bool) ((unsigned char) var_0));
                            arr_46 [i_1] [i_1] = ((/* implicit */short) (_Bool)1);
                        }
                        for (unsigned short i_14 = 0; i_14 < 13; i_14 += 3) 
                        {
                            arr_50 [(signed char)7] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65285)) || (((/* implicit */_Bool) 14791275220700702715ULL))))), (arr_22 [i_0] [i_7] [i_1])))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (signed char)-115)) + (125))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((5ULL) % (((/* implicit */unsigned long long int) 2147483648U))))))))));
                            var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 18446744073709551611ULL)) ? (((/* implicit */long long int) var_5)) : (arr_43 [9U] [(unsigned short)2] [9U] [i_1] [i_1] [i_0])))))) ? (var_13) : (11ULL))))));
                            var_37 &= ((/* implicit */unsigned char) min((((max((((/* implicit */long long int) (unsigned short)63)), (var_4))) & (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_11] [(unsigned char)0] [i_1] [i_7] [i_7] [(_Bool)1] [(_Bool)1]))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_32 [i_0] [i_0] [i_11] [i_14])) || (((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) (signed char)92)) : (((/* implicit */int) ((unsigned char) arr_6 [(unsigned char)7]))))))));
                        }
                        for (unsigned short i_15 = 0; i_15 < 13; i_15 += 3) 
                        {
                            var_38 = ((/* implicit */signed char) max((var_38), ((signed char)-84)));
                            var_39 ^= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)211)))))) || (((/* implicit */_Bool) 18446744073709551589ULL))))) == (((/* implicit */int) var_18))));
                        }
                        var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) (+((((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))) / (arr_5 [i_7]))))))));
                    }
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_16 = 4; i_16 < 15; i_16 += 4) 
    {
        for (unsigned long long int i_17 = 0; i_17 < 16; i_17 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    for (signed char i_19 = 4; i_19 < 14; i_19 += 3) 
                    {
                        {
                            var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_65 [i_16] [i_16] [i_16] [i_19])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_62 [i_16])) ? (((/* implicit */int) arr_65 [(signed char)12] [i_16] [i_19 - 4] [(signed char)12])) : (arr_66 [i_16] [(_Bool)1] [i_19 - 4] [i_17] [i_16 + 1])))) : (min((((((/* implicit */_Bool) (short)-32767)) ? (3655468853008848901ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)16))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_65 [(signed char)10] [i_16] [i_16] [(signed char)2]))) == (14791275220700702743ULL)))))))))));
                            arr_67 [i_17] [i_17] [i_17] [(unsigned char)0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_10)))) & (10U)));
                        }
                    } 
                } 
                var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) >> (((3655468853008848858ULL) - (3655468853008848830ULL)))))) ? (((((/* implicit */_Bool) arr_55 [i_16 - 2])) ? (arr_55 [i_16 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) var_16)) : (arr_55 [i_16 - 4])))));
                /* LoopNest 3 */
                for (long long int i_20 = 2; i_20 < 13; i_20 += 2) 
                {
                    for (unsigned long long int i_21 = 0; i_21 < 16; i_21 += 2) 
                    {
                        for (unsigned char i_22 = 3; i_22 < 13; i_22 += 2) 
                        {
                            {
                                arr_78 [i_16] [i_17] [i_16] [(unsigned char)12] [i_22] &= ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) arr_58 [i_21] [i_20 + 2])) && (((/* implicit */_Bool) (unsigned char)8))))), (max((((/* implicit */int) var_17)), (((((/* implicit */int) (short)-5252)) * (((/* implicit */int) (_Bool)0))))))));
                                var_43 = ((/* implicit */_Bool) arr_70 [i_16] [i_16] [i_17]);
                                var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_77 [i_16] [i_17] [i_17] [i_20 + 2] [i_21] [i_17] [(short)0])))) > (var_5)));
                                var_45 = ((/* implicit */unsigned short) max((var_45), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_74 [i_22 + 3] [i_21] [i_20 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_65 [i_22 + 2] [i_21] [i_22 + 2] [i_22 + 3]))) : (var_14))), (((/* implicit */unsigned int) arr_65 [i_22 - 3] [i_20] [i_20] [i_22])))))));
                            }
                        } 
                    } 
                } 
                arr_79 [i_17] = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-120)) ? (((/* implicit */int) var_2)) : ((+(((/* implicit */int) arr_58 [i_16] [i_16]))))))), (((((/* implicit */long long int) ((var_9) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) & ((~(arr_74 [i_17] [i_17] [i_16])))))));
            }
        } 
    } 
}
