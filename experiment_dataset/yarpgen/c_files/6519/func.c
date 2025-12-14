/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6519
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
    var_17 = ((/* implicit */unsigned short) var_2);
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
        /* LoopSeq 3 */
        for (short i_1 = 1; i_1 < 21; i_1 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */short) ((((/* implicit */int) (short)-8622)) + (((/* implicit */int) (short)-25186))));
            arr_6 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) -775916228)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_1]))) : (3635139010U)));
        }
        for (short i_2 = 1; i_2 < 21; i_2 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))) | ((~(0ULL)))));
            var_20 ^= ((/* implicit */unsigned char) ((((((/* implicit */int) (short)-29493)) < (arr_8 [(_Bool)1] [i_0] [(_Bool)1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9723))) : (arr_2 [i_0] [i_2])));
            /* LoopNest 2 */
            for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 3) 
                {
                    {
                        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_2 [i_0] [i_2 - 1])))) ? (arr_9 [i_0]) : ((((_Bool)1) ? (arr_9 [i_3]) : (((/* implicit */int) (_Bool)0)))))))));
                        arr_15 [17ULL] [i_2] [i_0] [i_4 - 1] = ((/* implicit */long long int) arr_12 [i_0] [(short)18] [i_4] [15ULL]);
                        arr_16 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_12 [i_0] [i_0] [i_0] [(short)15])))) ? (arr_2 [i_3] [i_2 + 1]) : (((/* implicit */unsigned long long int) ((var_2) ^ (((/* implicit */int) (unsigned short)22610)))))));
                        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (-(var_14))))));
                    }
                } 
            } 
        }
        for (short i_5 = 1; i_5 < 21; i_5 += 1) /* same iter space */
        {
            arr_20 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) -1822102715)) && (((/* implicit */_Bool) 1822102726))));
            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_5 - 1] [i_5 - 1] [(unsigned char)20]))) != (arr_1 [i_0]))))));
            /* LoopSeq 3 */
            for (signed char i_6 = 0; i_6 < 22; i_6 += 1) /* same iter space */
            {
                var_24 = (i_0 % 2 == 0) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((arr_18 [i_0] [i_0] [i_0]) - (1491412978)))))) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((((arr_18 [i_0] [i_0] [i_0]) - (1491412978))) + (801206390))))));
                var_25 = ((/* implicit */int) min((var_25), ((((_Bool)1) ? (((/* implicit */int) arr_13 [i_5 - 1] [i_5 - 1] [2ULL] [(unsigned char)14])) : (arr_9 [i_5 + 1])))));
                arr_23 [i_0] [i_5 - 1] [i_0] = ((((/* implicit */_Bool) 1361308409)) ? (((/* implicit */int) (_Bool)0)) : (-1822102715));
            }
            for (signed char i_7 = 0; i_7 < 22; i_7 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned int i_8 = 0; i_8 < 22; i_8 += 3) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_9 = 1; i_9 < 21; i_9 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned short) ((short) ((((/* implicit */unsigned long long int) -2015486297)) | (17ULL))));
                        var_27 = ((((/* implicit */int) var_8)) - (2015486296));
                        var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) -2015486297))));
                    }
                    var_29 = ((/* implicit */unsigned short) arr_12 [i_7] [i_5] [8LL] [i_5 - 1]);
                }
                for (signed char i_10 = 1; i_10 < 21; i_10 += 3) 
                {
                    var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_0]))));
                    arr_34 [i_0] [i_5] = ((/* implicit */short) ((unsigned int) ((((/* implicit */unsigned int) 2015486296)) - (847597159U))));
                    var_31 = ((/* implicit */unsigned long long int) (unsigned short)12288);
                    var_32 ^= ((/* implicit */long long int) ((9223372036854775807LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_5 + 1])))));
                }
                var_33 = ((/* implicit */long long int) (short)31360);
                var_34 *= ((/* implicit */unsigned short) (+(-2015486297)));
                var_35 &= ((((((/* implicit */_Bool) 563197689)) || (((/* implicit */_Bool) var_12)))) ? (((/* implicit */int) ((3932571939U) <= (((/* implicit */unsigned int) -1822102703))))) : (((((/* implicit */int) (short)-32763)) ^ (((/* implicit */int) arr_25 [i_0] [16U] [i_7] [i_7])))));
            }
            for (signed char i_11 = 0; i_11 < 22; i_11 += 1) /* same iter space */
            {
                var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) arr_10 [i_5] [i_5 + 1]))));
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 1; i_12 < 20; i_12 += 2) 
                {
                    for (unsigned char i_13 = 3; i_13 < 21; i_13 += 4) 
                    {
                        {
                            var_37 = ((int) ((((/* implicit */_Bool) (unsigned short)53244)) ? (((/* implicit */int) (short)-8502)) : (1361308416)));
                            arr_43 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */int) (unsigned short)65521)) <= (((/* implicit */int) (short)1561))));
                            arr_44 [i_13] [(short)1] [i_0] [i_0] [i_5] [19U] = ((/* implicit */unsigned short) 2015486296);
                        }
                    } 
                } 
                var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) -2318786569674497574LL))));
            }
        }
    }
    for (short i_14 = 4; i_14 < 14; i_14 += 1) /* same iter space */
    {
        var_39 = ((/* implicit */int) max((var_39), (max((((int) 8972014882652160LL)), (((max((2015486296), (((/* implicit */int) (unsigned short)45691)))) >> (((((/* implicit */int) (unsigned char)252)) - (236)))))))));
        var_40 = ((/* implicit */unsigned short) var_3);
        arr_48 [i_14] = ((/* implicit */signed char) arr_17 [i_14] [i_14 - 1]);
    }
    for (short i_15 = 4; i_15 < 14; i_15 += 1) /* same iter space */
    {
        arr_51 [i_15 - 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((472448192) + (var_2))), ((+(((/* implicit */int) var_5))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [(signed char)4])) ? (((/* implicit */int) (signed char)-109)) : (((/* implicit */int) arr_11 [(signed char)8]))))) : (5255464852726669982LL)));
        var_41 = ((/* implicit */unsigned char) ((unsigned long long int) max((-1361308417), (((/* implicit */int) var_13)))));
        var_42 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 740243234)))))));
        arr_52 [i_15 - 1] = ((/* implicit */short) ((arr_31 [i_15] [i_15] [i_15] [i_15]) - (((/* implicit */unsigned long long int) (+(arr_39 [i_15 - 2] [i_15 - 3] [i_15] [i_15] [i_15 - 1] [(signed char)14] [i_15 + 2]))))));
    }
    for (short i_16 = 4; i_16 < 14; i_16 += 1) /* same iter space */
    {
        var_43 = ((/* implicit */int) 7382527275128365215LL);
        /* LoopSeq 2 */
        for (int i_17 = 0; i_17 < 16; i_17 += 3) 
        {
            arr_59 [i_16] [i_17] [i_17] = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-95)) ? (((((/* implicit */_Bool) arr_39 [i_16] [i_16] [i_16 - 2] [i_16 - 2] [i_16] [i_17] [i_17])) ? (((/* implicit */int) arr_29 [i_16] [i_16] [i_17] [i_17])) : (((/* implicit */int) arr_32 [(_Bool)0] [i_16] [(_Bool)0])))) : (((/* implicit */int) ((unsigned short) arr_42 [i_16 + 2] [3U] [(unsigned char)4] [i_17])))))), (max((max((((/* implicit */unsigned int) (unsigned short)5618)), (arr_47 [i_17]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */int) (_Bool)1)) : (-1361308390)))))));
            var_44 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (283726776524341248ULL) : (((/* implicit */unsigned long long int) 0U))))) ? (((((/* implicit */_Bool) -1720723777)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-19544))) : (-1642964940470065361LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_16] [i_16]))))), (((/* implicit */long long int) ((max((((/* implicit */int) (unsigned char)255)), (1918639201))) >> ((((~(((/* implicit */int) (signed char)106)))) + (113))))))));
            var_45 = ((/* implicit */_Bool) arr_13 [i_16] [i_16 + 2] [i_16 + 2] [i_16]);
        }
        for (long long int i_18 = 0; i_18 < 16; i_18 += 2) 
        {
            var_46 = ((/* implicit */long long int) max((var_46), (((/* implicit */long long int) ((((/* implicit */int) ((short) (unsigned short)22))) | (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)165)))))))));
            /* LoopSeq 1 */
            for (unsigned char i_19 = 0; i_19 < 16; i_19 += 4) 
            {
                var_47 = ((/* implicit */long long int) (~(((/* implicit */int) max((arr_26 [i_16] [i_16]), (arr_26 [i_16] [i_16 - 4]))))));
                arr_66 [i_16] [i_16] [i_19] [i_19] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [8LL] [i_16] [i_16 + 1] [i_16 + 1])) ? (arr_12 [i_16 + 2] [i_16 + 2] [i_16 - 2] [i_16 - 2]) : (arr_12 [i_19] [i_18] [i_16 - 1] [21ULL])))) || (((/* implicit */_Bool) ((int) 3049381959U)))));
                arr_67 [i_16] [i_18] [i_16] [11U] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)48132)), (arr_8 [i_16] [i_18] [i_16])))) || (((((/* implicit */_Bool) arr_12 [i_19] [(_Bool)1] [i_18] [i_16])) || (((/* implicit */_Bool) var_4))))))), (((((/* implicit */_Bool) ((unsigned int) 17592185782272ULL))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (signed char)-1)))) : (((long long int) -1361308433))))));
                var_48 = max(((-(arr_28 [i_16] [i_18] [i_18] [i_19]))), (((/* implicit */int) arr_5 [i_16])));
            }
        }
    }
}
