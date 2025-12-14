/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67339
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
    var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)71)) ? (((/* implicit */int) var_17)) : (((int) ((0ULL) * (0ULL))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 ^= ((/* implicit */unsigned char) (+(arr_1 [i_0 - 1])));
                var_22 = ((max((arr_3 [i_0] [i_0 + 1] [i_1]), (arr_3 [i_0] [i_0 - 1] [i_1]))) / (((((/* implicit */_Bool) 8ULL)) ? (arr_3 [i_0 + 1] [i_0 - 1] [i_1]) : (arr_3 [i_0] [i_0 + 1] [i_1]))));
                var_23 = ((((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (var_6) : (arr_1 [i_0 + 1]))) + (((arr_0 [i_0 + 2]) * (var_13))));
                var_24 += ((/* implicit */unsigned long long int) var_5);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 3; i_2 < 9; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 4; i_3 < 9; i_3 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 4) 
                {
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) max((180427506625215118ULL), (((/* implicit */unsigned long long int) var_14)))))))) ^ (((/* implicit */int) var_14))));
                    var_26 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (-(arr_10 [i_3] [(_Bool)0])))) ? (((/* implicit */int) ((13608674363704265814ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)30)))))) : (((/* implicit */int) ((180427506625215118ULL) >= (var_13)))))) * ((-(((/* implicit */int) var_19))))));
                    arr_11 [i_2] [i_3] [7] = (((-((-(var_4))))) / (max((((((/* implicit */unsigned long long int) var_3)) * (var_13))), (10957142190245896320ULL))));
                    var_27 = ((/* implicit */int) (_Bool)0);
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    var_28 ^= (((~(var_18))) >> (((var_9) - (12135668239704598963ULL))));
                    arr_14 [i_2] [i_2] [i_5] [i_5] = ((/* implicit */int) ((arr_0 [i_5]) >= ((-(arr_9 [i_5] [i_5] [i_5])))));
                    var_29 = ((/* implicit */unsigned long long int) (unsigned char)169);
                }
                for (unsigned char i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (int i_8 = 0; i_8 < 10; i_8 += 2) 
                        {
                            var_30 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (~(((/* implicit */int) var_17))))) ? (((/* implicit */int) arr_16 [i_3 - 2] [i_3 - 2])) : ((~(((/* implicit */int) (unsigned char)202))))))));
                            arr_23 [i_8] [i_6] [i_6] [i_7] = ((/* implicit */unsigned char) (((~(4611686018427387888ULL))) >> ((((~(var_0))) - (1938590096126370432ULL)))));
                            var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 35150012350464ULL)))) ? ((-(var_6))) : (180427506625215118ULL)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2]))) < (((unsigned long long int) 13835058055282163727ULL))))) : (((/* implicit */int) arr_21 [i_2] [i_3] [i_6] [i_8]))));
                        }
                        for (int i_9 = 0; i_9 < 10; i_9 += 3) 
                        {
                            var_32 += ((((/* implicit */_Bool) (+(((/* implicit */int) arr_20 [i_2]))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (var_1)))) : ((-(arr_17 [i_2] [i_2 - 2] [i_3 - 1] [i_7]))));
                            var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)255)) << (min((((1271830094520856134ULL) ^ (((/* implicit */unsigned long long int) 2121449918)))), (((/* implicit */unsigned long long int) (_Bool)0)))))))));
                            var_34 = ((((/* implicit */_Bool) arr_17 [i_2] [i_6] [i_3 - 1] [i_6])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (var_3) : (((/* implicit */int) var_14))))) : ((+(arr_18 [i_6]))));
                            var_35 = ((/* implicit */unsigned long long int) var_14);
                        }
                        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                        {
                            var_36 = ((/* implicit */unsigned char) ((((/* implicit */int) max((var_1), (((/* implicit */unsigned char) (_Bool)1))))) != (((/* implicit */int) var_5))));
                            arr_31 [i_6] [i_7] [i_6] [i_2] [i_2] = ((/* implicit */int) (((-(arr_3 [i_2 - 3] [i_7] [i_6]))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8ULL)) ? (((/* implicit */int) (unsigned char)179)) : (((/* implicit */int) (_Bool)0)))))));
                            var_37 = ((/* implicit */unsigned char) min((var_37), (((unsigned char) (_Bool)1))));
                            var_38 ^= ((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) ((var_13) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) var_16)) ? (13ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)54)))))))));
                            var_39 = (_Bool)1;
                        }
                        var_40 = (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) / (var_7))));
                        var_41 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)235))) % (18446744073709551598ULL));
                        var_42 = ((/* implicit */int) var_14);
                        var_43 = ((/* implicit */_Bool) arr_30 [i_2] [i_6] [5ULL]);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 4) 
                    {
                        var_44 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_21 [i_6] [i_3] [i_6] [2ULL])))))));
                        var_45 += ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8906123168500972036ULL)) ? (((/* implicit */int) arr_16 [i_2] [i_2])) : (((/* implicit */int) arr_33 [i_11] [i_11]))))) ^ (18446744073709547520ULL));
                    }
                    var_46 = ((/* implicit */unsigned char) (~(min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) -1562254433)) ? (((/* implicit */unsigned long long int) 355301635)) : (9371573518771207000ULL)))))));
                }
                for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 4) 
                {
                    arr_37 [i_2] [i_3] [0ULL] [0] = ((/* implicit */unsigned long long int) (_Bool)0);
                    arr_38 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) min((13608674363704265814ULL), (((/* implicit */unsigned long long int) (_Bool)0))));
                    arr_39 [i_2] = ((/* implicit */unsigned char) (+(min((((var_13) - (var_9))), (((/* implicit */unsigned long long int) arr_21 [i_3 - 4] [i_3] [i_3] [i_2 + 1]))))));
                    arr_40 [i_2] [i_2] = ((/* implicit */unsigned char) var_0);
                }
                var_47 = ((/* implicit */unsigned char) ((3826348736163677527ULL) * (9828847418987535628ULL)));
            }
        } 
    } 
    var_48 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((!((_Bool)0))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((/* implicit */int) var_14)))))));
}
