/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57311
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
    var_12 = max((((/* implicit */long long int) ((signed char) min(((unsigned short)65535), (((/* implicit */unsigned short) (short)19812)))))), (((((/* implicit */_Bool) var_6)) ? (((long long int) (unsigned short)0)) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)26162)) ^ (((/* implicit */int) (signed char)73))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] [(_Bool)1] = ((/* implicit */unsigned short) (signed char)73);
        var_13 = ((/* implicit */_Bool) arr_1 [i_0] [(short)1]);
        arr_3 [i_0] = ((_Bool) arr_1 [i_0] [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((arr_0 [i_0]) == (arr_0 [i_0])))), (max((arr_0 [i_0]), (arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        var_14 -= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((1340096816U) << (((((/* implicit */int) (signed char)-70)) + (101))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))), (((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_0 [i_1]) : (arr_0 [i_1])))));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 9; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                {
                    arr_14 [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) arr_13 [i_3] [(unsigned short)8] [1] [i_1])))))) ? (((/* implicit */int) (signed char)-74)) : (((/* implicit */int) max((arr_7 [i_2 + 1] [i_2 - 2]), (((short) (signed char)-73)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        for (short i_5 = 0; i_5 < 11; i_5 += 1) 
                        {
                            {
                                arr_20 [i_1] [i_1] [3] [i_3] [(unsigned short)0] [i_4] [i_1] = ((/* implicit */short) ((((/* implicit */int) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [6U]))) - (1031369163U))))) > (((((/* implicit */int) arr_9 [i_4])) / (((/* implicit */int) (unsigned short)39805))))));
                                var_15 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_0 [i_3]) : (((/* implicit */unsigned long long int) arr_12 [i_1] [i_2 + 2] [i_1] [i_2 + 2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 7559786168990568549LL)))))) : (((((/* implicit */_Bool) arr_18 [i_2] [i_2] [i_5] [i_3] [i_5] [i_2 - 3] [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2 - 3] [i_2 - 3]))) : (arr_16 [(signed char)3]))))));
                                arr_21 [i_4] [0U] [0U] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_3] [i_4])) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_7))))) ? (6516745139612136388LL) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)34872)))))))));
                                var_16 = ((/* implicit */short) ((_Bool) min(((unsigned short)56334), (arr_9 [i_5]))));
                            }
                        } 
                    } 
                    arr_22 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((var_11) + (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [10U] [i_2] [i_2 + 1] [i_2]))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)3)))))))) ? (((/* implicit */int) ((short) ((int) var_1)))) : (((/* implicit */int) arr_5 [i_1]))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned int i_7 = 0; i_7 < 11; i_7 += 3) 
            {
                arr_30 [i_7] [i_6] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) max((arr_26 [i_1] [i_1] [i_1] [i_7]), (arr_26 [i_1] [i_6] [i_7] [i_7])))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned short)20989)) : (((/* implicit */int) (unsigned short)19350))))));
                var_17 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)180)) >> (((arr_0 [i_1]) - (6556575324133734849ULL)))))), (max((3263598133U), (arr_17 [i_1] [i_6] [i_7] [0LL])))));
                var_18 -= ((/* implicit */int) ((unsigned short) arr_19 [i_6] [(signed char)3] [i_7] [i_1] [i_6]));
                var_19 = ((/* implicit */unsigned short) ((short) ((int) (!(((/* implicit */_Bool) (unsigned short)63562))))));
            }
            var_20 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (3063804467U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [i_1]))))));
        }
        for (unsigned short i_8 = 0; i_8 < 11; i_8 += 3) /* same iter space */
        {
            var_21 ^= ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_1] [i_8] [(unsigned short)5] [i_8]))))), (((((/* implicit */_Bool) arr_28 [i_1] [1LL] [i_1] [i_1])) ? (((/* implicit */int) (short)-13210)) : (((/* implicit */int) arr_28 [i_8] [i_8] [i_8] [i_1]))))));
            /* LoopSeq 3 */
            for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) /* same iter space */
            {
                var_22 = ((/* implicit */_Bool) var_2);
                arr_36 [i_1] [i_1] [i_8] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (_Bool)1)))) / (((((/* implicit */_Bool) ((5373324599746752913LL) / (((/* implicit */long long int) 1069547520U))))) ? (max((1844127437U), (arr_16 [i_1]))) : (max((1031369163U), (((/* implicit */unsigned int) (signed char)-74))))))));
            }
            for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) /* same iter space */
            {
                var_23 = ((/* implicit */unsigned short) (unsigned char)255);
                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((((/* implicit */int) ((signed char) (unsigned short)40976))) % (((arr_24 [i_1] [i_8] [i_1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6)))))) | ((-(((/* implicit */int) (_Bool)1)))))))));
            }
            for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) /* same iter space */
            {
                arr_41 [i_1] [i_1] [i_8] [i_8] = max((((arr_24 [i_8] [i_11 + 1] [i_11 + 1]) ? (((/* implicit */int) arr_24 [9U] [i_11 + 1] [1U])) : (((/* implicit */int) arr_24 [1U] [i_11 + 1] [(_Bool)1])))), (((((/* implicit */int) arr_24 [i_1] [i_11 + 1] [i_1])) ^ (((/* implicit */int) arr_24 [i_1] [i_11 + 1] [0])))));
                var_25 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)53320)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_1] [i_8] [i_8]))) : (var_11))) + ((~(var_2)))))) > (((arr_5 [i_8]) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_6 [i_1] [i_1])))) : ((~(arr_31 [i_8])))))));
            }
        }
        for (unsigned short i_12 = 0; i_12 < 11; i_12 += 3) /* same iter space */
        {
            arr_44 [i_12] = ((/* implicit */short) min((((((/* implicit */_Bool) ((arr_34 [i_1] [i_1] [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)144))) : (-6492485596046992070LL)))) ? (((((/* implicit */_Bool) (unsigned short)65531)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)24559))))))), ((-(((/* implicit */int) (_Bool)0))))));
            var_26 = ((/* implicit */unsigned int) max(((unsigned char)80), (((/* implicit */unsigned char) ((-8708124432196734551LL) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
            var_27 ^= ((/* implicit */long long int) arr_7 [i_1] [i_1]);
        }
        var_28 *= (!(((/* implicit */_Bool) (~(((1031369163U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))));
    }
    /* vectorizable */
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        var_29 = ((/* implicit */signed char) ((int) arr_1 [i_13] [i_13]));
        /* LoopSeq 1 */
        for (unsigned int i_14 = 0; i_14 < 12; i_14 += 4) 
        {
            arr_52 [(_Bool)1] [i_14] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_45 [i_14] [i_13]))));
            /* LoopSeq 2 */
            for (unsigned int i_15 = 3; i_15 < 9; i_15 += 1) 
            {
                var_30 = ((/* implicit */short) ((arr_54 [i_15 + 1] [i_15] [i_15 - 2]) ^ (arr_54 [i_15 + 1] [5] [i_15 - 2])));
                var_31 = ((/* implicit */signed char) (short)-3992);
                /* LoopNest 2 */
                for (unsigned short i_16 = 1; i_16 < 10; i_16 += 4) 
                {
                    for (int i_17 = 0; i_17 < 12; i_17 += 4) 
                    {
                        {
                            arr_61 [i_13] [i_13] [i_13] [i_13] [i_13] [i_16] [(unsigned short)6] = (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65531))) : (arr_0 [4U]));
                            var_32 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_53 [i_16 + 2] [i_14] [i_17] [i_16 + 2]))) == (arr_57 [i_16 + 2] [i_16 + 2] [i_15] [i_16])));
                            arr_62 [i_13] [i_14] [i_15] [i_16] [i_16] = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                            arr_63 [i_16] [i_14] [i_15] [i_16] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)3995)) : (180608274)))) ^ (arr_49 [i_13])));
                        }
                    } 
                } 
            }
            for (int i_18 = 0; i_18 < 12; i_18 += 1) 
            {
                var_33 *= ((/* implicit */_Bool) ((unsigned short) ((arr_60 [(_Bool)1] [(_Bool)1] [i_14] [i_18] [(_Bool)1] [(_Bool)1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-114))))));
                arr_67 [i_18] [i_14] [i_14] = ((/* implicit */unsigned short) arr_46 [i_13]);
                arr_68 [i_18] [i_14] [i_14] [(unsigned short)8] = ((/* implicit */signed char) (((((-2147483647 - 1)) < (((/* implicit */int) (unsigned short)24547)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_50 [(_Bool)1] [i_13])) : (((/* implicit */int) (unsigned short)53039))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)66))) | (arr_46 [8])))));
                var_34 -= ((/* implicit */_Bool) arr_47 [i_13]);
                arr_69 [i_13] [(_Bool)1] [i_13] [i_18] = ((/* implicit */unsigned short) var_1);
            }
        }
        var_35 ^= ((/* implicit */long long int) (-(((/* implicit */int) arr_53 [i_13] [(signed char)3] [i_13] [i_13]))));
    }
}
