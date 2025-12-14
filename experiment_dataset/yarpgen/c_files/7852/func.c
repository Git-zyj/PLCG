/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7852
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
    for (long long int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) 343061284U)) ? (((/* implicit */int) (short)608)) : (((/* implicit */int) (signed char)-125))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-105)) ? (2477787190U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16438)))));
        arr_4 [i_0] = ((/* implicit */unsigned short) arr_2 [2ULL]);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    for (long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        {
                            arr_18 [i_0] [i_0] [i_1] [i_2] [i_2] [10ULL] [i_4] = ((/* implicit */signed char) ((unsigned long long int) var_1));
                            arr_19 [i_3] [15LL] [i_0] [i_3] [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_2] [i_2 - 1] [i_2 + 1])) ? (((((/* implicit */int) (unsigned char)86)) * (((/* implicit */int) (short)-1)))) : (((/* implicit */int) arr_9 [i_0] [i_0] [(_Bool)1] [i_0]))));
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_16)) & (((/* implicit */int) (unsigned short)23599))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (1226142476U)));
            arr_20 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [(_Bool)1] [(_Bool)1] [(_Bool)1])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) ((unsigned char) var_7)))));
            arr_21 [i_0] [i_0] = ((/* implicit */long long int) ((short) ((((/* implicit */int) var_16)) > (((/* implicit */int) arr_8 [(short)4] [(signed char)4] [(short)4])))));
            /* LoopSeq 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_22 &= ((/* implicit */unsigned char) arr_7 [i_1] [i_0 + 2]);
                var_23 -= ((/* implicit */int) (!(((/* implicit */_Bool) 3825024734486671642ULL))));
            }
            for (short i_6 = 0; i_6 < 16; i_6 += 3) 
            {
                var_24 += ((/* implicit */signed char) arr_24 [i_6] [i_1] [i_1] [i_0]);
                var_25 = ((/* implicit */signed char) ((short) var_11));
                arr_29 [i_0] [i_1] [i_6] [i_6] = ((/* implicit */_Bool) var_11);
            }
        }
    }
    for (short i_7 = 0; i_7 < 23; i_7 += 3) 
    {
        arr_32 [i_7] [i_7] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
        var_26 += ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_30 [22ULL])) - (((/* implicit */int) arr_30 [16U])))))))) == (((int) var_8))));
        /* LoopNest 2 */
        for (short i_8 = 0; i_8 < 23; i_8 += 1) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 3) 
            {
                {
                    arr_38 [i_8] [i_7] [i_9] [i_7] = (!(((/* implicit */_Bool) min((var_12), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)54)))))))));
                    /* LoopSeq 1 */
                    for (short i_10 = 1; i_10 < 22; i_10 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (short i_11 = 0; i_11 < 23; i_11 += 2) 
                        {
                            arr_44 [i_10] [i_7] [i_7] [i_10] [i_11] = ((/* implicit */long long int) ((unsigned long long int) var_4));
                            var_27 = min((max((max((var_12), (((/* implicit */long long int) arr_30 [i_7])))), (((/* implicit */long long int) max((((/* implicit */short) var_14)), (arr_34 [i_7] [i_7])))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 1536LL))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_12 = 0; i_12 < 23; i_12 += 3) 
                        {
                            arr_47 [8] [i_8] [(short)2] [i_10] [i_7] [i_12] [(short)7] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)42)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                            var_28 = ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) > (((/* implicit */int) arr_36 [i_10] [i_10 + 1] [(signed char)13] [(signed char)13]))));
                        }
                        for (long long int i_13 = 4; i_13 < 22; i_13 += 3) 
                        {
                            var_29 = ((/* implicit */_Bool) max((((/* implicit */long long int) var_16)), (var_0)));
                            var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) (unsigned char)98))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_14 = 1; i_14 < 22; i_14 += 1) 
                        {
                            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((((/* implicit */_Bool) arr_36 [i_14 - 1] [19ULL] [i_9] [i_7])) ? (((/* implicit */int) ((signed char) ((int) arr_35 [i_7] [i_8] [(short)21])))) : (((/* implicit */int) ((max((((/* implicit */long long int) (signed char)-93)), (var_12))) > (((/* implicit */long long int) var_11))))))))));
                            var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((long long int) ((unsigned int) 11292199394856454038ULL)))), (((max((arr_37 [i_8] [i_10] [i_8]), (((/* implicit */unsigned long long int) arr_34 [i_7] [(unsigned short)12])))) - (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (signed char)104)), (arr_46 [i_7] [i_8] [i_9] [i_9] [(short)7] [i_10] [i_8]))))))))))));
                        }
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_15 = 0; i_15 < 23; i_15 += 1) 
                    {
                        arr_54 [(short)7] [i_7] = ((/* implicit */short) ((signed char) -8918994621335190761LL));
                        arr_55 [(signed char)1] [i_8] [i_7] [i_15] = ((/* implicit */signed char) ((((/* implicit */int) var_7)) - (((/* implicit */int) arr_51 [i_8] [i_8] [i_9] [i_8] [i_15]))));
                        arr_56 [i_7] [i_8] [(short)12] [i_7] = ((/* implicit */unsigned short) arr_31 [i_7]);
                        var_33 -= ((/* implicit */unsigned int) ((arr_37 [13LL] [i_9] [(unsigned char)13]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                    }
                    for (long long int i_16 = 3; i_16 < 21; i_16 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_17 = 0; i_17 < 23; i_17 += 4) 
                        {
                            var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((_Bool) 690012007U))), (((((/* implicit */_Bool) var_12)) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_9] [i_9] [i_9] [i_9] [i_9])))))))) ? (((/* implicit */long long int) max((((/* implicit */int) (short)633)), (65535)))) : (((long long int) ((((/* implicit */_Bool) 7154544678853097577ULL)) ? (((/* implicit */int) (unsigned short)35287)) : (((/* implicit */int) (unsigned short)15)))))));
                            arr_61 [i_7] [(signed char)20] [i_7] [(unsigned char)9] [i_7] = ((/* implicit */short) max(((+(((/* implicit */int) (unsigned char)7)))), ((-(((/* implicit */int) (!(((/* implicit */_Bool) 30632228U)))))))));
                            var_35 = ((/* implicit */unsigned int) min((((/* implicit */int) arr_36 [i_16 - 2] [i_16 - 3] [i_16 - 1] [i_16 - 2])), (((((/* implicit */_Bool) (-(-1526LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : (max((620525769), (((/* implicit */int) (signed char)-64))))))));
                            var_36 = ((/* implicit */signed char) max((0ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) arr_34 [i_7] [i_7])))))));
                        }
                        var_37 = ((/* implicit */unsigned short) max((var_37), (((unsigned short) ((((/* implicit */int) arr_58 [(unsigned short)6] [i_16 - 2])) > (((/* implicit */int) arr_58 [(short)6] [(short)6])))))));
                    }
                    arr_62 [i_7] [i_8] [i_7] = ((/* implicit */unsigned long long int) ((((unsigned int) ((((/* implicit */_Bool) arr_60 [(_Bool)1] [i_8] [i_8] [i_8] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (12472844266175636450ULL)))) - (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)189)) - (((/* implicit */int) (short)26260)))))));
                }
            } 
        } 
        var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_60 [i_7] [i_7] [i_7] [i_7] [(short)11]))), (((/* implicit */unsigned int) ((_Bool) var_5)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_43 [i_7] [i_7] [i_7] [i_7] [i_7])) * (((/* implicit */int) ((signed char) arr_34 [i_7] [(signed char)8])))))) : (((((/* implicit */_Bool) ((signed char) (signed char)43))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)100))) : (var_17))))))));
    }
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
    {
        var_39 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-609))) : (4566751843606083628LL)));
        var_40 = ((/* implicit */int) arr_22 [i_18] [i_18] [i_18]);
        var_41 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) 134217727U)), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_57 [i_18] [i_18] [i_18] [i_18])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) 690012007U)) ? (7154544678853097577ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-98)))))))));
        arr_65 [i_18] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) arr_58 [i_18] [i_18])))));
    }
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_20 = 1; i_20 < 11; i_20 += 3) 
        {
            for (short i_21 = 3; i_21 < 13; i_21 += 2) 
            {
                {
                    arr_74 [i_19] [i_20] [i_19] [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_21] [i_21 - 1] [i_20] [i_20 - 1] [i_19] [(signed char)14])) ? (((/* implicit */int) arr_70 [i_21 - 3] [i_20 - 1])) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_1)), (5ULL))) == (arr_37 [i_19] [i_20] [(unsigned char)12])))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (short)-30549))))) ? (((/* implicit */int) arr_34 [i_19] [i_20])) : (((/* implicit */int) ((-303657471) >= (arr_0 [(signed char)15]))))))));
                    arr_75 [i_20] = ((/* implicit */short) (-((+(18446744073709551615ULL)))));
                }
            } 
        } 
        arr_76 [i_19] = ((/* implicit */int) ((unsigned int) var_13));
    }
    var_42 = ((/* implicit */long long int) ((unsigned char) (!(((/* implicit */_Bool) 303657470)))));
}
