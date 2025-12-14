/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6477
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) + (((/* implicit */int) ((short) arr_1 [i_0])))));
        /* LoopSeq 4 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [3]))) / (var_8))))));
            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6688391260867656917LL)) ? ((+(-6688391260867656940LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)2094))))))));
            var_15 = ((/* implicit */long long int) ((int) (_Bool)1));
            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) var_5))));
            var_17 -= ((/* implicit */unsigned long long int) 6688391260867656909LL);
        }
        for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            var_18 += ((/* implicit */_Bool) ((unsigned short) -6688391260867656895LL));
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((int) arr_4 [i_0] [10ULL]));
            arr_8 [(short)2] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17187725732036035285ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (-6688391260867656918LL)))) ? (arr_5 [i_0] [i_2] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)57343)) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (var_0))))));
            /* LoopSeq 2 */
            for (signed char i_3 = 3; i_3 < 10; i_3 += 3) 
            {
                var_19 += ((((/* implicit */_Bool) 15596921515949484315ULL)) ? (((/* implicit */unsigned long long int) -6688391260867656914LL)) : (10717644228602363153ULL));
                var_20 ^= ((/* implicit */_Bool) arr_11 [i_0] [i_0] [8LL]);
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-27599)) ? (((/* implicit */int) (short)26931)) : (((/* implicit */int) (unsigned short)57351))))) ? (((((/* implicit */_Bool) (unsigned short)57961)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-5384668716183394576LL))) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))))))));
                arr_12 [i_0] [i_0] [i_3] = ((/* implicit */int) ((unsigned long long int) var_1));
            }
            for (int i_4 = 0; i_4 < 14; i_4 += 3) 
            {
                arr_15 [i_0] [i_2] [(_Bool)1] [i_2] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_6 [4U] [i_0] [i_4])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)8))))));
                arr_16 [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) arr_1 [i_0]))));
                var_22 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_4] [i_0] [i_0])) ? (arr_11 [i_0] [(unsigned short)6] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                arr_17 [i_0] [i_0] [i_0] = ((/* implicit */short) ((unsigned long long int) var_11));
            }
            var_23 = (~(((/* implicit */int) arr_10 [i_0] [i_2] [i_2])));
        }
        for (unsigned long long int i_5 = 1; i_5 < 10; i_5 += 4) /* same iter space */
        {
            /* LoopSeq 4 */
            for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 3) 
            {
                var_24 = ((/* implicit */int) (((-(10049183452600673168ULL))) >> (((((int) arr_4 [i_0] [i_0])) + (21679)))));
                var_25 = ((/* implicit */int) var_6);
            }
            for (int i_7 = 3; i_7 < 13; i_7 += 3) 
            {
                var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [10] [i_5 + 2] [i_7 + 1])) ? (((/* implicit */unsigned long long int) 301297839U)) : (var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_10 [i_0] [i_0] [i_5])))) : ((((_Bool)1) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
                var_27 ^= (+(((unsigned long long int) (unsigned short)57343)));
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_13 [i_0] [i_5 + 4] [i_5 + 4]))));
                arr_28 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) arr_3 [i_5 + 2])) ? (((/* implicit */unsigned long long int) -1790908106749353805LL)) : (15596921515949484315ULL));
                var_30 ^= ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_5 + 4] [i_5 + 1] [i_8]))) == (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (17187725732036035285ULL))));
            }
            for (unsigned int i_9 = 0; i_9 < 14; i_9 += 3) 
            {
                var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) ((((/* implicit */unsigned long long int) -999019951604952245LL)) != (var_12))))));
                var_32 = ((/* implicit */unsigned long long int) min((var_32), (((((/* implicit */_Bool) arr_5 [i_9] [i_0] [i_0])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
            }
            var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) (-(var_8))))));
            /* LoopSeq 3 */
            for (unsigned char i_10 = 0; i_10 < 14; i_10 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 14; i_11 += 4) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53688))) | (18446744073709551615ULL))))));
                            arr_39 [i_0] [i_0] [i_11] [i_12] = ((/* implicit */_Bool) var_6);
                            var_35 = ((/* implicit */long long int) arr_21 [i_5 + 3] [i_5 - 1] [i_5 - 1]);
                            var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)124))) : (arr_33 [i_12] [i_11] [i_10] [i_5] [(signed char)8] [i_0])))) ? (arr_13 [i_5 - 1] [i_5 + 4] [i_5 + 2]) : (((/* implicit */int) ((arr_13 [i_0] [i_0] [13]) == (((/* implicit */int) arr_22 [i_0] [i_0] [i_0])))))));
                            var_37 = ((/* implicit */unsigned int) (short)-27599);
                        }
                    } 
                } 
                arr_40 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(268435455)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)4471))))) : (((arr_0 [i_0] [i_5]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_21 [i_0] [i_5] [i_10]))))));
                /* LoopSeq 4 */
                for (unsigned char i_13 = 3; i_13 < 13; i_13 += 3) 
                {
                    arr_43 [i_0] [i_0] [(_Bool)1] [i_13 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_30 [i_5 - 1] [i_5 + 3] [i_5 + 3] [i_13 + 1])) ? ((+(arr_13 [i_0] [i_5 + 3] [i_10]))) : (((/* implicit */int) var_11))));
                    arr_44 [i_5] [(signed char)6] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1541442616955382657LL)) ? (((/* implicit */int) arr_21 [i_13 - 3] [i_10] [i_0])) : (((int) arr_33 [i_0] [2U] [i_5] [i_10] [i_13 - 3] [i_13 - 3]))));
                    var_38 = ((/* implicit */unsigned long long int) var_0);
                    /* LoopSeq 1 */
                    for (short i_14 = 3; i_14 < 13; i_14 += 3) 
                    {
                        var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) 4294967288U))));
                        arr_49 [i_0] [i_0] [i_10] [i_10] [5] = ((/* implicit */int) arr_0 [i_0] [i_0]);
                        var_40 = ((/* implicit */unsigned long long int) var_3);
                    }
                }
                for (unsigned long long int i_15 = 0; i_15 < 14; i_15 += 3) 
                {
                    var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_41 [2ULL] [i_5] [i_10] [i_5 - 1] [12] [i_10])) && (((/* implicit */_Bool) var_8)))))));
                    var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1790908106749353816LL)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_10] [i_0] [i_5] [(short)2] [i_10] [i_15])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 0U))))) : (((/* implicit */int) ((((/* implicit */_Bool) 7992853925349184667ULL)) && (((/* implicit */_Bool) arr_19 [10ULL] [i_5] [i_10]))))))))));
                }
                for (unsigned long long int i_16 = 0; i_16 < 14; i_16 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_17 = 0; i_17 < 14; i_17 += 1) 
                    {
                        arr_58 [i_0] [7U] [7U] [i_16] [7U] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_10 [i_0] [2U] [i_10]))));
                        var_43 = ((/* implicit */unsigned int) min((var_43), (1332931232U)));
                    }
                    arr_59 [i_0] [i_5] [i_0] [i_16] = ((/* implicit */short) arr_27 [i_0] [i_5 + 1]);
                    var_44 *= ((/* implicit */unsigned int) var_11);
                }
                for (int i_18 = 0; i_18 < 14; i_18 += 2) 
                {
                    arr_63 [i_0] = var_9;
                    var_45 = ((/* implicit */_Bool) max((var_45), (((/* implicit */_Bool) (-(arr_33 [i_0] [i_5] [9U] [i_5 + 2] [(unsigned short)5] [9U]))))));
                    var_46 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_50 [12] [12] [(signed char)4] [i_18] [i_18])) && (((/* implicit */_Bool) (unsigned char)100)))));
                    var_47 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_50 [i_5 + 2] [i_5] [i_5 + 4] [i_5 + 2] [i_5]))));
                }
                var_48 = (!(((((/* implicit */int) arr_26 [i_0] [i_0])) >= (((/* implicit */int) var_2)))));
                arr_64 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) var_5))));
            }
            for (unsigned char i_19 = 0; i_19 < 14; i_19 += 4) /* same iter space */
            {
                var_49 = ((/* implicit */signed char) min((var_49), (((/* implicit */signed char) (short)27598))));
                var_50 = ((/* implicit */int) max((var_50), (((/* implicit */int) ((((2849822557760067300ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8190))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [7] [i_0])) ? (((/* implicit */int) arr_50 [i_0] [i_0] [(_Bool)1] [i_19] [6LL])) : (((/* implicit */int) var_11))))) : (arr_57 [i_5] [i_5] [i_5 + 4] [i_5 + 4]))))));
            }
            for (unsigned char i_20 = 0; i_20 < 14; i_20 += 4) /* same iter space */
            {
                var_51 -= ((/* implicit */unsigned int) var_9);
                arr_71 [i_0] [i_5 - 1] [i_20] = ((/* implicit */unsigned char) (_Bool)1);
                /* LoopNest 2 */
                for (unsigned char i_21 = 0; i_21 < 14; i_21 += 2) 
                {
                    for (signed char i_22 = 0; i_22 < 14; i_22 += 4) 
                    {
                        {
                            var_52 = (i_0 % 2 == zero) ? (((/* implicit */signed char) ((((/* implicit */int) var_5)) << (((((/* implicit */int) arr_52 [i_5 + 2] [i_5 + 2] [i_0] [i_5 + 3])) - (25677)))))) : (((/* implicit */signed char) ((((/* implicit */int) var_5)) << (((((((/* implicit */int) arr_52 [i_5 + 2] [i_5 + 2] [i_0] [i_5 + 3])) - (25677))) - (31230))))));
                            var_53 *= ((/* implicit */signed char) (-(var_10)));
                            var_54 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [1U] [i_5 + 4])) ? (((/* implicit */int) var_5)) : (arr_23 [i_5 + 2] [i_5 + 2])));
                        }
                    } 
                } 
            }
        }
        for (unsigned long long int i_23 = 1; i_23 < 10; i_23 += 4) /* same iter space */
        {
            var_55 = ((/* implicit */unsigned int) max((var_55), (329263288U)));
            arr_80 [i_0] = ((/* implicit */unsigned long long int) 1154342557);
        }
        var_56 ^= ((/* implicit */long long int) arr_19 [8LL] [i_0] [8LL]);
    }
    var_57 = ((/* implicit */long long int) max((var_57), (((/* implicit */long long int) ((unsigned short) max((((unsigned short) var_9)), (var_6)))))));
    var_58 = ((/* implicit */unsigned long long int) max((var_58), (max((var_12), (((/* implicit */unsigned long long int) var_5))))));
}
