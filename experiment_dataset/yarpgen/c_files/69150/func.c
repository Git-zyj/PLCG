/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69150
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
    /* vectorizable */
    for (short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        var_17 &= ((unsigned int) var_4);
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_2 = 2; i_2 < 19; i_2 += 3) /* same iter space */
            {
                var_18 = ((/* implicit */short) arr_6 [i_0] [i_0]);
                arr_8 [i_0 - 1] [i_0] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)118)))) ? (arr_6 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 7076563307853327665ULL)) || (((/* implicit */_Bool) (signed char)121))))))));
                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) arr_6 [8] [i_2]))));
            }
            for (unsigned int i_3 = 2; i_3 < 19; i_3 += 3) /* same iter space */
            {
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((unsigned int) (signed char)93)))));
                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_3 - 1] [i_3 - 2] [i_3 - 1])) ? (((/* implicit */int) arr_9 [i_0 - 1] [i_3 + 2] [i_3 - 2] [i_3])) : (((/* implicit */int) (_Bool)0)))))));
                var_22 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)32755))))) ? (((/* implicit */int) (signed char)-7)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
            }
            arr_11 [i_0] = -1024LL;
        }
    }
    for (unsigned char i_4 = 1; i_4 < 17; i_4 += 1) 
    {
        var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)10615))));
        var_24 = ((/* implicit */_Bool) (~(min((((/* implicit */unsigned int) var_12)), (3U)))));
        var_25 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) arr_9 [i_4 + 1] [i_4 + 3] [i_4 + 1] [i_4 + 3])) ? (var_11) : (((/* implicit */int) var_14)))));
        arr_15 [i_4] = ((/* implicit */unsigned long long int) arr_2 [i_4]);
    }
    for (unsigned int i_5 = 2; i_5 < 8; i_5 += 4) 
    {
        arr_18 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_5 + 1] [i_5 + 1])) ? (((/* implicit */long long int) 3U)) : (var_16)))) ? ((+(((/* implicit */int) (short)32761)))) : (((((/* implicit */int) arr_17 [i_5 - 2] [i_5 - 2])) * (((/* implicit */int) arr_17 [i_5] [i_5 - 2]))))));
        arr_19 [i_5] [i_5] |= ((/* implicit */unsigned int) var_10);
        var_26 = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_5 [i_5 + 2] [i_5] [i_5] [i_5 - 1]))))));
        /* LoopSeq 1 */
        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 2) 
        {
            var_27 += ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-105)) / (((/* implicit */int) (signed char)-122))))) <= (((unsigned int) ((((/* implicit */_Bool) (signed char)-21)) ? (arr_6 [i_5] [i_6]) : (((/* implicit */unsigned long long int) 1023LL)))))));
            var_28 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_5] [i_5])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_5 + 1] [i_5] [i_5 - 1] [i_5])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_5])) ? (((/* implicit */unsigned long long int) var_12)) : (arr_10 [i_6] [i_6] [i_5]))))))) : (min((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_5]))))), (((((/* implicit */int) (short)22335)) & (((/* implicit */int) arr_5 [i_5] [i_5] [i_5] [i_6]))))))));
        }
    }
    for (int i_7 = 0; i_7 < 16; i_7 += 2) 
    {
        var_29 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1134568590)) ? (arr_14 [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) arr_5 [i_7] [i_7] [i_7] [i_7])))))))));
        /* LoopSeq 1 */
        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
        {
            var_30 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3U)) ? (arr_23 [i_8] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) min((((/* implicit */int) (signed char)127)), (var_11))))))));
            var_31 = ((/* implicit */unsigned short) (_Bool)0);
            /* LoopNest 3 */
            for (short i_9 = 0; i_9 < 16; i_9 += 3) 
            {
                for (unsigned short i_10 = 1; i_10 < 12; i_10 += 2) 
                {
                    for (unsigned int i_11 = 3; i_11 < 15; i_11 += 2) 
                    {
                        {
                            arr_39 [i_9] [i_11] [i_11] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((var_2), ((signed char)115)))) ? (((((/* implicit */_Bool) var_12)) ? (arr_14 [i_9]) : (((/* implicit */unsigned int) var_11)))) : ((+(var_4))))) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) var_11)), (arr_33 [i_7] [i_8 + 1] [i_9] [i_8 + 1] [i_8] [i_11]))))))))));
                            var_32 ^= ((/* implicit */signed char) var_11);
                        }
                    } 
                } 
            } 
        }
    }
    /* LoopSeq 3 */
    for (unsigned char i_12 = 0; i_12 < 17; i_12 += 3) 
    {
        arr_43 [i_12] = ((/* implicit */unsigned char) (~(var_9)));
        /* LoopNest 2 */
        for (signed char i_13 = 0; i_13 < 17; i_13 += 4) 
        {
            for (unsigned int i_14 = 0; i_14 < 17; i_14 += 2) 
            {
                {
                    arr_48 [i_12] = arr_42 [i_14];
                    var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((min((arr_7 [i_12] [i_12] [i_14] [i_14]), (((/* implicit */unsigned long long int) (signed char)-100)))) >> (((((unsigned long long int) (-(arr_4 [i_12] [i_13] [i_13])))) - (2724776020ULL))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_15 = 0; i_15 < 17; i_15 += 3) 
                    {
                        var_34 *= ((((/* implicit */_Bool) ((arr_6 [i_14] [i_14]) << (((var_7) + (1816604165)))))) ? (((((/* implicit */_Bool) -7947961169858944568LL)) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (short)-32750)), (0U)))) : (((((/* implicit */long long int) ((/* implicit */int) var_0))) / (arr_2 [i_14]))))) : ((((~(var_16))) % (((/* implicit */long long int) ((((/* implicit */_Bool) arr_49 [i_15] [i_14] [i_13] [i_12])) ? (arr_4 [i_12] [i_14] [i_15]) : (1122032670U)))))));
                        var_35 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(arr_46 [i_12]))))));
                        arr_53 [i_15] [i_15] [i_12] = ((/* implicit */long long int) (unsigned short)13);
                    }
                    for (unsigned long long int i_16 = 0; i_16 < 17; i_16 += 4) 
                    {
                        var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min(((-(-2147483644))), (((/* implicit */int) arr_45 [i_12] [i_14]))))))))));
                        var_37 = (~(((((/* implicit */_Bool) (signed char)93)) ? (arr_52 [i_12] [i_13] [i_14] [i_12]) : (arr_52 [i_12] [i_13] [i_13] [i_13]))));
                        arr_58 [i_12] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (_Bool)1)), (0ULL)));
                    }
                    /* LoopSeq 2 */
                    for (short i_17 = 1; i_17 < 16; i_17 += 4) 
                    {
                        var_38 ^= ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_12 [i_14] [i_17 - 1])), (-7945282037363932346LL)))) ? (arr_12 [i_12] [i_17 + 1]) : (((/* implicit */int) arr_9 [i_17 + 1] [i_17 - 1] [i_17 - 1] [i_12])));
                        arr_62 [i_12] [i_12] [i_12] = (~(4294967294U));
                    }
                    for (signed char i_18 = 1; i_18 < 16; i_18 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_19 = 0; i_19 < 17; i_19 += 2) 
                        {
                            var_39 = ((/* implicit */int) var_16);
                            arr_67 [i_12] [i_12] [i_18 + 1] [i_14] [i_13] [i_12] [i_12] = ((max((((((/* implicit */_Bool) var_3)) ? (arr_3 [i_12]) : (1514578237214944753ULL))), (((/* implicit */unsigned long long int) (+(var_5)))))) >> (((/* implicit */int) ((min((1514578237214944753ULL), (((/* implicit */unsigned long long int) 2147483638)))) != (((/* implicit */unsigned long long int) (+(arr_61 [i_12] [i_12] [i_12] [i_12]))))))));
                            arr_68 [i_12] [i_19] [i_19] [i_19] [i_19] [i_19] = ((/* implicit */signed char) var_10);
                            arr_69 [i_12] [i_13] [i_14] [i_18] [i_12] = ((/* implicit */long long int) (+(((((/* implicit */int) arr_64 [i_12] [i_13] [i_12] [i_18 + 1])) * (((/* implicit */int) (short)24386))))));
                        }
                        var_40 = ((/* implicit */short) ((var_11) == (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_54 [i_18])) ? (((/* implicit */int) arr_65 [i_12] [i_13] [i_14] [i_18] [i_13])) : (((/* implicit */int) arr_40 [i_14]))))) && (((/* implicit */_Bool) min((arr_6 [i_12] [i_12]), (((/* implicit */unsigned long long int) var_13))))))))));
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
                    {
                        var_41 = ((/* implicit */int) max((var_41), (((/* implicit */int) ((arr_0 [i_12]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_20]))))))));
                        /* LoopSeq 1 */
                        for (int i_21 = 1; i_21 < 16; i_21 += 2) 
                        {
                            var_42 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) var_4))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                            var_43 = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)52)) : (((/* implicit */int) (short)32748)));
                            arr_77 [i_12] [i_13] [i_13] [i_20] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_59 [i_13] [i_14] [i_20] [i_21])))) ? (14118114840814589262ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_55 [i_13] [i_21] [i_21 - 1] [i_21 + 1] [i_21] [i_21 - 1])))));
                        }
                        var_44 = ((/* implicit */long long int) min((var_44), (((/* implicit */long long int) var_3))));
                    }
                    /* vectorizable */
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (int i_23 = 0; i_23 < 17; i_23 += 4) 
                        {
                            arr_83 [i_12] [i_23] [i_22] [i_22] [i_14] [i_12] [i_12] = ((/* implicit */_Bool) (~(5566603499965420879ULL)));
                            var_45 = ((/* implicit */short) min((var_45), (((/* implicit */short) ((arr_50 [i_12] [i_14] [i_22] [i_22]) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_81 [i_13] [i_13]))))))))));
                        }
                        arr_84 [i_12] [i_12] [i_12] = (~(((/* implicit */int) (signed char)115)));
                        arr_85 [i_12] [i_12] [i_12] [i_12] = ((/* implicit */short) (~(arr_0 [i_22])));
                    }
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) /* same iter space */
                    {
                        var_46 = ((/* implicit */int) max((var_46), (((/* implicit */int) ((var_5) > (((/* implicit */unsigned int) (~(var_7)))))))));
                        var_47 = ((/* implicit */unsigned long long int) (-((((!(((/* implicit */_Bool) 18446744073709551612ULL)))) ? (min((var_4), (((/* implicit */unsigned int) (short)-7113)))) : (((/* implicit */unsigned int) var_11))))));
                        var_48 = ((/* implicit */signed char) min((var_48), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(max((9223372036854775807LL), (((/* implicit */long long int) (unsigned char)229))))))) ? (((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */unsigned int) (_Bool)1)), (528482304U))))) : (((((/* implicit */_Bool) arr_5 [i_12] [i_14] [i_12] [i_12])) ? (max((12880140573744130737ULL), (((/* implicit */unsigned long long int) var_13)))) : (arr_10 [i_13] [i_14] [i_24]))))))));
                    }
                }
            } 
        } 
        arr_89 [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((5566603499965420879ULL) >> (((-1790122569988619396LL) + (1790122569988619418LL)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (max((((/* implicit */long long int) arr_5 [i_12] [i_12] [i_12] [i_12])), (var_16))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)249))))))));
        var_49 = ((/* implicit */short) var_13);
        arr_90 [i_12] [i_12] = ((/* implicit */int) -4LL);
    }
    /* vectorizable */
    for (long long int i_25 = 0; i_25 < 10; i_25 += 1) 
    {
        var_50 = ((/* implicit */long long int) var_0);
        arr_93 [i_25] [i_25] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)247)) && (((/* implicit */_Bool) var_0))));
        arr_94 [i_25] = ((/* implicit */signed char) (+(0U)));
    }
    /* vectorizable */
    for (_Bool i_26 = 0; i_26 < 0; i_26 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_27 = 1; i_27 < 1; i_27 += 1) 
        {
            for (signed char i_28 = 0; i_28 < 10; i_28 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_29 = 0; i_29 < 10; i_29 += 3) 
                    {
                        var_51 = ((/* implicit */signed char) max((var_51), (((/* implicit */signed char) ((arr_73 [i_26] [i_26]) << (((17545800173828780274ULL) - (17545800173828780272ULL))))))));
                        arr_105 [i_29] [i_29] [i_26] [i_27 - 1] [i_26 + 1] = ((/* implicit */signed char) ((unsigned char) arr_96 [i_26] [i_26]));
                    }
                    var_52 = ((/* implicit */unsigned char) (~((+(var_5)))));
                }
            } 
        } 
        arr_106 [i_26] [i_26] = ((/* implicit */long long int) arr_0 [i_26]);
        arr_107 [i_26] = ((/* implicit */long long int) (+(((/* implicit */int) arr_98 [i_26]))));
    }
    var_53 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) max((var_10), (((/* implicit */long long int) (short)-7113))))) ? (((/* implicit */int) (short)7112)) : (((var_7) % (((/* implicit */int) (_Bool)1))))))));
}
