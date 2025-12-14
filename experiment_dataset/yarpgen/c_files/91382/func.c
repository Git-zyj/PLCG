/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91382
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) /* same iter space */
    {
        var_14 = ((((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)45))))) ? (min((((/* implicit */unsigned long long int) 9223372036854775807LL)), (var_6))) : (((/* implicit */unsigned long long int) 2497563695U)))) >> ((+(((((/* implicit */int) var_10)) >> (((var_11) - (2091869402801402543ULL))))))));
        var_15 = ((/* implicit */int) ((max((var_11), (((/* implicit */unsigned long long int) max((65504606), (((/* implicit */int) var_10))))))) - (((/* implicit */unsigned long long int) (~(1797403600U))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 7222150406783647143ULL)) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) arr_3 [i_1] [i_1]))))))))));
        arr_5 [i_1] = ((signed char) ((((/* implicit */unsigned long long int) 3023833613U)) ^ (285978576338026496ULL)));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 2; i_4 < 20; i_4 += 4) 
            {
                for (short i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    {
                        var_17 = ((/* implicit */short) ((var_3) + (((unsigned int) 11224593666925904479ULL))));
                        arr_16 [i_2] [i_4 - 2] [i_4 + 1] [i_2] = ((/* implicit */signed char) (-(arr_12 [i_5] [8LL] [i_2])));
                        arr_17 [i_2] [(signed char)6] [(signed char)0] [i_3] [i_2] = ((/* implicit */unsigned int) (signed char)-85);
                        var_18 = ((/* implicit */signed char) (-(arr_10 [i_2])));
                        var_19 = ((/* implicit */int) arr_7 [i_2]);
                    }
                } 
            } 
        } 
        var_20 += ((/* implicit */unsigned long long int) ((((var_12) + (9223372036854775807LL))) >> (((arr_13 [i_2] [i_2] [i_2] [i_2]) - (17836853997452570825ULL)))));
        var_21 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */unsigned long long int) 1271133672U)) != (var_2))));
    }
    for (unsigned int i_6 = 3; i_6 < 17; i_6 += 1) 
    {
        arr_20 [i_6 - 2] [i_6] = ((/* implicit */int) (short)32767);
        var_22 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_8)), (min((((arr_15 [i_6 + 3] [i_6] [i_6] [i_6] [i_6]) ^ (((/* implicit */unsigned long long int) -1466116602)))), (((/* implicit */unsigned long long int) (signed char)101))))));
    }
    var_23 = ((/* implicit */unsigned long long int) ((unsigned int) (~(var_11))));
    var_24 = ((/* implicit */int) max((var_13), (min((var_11), (((/* implicit */unsigned long long int) (signed char)-114))))));
    /* LoopNest 3 */
    for (signed char i_7 = 0; i_7 < 13; i_7 += 3) 
    {
        for (unsigned int i_8 = 2; i_8 < 10; i_8 += 4) 
        {
            for (unsigned int i_9 = 1; i_9 < 11; i_9 += 2) 
            {
                {
                    arr_30 [i_7] [i_7] [i_9] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13678))) >= (var_2)));
                    /* LoopSeq 1 */
                    for (int i_10 = 0; i_10 < 13; i_10 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((var_11) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_7])) ? (var_0) : (2106726831)))))))) & (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)114)) / (arr_33 [i_7] [i_8] [i_9] [i_10])))) ? (arr_12 [i_9] [i_8] [9U]) : (((/* implicit */long long int) min((((/* implicit */int) (signed char)120)), (-65504577))))))));
                        arr_35 [i_7] [i_7] [0ULL] [i_9] = ((/* implicit */short) min((var_1), (arr_23 [i_8])));
                        var_26 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) max((var_4), (1804593742)))) == (max((((/* implicit */unsigned long long int) (short)6414)), (var_5))))))) * (min((max((((/* implicit */unsigned long long int) 3218129532U)), (var_2))), (((/* implicit */unsigned long long int) ((unsigned int) -65504607)))))));
                        var_27 = min((3023833624U), ((-(1271133672U))));
                    }
                    arr_36 [i_9] = ((/* implicit */unsigned int) (-(max((((/* implicit */unsigned long long int) arr_23 [i_7])), (min((arr_22 [i_8] [i_8]), (var_13)))))));
                    /* LoopSeq 4 */
                    for (unsigned int i_11 = 0; i_11 < 13; i_11 += 4) 
                    {
                        arr_41 [i_9] [i_9] [i_8] [i_11] [i_9] &= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (signed char)77)), ((-(((unsigned long long int) 2097151ULL))))));
                        arr_42 [i_7] [i_7] [i_11] [i_11] |= ((/* implicit */int) (-(((((((/* implicit */_Bool) arr_38 [i_11] [i_11])) ? (((/* implicit */unsigned long long int) arr_18 [4U])) : (var_6))) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)69)))))))));
                        arr_43 [i_9] = ((/* implicit */unsigned int) arr_29 [i_7] [i_8]);
                    }
                    for (unsigned int i_12 = 4; i_12 < 11; i_12 += 4) /* same iter space */
                    {
                        var_28 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) max(((signed char)-114), ((signed char)7)))) ? (1855557606771123555ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6505468604275179134LL)) ? (((/* implicit */int) (short)22345)) : (((/* implicit */int) arr_28 [i_7] [i_9] [i_9 + 1] [i_9 + 1]))))))));
                        var_29 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((unsigned int) (signed char)123))) ^ (min((max((((/* implicit */unsigned long long int) arr_12 [11U] [i_8 + 2] [i_7])), (var_13))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) -1621879036)) * (1727905300U))))))));
                    }
                    for (unsigned int i_13 = 4; i_13 < 11; i_13 += 4) /* same iter space */
                    {
                        var_30 = ((/* implicit */long long int) max((((max((arr_44 [0U] [i_9] [i_9]), (((/* implicit */unsigned long long int) (signed char)-124)))) * (18446744073709551601ULL))), (((/* implicit */unsigned long long int) min((3772920526U), (arr_3 [i_8 - 2] [i_8 - 2]))))));
                        arr_48 [i_7] [i_8] [i_8] [i_9] [4ULL] [i_13] = ((/* implicit */int) ((signed char) min((((/* implicit */unsigned long long int) (-(-7013487535270394128LL)))), (16300128725563602735ULL))));
                    }
                    for (unsigned int i_14 = 4; i_14 < 11; i_14 += 4) /* same iter space */
                    {
                        var_31 = min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (-(3023833623U)))), (min((arr_29 [i_7] [i_8 + 3]), (((/* implicit */long long int) (signed char)-1))))))), (var_5));
                        var_32 = max((((((/* implicit */_Bool) (-(3318236585U)))) ? (min((((/* implicit */unsigned long long int) 1621879035)), (var_11))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)48))))))), (((/* implicit */unsigned long long int) ((short) var_7))));
                        var_33 = max((min((min((1271133668U), (((/* implicit */unsigned int) (signed char)-85)))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)84)) >> (((-1621879025) + (1621879031)))))))), (((unsigned int) 1621879035)));
                    }
                    /* LoopNest 2 */
                    for (short i_15 = 0; i_15 < 13; i_15 += 2) 
                    {
                        for (signed char i_16 = 4; i_16 < 12; i_16 += 4) 
                        {
                            {
                                var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [1ULL])) ? (((/* implicit */unsigned long long int) var_3)) : (((((/* implicit */_Bool) var_1)) ? (arr_44 [i_9 - 1] [i_9] [i_8 + 1]) : (((/* implicit */unsigned long long int) 2515857048073527349LL))))));
                                var_35 = ((/* implicit */int) ((3218129532U) >> (((var_6) - (13745037510657209708ULL)))));
                                arr_57 [i_15] [i_15] [i_15] [i_9] [i_15] [(short)8] [i_15] = ((/* implicit */signed char) max(((short)-19106), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_8]))) || (((/* implicit */_Bool) var_6)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
