/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80637
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
    var_19 = ((/* implicit */_Bool) (-((~(((((/* implicit */int) var_18)) % (((/* implicit */int) var_18))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned int i_2 = 2; i_2 < 11; i_2 += 4) 
                {
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */long long int) var_0)) - (arr_7 [i_0] [i_2 - 2] [i_1 - 2] [i_2]))))));
                    arr_9 [i_0] [i_1 - 1] = ((/* implicit */_Bool) ((arr_2 [i_2 + 2] [i_1 + 1]) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_5 [i_1] [i_1] [3LL]))));
                }
                for (unsigned int i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    var_21 = (~(((/* implicit */int) var_8)));
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (!((!((!(((/* implicit */_Bool) arr_0 [i_3] [i_0])))))))))));
                }
                /* vectorizable */
                for (unsigned int i_4 = 2; i_4 < 11; i_4 += 2) 
                {
                    arr_14 [i_0] [11U] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) (unsigned char)40))));
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_0] [i_1 - 1] [i_4 - 1])) | (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_11 [i_4 - 1] [i_1] [i_0]))))));
                    arr_15 [i_0] [i_1] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_4 + 1] [i_1 - 2] [i_0])) + (((/* implicit */int) (unsigned char)249))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2))));
                    var_24 &= ((/* implicit */int) (_Bool)0);
                    var_25 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_13 [i_1 - 2] [i_4 + 1] [i_1 - 2]))));
                }
                for (unsigned char i_5 = 0; i_5 < 13; i_5 += 4) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_6 - 1] [8U])) ? (((/* implicit */long long int) arr_8 [i_6 - 1] [i_6])) : (7157306183674865465LL)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((_Bool) arr_8 [i_1] [i_0]))))))));
                        var_27 = ((/* implicit */signed char) (-(9U)));
                        var_28 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_13 [i_5] [i_0] [i_0]))));
                        var_29 ^= ((/* implicit */unsigned short) (_Bool)1);
                    }
                    /* LoopNest 2 */
                    for (long long int i_7 = 1; i_7 < 12; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 13; i_8 += 4) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) (((~(-1291634337639424558LL))) - (((/* implicit */long long int) (~(((/* implicit */int) var_16))))))))));
                                arr_26 [i_0] [i_0] [(signed char)4] [i_0] [i_7] = ((/* implicit */unsigned short) -7621569195465402115LL);
                                var_31 = ((/* implicit */short) var_14);
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */int) ((4294967279U) ^ (3118630896U)));
                    var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) ((-1291634337639424558LL) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(1789374875052940324LL)))))))))))));
                }
                /* LoopSeq 4 */
                for (unsigned int i_9 = 1; i_9 < 12; i_9 += 3) 
                {
                    arr_30 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) var_17);
                    var_34 = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)0))) >= (0U))) ? ((-(((/* implicit */int) ((((/* implicit */int) arr_21 [i_1] [i_9 + 1])) < (((/* implicit */int) arr_23 [i_0] [(unsigned char)8] [i_0] [i_0] [12]))))))) : (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) arr_3 [i_0]))))))));
                    var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) ((unsigned int) ((long long int) -5472687160455024218LL))))));
                    var_36 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_18))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_0) - (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))))) : (min((((/* implicit */unsigned int) arr_28 [i_9 + 1] [i_1 - 2] [i_0] [i_0])), (var_7)))));
                }
                for (unsigned int i_10 = 3; i_10 < 11; i_10 += 4) 
                {
                    var_37 = ((/* implicit */_Bool) ((unsigned int) (((-(574944450048348012LL))) / (((5472687160455024202LL) - (((/* implicit */long long int) ((/* implicit */int) (short)-19664))))))));
                    var_38 = max((((arr_33 [i_10 - 2] [i_1 + 1]) * (((/* implicit */long long int) ((/* implicit */int) var_3))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_33 [i_10 - 1] [i_1 - 2]))))));
                    var_39 = (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_32 [i_10] [i_10] [i_10] [i_0])))) ? (((long long int) 1291634337639424551LL)) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (arr_22 [i_0] [i_1] [i_1 - 1] [i_10] [i_10 - 2]) : (((/* implicit */int) (short)0)))))))));
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_40 = ((/* implicit */signed char) (+(((long long int) var_3))));
                    var_41 = ((/* implicit */_Bool) (+(arr_16 [i_11] [i_11] [i_11])));
                    var_42 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_19 [i_11]))));
                    var_43 = ((/* implicit */int) min((var_43), (((/* implicit */int) max((((/* implicit */long long int) ((short) ((((/* implicit */_Bool) arr_21 [i_0] [i_1])) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned short)20018)))))), (((((/* implicit */_Bool) 791553975U)) ? (((/* implicit */long long int) var_1)) : (arr_7 [i_0] [i_1 - 1] [(unsigned char)0] [i_11]))))))));
                }
                /* vectorizable */
                for (short i_12 = 0; i_12 < 13; i_12 += 4) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        for (unsigned int i_14 = 0; i_14 < 13; i_14 += 2) 
                        {
                            {
                                var_44 = ((/* implicit */unsigned int) var_17);
                                var_45 = ((((/* implicit */_Bool) (unsigned char)1)) || (((/* implicit */_Bool) 0)));
                                var_46 *= ((/* implicit */unsigned int) ((var_7) != (((/* implicit */unsigned int) arr_22 [i_0] [i_1 - 2] [i_12] [i_13] [i_14]))));
                                var_47 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)209)) ^ (((/* implicit */int) (signed char)0))));
                            }
                        } 
                    } 
                    arr_43 [i_0] [(_Bool)1] [i_1] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)16326)) >> (((((/* implicit */int) arr_29 [i_0])) - (15856)))));
                    var_48 = ((/* implicit */int) arr_6 [i_0]);
                }
                var_49 &= ((/* implicit */short) arr_28 [i_0] [i_1] [i_0] [(signed char)6]);
            }
        } 
    } 
}
