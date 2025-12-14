/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93009
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
    var_17 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 744821856)) ? (19U) : (((/* implicit */unsigned int) -903505637))));
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 1) /* same iter space */
                        {
                            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-19100)) ? (var_5) : (var_11)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8104))) : (((unsigned long long int) (-(arr_11 [i_0] [i_4]))))));
                            arr_13 [i_4] [i_1] [i_1] [4ULL] [i_4] [i_3] = var_1;
                            var_19 = ((/* implicit */unsigned short) max((740197446), (-1254402409)));
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((unsigned short) (((-(var_15))) ^ (((/* implicit */unsigned int) var_1))))))));
                        }
                        for (unsigned long long int i_5 = 1; i_5 < 17; i_5 += 1) /* same iter space */
                        {
                            arr_16 [i_0] [i_1] [i_2] [i_2 + 1] [(unsigned char)0] = ((/* implicit */unsigned short) arr_11 [i_1] [i_0]);
                            arr_17 [15ULL] [i_5] [i_0] [i_3] [i_5] [i_0] [i_2 - 1] = ((((((/* implicit */_Bool) arr_10 [i_0 - 2] [i_1 - 3] [i_5 + 1] [10] [i_5])) ? (((/* implicit */int) arr_10 [i_5 + 2] [i_1 - 2] [i_5 + 1] [i_3] [i_5 - 1])) : (((/* implicit */int) arr_10 [2ULL] [i_1 - 1] [i_5 + 2] [i_3] [5])))) ^ (((/* implicit */int) ((signed char) 2147483642))));
                            var_21 -= ((int) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_5] [i_0 + 2] [i_5])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 3809852844U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)252))) : (var_4))))));
                            arr_18 [i_0] [i_1] [i_2 + 1] [i_3] [i_5] [i_2] = ((/* implicit */short) (((!(((/* implicit */_Bool) (~(arr_4 [i_1])))))) ? (min((((/* implicit */unsigned int) ((var_11) >> (((var_6) - (5008939024128567000ULL)))))), (max((((/* implicit */unsigned int) (unsigned short)65535)), (3344310514U))))) : (((/* implicit */unsigned int) var_8))));
                        }
                        for (unsigned long long int i_6 = 1; i_6 < 17; i_6 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (-(((4095U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)16))))))))));
                            arr_21 [i_0 + 1] [i_0] [i_2] [i_3] [i_2] = ((/* implicit */unsigned long long int) max((995057751), (((/* implicit */int) ((min((-413665375), (arr_14 [i_0] [i_0 + 2] [i_0 - 2] [i_0] [i_0]))) >= (1575088091))))));
                        }
                        var_23 = ((/* implicit */short) var_2);
                        var_24 = ((/* implicit */short) (~(max((((/* implicit */unsigned long long int) arr_10 [i_0] [2] [i_2] [i_2] [i_3])), (arr_19 [i_3] [i_3] [i_2] [i_2] [i_1 - 2] [i_1] [i_0])))));
                        var_25 = ((/* implicit */unsigned char) arr_20 [i_0 - 1] [i_2 + 1] [i_3]);
                        var_26 = ((/* implicit */unsigned int) ((unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned char)251))))))));
                    }
                } 
            } 
            var_27 |= ((int) ((unsigned int) ((((/* implicit */_Bool) (short)4395)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_11 [i_0] [i_0]))));
            var_28 = ((/* implicit */signed char) min((((/* implicit */int) (!(((arr_3 [2U] [i_0] [i_1]) >= (((/* implicit */unsigned long long int) 702862186))))))), ((~(arr_14 [i_0 + 1] [i_0] [i_0] [i_0 + 2] [i_0])))));
            arr_22 [i_0 - 2] [i_0] [6] = ((/* implicit */short) arr_15 [i_0 - 1] [i_1] [i_0 - 1] [i_1 - 1] [i_1]);
            arr_23 [i_1 + 1] = max((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)126))) - (4294967277U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_1 - 3] [i_1] [(signed char)17] [i_1] [i_1])) << (((((/* implicit */int) arr_10 [i_1 - 3] [i_1] [i_1] [i_1] [i_0 + 1])) - (129)))))));
        }
        /* LoopSeq 1 */
        for (unsigned int i_7 = 0; i_7 < 19; i_7 += 1) 
        {
            var_29 = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned int) ((signed char) 3075380597U))), (((var_13) >> (((arr_2 [i_0] [i_7]) - (66265747))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_4 [i_0 - 2]), (((/* implicit */unsigned long long int) (unsigned short)20706))))) ? (((((/* implicit */int) (short)-32747)) | (-1998417179))) : (((/* implicit */int) (signed char)26)))))));
            var_30 = ((/* implicit */unsigned long long int) ((unsigned int) ((arr_15 [i_0 - 1] [i_0 - 1] [9] [i_0 + 1] [i_0 + 2]) > (arr_9 [i_0] [i_7] [i_0] [3U] [i_7] [i_0 + 1]))));
            /* LoopNest 2 */
            for (unsigned int i_8 = 0; i_8 < 19; i_8 += 4) 
            {
                for (int i_9 = 0; i_9 < 19; i_9 += 3) 
                {
                    {
                        var_31 = ((/* implicit */unsigned char) (~((-(((/* implicit */int) (unsigned short)31798))))));
                        arr_32 [i_0] [i_7] [i_8] [i_0] [i_9] [i_9] |= ((/* implicit */unsigned short) ((unsigned long long int) ((short) var_12)));
                        var_32 = ((/* implicit */unsigned int) max((((unsigned long long int) 2147483647)), (((/* implicit */unsigned long long int) arr_27 [(unsigned short)11] [i_7] [i_8] [i_9]))));
                    }
                } 
            } 
        }
        var_33 |= ((/* implicit */short) arr_11 [i_0] [i_0]);
    }
    for (unsigned int i_10 = 0; i_10 < 12; i_10 += 1) 
    {
        var_34 = ((/* implicit */unsigned long long int) max((var_5), (var_3)));
        /* LoopSeq 3 */
        for (short i_11 = 2; i_11 < 10; i_11 += 1) 
        {
            var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (-(-1744535992))))) ? (((2147483629) << (((897087631U) - (897087631U))))) : ((-(((/* implicit */int) (unsigned short)65024))))));
            arr_38 [i_11 + 2] [i_10] = ((int) ((((/* implicit */_Bool) ((590523266U) << (((var_11) - (1772056204)))))) ? (var_11) : (((/* implicit */int) ((short) 976730452U)))));
            var_36 = max((((((/* implicit */_Bool) arr_2 [i_10] [i_10])) ? (((/* implicit */unsigned int) arr_2 [i_10] [8])) : (var_13))), (((/* implicit */unsigned int) (~((+(var_0)))))));
            /* LoopNest 2 */
            for (unsigned short i_12 = 0; i_12 < 12; i_12 += 1) 
            {
                for (unsigned long long int i_13 = 4; i_13 < 10; i_13 += 2) 
                {
                    {
                        var_37 = min(((-((+(((/* implicit */int) (signed char)2)))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))));
                        arr_44 [i_13 - 4] [i_12] [i_12] [i_11] [i_10] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 67108863U)) != (max((((/* implicit */unsigned long long int) ((signed char) 2147483647))), (18446744073709551615ULL)))));
                    }
                } 
            } 
        }
        for (int i_14 = 2; i_14 < 9; i_14 += 1) 
        {
            arr_48 [i_10] [i_14] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) 997660658)), (var_12))))));
            var_38 ^= (-(((/* implicit */int) var_7)));
            arr_49 [i_10] [i_14] = ((/* implicit */signed char) arr_12 [9U] [i_14] [i_10]);
            arr_50 [i_14] [i_14 + 2] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) arr_7 [i_14])) != (var_8))))))) ? (max((((/* implicit */unsigned int) max((var_1), (((/* implicit */int) arr_10 [i_10] [i_14] [i_10] [i_10] [14U]))))), (((unsigned int) 5725620025271236156ULL)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
        }
        for (signed char i_15 = 1; i_15 < 8; i_15 += 4) 
        {
            var_39 = ((/* implicit */short) arr_26 [i_10] [i_10] [i_15 + 4]);
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 12; i_16 += 4) 
            {
                for (signed char i_17 = 2; i_17 < 9; i_17 += 1) 
                {
                    {
                        arr_60 [i_17] [i_16] [i_10] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_10] [i_10])) || (((/* implicit */_Bool) var_3))))))))));
                        arr_61 [i_17] [i_17 + 2] [i_16] [i_15] [i_10] [i_10] = ((/* implicit */int) arr_11 [i_10] [i_16]);
                        arr_62 [i_17] [i_16] [i_15] [i_10] = ((/* implicit */unsigned short) ((max((32505856), (((/* implicit */int) (unsigned char)220)))) % (((/* implicit */int) ((max((var_0), (arr_14 [i_17] [i_16] [i_15] [i_10] [i_10]))) > (((/* implicit */int) (unsigned short)0)))))));
                        arr_63 [i_10] [i_15] [i_16] [i_16] [i_17] = ((/* implicit */int) arr_36 [i_10] [i_16]);
                    }
                } 
            } 
            arr_64 [4] [8ULL] = ((((/* implicit */_Bool) (+(((unsigned int) arr_25 [i_10] [i_15] [i_10]))))) ? (var_5) : ((-((-(((/* implicit */int) (unsigned char)214)))))));
            arr_65 [i_10] [i_15] = ((/* implicit */unsigned char) ((int) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) (unsigned char)187))))))));
        }
    }
    var_40 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) ((unsigned int) 7622868445844851746ULL))))));
    var_41 = ((/* implicit */int) var_7);
}
