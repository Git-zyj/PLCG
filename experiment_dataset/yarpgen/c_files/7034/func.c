/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7034
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
    var_18 = ((/* implicit */long long int) var_16);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_19 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) ((var_0) && (((/* implicit */_Bool) var_13))))) : (((((/* implicit */_Bool) var_13)) ? (arr_2 [14]) : (((/* implicit */int) arr_0 [i_0]))))))) ^ (max((var_10), (((/* implicit */unsigned int) min((arr_1 [i_0]), (((/* implicit */unsigned char) (signed char)-70))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 20; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_5 [i_1 - 1])) ? (arr_3 [i_1 - 1] [i_1 - 1] [i_1 - 1]) : (((((/* implicit */_Bool) -1351406539)) ? (var_7) : (arr_3 [i_0] [i_0] [i_2]))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 2; i_3 < 20; i_3 += 4) 
                    {
                        var_21 = ((/* implicit */signed char) ((((/* implicit */int) (!((_Bool)1)))) ^ (((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            var_22 -= ((/* implicit */unsigned short) ((((/* implicit */int) var_14)) * (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_11 [i_3] [i_1] [i_1] [i_0])) : (((/* implicit */int) var_3))))));
                            var_23 = ((/* implicit */unsigned short) ((unsigned int) -738756698));
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_13 [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_3] [i_4 + 1] [i_4])) : (((/* implicit */int) arr_6 [i_4 + 1] [i_0] [i_0]))))) == (((((/* implicit */long long int) ((/* implicit */int) (signed char)124))) ^ (-7648188274924362717LL)))));
                        }
                        /* vectorizable */
                        for (long long int i_5 = 1; i_5 < 20; i_5 += 1) 
                        {
                            var_25 = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))));
                            var_26 -= ((/* implicit */signed char) (-(((/* implicit */int) arr_11 [i_3 - 2] [i_3 + 2] [i_3 + 1] [i_3 - 2]))));
                            var_27 |= ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3062660941U)))))) > (arr_16 [i_2 + 1] [i_2] [i_2]));
                        }
                    }
                    for (unsigned long long int i_6 = 2; i_6 < 20; i_6 += 3) 
                    {
                        var_28 = ((/* implicit */signed char) (short)9264);
                        /* LoopSeq 2 */
                        for (signed char i_7 = 0; i_7 < 22; i_7 += 3) 
                        {
                            var_29 = ((/* implicit */int) (unsigned short)18707);
                            var_30 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (arr_3 [i_6 + 2] [i_1 - 1] [i_2 + 1]))));
                        }
                        /* vectorizable */
                        for (signed char i_8 = 0; i_8 < 22; i_8 += 4) 
                        {
                            var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0])))))));
                            var_32 &= ((/* implicit */long long int) var_0);
                            var_33 |= ((/* implicit */long long int) 3454566897U);
                            var_34 = ((/* implicit */_Bool) min((var_34), (((((/* implicit */int) ((-5669657812244119228LL) <= (((/* implicit */long long int) -1351406533))))) <= ((~(arr_2 [i_2])))))));
                        }
                        var_35 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -6168557456183218204LL)) && (((/* implicit */_Bool) var_16)))))) > (var_12))));
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_36 = ((/* implicit */short) (+(((/* implicit */int) arr_27 [i_0]))));
            var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) ((arr_24 [i_0]) > (((((/* implicit */_Bool) arr_24 [i_0])) ? (arr_21 [i_0] [i_9] [i_9] [1] [i_9]) : (arr_21 [i_9] [i_9] [i_0] [i_0] [i_0]))))))));
        }
        var_38 = ((/* implicit */long long int) (!(((((/* implicit */long long int) ((/* implicit */int) arr_26 [13LL] [i_0] [i_0] [i_0] [13LL] [i_0] [i_0]))) != (arr_23 [i_0] [i_0] [i_0] [i_0] [i_0])))));
        var_39 ^= ((/* implicit */_Bool) ((((arr_29 [i_0]) - (((/* implicit */long long int) var_8)))) | (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
    }
    /* vectorizable */
    for (signed char i_10 = 1; i_10 < 23; i_10 += 4) 
    {
        var_40 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) arr_30 [i_10] [i_10])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9)))));
        var_41 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_10 + 1])) ? (((/* implicit */int) (signed char)-71)) : (((/* implicit */int) (signed char)73)))))));
        /* LoopSeq 3 */
        for (unsigned char i_11 = 4; i_11 < 21; i_11 += 3) 
        {
            var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_32 [i_10 + 1])) && (((((/* implicit */_Bool) var_3)) || (var_6)))));
            var_43 = ((/* implicit */short) var_14);
            var_44 |= ((((/* implicit */int) arr_31 [i_10 - 1])) + (((/* implicit */int) arr_30 [i_10] [i_10])));
            /* LoopNest 2 */
            for (unsigned short i_12 = 3; i_12 < 21; i_12 += 4) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    {
                        var_45 = ((/* implicit */long long int) (signed char)-71);
                        var_46 = ((/* implicit */short) max((var_46), (((/* implicit */short) var_1))));
                        var_47 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 3454566900U)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)575))) : (var_12)));
                        var_48 *= ((/* implicit */long long int) ((var_2) != (((/* implicit */int) arr_31 [i_10]))));
                    }
                } 
            } 
            var_49 = arr_30 [i_11] [i_11 + 2];
        }
        for (unsigned int i_14 = 4; i_14 < 23; i_14 += 2) /* same iter space */
        {
            var_50 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)32))) > (var_4)));
            /* LoopSeq 3 */
            for (unsigned short i_15 = 0; i_15 < 24; i_15 += 1) 
            {
                var_51 |= ((/* implicit */signed char) ((arr_32 [i_10 + 1]) / (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_10 + 1] [i_10 - 1] [i_10 - 1] [i_10 + 1])))));
                var_52 = ((/* implicit */_Bool) ((unsigned char) (+(arr_34 [i_10 - 1]))));
            }
            for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
            {
                var_53 += ((/* implicit */_Bool) var_17);
                /* LoopNest 2 */
                for (short i_17 = 0; i_17 < 24; i_17 += 1) 
                {
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        {
                            var_54 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_30 [i_16] [i_18])) - (((/* implicit */int) arr_42 [i_16] [i_14] [i_16]))))) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_10] [i_10])))));
                            var_55 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_40 [i_10 + 1] [i_16 - 1] [i_16 - 1] [i_10 + 1]))));
                        }
                    } 
                } 
                var_56 = ((/* implicit */long long int) ((((/* implicit */int) var_1)) + ((-(((/* implicit */int) (unsigned short)57434))))));
            }
            for (signed char i_19 = 0; i_19 < 24; i_19 += 4) 
            {
                var_57 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_30 [i_10] [i_10])) != (((/* implicit */int) arr_55 [i_19] [i_19] [(signed char)12] [i_19])))) ? (3426846368U) : (((unsigned int) 606809116U))));
                var_58 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_42 [i_14 - 4] [i_14 + 1] [i_10 + 1]))));
                var_59 = var_0;
                var_60 = ((/* implicit */signed char) ((unsigned short) (~(((/* implicit */int) arr_50 [i_10] [(_Bool)1] [i_10] [i_10] [i_10] [i_10])))));
                /* LoopNest 2 */
                for (unsigned long long int i_20 = 0; i_20 < 24; i_20 += 3) 
                {
                    for (signed char i_21 = 0; i_21 < 24; i_21 += 1) 
                    {
                        {
                            var_61 = ((/* implicit */short) ((arr_35 [i_14 - 4] [i_14 - 3] [i_14]) ? (((/* implicit */int) arr_35 [i_14 - 1] [i_14 - 1] [i_14 - 1])) : (((/* implicit */int) arr_35 [i_14 + 1] [i_14] [i_14]))));
                            var_62 = ((((/* implicit */int) arr_30 [i_10 - 1] [i_10 + 1])) > (((/* implicit */int) var_16)));
                        }
                    } 
                } 
            }
            var_63 = ((/* implicit */signed char) ((((/* implicit */int) arr_59 [i_14 - 1] [23] [i_10] [23] [i_10])) < (((/* implicit */int) arr_59 [i_10 + 1] [i_10] [(_Bool)1] [i_10 - 1] [i_10]))));
        }
        for (unsigned int i_22 = 4; i_22 < 23; i_22 += 2) /* same iter space */
        {
            var_64 = ((/* implicit */unsigned char) max((var_64), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 4253057948U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_60 [i_10] [i_10] [i_22 - 2] [(_Bool)1] [(_Bool)1]))) : (3062660941U))))));
            var_65 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_43 [i_10 - 1] [i_22 - 2])) - (43)))));
        }
        var_66 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 3454566909U)))) <= (var_4)));
    }
}
