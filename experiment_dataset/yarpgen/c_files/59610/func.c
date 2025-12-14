/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59610
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
    var_20 ^= ((/* implicit */unsigned short) ((unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)32)) ? (3970923393867800878ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6004)))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        var_21 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)28623)) >= (((/* implicit */int) (signed char)32))));
        arr_2 [i_0] = ((/* implicit */signed char) ((int) arr_1 [i_0 + 3]));
        var_22 = ((((/* implicit */_Bool) (unsigned char)73)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 3]))) : (arr_0 [i_0 + 3]));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        var_23 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 13835058055282163712ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_13))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1])))));
        var_24 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_1]))));
    }
    for (int i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        arr_7 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3523676705625210895ULL)) ? (7652076118714089376ULL) : (14923067368084340721ULL)))) ? (((/* implicit */unsigned long long int) 1960151983U)) : (max((14258184154535360633ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)32)) ^ (((/* implicit */int) (unsigned short)24174)))))))));
        arr_8 [i_2] = ((/* implicit */_Bool) min(((-(arr_0 [i_2]))), (((((/* implicit */_Bool) (+(var_11)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)0)), (var_5))))) : (((unsigned long long int) var_10))))));
        var_25 = ((/* implicit */signed char) ((unsigned int) ((14923067368084340702ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)44794))))))));
    }
    for (long long int i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_4 = 1; i_4 < 13; i_4 += 3) 
        {
            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) arr_3 [i_3]))));
            arr_13 [i_4] [i_3] = ((((/* implicit */_Bool) (~(arr_0 [i_4])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_3])) & (((/* implicit */int) (signed char)-24))))) : (arr_4 [i_3] [i_3]));
        }
        /* LoopSeq 4 */
        for (unsigned int i_5 = 0; i_5 < 15; i_5 += 1) /* same iter space */
        {
            arr_17 [i_3] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 3422250194998512240LL)) && (((/* implicit */_Bool) arr_9 [i_5] [i_5])))) ? (((/* implicit */int) arr_16 [i_3] [i_3] [i_3])) : (min((var_12), (((/* implicit */int) arr_16 [i_3] [(_Bool)1] [i_5]))))))) ? ((-(((/* implicit */int) arr_9 [i_5] [i_3])))) : (var_12));
            /* LoopNest 3 */
            for (unsigned long long int i_6 = 3; i_6 < 11; i_6 += 2) 
            {
                for (unsigned short i_7 = 2; i_7 < 14; i_7 += 2) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 2) 
                    {
                        {
                            arr_28 [i_6] [i_5] [i_5] [9] [i_5] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)124)), (0LL)))) ? (((/* implicit */unsigned long long int) ((long long int) arr_27 [i_3] [i_3] [i_3] [i_6] [i_3]))) : (((((/* implicit */_Bool) min(((unsigned short)59531), ((unsigned short)6016)))) ? (((arr_24 [i_6]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_3]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_8] [i_7] [i_6]))) : (4294967295U))))))));
                            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((unsigned int) var_10))) >= (((((/* implicit */_Bool) var_15)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_22 [i_3] [i_5] [i_6])) != (((/* implicit */int) (unsigned char)141)))))))))))));
                            arr_29 [i_3] [i_8] [i_6 + 4] [i_7] [i_7] [i_6 + 4] |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)14087))))) + (((1429164579U) & (arr_26 [i_5] [i_6 + 2] [i_6 - 3] [i_8] [i_6] [i_7 - 1])))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_9 = 0; i_9 < 15; i_9 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                var_28 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)59531))));
                arr_34 [i_10] [i_3] = ((/* implicit */unsigned int) arr_3 [i_3]);
                /* LoopSeq 2 */
                for (unsigned short i_11 = 2; i_11 < 11; i_11 += 2) /* same iter space */
                {
                    var_29 |= ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */unsigned long long int) 2865802743U)) : (var_13))));
                    var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_11] [i_11 + 1] [i_11 + 2] [i_11])) ? (arr_36 [i_11 - 1] [i_11 + 4] [i_11 - 2] [i_11 - 1]) : (-2059979295212845130LL))))));
                }
                for (unsigned short i_12 = 2; i_12 < 11; i_12 += 2) /* same iter space */
                {
                    arr_40 [i_12 - 1] = ((/* implicit */unsigned long long int) ((arr_4 [i_10] [i_12]) < (arr_4 [i_3] [i_3])));
                    var_31 = (-(((13581068133986828467ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))))));
                }
                var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_35 [i_10] [i_3])) ? (arr_18 [i_3] [i_9] [i_10]) : (((/* implicit */int) arr_21 [i_3] [i_9] [0ULL]))));
            }
            arr_41 [i_9] [i_9] [i_9] |= ((/* implicit */signed char) min((((((unsigned long long int) (unsigned short)65528)) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) -6073621837243684550LL)))))), (min((((unsigned long long int) var_15)), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_27 [i_9] [0ULL] [(signed char)2] [0ULL] [i_3])))))))));
        }
        for (unsigned int i_13 = 0; i_13 < 15; i_13 += 1) /* same iter space */
        {
            var_33 = ((/* implicit */signed char) (+((-(18446744073709551615ULL)))));
            arr_45 [i_3] |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_25 [i_3]))));
            var_34 *= ((unsigned int) max((arr_0 [i_3]), (((/* implicit */unsigned long long int) -20LL))));
        }
        for (unsigned int i_14 = 0; i_14 < 15; i_14 += 1) /* same iter space */
        {
            var_35 += ((/* implicit */unsigned char) ((((((unsigned int) arr_32 [i_3] [4U] [i_3] [i_14])) >> (((((/* implicit */int) ((unsigned char) var_3))) - (100))))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_3] [i_14] [i_14])))));
            arr_49 [3ULL] [i_14] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) var_16)) ^ (var_6))) | (((/* implicit */unsigned long long int) min((326642726U), (((/* implicit */unsigned int) var_4)))))));
            arr_50 [i_14] [i_14] = ((/* implicit */short) arr_31 [i_3] [i_14] [i_3]);
            arr_51 [i_14] = ((((/* implicit */_Bool) 3812214435U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)139))) : (3289078861107409914ULL));
            /* LoopSeq 3 */
            for (unsigned long long int i_15 = 0; i_15 < 15; i_15 += 1) /* same iter space */
            {
                var_36 *= ((/* implicit */unsigned int) (unsigned short)34083);
                var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) ((unsigned short) (unsigned short)3144)))));
                var_38 |= ((/* implicit */long long int) ((unsigned char) var_0));
                arr_54 [i_14] [i_14] [i_14] [(short)0] = ((/* implicit */_Bool) var_11);
                arr_55 [i_14] [i_15] [i_14] [i_14] = ((/* implicit */unsigned char) (-((-(arr_18 [i_15] [i_14] [i_3])))));
            }
            for (unsigned long long int i_16 = 0; i_16 < 15; i_16 += 1) /* same iter space */
            {
                arr_58 [i_3] [i_3] [i_3] [i_14] = min((max((((/* implicit */unsigned long long int) 1960151989U)), (arr_11 [i_3] [i_14] [i_16]))), (((/* implicit */unsigned long long int) (-(-2906287645198029734LL)))));
                arr_59 [i_14] [i_16] [i_16] = ((/* implicit */unsigned long long int) var_17);
                arr_60 [i_14] = ((((/* implicit */_Bool) min(((+(((/* implicit */int) arr_19 [i_3] [i_14] [i_16])))), (((/* implicit */int) arr_19 [i_3] [i_3] [9LL]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((unsigned int) 0LL))))) : (((unsigned long long int) arr_12 [i_3] [i_3] [i_3])));
            }
            for (unsigned long long int i_17 = 0; i_17 < 15; i_17 += 1) /* same iter space */
            {
                arr_64 [i_14] [i_14] [10ULL] [i_3] = ((/* implicit */long long int) arr_15 [i_14]);
                arr_65 [i_14] [i_14] [i_3] [i_14] = ((/* implicit */unsigned long long int) 1960151983U);
            }
        }
    }
}
