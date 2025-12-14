/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81771
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
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        var_13 = (-(8191));
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) 26388279066624LL))));
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (+(((/* implicit */int) var_11)))))));
        var_16 ^= ((/* implicit */long long int) ((unsigned short) 8427399442007776118LL));
        var_17 -= ((/* implicit */unsigned char) arr_0 [(unsigned char)6] [(unsigned char)6]);
    }
    for (short i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        arr_4 [i_1] = ((/* implicit */signed char) (~(((((((/* implicit */int) arr_2 [i_1] [i_1])) - (((/* implicit */int) (unsigned char)138)))) << (((/* implicit */int) (!(((/* implicit */_Bool) 2834851133U)))))))));
        var_18 |= ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) 7538024950583221170LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [(unsigned char)14]))) : (max((arr_0 [(signed char)14] [24]), (((/* implicit */unsigned int) arr_1 [i_1] [0LL])))))));
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) 7538024950583221172LL)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_2)) : (11839120324666001817ULL)))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_12))))) : (-7538024950583221169LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)-4237)))));
        var_20 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) -7538024950583221171LL)) ? ((~((-(arr_3 [(unsigned char)10]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)61318)) != (((/* implicit */int) arr_1 [(unsigned char)8] [(unsigned char)8]))))))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_2 = 2; i_2 < 21; i_2 += 1) 
    {
        var_21 += ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)4196))));
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) -7538024950583221170LL))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (7950420013574401559ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)250)))))) ? (((((/* implicit */_Bool) -7538024950583221170LL)) ? (var_9) : (var_9))) : (((/* implicit */long long int) (~(arr_7 [i_2])))))) : (((/* implicit */long long int) (~(((((/* implicit */_Bool) (signed char)-60)) ? (((/* implicit */int) arr_1 [i_2] [10])) : (((/* implicit */int) (unsigned char)250)))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_3 = 0; i_3 < 22; i_3 += 1) /* same iter space */
        {
            arr_12 [i_3] = ((/* implicit */unsigned short) ((unsigned long long int) (unsigned char)199));
            var_23 = ((/* implicit */signed char) (+(((/* implicit */int) arr_11 [i_2] [i_2 - 2] [i_2]))));
            arr_13 [i_3] = ((/* implicit */short) arr_7 [i_2 + 1]);
        }
        /* vectorizable */
        for (signed char i_4 = 0; i_4 < 22; i_4 += 1) /* same iter space */
        {
            var_24 *= ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned short) (unsigned char)9)))));
            /* LoopSeq 2 */
            for (short i_5 = 0; i_5 < 22; i_5 += 4) 
            {
                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)-4237)) : (((/* implicit */int) arr_15 [i_2] [i_5]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : ((+(7538024950583221170LL)))));
                var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) -2145480256)) ? (arr_16 [i_2] [i_2 - 2] [(unsigned char)5] [(unsigned char)5]) : (arr_16 [i_2] [i_2 - 1] [i_2] [i_2])));
                /* LoopNest 2 */
                for (signed char i_6 = 2; i_6 < 21; i_6 += 2) 
                {
                    for (short i_7 = 2; i_7 < 21; i_7 += 1) 
                    {
                        {
                            var_27 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_2 - 1] [i_6])) ? (arr_22 [i_4] [i_4] [i_6] [i_6 + 1]) : (((((/* implicit */_Bool) (unsigned char)168)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61316)))))));
                            arr_26 [i_7] [i_4] [i_6 - 2] [(_Bool)1] [i_4] [i_4] [i_2] = ((/* implicit */signed char) arr_25 [i_6 - 2]);
                            arr_27 [i_4] [i_6] [i_5] [i_5] [i_5] [i_4] [i_2] = ((/* implicit */unsigned char) (~((+(arr_5 [i_2])))));
                            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) ((short) var_2))) : (((/* implicit */int) arr_15 [i_6 - 2] [i_6 - 2]))));
                            var_29 = ((/* implicit */int) 2894211374U);
                        }
                    } 
                } 
            }
            for (unsigned char i_8 = 0; i_8 < 22; i_8 += 1) 
            {
                var_30 ^= ((/* implicit */_Bool) ((short) var_0));
                var_31 -= ((/* implicit */unsigned int) ((arr_15 [i_4] [21U]) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)71)) ? (1148417904979476480LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32761)))))) : (((((/* implicit */_Bool) arr_9 [i_2] [0ULL] [i_2])) ? (((/* implicit */unsigned long long int) arr_16 [i_2] [i_4] [i_2] [i_2])) : (281474976710655ULL)))));
                arr_30 [(unsigned char)4] [i_8] [i_4] [(unsigned char)4] |= (((_Bool)1) ? (((/* implicit */int) (short)4248)) : (((/* implicit */int) arr_25 [i_2 + 1])));
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_10 = 3; i_10 < 21; i_10 += 3) 
                {
                    arr_35 [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1] [6ULL] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((short) (_Bool)1))) : (((/* implicit */int) var_5)));
                    var_32 -= ((/* implicit */short) ((int) -1148417904979476491LL));
                    /* LoopSeq 2 */
                    for (signed char i_11 = 0; i_11 < 22; i_11 += 4) 
                    {
                        var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551607ULL)) ? ((+(arr_18 [i_9] [i_9] [i_9] [i_9]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2529690178240607170LL)) || (((/* implicit */_Bool) (signed char)85)))))))))));
                        var_34 |= ((/* implicit */short) ((((/* implicit */_Bool) -1669003605359693358LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_2]))) : (arr_10 [i_11] [i_11])));
                        var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_34 [i_9] [i_9] [i_9] [i_9])) ? ((-(((/* implicit */int) arr_29 [i_9] [i_9] [i_4] [i_2])))) : ((+(((/* implicit */int) (_Bool)1))))));
                        arr_39 [i_2] [i_11] = 784124154;
                    }
                    for (unsigned char i_12 = 4; i_12 < 18; i_12 += 3) 
                    {
                        arr_42 [i_2] [i_4] [i_4] [i_10] [i_2] [i_12] = ((/* implicit */unsigned int) (_Bool)1);
                        var_36 += ((/* implicit */unsigned int) ((int) ((arr_8 [i_2]) > (-902985983))));
                    }
                }
                for (unsigned long long int i_13 = 3; i_13 < 21; i_13 += 1) 
                {
                    var_37 = ((/* implicit */unsigned char) ((unsigned long long int) var_6));
                    var_38 |= ((/* implicit */short) (+(((((/* implicit */_Bool) arr_16 [i_13] [i_9] [i_2 - 1] [i_2 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61316))) : (arr_14 [i_2])))));
                }
                var_39 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(arr_16 [i_2 + 1] [i_4] [i_9] [i_9]))))));
                /* LoopNest 2 */
                for (unsigned int i_14 = 4; i_14 < 21; i_14 += 4) 
                {
                    for (unsigned char i_15 = 1; i_15 < 21; i_15 += 1) 
                    {
                        {
                            arr_50 [i_15 - 1] [i_2] [i_4] [i_2] = ((/* implicit */unsigned int) ((signed char) ((short) 1300545143U)));
                            var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) 902985979))));
                            var_41 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)44536)) ? (4364830817276103232ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_15 + 1] [i_14 - 2] [i_2 - 2] [i_2 - 2] [i_2])))));
                        }
                    } 
                } 
                var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_40 [i_2 - 2] [i_2 - 2] [i_2] [(unsigned char)11] [i_2 - 1])) ? (arr_9 [i_2 - 1] [i_9] [i_2 - 1]) : (((/* implicit */int) (signed char)-107))));
                var_43 = ((/* implicit */unsigned char) (+((~(var_6)))));
            }
        }
    }
    /* vectorizable */
    for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
    {
        var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(14081913256433448384ULL)))) ? (((/* implicit */unsigned long long int) arr_0 [i_16] [i_16])) : (16ULL)));
        var_45 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_0 [i_16] [i_16]))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_0 [i_16] [i_16])));
        var_46 *= ((/* implicit */unsigned int) (-(9223372036854775807LL)));
        var_47 -= ((/* implicit */unsigned short) ((signed char) (unsigned char)0));
        var_48 = ((/* implicit */_Bool) arr_1 [i_16] [i_16]);
    }
    var_49 -= ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))) : (17014896780151084981ULL))));
}
