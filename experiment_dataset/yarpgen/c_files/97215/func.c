/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97215
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
    for (long long int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_0 [i_0 + 1])))) ? (max((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_0 + 1]) <= (arr_0 [i_0 - 1])))))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_11 &= ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
            var_12 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(arr_3 [i_1 - 1] [i_1 - 1] [i_1 - 1])))), (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) >> (((((/* implicit */int) (signed char)(-127 - 1))) + (132)))))) % (min((((/* implicit */unsigned long long int) var_2)), (arr_4 [i_1] [i_0])))))));
            var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1])) ? (arr_1 [i_0] [i_0 - 1]) : (arr_1 [(unsigned short)6] [i_0 - 1])))) ? (arr_1 [i_0] [i_0 - 1]) : (min((arr_1 [i_0] [i_0 - 1]), (arr_1 [i_0] [i_0 - 1])))));
            var_14 |= ((/* implicit */short) var_7);
        }
        for (short i_2 = 3; i_2 < 9; i_2 += 4) /* same iter space */
        {
            arr_8 [i_0 + 1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2])) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_4 [4] [i_2 + 3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_7 [i_0] [i_2 - 1] [i_2 - 3]), ((!(((/* implicit */_Bool) arr_0 [i_2]))))))))));
            arr_9 [i_0] [i_2] [i_2 + 3] = ((/* implicit */unsigned int) arr_3 [i_0] [i_0] [(unsigned short)7]);
            var_15 = (-(max((((/* implicit */long long int) arr_5 [i_2] [i_0])), (((((/* implicit */long long int) ((/* implicit */int) var_5))) / (arr_0 [i_0]))))));
        }
        for (short i_3 = 3; i_3 < 9; i_3 += 4) /* same iter space */
        {
            var_16 = (i_3 % 2 == zero) ? (((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_0 [i_3])) ? (arr_4 [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3] [i_0]))))), (2860055944783252481ULL)))) ? (((/* implicit */unsigned long long int) ((970066203) << (((((arr_11 [i_0 - 1] [i_3]) + (122640202))) - (9)))))) : (min((arr_4 [i_3] [i_3]), (arr_4 [i_3] [i_3 - 1]))))) : (((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_0 [i_3])) ? (arr_4 [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3] [i_0]))))), (2860055944783252481ULL)))) ? (((/* implicit */unsigned long long int) ((970066203) << (((((((arr_11 [i_0 - 1] [i_3]) + (122640202))) - (9))) - (1387807639)))))) : (min((arr_4 [i_3] [i_3]), (arr_4 [i_3] [i_3 - 1])))));
            var_17 += ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */int) ((unsigned short) arr_1 [i_0] [i_0]))) : (((/* implicit */int) (short)32745))))) / (arr_3 [i_0] [i_0] [i_0])));
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                for (int i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    {
                        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [7] [i_3] [i_3] [i_3] [i_3]))) / (min((arr_6 [i_0 - 1] [i_0] [i_0]), (((/* implicit */unsigned int) ((signed char) arr_10 [4ULL] [i_4]))))))))));
                        var_19 = ((/* implicit */int) ((unsigned char) min((((/* implicit */long long int) max((88587422U), (((/* implicit */unsigned int) arr_16 [i_0 + 1] [i_4] [i_3] [i_3 - 2] [i_0 + 1]))))), (((((/* implicit */_Bool) arr_6 [i_3] [i_4] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3] [i_5]))) : (arr_12 [i_3]))))));
                    }
                } 
            } 
        }
        arr_17 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */int) ((short) arr_5 [i_0 - 1] [i_0 - 1]))), ((+(((/* implicit */int) arr_5 [i_0 - 1] [1LL]))))));
        var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_11 [8LL] [(signed char)6])), (4294967295U)))), ((-(arr_0 [i_0]))))))));
        arr_18 [i_0] = ((/* implicit */signed char) min((max((arr_3 [i_0] [i_0 + 1] [i_0 - 1]), (((((/* implicit */_Bool) arr_11 [i_0] [(unsigned char)0])) ? (arr_14 [i_0] [(unsigned char)8] [(unsigned char)8] [i_0]) : (var_7))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_16 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0] [i_0])) : (((/* implicit */int) arr_10 [(signed char)2] [i_0 + 1])))))));
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 3; i_6 < 9; i_6 += 1) 
    {
        arr_22 [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_6] [i_6] [i_6] [1] [i_6 - 1])) < (((/* implicit */int) arr_16 [i_6] [i_6] [i_6] [i_6 + 1] [i_6 + 1]))));
        var_21 = ((/* implicit */signed char) (+((~(arr_6 [i_6] [i_6] [(unsigned char)8])))));
        /* LoopSeq 1 */
        for (long long int i_7 = 0; i_7 < 11; i_7 += 1) 
        {
            arr_26 [i_7] [i_6] [(_Bool)1] = ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_7 [i_6 - 3] [i_6 - 3] [i_6 - 3])) | (arr_20 [i_6])))));
            /* LoopSeq 3 */
            for (short i_8 = 2; i_8 < 9; i_8 += 1) 
            {
                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (_Bool)0))));
                arr_29 [i_6] [i_6] [i_6] = ((/* implicit */short) ((((((((/* implicit */int) arr_16 [i_6] [i_6 + 2] [i_6] [i_6] [i_6])) + (2147483647))) << (((4893446160579562249LL) - (4893446160579562249LL))))) & (((/* implicit */int) (_Bool)0))));
                var_23 += ((/* implicit */unsigned char) arr_20 [(signed char)10]);
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                var_24 = ((((int) (_Bool)0)) - (((/* implicit */int) arr_16 [(signed char)10] [(signed char)10] [i_9] [i_9] [i_9])));
                /* LoopNest 2 */
                for (unsigned short i_10 = 0; i_10 < 11; i_10 += 2) 
                {
                    for (unsigned char i_11 = 0; i_11 < 11; i_11 += 3) 
                    {
                        {
                            arr_37 [i_6] = ((/* implicit */short) arr_35 [i_6 - 3] [i_6 - 3] [(unsigned short)10] [i_6]);
                            arr_38 [2] [3] [(short)4] [i_10] [i_6] = ((/* implicit */short) (unsigned short)0);
                        }
                    } 
                } 
                var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_34 [10ULL] [4LL] [i_6] [i_6]))) >= (((((/* implicit */_Bool) arr_35 [i_6] [i_7] [i_9] [i_9])) ? (arr_0 [i_9]) : (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_6] [i_6]))))))))));
            }
            for (signed char i_12 = 0; i_12 < 11; i_12 += 1) 
            {
                arr_43 [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) 18315905357199663347ULL)) ? (((/* implicit */int) arr_34 [i_6] [i_6] [i_6] [i_6 - 2])) : (((/* implicit */int) var_10))));
                arr_44 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) arr_4 [i_6] [i_7]);
                var_26 = ((/* implicit */unsigned short) (+(arr_6 [i_12] [i_6] [i_6])));
            }
            var_27 = ((((/* implicit */int) arr_10 [i_6] [i_7])) - (((/* implicit */int) arr_10 [i_6] [i_7])));
        }
        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((3378288017082921719LL) + (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_6] [i_6 - 1] [i_6]))))))));
        var_29 ^= (unsigned short)65535;
    }
    for (int i_13 = 0; i_13 < 23; i_13 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 137422176256LL)))))) / (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_45 [i_14]) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) : (arr_45 [i_14]))))))));
            var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) arr_47 [i_13] [i_13]))));
            /* LoopSeq 1 */
            for (unsigned short i_15 = 0; i_15 < 23; i_15 += 1) 
            {
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 23; i_16 += 3) 
                {
                    for (signed char i_17 = 0; i_17 < 23; i_17 += 1) 
                    {
                        {
                            arr_59 [i_15] [i_15] [i_15] [i_15] [i_13] = ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_52 [i_15] [i_15] [i_15] [i_15])), (arr_51 [i_13] [i_13] [i_15] [i_13])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_58 [i_13] [i_13] [i_13] [(_Bool)1] [i_13]))) : (((((/* implicit */_Bool) arr_51 [i_16] [i_15] [i_15] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_51 [i_17] [i_15] [i_15] [i_14]))));
                            var_32 = ((((((arr_49 [i_17]) / (((/* implicit */unsigned long long int) arr_54 [i_13] [i_14] [i_15] [i_16] [i_17])))) << (((((/* implicit */int) arr_47 [i_14] [i_14])) - (26540))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_58 [i_13] [i_13] [i_13] [i_16] [i_13]))));
                        }
                    } 
                } 
                arr_60 [i_15] [i_15] [i_15] [i_13] = (!(((/* implicit */_Bool) arr_55 [14LL] [3LL])));
                var_33 = ((/* implicit */unsigned short) var_7);
            }
        }
        arr_61 [i_13] [i_13] |= ((/* implicit */long long int) var_5);
        var_34 = ((((/* implicit */_Bool) max((((462056966335854451LL) / (((/* implicit */long long int) ((/* implicit */int) arr_58 [i_13] [i_13] [i_13] [i_13] [i_13]))))), (((/* implicit */long long int) ((((/* implicit */int) var_0)) & (((/* implicit */int) arr_53 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])))))))) ? (((((/* implicit */_Bool) max((var_5), (arr_50 [(unsigned char)20] [i_13] [i_13])))) ? (((/* implicit */long long int) ((arr_52 [i_13] [i_13] [i_13] [i_13]) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_13] [i_13] [(unsigned char)3])))))) : (arr_51 [i_13] [i_13] [i_13] [i_13]))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_55 [i_13] [i_13]))))) ? (arr_51 [i_13] [i_13] [i_13] [i_13]) : (max((arr_51 [i_13] [i_13] [i_13] [i_13]), (arr_56 [i_13] [i_13] [i_13]))))));
        arr_62 [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_50 [i_13] [i_13] [i_13]), (arr_50 [i_13] [i_13] [i_13])))) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_50 [i_13] [i_13] [(unsigned char)10])))))));
    }
    for (int i_18 = 0; i_18 < 24; i_18 += 4) 
    {
        arr_66 [i_18] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (+(min((var_9), (((/* implicit */int) arr_65 [i_18] [i_18]))))))), (var_4)));
        arr_67 [i_18] [i_18] = ((/* implicit */int) ((((/* implicit */_Bool) arr_64 [i_18])) ? (((/* implicit */unsigned long long int) arr_63 [(_Bool)1])) : (((unsigned long long int) max((((/* implicit */long long int) var_2)), (var_7))))));
    }
    var_35 = ((/* implicit */unsigned int) -778343716498261642LL);
    var_36 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) ((((/* implicit */_Bool) -2078923300)) && (((/* implicit */_Bool) var_2)))))))), ((-(max((var_7), (var_7)))))));
}
