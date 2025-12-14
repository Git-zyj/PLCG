/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93623
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
    var_20 = ((/* implicit */unsigned char) var_2);
    var_21 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((var_19) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))) == (var_6)))) >> (((var_1) - (9017441567794076256ULL)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))))) < (((/* implicit */int) arr_2 [i_0]))));
        arr_5 [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0])))), (((((/* implicit */int) (signed char)20)) - (((/* implicit */int) arr_0 [i_0]))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 3; i_3 < 12; i_3 += 2) 
                {
                    {
                        arr_14 [i_0] [i_0] [i_0] = var_14;
                        /* LoopSeq 4 */
                        for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 3) 
                        {
                            var_22 |= ((/* implicit */unsigned long long int) ((unsigned char) (signed char)-95));
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [i_4 - 1] [i_3 + 2] [9LL])) + (((/* implicit */int) arr_10 [(short)2] [(short)2]))));
                        }
                        for (long long int i_5 = 0; i_5 < 14; i_5 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)106))));
                            var_24 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_3 [i_1]))));
                        }
                        for (unsigned short i_6 = 2; i_6 < 12; i_6 += 2) 
                        {
                            var_25 = ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)112))) / (6588588922344262078LL))) << (((((/* implicit */int) ((unsigned char) var_4))) - (105))));
                            arr_24 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_3 [i_2]))))));
                        }
                        for (int i_7 = 0; i_7 < 14; i_7 += 2) 
                        {
                            var_26 ^= ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                            arr_28 [i_7] [i_7] [i_1] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_16 [i_0] [i_0] [i_0]);
                        }
                        /* LoopSeq 1 */
                        for (signed char i_8 = 1; i_8 < 13; i_8 += 1) 
                        {
                            arr_32 [i_0] [i_1] [(signed char)2] [i_3] [i_8] = ((/* implicit */unsigned short) (_Bool)1);
                            var_27 = ((/* implicit */long long int) ((arr_20 [i_8 - 1] [i_8] [i_8] [i_8] [i_8]) <= (arr_20 [i_8 - 1] [i_8] [i_8 - 1] [i_8 - 1] [i_8 - 1])));
                        }
                        /* LoopSeq 1 */
                        for (long long int i_9 = 0; i_9 < 14; i_9 += 2) 
                        {
                            arr_37 [i_0] [i_0] [(unsigned char)2] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_9] [i_3 + 1] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (arr_6 [i_3 - 1])));
                            arr_38 [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((arr_31 [i_0] [i_2] [i_0]) <= (arr_33 [i_0] [i_0] [i_0] [i_0])));
                            var_28 = ((/* implicit */unsigned long long int) arr_27 [i_3 - 3] [i_3 + 2] [i_3 + 2] [i_3 + 1] [i_3 + 1] [i_3]);
                            var_29 += ((/* implicit */long long int) arr_15 [i_0]);
                        }
                    }
                } 
            } 
            var_30 += ((arr_35 [i_0] [i_0] [i_0] [i_1] [i_0]) <= (arr_35 [i_0] [i_1] [i_0] [i_1] [i_1]));
            arr_39 [i_0] = var_11;
            /* LoopSeq 3 */
            for (signed char i_10 = 0; i_10 < 14; i_10 += 3) 
            {
                var_31 = (unsigned char)149;
                var_32 = ((/* implicit */short) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]);
            }
            for (unsigned short i_11 = 2; i_11 < 13; i_11 += 4) /* same iter space */
            {
                var_33 = ((/* implicit */unsigned char) (signed char)-96);
                var_34 = ((/* implicit */short) arr_41 [i_0] [i_11] [i_11]);
                arr_44 [i_11 - 2] [6ULL] [i_0] [i_0] = ((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) >= (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_0] [i_11 + 1] [i_11 + 1] [i_11 + 1] [(short)11] [i_11]))));
                var_35 = 5227693517344707960ULL;
            }
            for (unsigned short i_12 = 2; i_12 < 13; i_12 += 4) /* same iter space */
            {
                arr_47 [(unsigned char)10] [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((arr_6 [i_12 + 1]) == (((/* implicit */int) arr_43 [i_0] [i_0]))));
                arr_48 [i_0] = ((/* implicit */unsigned short) var_13);
            }
        }
        for (signed char i_13 = 0; i_13 < 14; i_13 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_14 = 2; i_14 < 12; i_14 += 2) 
            {
                for (long long int i_15 = 0; i_15 < 14; i_15 += 1) 
                {
                    {
                        var_36 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)-119)), ((+((~(((/* implicit */int) var_12))))))));
                        var_37 = ((/* implicit */long long int) (~(((/* implicit */int) min((arr_12 [i_14 + 1] [i_14 - 2] [i_14] [i_14 + 1] [i_14 + 1]), (arr_12 [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_14 + 2] [i_14 - 2]))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_16 = 1; i_16 < 11; i_16 += 1) 
                        {
                            var_38 = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_46 [i_0] [i_13] [i_14 - 1])))) - (min((min((-339385672), (((/* implicit */int) var_0)))), (((/* implicit */int) arr_3 [i_0]))))));
                            arr_62 [i_0] [i_0] = arr_45 [i_14 - 1] [i_16 - 1] [i_16 + 2] [i_16 - 1];
                        }
                        var_39 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_14] [i_14 - 2] [i_14 + 2] [i_14 - 2] [i_14] [i_14 + 1]))) ^ (4817199973102784447ULL)));
                        var_40 = (_Bool)1;
                    }
                } 
            } 
            arr_63 [i_0] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) > (13629544100606767168ULL))))));
        }
        var_41 ^= ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)61))));
        var_42 = ((/* implicit */unsigned char) max((((((/* implicit */int) (signed char)112)) - (((/* implicit */int) (unsigned char)250)))), (((/* implicit */int) arr_46 [i_0] [i_0] [i_0]))));
    }
}
