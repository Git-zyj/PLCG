/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86353
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_13 ^= ((/* implicit */unsigned long long int) (_Bool)1);
            var_14 = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
            arr_5 [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_0 [i_0]))));
            var_15 = ((/* implicit */short) (+((+(((/* implicit */int) (_Bool)1))))));
        }
        for (int i_2 = 3; i_2 < 19; i_2 += 3) 
        {
            arr_10 [i_0] [9ULL] = (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))));
            arr_11 [i_0] [i_2 - 1] [i_2] = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (_Bool)1))))));
        }
        for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            arr_15 [i_3] [i_3] = ((/* implicit */short) ((_Bool) arr_8 [i_0] [(short)5] [(short)5]));
            arr_16 [i_3] = ((/* implicit */unsigned long long int) ((int) arr_12 [i_0] [i_0] [i_3]));
        }
        for (long long int i_4 = 2; i_4 < 18; i_4 += 1) 
        {
            var_16 = ((/* implicit */_Bool) ((signed char) 761097165824585254LL));
            var_17 = ((/* implicit */_Bool) ((unsigned long long int) (!(var_10))));
        }
        var_18 = ((/* implicit */unsigned long long int) ((short) arr_2 [i_0]));
    }
    for (long long int i_5 = 0; i_5 < 14; i_5 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_6 = 1; i_6 < 13; i_6 += 3) 
        {
            var_19 -= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_4)))) | (((unsigned long long int) 761097165824585225LL))));
            /* LoopSeq 4 */
            for (unsigned int i_7 = 0; i_7 < 14; i_7 += 4) 
            {
                /* LoopSeq 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_6] [i_6] [i_6])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_6 - 1]))))) : (((((/* implicit */unsigned long long int) 761097165824585250LL)) - (var_0)))));
                    var_21 -= (-(((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) (unsigned char)23))))) ? ((+(arr_4 [i_7] [i_7] [14LL]))) : ((+(14725054457326168473ULL))))));
                    var_22 = ((/* implicit */unsigned char) max((var_4), ((-(((/* implicit */int) ((_Bool) var_1)))))));
                    var_23 = ((/* implicit */unsigned char) ((unsigned long long int) arr_3 [i_6 - 1] [i_5] [i_7]));
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 0; i_9 < 14; i_9 += 1) 
                    {
                        arr_30 [i_9] [i_7] [i_7] [i_7] [(_Bool)0] &= ((((((/* implicit */_Bool) var_11)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_6 + 1] [i_6 - 1]))))) < (((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))));
                        var_24 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) (signed char)-26)) ? (((/* implicit */int) (short)29176)) : (((/* implicit */int) (_Bool)1)))));
                    }
                }
                for (unsigned long long int i_10 = 3; i_10 < 12; i_10 += 1) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_11 = 0; i_11 < 14; i_11 += 2) 
                    {
                        var_25 = ((/* implicit */_Bool) arr_21 [i_10]);
                        var_26 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_24 [i_5])) ? (((((/* implicit */_Bool) arr_22 [i_5] [i_6 - 1])) ? (arr_12 [i_10] [i_6] [i_10]) : (((/* implicit */long long int) var_2)))) : ((+(-6592401182974922638LL)))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_12 = 1; i_12 < 10; i_12 += 1) 
                    {
                        var_27 = ((/* implicit */signed char) ((((/* implicit */int) var_6)) < (((/* implicit */int) (_Bool)1))));
                        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) (((+(((/* implicit */int) arr_6 [i_6] [i_7] [i_10])))) <= (((/* implicit */int) var_11)))))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_29 = ((/* implicit */signed char) (-((+(((/* implicit */int) (_Bool)1))))));
                        arr_45 [i_5] [i_5] [i_5] [i_10 + 2] [i_13] = ((/* implicit */short) (+(((/* implicit */int) min((arr_20 [i_5]), (arr_20 [i_5]))))));
                        arr_46 [i_13] [i_5] [i_7] [i_5] [i_5] = ((/* implicit */unsigned long long int) (unsigned char)235);
                        arr_47 [i_5] [(unsigned char)11] [(unsigned char)11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) arr_41 [i_6 + 1] [i_6 + 1] [i_10] [i_10] [(unsigned char)4] [i_10 - 2] [i_5])))));
                    }
                    arr_48 [i_5] [i_6 + 1] [i_5] [1LL] [i_7] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)0))))) || (((/* implicit */_Bool) var_11)))));
                }
                var_30 = ((/* implicit */signed char) arr_37 [(_Bool)1] [i_5] [i_6 + 1] [i_5] [i_5] [i_5]);
            }
            for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
            {
                arr_52 [i_5] [i_6] [i_5] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_2))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_22 [i_5] [i_5]))))), ((+(arr_40 [i_14 - 1] [i_14 - 1] [i_6 + 1] [(short)6] [(unsigned char)2] [i_6])))));
                var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(max((4501231697837850288ULL), (((/* implicit */unsigned long long int) arr_41 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [(unsigned char)12]))))))) ? ((~(((/* implicit */int) (short)-11811)))) : ((~((~(((/* implicit */int) (signed char)22)))))))))));
            }
            /* vectorizable */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
            {
                var_32 = ((/* implicit */int) (+(14725054457326168473ULL)));
                var_33 |= ((/* implicit */unsigned long long int) ((long long int) (unsigned char)255));
            }
            /* vectorizable */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
            {
                var_34 = ((/* implicit */short) (_Bool)1);
                var_35 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (14725054457326168473ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (unsigned char)20)) : (988607756)));
            }
            var_36 -= ((/* implicit */_Bool) (((_Bool)1) ? (3721689616383383139ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        }
        var_37 += ((/* implicit */short) (~(((/* implicit */int) max((arr_27 [(unsigned char)0] [(unsigned char)0] [i_5] [(unsigned short)4] [i_5]), (arr_27 [(signed char)0] [i_5] [i_5] [0ULL] [i_5]))))));
    }
    var_38 = ((/* implicit */unsigned long long int) var_7);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_17 = 0; i_17 < 16; i_17 += 2) 
    {
        arr_60 [i_17] = ((/* implicit */short) (~(((/* implicit */int) var_8))));
        /* LoopSeq 1 */
        for (int i_18 = 0; i_18 < 16; i_18 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_19 = 1; i_19 < 15; i_19 += 2) 
            {
                var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) arr_66 [i_17] [i_18]))));
                var_40 ^= ((/* implicit */unsigned long long int) arr_2 [i_18]);
                /* LoopNest 2 */
                for (signed char i_20 = 0; i_20 < 16; i_20 += 3) 
                {
                    for (unsigned char i_21 = 2; i_21 < 15; i_21 += 2) 
                    {
                        {
                            var_41 = (-(17610523210721280350ULL));
                            arr_72 [i_17] [14ULL] [i_18] = ((/* implicit */signed char) ((arr_12 [i_17] [i_17] [i_20]) >= (((/* implicit */long long int) (~(((/* implicit */int) var_8)))))));
                            var_42 = ((/* implicit */short) (!(arr_62 [i_19 - 1] [i_18] [i_19 - 1])));
                        }
                    } 
                } 
                var_43 |= (-(((var_0) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))));
            }
            arr_73 [i_18] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_18 [i_17] [i_17] [i_18])))) % (((/* implicit */int) arr_58 [i_17] [i_18]))));
        }
        var_44 = ((/* implicit */unsigned char) (+(arr_59 [i_17])));
    }
    for (int i_22 = 4; i_22 < 21; i_22 += 3) /* same iter space */
    {
        var_45 = ((/* implicit */long long int) min((var_45), (((/* implicit */long long int) (~((-(((/* implicit */int) arr_76 [i_22])))))))));
        var_46 = ((/* implicit */long long int) ((short) (~(((unsigned long long int) arr_74 [i_22])))));
    }
    for (int i_23 = 4; i_23 < 21; i_23 += 3) /* same iter space */
    {
        var_47 *= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_74 [(_Bool)1]))) == ((~(13076684871436343941ULL)))))) - ((~(((/* implicit */int) (signed char)-27))))));
        var_48 = ((/* implicit */_Bool) max(((~(arr_78 [i_23]))), (((/* implicit */long long int) (-(2021037791))))));
        /* LoopNest 2 */
        for (unsigned char i_24 = 1; i_24 < 23; i_24 += 3) 
        {
            for (int i_25 = 0; i_25 < 24; i_25 += 1) 
            {
                {
                    var_49 = ((/* implicit */long long int) ((short) (-((-(13076684871436343919ULL))))));
                    arr_86 [i_23] [2ULL] [i_23] [i_25] = ((/* implicit */signed char) ((unsigned long long int) ((_Bool) (short)29941)));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_26 = 4; i_26 < 21; i_26 += 3) /* same iter space */
    {
        arr_89 [i_26] = ((unsigned char) var_3);
        var_50 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) arr_84 [(unsigned short)3] [i_26 + 3] [i_26] [i_26]))));
        var_51 = ((/* implicit */short) (_Bool)1);
    }
    var_52 = ((/* implicit */unsigned char) var_2);
    var_53 = ((/* implicit */signed char) var_4);
}
