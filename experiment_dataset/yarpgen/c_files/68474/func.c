/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68474
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (short)-32494);
        var_12 += ((/* implicit */unsigned short) (((_Bool)0) ? (10028637879147153359ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        arr_4 [i_0] &= ((/* implicit */short) ((signed char) min((((/* implicit */long long int) (_Bool)1)), (var_8))));
    }
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_1])))))));
        arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (short)-32494))));
        arr_8 [i_1] = ((/* implicit */short) ((long long int) -756685925));
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((min((((/* implicit */long long int) arr_6 [i_1])), (var_4))) % (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_6 [i_1]), (arr_6 [i_1])))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((short) arr_6 [i_1])))))))))));
        var_15 = ((/* implicit */signed char) (+(max((((/* implicit */unsigned int) 756685924)), (1675761515U)))));
    }
    for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (short)-32494))));
            arr_14 [i_2] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) && ((_Bool)1)));
        }
        var_17 ^= ((/* implicit */short) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) var_2)), (9969015615523903904ULL))), (((/* implicit */unsigned long long int) var_2))))) ? (max((((/* implicit */long long int) arr_13 [i_2])), (2255574304979361930LL))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
        /* LoopSeq 4 */
        for (short i_4 = 0; i_4 < 18; i_4 += 2) 
        {
            var_18 = min(((((!(((/* implicit */_Bool) var_10)))) ? (((arr_16 [i_2]) >> (((/* implicit */int) (_Bool)1)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_13 [i_4]))))))), (max((((/* implicit */long long int) -616973442)), (max((((/* implicit */long long int) (_Bool)1)), (var_4))))));
            arr_17 [i_4] [i_4] = ((/* implicit */unsigned int) 756685924);
            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) arr_6 [i_2]))));
            arr_18 [i_4] = 524288U;
        }
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */_Bool) arr_10 [i_2] [i_5]);
            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */int) (short)-12183)) | (((/* implicit */int) arr_10 [i_2] [i_5])))))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_7 = 0; i_7 < 18; i_7 += 1) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        arr_33 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_20 [i_6])) : (((/* implicit */int) (signed char)-1))))) ? (((((/* implicit */_Bool) -6831410878586762439LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10449))) : ((((_Bool)0) ? (((/* implicit */unsigned long long int) 1747106402U)) : (7549394189096680035ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)155)) * (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_13 [i_2])))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_9 = 0; i_9 < 18; i_9 += 3) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2] [i_2])) ? (-1644777397012187754LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))))));
                            var_23 |= ((/* implicit */long long int) (~(((/* implicit */int) arr_15 [i_7]))));
                            var_24 = ((/* implicit */int) var_0);
                            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_31 [i_2] [i_7] [(short)4] [i_9])) : (((/* implicit */int) arr_31 [i_2] [i_6] [0LL] [i_8]))));
                        }
                        for (long long int i_10 = 0; i_10 < 18; i_10 += 2) 
                        {
                            arr_38 [i_2] [i_6] [i_7] [i_8] [i_10] = ((/* implicit */unsigned short) max(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)0)))), (((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) 2814069285U))))), (arr_37 [i_6] [i_7]))))));
                            arr_39 [i_2] [i_6] [i_7] [i_10] [i_6] = ((/* implicit */unsigned int) (short)-2080);
                            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (-(((/* implicit */int) var_5)))))));
                        }
                        var_27 ^= ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) arr_37 [(unsigned short)8] [i_8])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10)))));
                    }
                } 
            } 
            arr_40 [i_2] [i_6] [i_6] = ((/* implicit */int) (short)8477);
            arr_41 [i_6] [i_6] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 1455061740U)) ? (((/* implicit */int) arr_19 [i_6] [i_6] [i_2])) : (((/* implicit */int) (short)6822)))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_1) : (17605098612631669909ULL)))) ? (((/* implicit */int) ((short) (signed char)-1))) : (((/* implicit */int) max((arr_20 [i_6]), (((/* implicit */unsigned char) (_Bool)0)))))))));
            /* LoopNest 2 */
            for (int i_11 = 1; i_11 < 17; i_11 += 1) 
            {
                for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 2) 
                {
                    {
                        arr_48 [i_2] [i_6] [i_6] [i_6] [i_6] [i_12] = ((/* implicit */_Bool) max((((/* implicit */int) arr_15 [i_11])), ((~(((/* implicit */int) (_Bool)1))))));
                        var_28 = ((/* implicit */long long int) (-(((/* implicit */int) var_6))));
                    }
                } 
            } 
        }
        for (signed char i_13 = 0; i_13 < 18; i_13 += 4) 
        {
            var_29 -= ((((/* implicit */_Bool) (-(-1644777397012187754LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_45 [i_13] [i_13] [i_2])) ? (((/* implicit */int) ((((/* implicit */int) (short)-1008)) < (((/* implicit */int) var_9))))) : ((~(((/* implicit */int) (short)17155))))))) : (max((((/* implicit */long long int) min((var_5), (((/* implicit */short) (unsigned char)29))))), (min((-8695669141470018314LL), (((/* implicit */long long int) (_Bool)0)))))));
            arr_51 [i_2] [i_2] [i_13] = min((((/* implicit */short) ((((/* implicit */int) arr_46 [i_2] [i_13] [i_13] [i_2])) < (((/* implicit */int) arr_46 [i_2] [i_13] [i_13] [i_2]))))), (max(((short)-650), (((/* implicit */short) arr_46 [i_2] [i_13] [i_13] [i_13])))));
        }
        var_30 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((arr_23 [(short)16] [i_2] [i_2]), (arr_23 [(short)8] [i_2] [i_2])))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)24)) && (((/* implicit */_Bool) var_9))))), (((((/* implicit */_Bool) 841645461077881706ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65530)))))))));
        arr_52 [i_2] = ((/* implicit */unsigned short) ((((((((/* implicit */int) (unsigned short)32768)) << (((arr_28 [i_2] [i_2] [i_2] [i_2]) - (8965784837267621809LL))))) < ((~(((/* implicit */int) (unsigned char)226)))))) ? (((/* implicit */unsigned long long int) ((unsigned int) max((var_8), (((/* implicit */long long int) (unsigned char)0)))))) : (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned short)32768))))))));
    }
    /* LoopSeq 3 */
    for (unsigned int i_14 = 0; i_14 < 10; i_14 += 2) /* same iter space */
    {
        var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) arr_26 [i_14] [i_14] [i_14])) : (((/* implicit */int) (unsigned short)20))))) ? (((/* implicit */int) min((arr_31 [i_14] [i_14] [i_14] [i_14]), (((/* implicit */unsigned short) arr_12 [i_14] [i_14]))))) : (((((/* implicit */int) (signed char)0)) * (((/* implicit */int) arr_12 [i_14] [i_14])))))))));
        arr_55 [i_14] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_0)) * (((/* implicit */int) arr_21 [i_14] [i_14] [i_14]))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) (unsigned short)22087))))));
        var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) arr_27 [i_14] [i_14] [i_14] [i_14]))));
    }
    for (unsigned int i_15 = 0; i_15 < 10; i_15 += 2) /* same iter space */
    {
        var_33 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_56 [i_15]), (((/* implicit */unsigned short) (unsigned char)120))))) ? (((/* implicit */int) (unsigned short)32768)) : (arr_34 [i_15] [i_15] [i_15])))), (((((/* implicit */_Bool) var_8)) ? (arr_23 [i_15] [i_15] [i_15]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32768)))))));
        arr_59 [i_15] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_46 [i_15] [i_15] [i_15] [i_15])) : (((/* implicit */int) arr_46 [i_15] [i_15] [i_15] [i_15])))), (((/* implicit */int) var_3))));
    }
    for (unsigned int i_16 = 0; i_16 < 25; i_16 += 2) 
    {
        var_34 = ((/* implicit */long long int) var_5);
        var_35 = ((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-78)) >= (((/* implicit */int) arr_60 [i_16]))))), (arr_61 [i_16] [i_16])));
        var_36 = (-(((((((/* implicit */_Bool) (unsigned char)14)) ? (4424043943700677750LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32768))))) & (((/* implicit */long long int) ((/* implicit */int) arr_60 [i_16]))))));
        arr_62 [i_16] &= ((/* implicit */unsigned long long int) var_4);
    }
}
