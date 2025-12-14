/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63961
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
    var_10 = ((/* implicit */signed char) var_6);
    var_11 = (+(((/* implicit */int) (unsigned char)109)));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 ^= ((/* implicit */unsigned short) max((((/* implicit */long long int) (!(((_Bool) arr_1 [(unsigned char)20] [i_0]))))), (-6257058669829186073LL)));
        arr_2 [i_0] = ((/* implicit */_Bool) ((((int) arr_0 [i_0] [i_0])) ^ (((/* implicit */int) (unsigned short)18627))));
        var_13 = ((/* implicit */int) ((((/* implicit */unsigned long long int) max(((+(((/* implicit */int) var_8)))), (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_0 [i_0] [i_0])))))))) - (arr_0 [19LL] [i_0])));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((int) var_6))))))));
            arr_6 [i_0] [i_1] = ((/* implicit */short) (+((((_Bool)1) ? (var_5) : (var_5)))));
            var_15 = ((unsigned char) ((-739821172) / (((/* implicit */int) arr_3 [i_0] [i_0]))));
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) >= (arr_1 [i_0] [i_1])));
        }
        /* vectorizable */
        for (long long int i_2 = 2; i_2 < 20; i_2 += 4) 
        {
            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((arr_9 [i_2 + 1] [i_2 + 1] [i_2 - 1]) != (arr_9 [i_2 - 1] [i_2 + 1] [i_2 - 2]))))));
            var_18 = ((/* implicit */unsigned char) arr_7 [i_2] [i_2] [i_2]);
            var_19 -= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)16976))))) > (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_9 [i_2] [i_2 - 2] [i_2])) <= (arr_8 [i_0] [0U] [i_0]))))));
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                for (long long int i_4 = 1; i_4 < 19; i_4 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_7 [i_0] [i_4] [i_0])) && (((/* implicit */_Bool) (unsigned short)48569)))) ? (((((/* implicit */_Bool) -7775577220314881650LL)) ? (((/* implicit */int) (unsigned short)44026)) : (((/* implicit */int) (short)-13443)))) : ((+(((/* implicit */int) (unsigned char)53))))));
                        /* LoopSeq 2 */
                        for (short i_5 = 1; i_5 < 20; i_5 += 1) /* same iter space */
                        {
                            arr_18 [13] [i_0] [i_3] [i_4] [(unsigned char)20] = ((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_4 + 1] [i_4]);
                            var_21 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3] [i_2] [i_3]))) : (arr_0 [i_0] [i_2]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0])))));
                        }
                        for (short i_6 = 1; i_6 < 20; i_6 += 1) /* same iter space */
                        {
                            arr_23 [i_0] [i_0] [i_0] [(short)17] [i_0] = ((/* implicit */unsigned char) ((long long int) ((short) arr_20 [i_0] [i_0] [i_6] [i_4] [i_6])));
                            arr_24 [i_0] [i_2 - 2] [i_2] [i_4] [i_6] &= ((/* implicit */unsigned short) ((signed char) arr_17 [i_6] [i_6 - 1]));
                            var_22 = (-(arr_5 [i_0] [i_0]));
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (+(((arr_11 [i_2] [i_2]) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_2] [i_3] [i_6 + 1]))) : ((-9223372036854775807LL - 1LL)))))))));
                        }
                    }
                } 
            } 
            var_24 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 1040707817388695927LL)) ? (((/* implicit */int) arr_10 [i_2 - 1])) : (((1353246773) / (((/* implicit */int) (unsigned char)255))))));
        }
        /* vectorizable */
        for (short i_7 = 0; i_7 < 21; i_7 += 1) 
        {
            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) arr_21 [(signed char)10] [(unsigned short)0] [i_7] [20] [i_7]))));
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 3) 
            {
                for (unsigned short i_9 = 3; i_9 < 19; i_9 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_10 = 0; i_10 < 21; i_10 += 3) /* same iter space */
                        {
                            arr_35 [i_0] [i_7] [i_8] [i_9] [i_10] = ((/* implicit */unsigned int) ((arr_1 [i_0] [i_9 - 1]) + (((/* implicit */int) (unsigned short)61801))));
                            var_26 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_28 [i_7] [i_8]))))));
                            var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((arr_19 [4LL] [4LL] [i_8] [i_0] [i_10]) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_9] [i_7])) ? (((/* implicit */int) (signed char)-104)) : (((/* implicit */int) arr_33 [i_0] [i_7] [i_8] [(signed char)8]))))))))));
                            var_28 ^= ((/* implicit */int) arr_17 [i_9 - 2] [i_9 - 3]);
                        }
                        for (unsigned char i_11 = 0; i_11 < 21; i_11 += 3) /* same iter space */
                        {
                            var_29 = ((/* implicit */signed char) ((_Bool) (unsigned char)178));
                            arr_39 [i_0] [i_0] [19LL] [i_0] [i_0] [i_0] [i_0] = ((var_5) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_11 [i_0] [i_11])) : (((/* implicit */int) (unsigned short)50088))))));
                            var_30 ^= ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) >= (var_0))) && (((/* implicit */_Bool) ((unsigned char) var_9)))));
                            var_31 ^= ((/* implicit */unsigned int) var_8);
                            var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) arr_27 [10ULL]))));
                        }
                        for (unsigned char i_12 = 0; i_12 < 21; i_12 += 3) /* same iter space */
                        {
                            var_33 = ((/* implicit */signed char) ((-4962022228127823636LL) < (((/* implicit */long long int) ((/* implicit */int) (signed char)99)))));
                            arr_43 [i_0] [i_0] [i_8] [i_9] [(signed char)10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-23)) : (((/* implicit */int) arr_34 [i_0] [i_7] [i_8] [i_9]))))) ? (((/* implicit */int) (signed char)27)) : (((/* implicit */int) arr_28 [i_0] [i_0]))));
                            arr_44 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_4)) + (((/* implicit */int) (signed char)-118)))) >= (((/* implicit */int) ((((/* implicit */_Bool) 480863723474845153ULL)) || (((/* implicit */_Bool) arr_30 [i_8] [i_9])))))));
                        }
                        arr_45 [i_0] [i_0] = ((/* implicit */int) arr_3 [i_8] [i_9]);
                    }
                } 
            } 
            var_34 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_22 [4] [i_7] [i_7] [i_7] [i_7]))));
            /* LoopSeq 2 */
            for (unsigned short i_13 = 1; i_13 < 20; i_13 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_14 = 0; i_14 < 21; i_14 += 3) 
                {
                    for (unsigned int i_15 = 0; i_15 < 21; i_15 += 2) 
                    {
                        {
                            var_35 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-53))))) ? (arr_48 [i_0] [i_7]) : ((~(arr_20 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                            var_36 &= ((/* implicit */unsigned short) ((-6702440859253048396LL) & (((/* implicit */long long int) ((unsigned int) (signed char)8)))));
                        }
                    } 
                } 
                var_37 ^= ((/* implicit */unsigned int) (unsigned char)230);
            }
            for (unsigned long long int i_16 = 0; i_16 < 21; i_16 += 1) 
            {
                arr_56 [i_0] = ((/* implicit */unsigned short) ((6346317400493022352ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [18] [i_0] [i_0] [i_0])))));
                var_38 = ((/* implicit */unsigned long long int) (~(arr_48 [i_7] [i_16])));
            }
        }
        for (signed char i_17 = 3; i_17 < 17; i_17 += 1) 
        {
            arr_60 [i_0] = ((/* implicit */_Bool) ((((max((((/* implicit */unsigned int) (unsigned short)14319)), (14U))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_17 + 1] [i_17]))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) 7548397627354939409LL)))))));
            var_39 = ((/* implicit */long long int) (-(max((((/* implicit */unsigned int) (unsigned char)160)), (2574615088U)))));
            var_40 = ((/* implicit */int) max((var_40), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) var_6))) && (((/* implicit */_Bool) ((arr_26 [i_0] [0]) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9169)))))))))) == ((~(arr_5 [0ULL] [i_17 - 2]))))))));
            var_41 -= ((/* implicit */short) 7168U);
        }
        var_42 = arr_48 [i_0] [i_0];
    }
    for (unsigned short i_18 = 3; i_18 < 11; i_18 += 1) 
    {
        var_43 = ((/* implicit */long long int) ((unsigned short) ((int) 21140976)));
        arr_63 [i_18 - 3] = ((/* implicit */int) ((((/* implicit */_Bool) min(((+(((/* implicit */int) arr_21 [i_18] [i_18] [i_18] [i_18 - 2] [i_18])))), (min((((/* implicit */int) (short)-20249)), (-1237270073)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) & (var_5)))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_53 [(unsigned char)6])) : (((/* implicit */int) var_3))))), (((var_2) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [18LL])))))))));
        var_44 = ((/* implicit */unsigned short) max((min((arr_30 [i_18 - 3] [i_18]), (((/* implicit */int) var_1)))), (((((/* implicit */_Bool) arr_30 [(unsigned short)18] [i_18 + 3])) ? (arr_30 [i_18] [i_18 + 2]) : (arr_30 [i_18 + 2] [i_18 + 2])))));
        var_45 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (signed char)-9)), (269659295U)));
    }
}
