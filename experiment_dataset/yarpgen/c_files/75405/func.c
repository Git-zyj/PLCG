/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75405
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 2; i_3 < 20; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) arr_6 [i_0] [i_1]))));
                            arr_12 [i_1] [i_2] = arr_3 [i_3 + 3];
                        }
                    } 
                } 
                var_17 = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */int) arr_1 [i_1])) < (((/* implicit */int) arr_0 [i_0] [i_1]))))), (min((((((/* implicit */_Bool) 3419079007U)) ? (2063085560) : (1136020412))), (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (short i_4 = 3; i_4 < 19; i_4 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (int i_5 = 2; i_5 < 19; i_5 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_6 = 0; i_6 < 20; i_6 += 1) 
            {
                for (unsigned int i_7 = 0; i_7 < 20; i_7 += 3) 
                {
                    {
                        var_18 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_21 [i_4] [i_5] [i_5] [i_6] [i_6] [i_7])) ? (arr_17 [i_5 - 2] [i_6]) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_4] [i_5]))) - (11328602303182589011ULL))))));
                        arr_23 [i_6] [12LL] [i_6] = ((/* implicit */long long int) min((4522350305101141470ULL), (((/* implicit */unsigned long long int) arr_7 [i_7] [i_6] [i_4]))));
                        var_19 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_5 [i_4 - 2] [i_4] [i_4 - 3] [i_4 + 1])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4 - 3]))))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_4 - 1] [i_4 - 2] [i_4 - 1] [i_4 + 1])))))));
                    }
                } 
            } 
            var_20 = ((/* implicit */short) min((max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)0)) != (var_13)))), (min((8396881688618420283ULL), (((/* implicit */unsigned long long int) (short)22071)))))), (((/* implicit */unsigned long long int) ((arr_19 [i_5] [i_5 + 1] [i_5] [i_5]) ? (((((/* implicit */int) (signed char)0)) | (2063085557))) : ((((_Bool)1) ? (((/* implicit */int) arr_13 [i_5 + 1])) : (((/* implicit */int) arr_0 [i_4] [i_5 - 1])))))))));
        }
        for (short i_8 = 1; i_8 < 16; i_8 += 4) 
        {
            arr_28 [i_4] [i_4] [i_4 - 3] = ((/* implicit */unsigned int) arr_14 [i_8 + 1]);
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (arr_24 [i_4 + 1]) : (var_9)));
        }
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((unsigned short) ((long long int) arr_2 [i_4 - 1]))))));
        var_23 = ((/* implicit */unsigned char) (short)27603);
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 20; i_9 += 3) 
        {
            for (signed char i_10 = 1; i_10 < 19; i_10 += 3) 
            {
                {
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)157)) || (arr_8 [8U] [8U] [8U]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_9] [i_10]))))) : (((/* implicit */int) arr_26 [i_4 + 1] [i_4 - 3]))))) && (((((/* implicit */_Bool) ((unsigned short) (unsigned short)0))) && (((/* implicit */_Bool) arr_24 [i_9]))))));
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 2; i_11 < 18; i_11 += 3) 
                    {
                        for (int i_12 = 0; i_12 < 20; i_12 += 2) 
                        {
                            {
                                arr_40 [i_4] [i_9] = ((/* implicit */signed char) var_0);
                                arr_41 [i_4] [i_9] [i_10 - 1] [i_11 + 1] [i_12] |= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_4 - 2] [i_11 - 2] [i_10 + 1])) || (((/* implicit */_Bool) arr_31 [i_9] [i_11 - 1] [i_12]))))) ^ (((((/* implicit */_Bool) 1332930959)) ? (arr_31 [i_9] [i_9] [i_12]) : (arr_31 [i_4 - 3] [i_4 - 2] [i_10])))));
                            }
                        } 
                    } 
                    var_25 += ((((int) 13LL)) / (((/* implicit */int) arr_7 [i_10] [i_9] [i_10])));
                }
            } 
        } 
    }
    for (short i_13 = 3; i_13 < 19; i_13 += 4) /* same iter space */
    {
        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_13 - 1])) ? (((/* implicit */int) arr_27 [i_13 - 1] [i_13])) : (((/* implicit */int) arr_27 [i_13 - 3] [i_13]))))) || (((/* implicit */_Bool) 799400795U))));
        arr_44 [i_13] [i_13 - 1] = ((/* implicit */short) 11328602303182589011ULL);
    }
    for (short i_14 = 3; i_14 < 19; i_14 += 4) /* same iter space */
    {
        var_27 ^= arr_3 [i_14 - 3];
        var_28 = ((/* implicit */signed char) arr_18 [8U]);
        var_29 = ((/* implicit */short) ((((/* implicit */int) min((arr_33 [i_14 - 2] [i_14 - 1] [i_14 - 1]), (((/* implicit */unsigned char) arr_38 [i_14 + 1] [i_14 + 1] [i_14 - 1] [i_14] [i_14] [i_14] [i_14 - 1]))))) < (-1346788532)));
        var_30 = ((/* implicit */_Bool) ((unsigned int) (unsigned char)110));
    }
    for (short i_15 = 3; i_15 < 19; i_15 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (long long int i_16 = 0; i_16 < 20; i_16 += 1) 
        {
            var_31 = ((/* implicit */signed char) var_6);
            var_32 |= ((/* implicit */long long int) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_36 [i_15 - 3])) ? (((/* implicit */int) arr_5 [i_15] [i_15] [i_15 + 1] [i_15 - 3])) : (-2063085561))))) / (((int) (!(arr_16 [i_16]))))));
        }
        for (unsigned short i_17 = 1; i_17 < 17; i_17 += 3) 
        {
            var_33 *= ((/* implicit */signed char) 1346788531);
            /* LoopNest 3 */
            for (unsigned long long int i_18 = 0; i_18 < 20; i_18 += 4) 
            {
                for (int i_19 = 3; i_19 < 18; i_19 += 1) 
                {
                    for (int i_20 = 3; i_20 < 18; i_20 += 2) 
                    {
                        {
                            var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((short) min((((((/* implicit */_Bool) var_14)) ? (arr_17 [i_15] [i_17]) : (((/* implicit */unsigned long long int) 0)))), (((/* implicit */unsigned long long int) arr_52 [i_15 - 1] [(short)2] [i_18]))))))));
                            var_35 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-40))) ^ (((((/* implicit */_Bool) 4294967275U)) ? (((/* implicit */long long int) arr_61 [i_15] [i_15 + 1] [i_15] [i_15 - 1] [i_15])) : (var_1)))))) || (((/* implicit */_Bool) min((var_9), (((/* implicit */long long int) -2063085565)))))));
                            arr_65 [i_20] [i_17 + 1] [i_19 - 3] [i_20] = ((/* implicit */int) ((((/* implicit */_Bool) ((short) arr_17 [i_17 - 1] [(short)3]))) || (((/* implicit */_Bool) ((int) arr_8 [i_20] [i_17 + 3] [i_18])))));
                            var_36 = ((/* implicit */int) arr_58 [i_15 - 3] [i_17 - 1] [i_19 - 2] [i_20 + 2]);
                            arr_66 [i_15 - 3] [9U] [i_18] [i_20] [i_18] [i_15 - 3] [i_20] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_49 [i_18])) >> (((8683658181379787360LL) - (8683658181379787344LL)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_17 + 3])) ? (((/* implicit */int) arr_25 [i_20])) : (((/* implicit */int) (signed char)-23))))))) && (((/* implicit */_Bool) arr_7 [i_15 - 2] [i_17 - 1] [i_20]))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_21 = 3; i_21 < 19; i_21 += 3) 
        {
            var_37 *= ((/* implicit */signed char) max((min((arr_34 [i_21 + 1] [i_15 - 3]), (((/* implicit */unsigned long long int) arr_27 [i_21 + 1] [i_15 + 1])))), (((unsigned long long int) var_6))));
            arr_70 [i_21] [i_21 - 2] = min((((/* implicit */unsigned int) -412748294)), (((((/* implicit */_Bool) ((unsigned short) arr_35 [i_21 - 3] [i_21 - 2] [i_15]))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)0)) | (((/* implicit */int) (_Bool)0))))) : (((((/* implicit */_Bool) arr_39 [i_15] [i_15] [i_15 - 3] [i_15 + 1] [(signed char)17])) ? (arr_69 [i_21] [i_21 + 1] [i_21]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_63 [i_15 - 1] [i_21 + 1] [i_21 - 2] [i_21] [i_21 - 3]))))))));
        }
        var_38 *= ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)16320)) ? (((/* implicit */int) arr_49 [i_15])) : (((/* implicit */int) (signed char)-94))))), (((((/* implicit */_Bool) var_6)) ? (4294967275U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))) || ((!(((/* implicit */_Bool) (+(((/* implicit */int) arr_27 [(unsigned char)9] [i_15 + 1])))))))));
    }
    var_39 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (short)-1)), (min((((/* implicit */unsigned long long int) ((var_8) / (var_8)))), (min((((/* implicit */unsigned long long int) var_15)), (var_11)))))));
}
