/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57824
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned int) ((long long int) arr_2 [i_0]));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [(unsigned short)12] [(unsigned short)12] = ((/* implicit */unsigned char) var_13);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [2ULL] [i_4 + 1] [13LL] [(_Bool)1] [(_Bool)1])) + (((/* implicit */int) arr_12 [i_0] [i_4 + 2] [19LL] [i_0] [i_4 - 1]))));
                                var_16 = ((/* implicit */int) (-(((unsigned long long int) var_1))));
                                arr_14 [i_4] = ((/* implicit */unsigned short) ((unsigned long long int) arr_5 [i_0] [i_2] [i_4]));
                                var_17 = ((/* implicit */long long int) max((var_17), (var_3)));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)35165)) ? ((-2147483647 - 1)) : (1806206209))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (long long int i_7 = 0; i_7 < 20; i_7 += 3) 
                {
                    {
                        var_19 ^= ((/* implicit */_Bool) var_9);
                        var_20 = ((/* implicit */unsigned long long int) (-(var_6)));
                        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_0])) ? (arr_16 [i_5]) : (((/* implicit */int) (short)26395)))))));
                        arr_23 [2LL] [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((unsigned int) arr_21 [i_0] [i_5] [i_6] [(_Bool)1]));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_9 = 0; i_9 < 20; i_9 += 3) 
            {
                for (long long int i_10 = 0; i_10 < 20; i_10 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_11 = 0; i_11 < 20; i_11 += 4) 
                        {
                            arr_36 [i_0] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)26395)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-3144))));
                            arr_37 [i_0] [i_0] = ((/* implicit */unsigned int) (~(var_5)));
                            var_22 ^= ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)73))))) ? (arr_35 [i_0] [i_8] [i_9] [10LL] [i_11] [(short)18]) : (((/* implicit */unsigned long long int) var_10)));
                        }
                        for (int i_12 = 0; i_12 < 20; i_12 += 1) 
                        {
                            var_23 = ((/* implicit */signed char) ((unsigned long long int) var_0));
                            var_24 = ((/* implicit */unsigned short) arr_25 [i_0] [i_12]);
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_0] [i_8] [(unsigned char)11])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_12] [i_8] [i_9]))) : (2655176839U)));
                            var_26 = ((((((/* implicit */int) (short)-3144)) + (2147483647))) >> (((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) - (32134))));
                            arr_40 [i_10] &= ((/* implicit */unsigned short) arr_24 [(unsigned short)6] [i_10]);
                        }
                        for (long long int i_13 = 3; i_13 < 17; i_13 += 4) 
                        {
                            arr_43 [i_13] [i_8] [19ULL] = ((/* implicit */long long int) ((unsigned long long int) arr_4 [i_13 + 2] [i_13 + 1]));
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(4294967295U)))) ? (((/* implicit */unsigned long long int) var_12)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-55))) * (arr_15 [6LL] [6LL])))));
                        }
                        var_28 = 2956986044142084433LL;
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_33 [i_9])) : (((/* implicit */int) arr_41 [i_10]))));
                        var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((unsigned long long int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                    }
                } 
            } 
            var_31 -= ((/* implicit */_Bool) ((int) ((arr_24 [i_8] [i_8]) + (((/* implicit */unsigned long long int) var_10)))));
            var_32 = ((/* implicit */unsigned int) ((long long int) 0ULL));
        }
        for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_16 = 0; i_16 < 20; i_16 += 4) 
                {
                    for (signed char i_17 = 2; i_17 < 19; i_17 += 1) 
                    {
                        {
                            arr_55 [4ULL] [i_14] [i_17 - 1] [i_16] [i_17 - 2] [i_14] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) - (arr_4 [i_14] [i_15])))) ? (((/* implicit */int) ((signed char) arr_17 [2] [i_14] [i_14]))) : (((/* implicit */int) arr_52 [i_0] [i_14] [i_15])));
                            arr_56 [i_0] [i_14] [i_14] [i_17] [i_17] |= (_Bool)0;
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_18 = 0; i_18 < 20; i_18 += 4) 
                {
                    for (unsigned short i_19 = 0; i_19 < 20; i_19 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_51 [i_0])) ? (arr_0 [i_14] [i_14]) : (-402042482)));
                            var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? ((~(arr_29 [(_Bool)1] [i_14] [i_14] [i_14] [i_19] [i_0]))) : (((/* implicit */long long int) ((((/* implicit */int) arr_48 [i_0] [i_0] [i_15])) * (((/* implicit */int) arr_60 [i_0] [i_14] [i_0]))))))))));
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (signed char i_20 = 1; i_20 < 17; i_20 += 4) 
            {
                for (short i_21 = 0; i_21 < 20; i_21 += 1) 
                {
                    {
                        var_35 = ((/* implicit */signed char) ((int) arr_48 [11LL] [4U] [i_20 + 3]));
                        var_36 = ((((/* implicit */_Bool) ((9863612470688465090ULL) | (arr_47 [i_21] [i_20] [1] [i_0])))) ? (((((((/* implicit */int) (short)-3144)) + (2147483647))) << (((var_10) - (1546688689U))))) : (((/* implicit */int) (short)-26395)));
                        var_37 = ((/* implicit */long long int) arr_59 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20 + 3] [i_20 + 1]);
                    }
                } 
            } 
            var_38 = ((/* implicit */long long int) var_4);
            /* LoopSeq 2 */
            for (unsigned short i_22 = 0; i_22 < 20; i_22 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_23 = 0; i_23 < 20; i_23 += 1) 
                {
                    for (unsigned int i_24 = 0; i_24 < 20; i_24 += 1) 
                    {
                        {
                            var_39 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_66 [i_0] [i_14] [i_23] [i_24])) ? (var_11) : (((/* implicit */unsigned long long int) arr_26 [i_0] [i_14]))))) ? (var_4) : (((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) var_5)))))));
                            var_40 = ((/* implicit */long long int) ((_Bool) var_5));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_25 = 0; i_25 < 20; i_25 += 4) 
                {
                    for (long long int i_26 = 0; i_26 < 20; i_26 += 4) 
                    {
                        {
                            var_41 = ((/* implicit */signed char) ((arr_72 [i_0] [i_14] [i_22]) == (((((/* implicit */_Bool) (unsigned short)57344)) ? (-4544193899456791901LL) : (((/* implicit */long long int) ((/* implicit */int) (short)3143)))))));
                            var_42 = ((/* implicit */signed char) (~(arr_30 [1] [19ULL] [i_22])));
                        }
                    } 
                } 
            }
            for (unsigned short i_27 = 0; i_27 < 20; i_27 += 4) /* same iter space */
            {
                arr_83 [i_0] [i_14] [18] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-26395)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_19 [i_0] [i_14] [i_27])));
                /* LoopSeq 2 */
                for (unsigned long long int i_28 = 0; i_28 < 20; i_28 += 3) /* same iter space */
                {
                    var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)105))) : (arr_78 [i_0] [6LL] [i_27])));
                    var_44 *= ((/* implicit */unsigned short) var_9);
                    arr_87 [i_0] [i_14] [i_27] [i_28] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_18 [i_0] [(short)19] [i_27])) > (((/* implicit */int) (short)26395)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)240))) : (((arr_78 [(_Bool)1] [(_Bool)1] [(_Bool)1]) >> (((arr_77 [(signed char)6] [i_0] [6] [i_14] [i_27] [i_27] [i_28]) + (6441477273792467923LL)))))));
                    var_45 = ((/* implicit */_Bool) max((var_45), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_75 [i_0] [3U] [i_27] [i_28])) ? (((/* implicit */long long int) 0)) : (arr_29 [i_0] [i_0] [i_0] [0LL] [i_27] [i_28]))))));
                }
                for (unsigned long long int i_29 = 0; i_29 < 20; i_29 += 3) /* same iter space */
                {
                    var_46 = ((/* implicit */unsigned char) var_2);
                    arr_92 [i_27] &= ((/* implicit */unsigned short) arr_58 [i_0] [i_0] [i_14] [8LL] [i_29] [i_29]);
                }
            }
        }
    }
    var_47 = ((/* implicit */short) ((signed char) var_7));
    /* LoopNest 2 */
    for (signed char i_30 = 0; i_30 < 18; i_30 += 1) 
    {
        for (long long int i_31 = 3; i_31 < 15; i_31 += 4) 
        {
            {
                var_48 = ((/* implicit */short) min((min((((/* implicit */int) (unsigned short)65535)), (min((((/* implicit */int) (_Bool)1)), (-1944871948))))), ((+(-1213275971)))));
                var_49 = ((/* implicit */_Bool) var_0);
                arr_100 [6ULL] [i_30] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_59 [i_30] [5ULL] [i_31 - 2] [i_31 + 2] [i_31 - 3] [i_31] [i_31]), (max((16499845377183023091ULL), (((/* implicit */unsigned long long int) var_8))))))) ? (((((/* implicit */_Bool) (+(var_11)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)57344)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_71 [i_30] [i_31 - 3] [i_31] [2U]))))))) : (((/* implicit */int) min(((unsigned char)100), (((/* implicit */unsigned char) (_Bool)0)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_32 = 0; i_32 < 20; i_32 += 1) 
    {
        for (unsigned long long int i_33 = 0; i_33 < 20; i_33 += 2) 
        {
            for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
            {
                {
                    var_50 = ((/* implicit */long long int) min(((~(((/* implicit */int) ((_Bool) 388028320951278933ULL))))), ((~(((/* implicit */int) (unsigned char)178))))));
                    /* LoopNest 2 */
                    for (short i_35 = 0; i_35 < 20; i_35 += 4) 
                    {
                        for (int i_36 = 0; i_36 < 20; i_36 += 3) 
                        {
                            {
                                var_51 = ((/* implicit */int) max((var_51), (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                                var_52 = ((/* implicit */_Bool) min((6212673425601234079LL), (((/* implicit */long long int) (short)-15195))));
                            }
                        } 
                    } 
                    var_53 = ((/* implicit */unsigned short) (signed char)127);
                    arr_119 [i_32] [i_33] [i_34] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (((unsigned int) arr_19 [i_32] [i_33] [i_34])) : (((/* implicit */unsigned int) ((/* implicit */int) min((max(((unsigned short)57344), (((/* implicit */unsigned short) (short)-26395)))), (((/* implicit */unsigned short) arr_103 [i_32]))))))));
                }
            } 
        } 
    } 
}
