/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76936
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
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        arr_2 [i_0] &= ((((/* implicit */_Bool) 27113772)) ? (((((/* implicit */_Bool) (unsigned char)201)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-12837))) : (1258564340U))) : (4294967280U));
        var_16 -= ((/* implicit */signed char) (~(((/* implicit */int) ((_Bool) (-(((/* implicit */int) var_9))))))));
    }
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 14; i_1 += 4) 
    {
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) var_1))));
        var_18 ^= ((/* implicit */int) var_0);
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            arr_11 [i_1] = ((/* implicit */signed char) ((_Bool) (unsigned char)201));
            var_19 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_2])) ? (arr_10 [i_1 + 1]) : (arr_10 [i_1 + 1])));
            var_20 = ((/* implicit */long long int) (((-(((/* implicit */int) var_1)))) % (((/* implicit */int) var_5))));
            /* LoopSeq 2 */
            for (long long int i_3 = 0; i_3 < 15; i_3 += 1) /* same iter space */
            {
                var_21 = ((/* implicit */unsigned long long int) ((signed char) arr_5 [i_1 + 1] [i_1]));
                /* LoopSeq 2 */
                for (signed char i_4 = 0; i_4 < 15; i_4 += 1) /* same iter space */
                {
                    arr_18 [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_4] [i_3] [i_2])) ? (arr_13 [i_2] [i_3] [i_4]) : (arr_13 [i_1 + 1] [i_2] [i_3])));
                    var_22 -= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (arr_10 [i_1 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                    /* LoopSeq 2 */
                    for (unsigned char i_5 = 3; i_5 < 13; i_5 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((arr_10 [i_4]) < (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_1] [i_2])) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) arr_9 [i_3] [i_4] [i_5]))))))))));
                        var_24 = ((/* implicit */long long int) (~(7419365621633137938ULL)));
                        arr_22 [i_3] = ((/* implicit */short) (+(arr_10 [i_5 - 1])));
                        var_25 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_5 [i_1 - 2] [i_1])) : (((/* implicit */int) var_12))))) : (arr_13 [i_2] [i_3] [i_5])));
                        var_26 &= ((/* implicit */_Bool) (-(((/* implicit */int) var_4))));
                    }
                    for (signed char i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        var_27 = ((/* implicit */long long int) var_7);
                        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_7 [i_6]) : (var_15)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_1] [i_1] [i_1] [i_1 + 1] [i_1 + 1]))) : (var_2)));
                        var_29 = ((/* implicit */unsigned char) (signed char)-1);
                        var_30 ^= ((/* implicit */signed char) ((unsigned long long int) arr_17 [i_6] [i_4] [i_3] [i_2] [i_2] [i_1 - 1]));
                    }
                }
                for (signed char i_7 = 0; i_7 < 15; i_7 += 1) /* same iter space */
                {
                    arr_27 [i_3] [i_3] = ((((/* implicit */_Bool) (+(15U)))) ? (arr_17 [i_1 - 1] [12ULL] [i_1 - 2] [i_1 - 1] [(unsigned short)0] [i_1 + 1]) : (arr_26 [i_7] [i_3] [i_2] [i_1] [i_1]));
                    var_31 -= ((/* implicit */long long int) arr_25 [(_Bool)1] [(short)0] [i_1 - 2] [i_2]);
                    var_32 = ((((((/* implicit */int) (short)3146)) <= (((/* implicit */int) var_6)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6)));
                }
            }
            for (long long int i_8 = 0; i_8 < 15; i_8 += 1) /* same iter space */
            {
                var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) (_Bool)1))));
                /* LoopSeq 3 */
                for (int i_9 = 0; i_9 < 15; i_9 += 2) /* same iter space */
                {
                    var_34 = ((/* implicit */int) (unsigned char)0);
                    var_35 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) + (7353408983680016564ULL)));
                }
                for (int i_10 = 0; i_10 < 15; i_10 += 2) /* same iter space */
                {
                    var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) ((((/* implicit */_Bool) 6U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)188))) : (11093335090029535052ULL))))));
                    /* LoopSeq 4 */
                    for (unsigned int i_11 = 2; i_11 < 14; i_11 += 3) 
                    {
                        var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) arr_9 [i_1] [(signed char)10] [i_8]))));
                        var_38 ^= -2768252137107319451LL;
                    }
                    for (int i_12 = 0; i_12 < 15; i_12 += 2) 
                    {
                        var_39 ^= (~((+(var_8))));
                        var_40 &= ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)15))));
                    }
                    for (signed char i_13 = 2; i_13 < 12; i_13 += 4) 
                    {
                        var_41 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [i_13 + 2] [i_1] [i_8] [i_1] [i_1])) && (((/* implicit */_Bool) var_6))));
                        var_42 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 4294967281U)) ? (((/* implicit */int) arr_34 [i_1 - 2] [i_1 - 1] [i_1 - 2] [i_8] [(_Bool)1] [i_13 - 1])) : (((/* implicit */int) var_3))));
                        arr_47 [(signed char)6] [(signed char)6] [i_8] [i_8] = ((/* implicit */unsigned int) (short)-12812);
                    }
                    for (short i_14 = 1; i_14 < 13; i_14 += 1) 
                    {
                        arr_51 [i_1] [i_2] [7] [i_10] [i_10] = ((/* implicit */long long int) arr_15 [i_14 + 2] [i_1 + 1] [i_8] [i_10] [i_14 - 1]);
                        arr_52 [i_1] [i_2] [i_2] [0ULL] [i_14 - 1] = ((/* implicit */signed char) arr_40 [i_1] [i_2] [i_8] [i_10] [i_2]);
                    }
                    var_43 = ((/* implicit */int) max((var_43), ((-(arr_17 [i_1 + 1] [i_1 - 1] [i_1] [i_1 - 2] [i_1] [i_1 + 1])))));
                    var_44 = ((/* implicit */short) ((((/* implicit */_Bool) arr_30 [i_1])) ? (((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) || ((_Bool)1)))) : (((/* implicit */int) (short)1008))));
                }
                for (int i_15 = 0; i_15 < 15; i_15 += 2) /* same iter space */
                {
                    var_45 = ((/* implicit */_Bool) ((4294967280U) - (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                    var_46 = ((/* implicit */int) (signed char)-78);
                    arr_56 [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) arr_7 [i_8])) : (-94021182251720641LL));
                    var_47 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-25)) ? (arr_38 [i_1 - 2] [8] [i_1 - 2] [i_15]) : (arr_38 [i_1 - 1] [i_2] [i_8] [5ULL])));
                }
                var_48 = ((/* implicit */short) min((var_48), (((/* implicit */short) ((signed char) arr_44 [i_1] [i_1 - 2] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 2])))));
                arr_57 [i_8] [(signed char)2] [i_1 - 2] [9ULL] = ((/* implicit */unsigned int) ((arr_26 [i_1] [i_2] [i_2] [i_8] [i_2]) | ((-(((/* implicit */int) arr_46 [i_1] [i_2] [i_2] [i_1] [i_8] [i_8] [i_8]))))));
                arr_58 [3U] &= (~(((arr_13 [i_1 - 1] [(signed char)6] [i_8]) | (((/* implicit */long long int) ((/* implicit */int) var_5))))));
            }
            var_49 = ((/* implicit */_Bool) var_8);
        }
        /* LoopNest 2 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            for (int i_17 = 0; i_17 < 15; i_17 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_18 = 0; i_18 < 15; i_18 += 1) 
                    {
                        for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
                        {
                            {
                                var_50 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_30 [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_30 [i_1 + 1]))));
                                var_51 = ((/* implicit */_Bool) min((var_51), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)28710))))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (36028797018963967LL) : (((/* implicit */long long int) ((/* implicit */int) (short)28710))))))))));
                            }
                        } 
                    } 
                    var_52 = ((/* implicit */long long int) (!(arr_19 [i_1 + 1] [i_17] [i_1 - 1])));
                    var_53 -= ((/* implicit */short) var_12);
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_20 = 0; i_20 < 23; i_20 += 4) 
    {
        var_54 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned int) -1034354297)) : (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_8)))));
        arr_71 [i_20] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))));
        var_55 = ((/* implicit */short) min((var_55), (var_1)));
        /* LoopNest 2 */
        for (short i_21 = 1; i_21 < 21; i_21 += 3) 
        {
            for (long long int i_22 = 1; i_22 < 22; i_22 += 4) 
            {
                {
                    var_56 = ((/* implicit */long long int) arr_73 [i_21 - 1] [i_21 + 1] [i_21 + 1]);
                    var_57 = ((/* implicit */unsigned short) max((var_57), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_70 [i_21 + 2]))))))));
                }
            } 
        } 
    }
    var_58 &= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) (short)13640)))))) <= (min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (var_10))), ((((-2147483647 - 1)) & (((/* implicit */int) (short)13653))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_23 = 3; i_23 < 10; i_23 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_24 = 0; i_24 < 11; i_24 += 4) 
        {
            /* LoopNest 2 */
            for (int i_25 = 1; i_25 < 8; i_25 += 2) 
            {
                for (short i_26 = 0; i_26 < 11; i_26 += 3) 
                {
                    {
                        var_59 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_30 [i_26]), (arr_30 [i_26])))) ? (var_8) : (((/* implicit */unsigned int) var_10))));
                        var_60 = ((/* implicit */_Bool) max((var_60), (((_Bool) arr_26 [i_26] [2ULL] [i_24] [i_24] [i_23 - 2]))));
                    }
                } 
            } 
            arr_87 [i_23] = ((/* implicit */long long int) ((max((((/* implicit */int) (!(arr_32 [i_23] [i_23] [i_23] [i_24])))), (var_15))) >= ((+(((/* implicit */int) arr_66 [i_23] [i_23 - 2] [i_23] [i_23 + 1] [i_23]))))));
        }
        var_61 ^= ((/* implicit */unsigned short) (((~(arr_85 [i_23] [i_23] [i_23] [(_Bool)1] [i_23] [i_23]))) != (((/* implicit */long long int) ((int) (((_Bool)0) ? (((/* implicit */int) var_0)) : (arr_65 [i_23 - 1] [8LL] [i_23] [i_23])))))));
        arr_88 [i_23] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), (var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_23 - 1] [i_23] [i_23] [i_23 - 3] [i_23] [i_23] [i_23 - 1]))) : (((unsigned int) (signed char)-77))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_23 - 3])) >= (((/* implicit */int) (unsigned char)255))))), (var_13)))) : ((((-(((/* implicit */int) var_0)))) / (((/* implicit */int) (short)7620))))));
    }
    var_62 -= ((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) ((1622906668) - (((/* implicit */int) var_14))))))));
}
