/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86394
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    {
                        arr_10 [i_0] [16U] = ((_Bool) max((((/* implicit */unsigned short) (short)-15581)), (arr_7 [i_2] [i_2] [i_1] [i_0])));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_4 = 3; i_4 < 24; i_4 += 4) 
                        {
                            arr_13 [i_0] [i_0] [i_4] [i_3] [i_4] = ((/* implicit */int) (+(18446744073709551615ULL)));
                            var_11 -= ((/* implicit */unsigned char) (((-(var_0))) != (((/* implicit */long long int) arr_11 [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 2] [i_4 + 1] [i_4 + 1]))));
                        }
                        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) (short)-15567))));
                        var_13 &= ((/* implicit */short) min((((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4)))) == (((((/* implicit */int) (unsigned char)88)) % (((/* implicit */int) var_1))))))), (((unsigned char) ((var_2) & (((/* implicit */unsigned int) arr_11 [i_0] [(unsigned short)23] [i_1] [i_0] [i_2] [(unsigned short)23])))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_5 = 0; i_5 < 25; i_5 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_6 = 3; i_6 < 24; i_6 += 4) 
            {
                var_14 = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)-15601))));
                var_15 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((1946834043) / (((/* implicit */int) (short)-15567))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (var_2)))));
                var_16 = (!(((/* implicit */_Bool) var_4)));
            }
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_5])) ? (((/* implicit */int) arr_18 [i_5] [i_5] [i_0])) : (((/* implicit */int) (short)15565))));
            /* LoopSeq 1 */
            for (unsigned long long int i_7 = 1; i_7 < 23; i_7 += 4) 
            {
                /* LoopSeq 2 */
                for (int i_8 = 1; i_8 < 23; i_8 += 4) 
                {
                    arr_26 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (unsigned char)91);
                    arr_27 [i_0] [i_5] [i_7 + 2] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (4294967295U)));
                    var_18 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_19 [i_8])) != (((/* implicit */int) var_8)))) ? ((-(var_0))) : (((/* implicit */long long int) var_2))));
                }
                for (int i_9 = 0; i_9 < 25; i_9 += 4) 
                {
                    arr_31 [i_0] [i_0] [i_0] [i_9] = ((/* implicit */_Bool) ((((/* implicit */int) arr_25 [(unsigned char)17] [i_7 + 2] [i_7] [i_7 + 1] [i_7 - 1])) + (((((/* implicit */int) var_8)) + (((/* implicit */int) (_Bool)0))))));
                    arr_32 [i_9] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_8))));
                    arr_33 [i_9] [i_7] [i_5] [22] [10U] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned short)64153))));
                }
                var_19 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)255)))));
                /* LoopSeq 3 */
                for (unsigned char i_10 = 0; i_10 < 25; i_10 += 4) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_30 [i_0])))) ? (((/* implicit */int) arr_34 [i_0] [i_5])) : (-1971461741))))));
                    arr_36 [i_0] [i_5] [(unsigned short)21] [4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_0])) & (((/* implicit */int) (unsigned char)87))))) ? (((((/* implicit */_Bool) arr_23 [i_5] [i_7] [i_0] [i_10])) ? (((/* implicit */int) arr_8 [i_5])) : (((/* implicit */int) var_1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                }
                for (unsigned char i_11 = 0; i_11 < 25; i_11 += 4) /* same iter space */
                {
                    var_21 = ((/* implicit */signed char) (-(((/* implicit */int) var_7))));
                    var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8))));
                }
                for (unsigned char i_12 = 0; i_12 < 25; i_12 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_13 = 0; i_13 < 25; i_13 += 4) 
                    {
                        arr_43 [i_13] [i_7] [i_12] [(signed char)3] [i_7] [15] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_11 [i_0] [(short)22] [i_0] [i_0] [i_0] [i_0]) & (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) (!(arr_6 [i_0])))) : (((/* implicit */int) arr_2 [i_0]))));
                        arr_44 [i_0] [i_5] [i_12] [i_12] |= ((/* implicit */long long int) (+(arr_35 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1])));
                        arr_45 [i_0] [i_5] [i_7] [i_7] [i_13] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_5))));
                    }
                    var_23 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_8))));
                    arr_46 [i_0] [i_5] [i_5] [i_7] [(unsigned char)23] [i_12] = ((/* implicit */unsigned short) ((int) (!(((/* implicit */_Bool) var_0)))));
                }
                var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)0))));
            }
        }
        /* vectorizable */
        for (long long int i_14 = 0; i_14 < 25; i_14 += 4) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned char i_15 = 0; i_15 < 25; i_15 += 4) 
            {
                /* LoopSeq 2 */
                for (int i_16 = 0; i_16 < 25; i_16 += 4) 
                {
                    arr_56 [(unsigned char)4] [(unsigned char)4] [(unsigned char)4] [(unsigned char)4] [i_16] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_10))) != (var_2))) ? (((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_8))))) : (((/* implicit */int) var_6))));
                    var_25 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)91)) % (((/* implicit */int) (_Bool)1))));
                }
                for (unsigned char i_17 = 0; i_17 < 25; i_17 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_18 = 0; i_18 < 25; i_18 += 4) 
                    {
                        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) 15926169766132260751ULL)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)-24))));
                        var_27 -= ((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) arr_60 [i_0] [i_14] [i_14] [i_18] [i_17] [i_14]))));
                        arr_62 [i_17] [i_18] |= ((/* implicit */unsigned long long int) var_1);
                    }
                    var_28 = ((/* implicit */unsigned long long int) var_9);
                    var_29 = ((/* implicit */unsigned char) ((int) (unsigned char)152));
                }
                /* LoopSeq 2 */
                for (signed char i_19 = 0; i_19 < 25; i_19 += 4) /* same iter space */
                {
                    arr_66 [i_0] [i_0] [i_15] [i_0] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) var_1)) % (((/* implicit */int) var_1))))) == (var_0)));
                    arr_67 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_17 [i_0] [i_15] [i_19]);
                    var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 6381639240789842697ULL)))))));
                    var_31 -= ((/* implicit */_Bool) (~(((((/* implicit */int) (signed char)24)) % (2147483642)))));
                    var_32 &= (-(((/* implicit */int) var_3)));
                }
                for (signed char i_20 = 0; i_20 < 25; i_20 += 4) /* same iter space */
                {
                    arr_71 [i_0] [i_14] [i_14] [i_20] = ((/* implicit */unsigned short) (~((+(((/* implicit */int) arr_12 [(short)0] [(short)0] [20ULL] [(short)0] [20ULL] [i_15] [i_15]))))));
                    var_33 = ((((/* implicit */_Bool) 9ULL)) ? (9ULL) : (8997489725801254797ULL));
                }
            }
            for (unsigned long long int i_21 = 0; i_21 < 25; i_21 += 4) 
            {
                arr_74 [(_Bool)1] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((arr_47 [i_14] [i_21]) ? (((/* implicit */long long int) var_2)) : (var_0)))) <= (((((/* implicit */_Bool) arr_53 [i_0] [i_0] [i_0] [i_0])) ? (arr_5 [i_0] [i_0] [12]) : (11ULL)))));
                arr_75 [i_0] [i_14] [i_21] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59745))) & (arr_22 [i_0] [i_14] [i_21])));
                arr_76 [i_0] [23ULL] [i_21] [i_21] = ((((/* implicit */_Bool) arr_28 [i_0] [i_14] [0ULL] [i_14])) ? (((/* implicit */unsigned long long int) var_2)) : (7152983647878223300ULL));
            }
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                var_34 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)127)) & (((/* implicit */int) var_1))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))));
                var_35 = ((/* implicit */long long int) ((((/* implicit */int) var_4)) == (((/* implicit */int) arr_78 [i_22] [i_22] [(unsigned char)0] [i_0]))));
                /* LoopNest 2 */
                for (unsigned short i_23 = 2; i_23 < 21; i_23 += 4) 
                {
                    for (short i_24 = 1; i_24 < 24; i_24 += 4) 
                    {
                        {
                            arr_84 [i_24] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) var_10)))))));
                            arr_85 [i_0] [i_0] [i_0] [i_24] [i_0] = ((/* implicit */signed char) arr_11 [(_Bool)1] [i_24 - 1] [(_Bool)1] [i_23 - 1] [i_24] [(_Bool)1]);
                        }
                    } 
                } 
            }
            var_36 = ((/* implicit */_Bool) (+(arr_65 [i_0] [i_14] [i_0] [i_14] [i_14] [i_14])));
            /* LoopNest 3 */
            for (unsigned char i_25 = 0; i_25 < 25; i_25 += 4) 
            {
                for (short i_26 = 0; i_26 < 25; i_26 += 4) 
                {
                    for (int i_27 = 0; i_27 < 25; i_27 += 4) 
                    {
                        {
                            var_37 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_1)))))));
                            var_38 |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_28 = 0; i_28 < 25; i_28 += 4) /* same iter space */
        {
            arr_97 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((7152983647878223286ULL), (((/* implicit */unsigned long long int) (((_Bool)1) ? (-2147483642) : (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-27553)))))))));
            arr_98 [i_0] [i_28] [i_28] = ((/* implicit */unsigned char) (((((!(((/* implicit */_Bool) (signed char)-11)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1))))))) && (((/* implicit */_Bool) 599831958))));
        }
        arr_99 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((11293760425831328316ULL) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_57 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (var_0))))))) ? ((+(((/* implicit */int) (unsigned char)41)))) : (((/* implicit */int) ((_Bool) min((var_3), (var_3)))))));
    }
    var_39 -= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)15565)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-15567))))) ? (max((var_0), (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) ((/* implicit */int) max((var_10), (((/* implicit */unsigned short) var_7))))))))));
    var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) min((((/* implicit */unsigned int) (+(((/* implicit */int) var_1))))), (((((/* implicit */_Bool) ((short) (short)15566))) ? (min((((/* implicit */unsigned int) (short)10316)), (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) var_3)), ((short)-10335))))))))))));
}
