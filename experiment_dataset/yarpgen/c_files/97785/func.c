/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97785
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
    var_13 = ((/* implicit */long long int) ((var_2) ^ (max((((/* implicit */unsigned long long int) var_12)), (((((/* implicit */_Bool) (signed char)-113)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        var_14 = ((/* implicit */long long int) min((arr_0 [i_0]), (arr_0 [i_0])));
        arr_2 [i_0] = ((/* implicit */long long int) arr_1 [i_0]);
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 13; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (17ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_2])))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (short i_4 = 1; i_4 < 11; i_4 += 3) /* same iter space */
                        {
                            arr_13 [i_0] [i_1] [i_0] = (-(3580794658485090369ULL));
                            var_17 = ((/* implicit */_Bool) ((int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (7388790120625525016ULL) : (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_3 + 2] [1U])))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0 + 1] [i_0])) || (((/* implicit */_Bool) arr_5 [i_0] [i_3 + 4] [i_4])))))))));
                            var_18 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) 258048)) < (var_2)))) >> ((((+(402653184))) - (402653163)))))), (((((/* implicit */_Bool) (unsigned short)6905)) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (min((((/* implicit */unsigned long long int) var_0)), (arr_9 [9LL] [i_0] [i_0] [i_1])))))));
                            arr_14 [i_0] [i_1] [i_0] [i_3 - 1] [i_3] [i_0] [i_4] = ((/* implicit */_Bool) var_11);
                        }
                        /* vectorizable */
                        for (short i_5 = 1; i_5 < 11; i_5 += 3) /* same iter space */
                        {
                            arr_18 [i_0] [i_1] [i_1] [i_1] [i_3] [i_1] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(var_2))))));
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_2 - 2] [i_0] [i_5 + 2] [i_3 + 2])) ? (((/* implicit */unsigned long long int) 2251799813685247LL)) : (arr_12 [i_0 + 3] [i_5 + 1] [i_3 + 3] [i_3] [i_0 + 2])));
                        }
                        for (short i_6 = 1; i_6 < 11; i_6 += 3) /* same iter space */
                        {
                            var_20 = ((/* implicit */signed char) max((-719675401), (arr_7 [6LL] [6LL] [i_0])));
                            var_21 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_7 = 0; i_7 < 14; i_7 += 3) 
                        {
                            var_22 = ((/* implicit */unsigned char) arr_20 [i_0] [i_0 + 2] [7LL] [i_0] [i_0] [i_0]);
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [9LL] [i_0] [i_0] [i_3 + 4])) ? (((arr_19 [i_0] [i_0] [i_0]) >> (((var_3) - (5963280944108275111ULL))))) : (((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) var_3)))))));
                            arr_25 [i_0] [i_0] [i_2] [i_0] [i_7] = ((/* implicit */signed char) ((_Bool) (-(((/* implicit */int) var_12)))));
                        }
                    }
                    for (short i_8 = 1; i_8 < 12; i_8 += 2) 
                    {
                        var_24 -= ((/* implicit */signed char) max(((+(((/* implicit */int) (signed char)-49)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_2])) || (((/* implicit */_Bool) arr_0 [i_2])))))));
                        var_25 = ((/* implicit */signed char) ((((/* implicit */int) arr_21 [i_0])) ^ ((-(((/* implicit */int) arr_21 [i_0]))))));
                        var_26 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) (~(13084725493128926815ULL)))) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [(signed char)10] [i_2] [i_2] [i_0]))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 2) /* same iter space */
                        {
                            arr_31 [i_0] [i_1] [i_2] [i_0] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (arr_20 [(signed char)8] [i_0] [i_0 + 1] [i_0 + 2] [i_0] [i_0 - 1]) : (arr_20 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 2])))) - (max((((/* implicit */long long int) (((_Bool)1) || (((/* implicit */_Bool) arr_28 [(unsigned short)8] [(unsigned char)2] [i_2 - 2] [i_8] [(unsigned short)8]))))), (arr_5 [i_1] [2ULL] [i_8 + 1])))));
                            var_27 = (-(2025207750));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 2) /* same iter space */
                        {
                            var_28 = ((/* implicit */signed char) 17ULL);
                            arr_36 [i_8] [i_0] [i_0] [1ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((arr_1 [i_0]), (((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [i_1] [i_8 - 1]))))) % (min((((/* implicit */long long int) (_Bool)1)), (arr_35 [i_0] [i_2] [i_2] [i_0] [i_8])))));
                            arr_37 [i_10] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */long long int) 2388049953443205629ULL);
                        }
                    }
                }
            } 
        } 
    }
    var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(max((365197046), (var_5)))))) ? (max((var_11), (((/* implicit */long long int) var_0)))) : (((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) * (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) 2008014006)) : (var_11)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_11 = 1; i_11 < 22; i_11 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            for (unsigned short i_13 = 3; i_13 < 23; i_13 += 2) 
            {
                for (short i_14 = 0; i_14 < 24; i_14 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_15 = 0; i_15 < 24; i_15 += 3) 
                        {
                            arr_50 [i_11] [i_11] [i_12] [i_13] [i_11] [i_15] [i_15] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_39 [i_11 + 2]))));
                            arr_51 [i_11 - 1] [i_11] [i_13 - 2] [i_11] [i_15] = ((/* implicit */signed char) ((_Bool) arr_38 [i_11 - 1]));
                        }
                        for (signed char i_16 = 2; i_16 < 23; i_16 += 3) 
                        {
                            var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_39 [i_11 + 1])) ? (((/* implicit */int) arr_46 [i_11] [20] [i_14])) : (((/* implicit */int) arr_49 [i_11 + 2] [i_13 - 3] [i_14])))))));
                            var_31 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) % (((((/* implicit */unsigned long long int) var_0)) % (var_3)))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned int i_17 = 1; i_17 < 21; i_17 += 3) 
                        {
                            var_32 = ((((/* implicit */_Bool) arr_58 [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_13 - 1] [i_13 - 3] [i_13 - 3] [i_17 + 2])) ? (var_8) : (((((/* implicit */_Bool) 1785162847870330978LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [9LL]))) : (var_0))));
                            var_33 ^= ((/* implicit */int) arr_39 [i_11 + 2]);
                            arr_60 [i_11] [i_11] [i_13] [i_13] [i_17] = (!((_Bool)1));
                            arr_61 [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) arr_55 [i_14]))) / (((/* implicit */int) arr_44 [i_14]))));
                        }
                        for (int i_18 = 0; i_18 < 24; i_18 += 3) 
                        {
                            var_34 = ((/* implicit */unsigned char) var_5);
                            arr_64 [i_18] [i_11] [i_13 - 2] [i_11] [i_11] = ((/* implicit */unsigned int) (_Bool)0);
                        }
                        for (unsigned short i_19 = 0; i_19 < 24; i_19 += 2) 
                        {
                            var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_47 [i_11 - 1] [i_11 + 1] [i_13 - 3] [i_13] [22ULL] [i_13 + 1])) == ((~(((/* implicit */int) (unsigned char)90))))));
                            arr_67 [i_14] [i_14] [i_11] [i_11] [i_12] [i_11] = ((/* implicit */short) ((((/* implicit */int) (signed char)7)) <= (arr_42 [i_11] [i_11])));
                        }
                        arr_68 [i_11] [i_12] [i_11] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_62 [i_11]))));
                        var_36 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)201)) >> (((/* implicit */int) (unsigned short)0))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_20 = 0; i_20 < 24; i_20 += 2) 
        {
            for (long long int i_21 = 0; i_21 < 24; i_21 += 3) 
            {
                for (unsigned int i_22 = 0; i_22 < 24; i_22 += 2) 
                {
                    {
                        var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)40442)) || ((_Bool)1)));
                        var_38 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_45 [i_11 + 2])) <= (((/* implicit */int) (_Bool)1))));
                        var_39 = ((/* implicit */int) (signed char)0);
                    }
                } 
            } 
        } 
    }
}
