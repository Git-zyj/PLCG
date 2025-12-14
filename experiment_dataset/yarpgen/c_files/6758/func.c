/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6758
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
    for (short i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        arr_2 [0] [i_0] = ((/* implicit */short) arr_0 [i_0]);
        arr_3 [i_0 - 3] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((short) (_Bool)1)))));
        arr_4 [(unsigned char)13] = ((/* implicit */signed char) ((((/* implicit */int) min((arr_1 [i_0] [i_0 - 3]), (arr_1 [i_0] [i_0 - 1])))) >= (((/* implicit */int) arr_0 [i_0 + 1]))));
    }
    for (int i_1 = 3; i_1 < 15; i_1 += 4) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)44242)) || (((/* implicit */_Bool) var_11)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_19)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_11) : (((/* implicit */int) (_Bool)1)))))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_0 [i_1 - 3])))))));
        arr_9 [i_1] [i_1] = ((/* implicit */short) arr_7 [i_1 + 1] [i_1 + 1]);
        arr_10 [i_1] = ((/* implicit */signed char) ((short) var_9));
    }
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (((((((/* implicit */_Bool) var_13)) ? (-6883034846459058406LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) + (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((/* implicit */long long int) ((unsigned int) 2313398644709670560LL)))));
    /* LoopSeq 2 */
    for (unsigned short i_2 = 3; i_2 < 15; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_3 = 2; i_3 < 15; i_3 += 2) 
        {
            for (signed char i_4 = 1; i_4 < 15; i_4 += 4) 
            {
                {
                    arr_22 [i_2 - 2] [i_3 + 2] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_1))));
                    arr_23 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */int) (!((!((_Bool)1)))))) < (((((/* implicit */_Bool) ((signed char) arr_16 [i_4] [i_3] [i_2]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_2 + 1]))))) : (((/* implicit */int) arr_0 [1LL]))))));
                    arr_24 [i_3] [i_2] = ((/* implicit */unsigned short) max((((((/* implicit */long long int) ((/* implicit */int) var_7))) < (var_2))), (var_7)));
                    /* LoopSeq 2 */
                    for (unsigned char i_5 = 3; i_5 < 15; i_5 += 2) 
                    {
                        arr_29 [i_2] [i_5] = ((/* implicit */signed char) (+(6883034846459058397LL)));
                        arr_30 [(_Bool)0] [i_3] [i_4 + 2] [i_4] [i_2] = var_17;
                        arr_31 [i_2] = ((((((/* implicit */int) arr_26 [i_5] [i_2 - 2] [i_3 - 1] [i_2] [i_5] [i_5 - 2])) <= (((/* implicit */int) var_6)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_15))))) : (max((var_8), (((/* implicit */unsigned int) var_19)))));
                        arr_32 [i_2 + 2] [i_2] [i_4] [i_5] = ((/* implicit */signed char) min((((var_12) ^ (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_6)))))));
                    }
                    for (long long int i_6 = 2; i_6 < 14; i_6 += 3) 
                    {
                        arr_36 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) ((_Bool) var_5))) < (((/* implicit */int) ((short) var_11))))));
                        arr_37 [i_2 - 3] [i_2 - 3] [i_2 - 3] [i_2] = ((/* implicit */int) (((!(((/* implicit */_Bool) var_3)))) ? (((((/* implicit */_Bool) (unsigned short)12646)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_6 - 2] [i_6 - 2])))))));
                    }
                }
            } 
        } 
        arr_38 [i_2] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_17 [i_2 + 1] [i_2])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_10))))), (((((/* implicit */_Bool) arr_17 [(_Bool)1] [i_2 + 1])) ? (arr_17 [i_2 - 1] [i_2 - 3]) : (var_17)))));
        /* LoopNest 3 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (unsigned int i_8 = 3; i_8 < 14; i_8 += 3) 
            {
                for (short i_9 = 4; i_9 < 14; i_9 += 4) 
                {
                    {
                        arr_47 [i_2] [i_7] [i_8 + 1] [i_2] = ((/* implicit */signed char) arr_18 [i_2] [i_8] [i_2]);
                        arr_48 [i_9] [i_2] [i_8] [i_7] [0LL] [i_9] = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_26 [i_2] [i_7] [i_8] [i_9] [i_7] [i_9 - 3]))))), (min((arr_14 [i_7]), (((/* implicit */long long int) var_11))))));
                        arr_49 [i_2] [i_2] [i_2] [(unsigned char)0] [i_2] [i_9 - 4] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [i_2 - 2] [(_Bool)1] [i_7] [i_2] [i_8] [15LL])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_19)) && (((/* implicit */_Bool) var_0))))) : (((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) var_10)))))))) > (((((((/* implicit */_Bool) arr_16 [i_2 + 2] [i_7] [i_2 + 2])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [(signed char)11] [(_Bool)1] [i_2] [i_8 + 1]))))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_9 + 3] [i_9 + 3])))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
    {
        /* LoopNest 2 */
        for (short i_11 = 1; i_11 < 24; i_11 += 2) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                {
                    arr_57 [(_Bool)1] [i_11 - 1] [(_Bool)1] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((short) var_7)))));
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 1; i_13 < 24; i_13 += 2) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                arr_64 [i_10] [i_13 - 1] [(_Bool)1] [i_10] [i_14] = ((arr_56 [i_11 - 1] [i_11] [(_Bool)1]) & (((/* implicit */unsigned int) ((/* implicit */int) var_15))));
                                arr_65 [(unsigned short)12] = ((/* implicit */long long int) ((arr_50 [i_10 + 1]) >= (((/* implicit */long long int) var_9))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_66 [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_50 [i_10 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (arr_58 [i_10] [i_10 + 1] [i_10 + 1] [(signed char)16])));
        arr_67 [i_10] [i_10] = ((/* implicit */unsigned short) (+((~(((/* implicit */int) (unsigned short)40652))))));
    }
    /* LoopNest 2 */
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_17 = 1; i_17 < 15; i_17 += 3) 
                {
                    for (unsigned short i_18 = 1; i_18 < 14; i_18 += 3) 
                    {
                        {
                            arr_80 [i_16] = ((/* implicit */unsigned short) ((var_2) | (((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) var_4))) & (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)11910)) || (((/* implicit */_Bool) arr_60 [i_18 + 1] [i_15] [i_16] [i_15]))))))))));
                            arr_81 [i_15] [(short)0] [i_17] [i_16] [i_18] = ((/* implicit */signed char) (+(((int) arr_11 [i_17 - 1] [i_16]))));
                            arr_82 [0LL] [i_18] = ((/* implicit */unsigned short) var_16);
                        }
                    } 
                } 
                arr_83 [(short)4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -6534315510838307756LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((_Bool) var_2)) || (((/* implicit */_Bool) var_8)))))) : (var_9)));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
    {
        for (short i_20 = 0; i_20 < 23; i_20 += 3) 
        {
            for (unsigned int i_21 = 0; i_21 < 23; i_21 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_22 = 2; i_22 < 21; i_22 += 4) 
                    {
                        for (unsigned short i_23 = 0; i_23 < 23; i_23 += 2) 
                        {
                            {
                                arr_94 [i_19] [i_19] [i_21] [i_22 + 2] [i_23] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_15)))) + (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-24)) & (((/* implicit */int) arr_59 [i_23] [i_22 + 1] [i_21] [i_20] [i_19] [i_19]))))) ? (var_0) : (min((((/* implicit */unsigned int) var_18)), (1099655541U)))))));
                                arr_95 [i_19] [i_19] [i_23] [i_19] [i_23] = ((/* implicit */signed char) ((var_17) / ((((!(((/* implicit */_Bool) var_8)))) ? (((((/* implicit */_Bool) var_9)) ? (var_13) : (var_13))) : (((/* implicit */long long int) ((/* implicit */int) arr_61 [i_21] [i_20] [i_20])))))));
                                arr_96 [(unsigned char)12] [(unsigned char)12] [4] [i_22 + 2] [i_19] = ((/* implicit */unsigned short) ((var_0) | (((/* implicit */unsigned int) ((/* implicit */int) arr_55 [i_19] [i_20] [i_21] [(unsigned char)14])))));
                                arr_97 [i_19] = ((/* implicit */unsigned short) var_11);
                            }
                        } 
                    } 
                    arr_98 [i_19] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-21))))) ? (max((var_16), (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_62 [i_19] [(unsigned short)8] [i_21] [i_21])))))));
                }
            } 
        } 
    } 
}
