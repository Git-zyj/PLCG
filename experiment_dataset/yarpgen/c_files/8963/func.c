/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8963
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
    for (int i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 2; i_1 < 23; i_1 += 1) /* same iter space */
        {
            arr_6 [i_1] [i_1] = ((/* implicit */int) 297499321U);
            var_11 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0] [11ULL]))));
        }
        for (unsigned int i_2 = 2; i_2 < 23; i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    {
                        var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned char) (!(var_6))))))) ? (((unsigned int) arr_8 [i_0 - 2] [18U])) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-2759))))))));
                        /* LoopSeq 3 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            var_13 = ((/* implicit */signed char) min((((((1224126013U) / (var_1))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)2750))) <= (arr_16 [i_0] [i_2] [i_3] [i_3] [i_2]))))))), (((/* implicit */unsigned int) min(((short)2761), ((short)2750))))));
                            var_14 = ((/* implicit */unsigned long long int) min(((unsigned char)119), ((unsigned char)138)));
                            arr_17 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 3] [i_0 - 3] [i_3] = ((/* implicit */unsigned short) var_3);
                            var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) max((var_4), (((/* implicit */long long int) ((unsigned short) 877493768U))))))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            arr_21 [i_0] [i_3] [(unsigned char)1] [i_3] [i_3] [i_4] [i_6] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_15 [i_2] [i_3] [i_4] [i_6])) ? (arr_16 [i_0 + 1] [i_0 + 1] [i_3] [(signed char)12] [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0 + 1] [i_6] [i_3] [i_4]))))), (((/* implicit */unsigned int) arr_7 [i_3] [i_6]))));
                            var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) (~(((/* implicit */int) (unsigned short)23977)))))) > ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_6] [i_6] [i_6] [i_6])))))))));
                            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) var_6))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)41577)) - (((/* implicit */int) (short)3216))));
                            var_19 &= ((/* implicit */short) arr_14 [(short)16] [i_4] [i_4] [i_4] [(_Bool)0] [i_0]);
                        }
                    }
                } 
            } 
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) (short)-25822)) | ((+(((/* implicit */int) arr_18 [(unsigned char)10] [i_0] [(_Bool)1] [i_0] [(unsigned short)6] [i_2] [i_2]))))))) < (min((1909969594U), (((/* implicit */unsigned int) (unsigned char)3))))));
            arr_26 [i_0] [i_2 - 2] = ((/* implicit */int) max((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)23970))))) ? (max((2384997682U), (((/* implicit */unsigned int) (short)-3217)))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)63)), (arr_4 [i_0] [i_2 + 1] [i_2 - 1]))))))), (((/* implicit */unsigned int) arr_0 [i_0] [i_2]))));
        }
        for (unsigned int i_8 = 2; i_8 < 23; i_8 += 1) /* same iter space */
        {
            arr_29 [i_8] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)25821)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (short)-25824))))) ? (((/* implicit */int) var_2)) : ((~(((/* implicit */int) (short)511))))));
            var_21 += ((/* implicit */unsigned long long int) arr_23 [i_0] [(unsigned char)10] [i_0] [i_8 - 2] [i_8]);
            var_22 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_0 - 1] [i_8 + 1] [22U] [i_8 - 1] [i_8 - 1])) && (((/* implicit */_Bool) arr_16 [i_0 + 2] [i_8 + 1] [(unsigned short)8] [i_8 - 1] [i_8 - 1])))))));
        }
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)8232)) ? (18014398509481983LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)118)))));
        var_24 *= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)23977)) ^ (((/* implicit */int) (short)3216))))) ? (((/* implicit */int) ((18446744073709551600ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3217)))))) : (((/* implicit */int) (unsigned short)8191)))), (((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_0] [i_0 - 1])) ? (((/* implicit */int) (short)-3221)) : (((/* implicit */int) var_9))))));
    }
    var_25 = ((/* implicit */unsigned char) ((var_4) << (((((/* implicit */int) (short)26047)) - (26047)))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_9 = 0; i_9 < 11; i_9 += 1) 
    {
        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) var_7))));
        /* LoopSeq 3 */
        for (unsigned char i_10 = 3; i_10 < 10; i_10 += 4) 
        {
            var_27 = ((/* implicit */short) ((13042068357223385928ULL) <= (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)23972)))))));
            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_12 [i_9] [i_9] [i_9] [i_9])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_10] [i_9] [i_9] [i_9])))))));
            arr_36 [i_9] [i_9] = ((/* implicit */short) arr_4 [i_9] [i_10] [i_9]);
        }
        for (int i_11 = 0; i_11 < 11; i_11 += 4) 
        {
            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_5 [i_9] [i_9])))))));
            arr_40 [i_9] [i_9] = ((/* implicit */unsigned char) (~(var_1)));
            var_30 = ((/* implicit */unsigned short) ((unsigned char) (!(((/* implicit */_Bool) arr_0 [i_9] [i_11])))));
            arr_41 [i_9] [i_9] [4ULL] = ((((/* implicit */_Bool) (unsigned short)41586)) ? (((/* implicit */int) (unsigned short)57341)) : (((/* implicit */int) (short)-20255)));
        }
        for (unsigned int i_12 = 1; i_12 < 9; i_12 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_13 = 0; i_13 < 11; i_13 += 3) 
            {
                var_31 = ((/* implicit */long long int) var_7);
                var_32 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_33 [i_9] [i_12 + 1] [i_12 + 2]))));
                var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2926131733U)) ? (((/* implicit */int) arr_22 [21ULL] [i_12] [i_13] [i_13] [i_9])) : (((/* implicit */int) (unsigned char)232))));
                var_34 = var_6;
                arr_46 [i_9] [i_9] [i_12] [i_13] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)236)) % (((/* implicit */int) (unsigned char)7))));
            }
            for (signed char i_14 = 0; i_14 < 11; i_14 += 4) 
            {
                arr_50 [i_9] [i_9] [i_12] [7ULL] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_34 [i_14] [i_9] [i_9]))));
                /* LoopSeq 4 */
                for (unsigned long long int i_15 = 0; i_15 < 11; i_15 += 4) 
                {
                    arr_55 [i_9] [i_9] [i_14] [(unsigned char)6] = ((/* implicit */signed char) var_10);
                    arr_56 [i_9] [i_14] [i_12 + 1] [i_9] [i_9] = ((/* implicit */short) (unsigned char)243);
                }
                for (unsigned char i_16 = 0; i_16 < 11; i_16 += 2) 
                {
                    arr_59 [i_9] = ((/* implicit */short) var_6);
                    arr_60 [i_9] [i_9] [(unsigned short)9] [i_16] = arr_22 [i_9] [i_9] [i_12] [i_14] [i_9];
                }
                for (long long int i_17 = 0; i_17 < 11; i_17 += 3) 
                {
                    var_35 = ((/* implicit */unsigned short) arr_4 [i_12 + 2] [i_12] [i_9]);
                    arr_64 [(short)4] [i_14] [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)50)) ? (((/* implicit */int) (unsigned short)13809)) : (((/* implicit */int) (unsigned char)24))));
                    arr_65 [i_9] [i_14] [i_9] [i_14] = ((/* implicit */unsigned char) (+(var_3)));
                    arr_66 [i_9] = ((/* implicit */unsigned long long int) (unsigned char)140);
                    arr_67 [i_9] = (unsigned short)0;
                }
                for (unsigned long long int i_18 = 0; i_18 < 11; i_18 += 4) 
                {
                    var_36 = ((/* implicit */unsigned char) arr_34 [i_12] [i_12 - 1] [i_12]);
                    var_37 += ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)250)) == (((/* implicit */int) (unsigned char)164))));
                }
            }
            var_38 += var_1;
        }
        /* LoopNest 2 */
        for (unsigned char i_19 = 0; i_19 < 11; i_19 += 4) 
        {
            for (short i_20 = 3; i_20 < 10; i_20 += 4) 
            {
                {
                    arr_76 [i_20] [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_20 + 1] [i_20 - 1]))) / (10400404824596739837ULL)));
                    var_39 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)194)) * (((/* implicit */int) (unsigned char)218))));
                    var_40 = (~(10400404824596739837ULL));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_21 = 0; i_21 < 11; i_21 += 4) 
        {
            for (unsigned char i_22 = 3; i_22 < 7; i_22 += 1) 
            {
                for (unsigned char i_23 = 4; i_23 < 9; i_23 += 3) 
                {
                    {
                        var_41 = ((/* implicit */unsigned char) arr_19 [i_9] [i_9] [i_22] [i_23 - 4]);
                        var_42 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_9] [i_21] [i_22] [i_23] [i_21] [i_23 - 1] [i_23 - 1])) ? (((/* implicit */int) arr_18 [i_23] [i_21] [i_22] [(unsigned char)16] [i_21] [i_23 - 1] [i_22])) : (((/* implicit */int) arr_18 [i_9] [i_21] [(unsigned char)12] [i_23] [i_21] [i_23 - 1] [(unsigned char)10]))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_24 = 0; i_24 < 24; i_24 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_25 = 2; i_25 < 23; i_25 += 4) 
        {
            for (unsigned long long int i_26 = 0; i_26 < 24; i_26 += 3) 
            {
                for (long long int i_27 = 0; i_27 < 24; i_27 += 4) 
                {
                    {
                        var_43 = arr_85 [i_24];
                        var_44 = ((/* implicit */long long int) min((var_44), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)31800)) / (((/* implicit */int) (unsigned char)166)))))));
                    }
                } 
            } 
        } 
        var_45 = var_7;
        var_46 = ((/* implicit */unsigned long long int) (unsigned char)185);
        var_47 = ((/* implicit */unsigned int) arr_19 [i_24] [i_24] [i_24] [i_24]);
    }
    for (short i_28 = 0; i_28 < 12; i_28 += 4) 
    {
        var_48 = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)0))));
        var_49 = ((/* implicit */unsigned char) (((-(((/* implicit */int) (unsigned char)177)))) - (((/* implicit */int) var_9))));
    }
    for (unsigned char i_29 = 0; i_29 < 16; i_29 += 1) 
    {
        var_50 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)19)) | (((/* implicit */int) (unsigned short)13806)))))));
        var_51 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_7))));
    }
    var_52 = ((/* implicit */unsigned char) max((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) * (((((/* implicit */_Bool) (short)-29651)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-6))) : (810713332U))))), (((/* implicit */unsigned int) (unsigned char)230))));
}
