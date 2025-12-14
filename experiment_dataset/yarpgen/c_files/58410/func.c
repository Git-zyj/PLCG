/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58410
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0] [i_0]))))), (arr_0 [i_0] [i_0])));
        var_11 = ((/* implicit */int) max((((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) 6978939408837964688ULL))))))), (min((max((((/* implicit */unsigned int) (unsigned char)11)), (arr_0 [(_Bool)1] [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [(_Bool)1])) : (((/* implicit */int) arr_1 [i_0] [i_0])))))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 20; i_1 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            var_12 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_1] [i_2])) >= ((~(((/* implicit */int) arr_4 [i_1] [i_1]))))));
            arr_10 [i_1 + 2] [i_1] [i_1 + 2] = ((/* implicit */unsigned long long int) ((arr_8 [i_1 + 1] [i_1] [i_2]) ? (((/* implicit */int) arr_8 [i_2] [i_2] [i_1])) : (((/* implicit */int) arr_4 [i_1 - 1] [i_2]))));
            /* LoopNest 3 */
            for (short i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (int i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))));
                            arr_19 [i_4] = ((/* implicit */unsigned short) ((1718268983555413220ULL) ^ (((/* implicit */unsigned long long int) (~(arr_15 [i_1 - 1] [i_1 - 1] [i_1 + 1] [7U]))))));
                            var_14 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) (unsigned short)40344)) > (((/* implicit */int) (_Bool)0)))))));
                            arr_20 [i_1] [i_4] [i_3] [i_4] [i_5] = ((/* implicit */short) arr_7 [i_1 + 1]);
                            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) arr_9 [i_3]))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 22; i_6 += 3) 
            {
                for (int i_7 = 0; i_7 < 22; i_7 += 2) 
                {
                    for (short i_8 = 0; i_8 < 22; i_8 += 3) 
                    {
                        {
                            arr_29 [i_1] [i_1] [i_1] [i_7] [i_8] = ((/* implicit */_Bool) (unsigned char)162);
                            arr_30 [i_2] [i_2] [i_6] [i_7] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_17 [16ULL] [i_2] [i_6] [i_7] [i_8]))));
                            var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) arr_7 [i_1]))) ^ ((-(-156847827)))));
                        }
                    } 
                } 
            } 
            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_14 [i_1 + 2])))))));
        }
        for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 3) 
        {
            arr_34 [i_1] [i_1] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_1 + 2])) ? (((/* implicit */int) arr_9 [i_1 + 2])) : (((/* implicit */int) arr_25 [(signed char)16] [i_9]))));
            arr_35 [i_9] [i_9] = ((/* implicit */signed char) (~(arr_26 [i_9] [i_1 - 2])));
        }
        for (signed char i_10 = 0; i_10 < 22; i_10 += 3) 
        {
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 22; i_11 += 3) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    {
                        var_18 |= ((/* implicit */_Bool) 11467804664871586928ULL);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 1) /* same iter space */
                        {
                            var_19 *= ((/* implicit */_Bool) (((((~(((/* implicit */int) (unsigned char)73)))) + (2147483647))) >> (((/* implicit */int) arr_33 [i_1 - 1]))));
                            var_20 = ((/* implicit */_Bool) (((~(((/* implicit */int) (signed char)-59)))) % (((/* implicit */int) arr_31 [i_11]))));
                        }
                        for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 1) /* same iter space */
                        {
                            arr_49 [i_11] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_24 [i_1 + 2] [i_1 - 2] [i_1 + 2])) != (11467804664871586921ULL)));
                            arr_50 [(signed char)1] [i_10] [i_11] [i_11] [i_14] [i_14] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))));
                        }
                    }
                } 
            } 
            var_21 ^= ((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_1 + 1])) ^ (((/* implicit */int) arr_6 [i_1 + 1]))));
        }
        /* LoopNest 2 */
        for (signed char i_15 = 0; i_15 < 22; i_15 += 4) 
        {
            for (unsigned short i_16 = 0; i_16 < 22; i_16 += 3) 
            {
                {
                    arr_58 [i_16] [i_16] [i_1] = (~(6978939408837964688ULL));
                    var_22 = ((/* implicit */signed char) arr_37 [i_15] [i_15] [i_1]);
                    /* LoopNest 2 */
                    for (long long int i_17 = 1; i_17 < 20; i_17 += 1) 
                    {
                        for (signed char i_18 = 0; i_18 < 22; i_18 += 3) 
                        {
                            {
                                arr_65 [i_1] [i_16] [i_1] = (~(((((/* implicit */_Bool) 6978939408837964688ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))));
                                arr_66 [i_16] [i_15] [i_15] [i_17] [11U] = ((/* implicit */int) ((signed char) arr_23 [i_1 + 2] [i_17 + 1] [i_1 + 2] [i_16]));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_67 [i_1] = arr_55 [i_1];
    }
    for (unsigned long long int i_19 = 0; i_19 < 23; i_19 += 4) 
    {
        arr_70 [i_19] [i_19] = ((/* implicit */int) arr_69 [i_19]);
        arr_71 [i_19] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (((-(arr_68 [i_19] [i_19]))) - (((/* implicit */long long int) ((/* implicit */int) ((18382618541047064083ULL) != (((/* implicit */unsigned long long int) arr_68 [i_19] [i_19]))))))))), (17354835629166713396ULL)));
        var_23 *= ((/* implicit */int) (!(((/* implicit */_Bool) 6978939408837964688ULL))));
    }
    for (unsigned short i_20 = 3; i_20 < 16; i_20 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            for (long long int i_22 = 0; i_22 < 18; i_22 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_23 = 1; i_23 < 16; i_23 += 1) 
                    {
                        for (int i_24 = 3; i_24 < 16; i_24 += 2) 
                        {
                            {
                                arr_84 [i_21] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_54 [i_23] [i_24 + 2] [i_22])))) ? (max(((-(4970793655740309943LL))), (((/* implicit */long long int) arr_12 [i_21] [i_22] [i_23 + 1] [i_24])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_46 [i_21])) ? (((/* implicit */int) arr_46 [i_21])) : (((/* implicit */int) arr_83 [i_21] [i_23 + 1])))))));
                                arr_85 [i_21] [1U] [i_22] [i_23] [i_24] = ((/* implicit */unsigned int) arr_5 [i_22]);
                            }
                        } 
                    } 
                    arr_86 [i_21] [i_21] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_20 - 1] [i_20 - 3] [i_20 - 2])) ? (((((/* implicit */_Bool) arr_26 [i_20] [i_21])) ? (4970793655740309943LL) : (-4970793655740309943LL))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_28 [i_21] [i_21]), (((/* implicit */unsigned short) arr_74 [i_22] [i_21])))))))))));
                    var_24 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (arr_38 [i_22] [i_21] [i_20])))) ? (((/* implicit */int) arr_69 [i_22])) : (((/* implicit */int) (signed char)4))))) ? (((((arr_52 [(signed char)8] [(signed char)8] [i_22]) + (2147483647))) << (((292232524) - (292232524))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [i_20 - 1] [i_20] [i_20 + 1] [i_20])))))));
                    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) arr_12 [i_20] [i_21] [i_22] [i_21]))));
                }
            } 
        } 
        arr_87 [3U] = ((/* implicit */signed char) (+((-((-(arr_73 [i_20])))))));
    }
    var_26 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
}
