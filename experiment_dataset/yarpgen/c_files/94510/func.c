/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94510
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) min((((/* implicit */int) (((+(((/* implicit */int) (signed char)-122)))) != (((/* implicit */int) min((arr_1 [i_0] [i_0]), (((/* implicit */signed char) (_Bool)1)))))))), (((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_1 [i_0] [i_0]))))))))))));
        var_11 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (15378548809441820323ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_0 [i_0])))) : ((((_Bool)1) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)136)))))));
    }
    for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            var_12 = ((/* implicit */unsigned int) max((((_Bool) arr_4 [i_1] [i_2])), (arr_5 [i_2])));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                for (int i_4 = 3; i_4 < 13; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_2] [i_2] [i_2])) | (((/* implicit */int) arr_5 [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : (max((((/* implicit */unsigned long long int) 2972482992U)), (18446744073709551600ULL)))))));
                            var_14 -= ((/* implicit */int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)204)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)86))) : (arr_13 [i_1] [i_1] [i_3] [i_4] [i_5]))))))), (var_1)));
                            arr_16 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [10] [10] [i_3] [i_3] [i_3]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_14 [i_1] [i_2] [i_3] [i_2]), (((/* implicit */unsigned long long int) var_9))))))))) : ((-(((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_2] [i_2])) ? (arr_10 [(_Bool)1] [(_Bool)1] [i_2] [i_4]) : (arr_14 [i_1] [i_1] [i_1] [i_5])))))));
                        }
                    } 
                } 
            } 
            arr_17 [i_1] [i_2] = ((/* implicit */unsigned long long int) var_3);
            arr_18 [i_2] = ((/* implicit */long long int) min((18446744073709551600ULL), (((/* implicit */unsigned long long int) (unsigned char)14))));
        }
        arr_19 [i_1] = ((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (arr_8 [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */int) arr_4 [i_1] [i_1]))))) ? (((((/* implicit */_Bool) -3811963496874153451LL)) ? (11573065096902308087ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)139))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))))))))));
        arr_20 [i_1] [i_1] = max((var_0), (((((/* implicit */_Bool) 6253828764450837593LL)) ? (14879741243386134689ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
        arr_21 [i_1] = ((/* implicit */signed char) ((max(((~(arr_10 [i_1] [i_1] [i_1] [i_1]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_1] [i_1] [i_1]))))))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) arr_23 [i_6]))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 2) 
        {
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 25; i_8 += 2) 
            {
                for (unsigned int i_9 = 0; i_9 < 25; i_9 += 2) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            arr_34 [i_6] = ((/* implicit */long long int) arr_32 [i_6] [i_8] [i_8] [i_9]);
                            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) var_2))));
                            var_17 ^= ((/* implicit */unsigned int) (+((-(((/* implicit */int) (signed char)70))))));
                        }
                    } 
                } 
            } 
            arr_35 [i_7] = ((/* implicit */unsigned char) var_8);
        }
        for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 1) 
        {
            arr_38 [i_11] [i_11] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) var_5)) >> (((arr_24 [i_6]) - (1169614951U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_6]))) : (((arr_24 [i_6]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_6] [i_11]))))))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_6] [i_6] [14U] [i_6])))));
            arr_39 [i_11] [i_11] [i_11] &= (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_11]))))));
        }
        for (signed char i_12 = 1; i_12 < 24; i_12 += 1) 
        {
            arr_43 [i_6] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) >> (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_28 [i_6] [i_6] [0U] [i_6]))))) | (((arr_22 [i_12]) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_6] [i_12] [i_12]))))))) : (((/* implicit */unsigned long long int) (-(((3811963496874153450LL) << (((((/* implicit */int) (unsigned char)204)) - (204))))))))));
            arr_44 [i_12 + 1] [i_6] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_29 [2] [2] [i_12 - 1]))) > (((((/* implicit */_Bool) ((long long int) arr_26 [i_12] [i_6]))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) % (arr_36 [i_12])))))));
            arr_45 [i_6] [i_6] [i_12] = ((/* implicit */int) ((signed char) (unsigned char)33));
            /* LoopNest 2 */
            for (unsigned long long int i_13 = 4; i_13 < 24; i_13 += 2) 
            {
                for (unsigned char i_14 = 1; i_14 < 22; i_14 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_15 = 0; i_15 < 25; i_15 += 1) 
                        {
                            arr_53 [i_6] [i_6] [i_6] [i_15] [i_6] [i_6] = max(((~(min((var_1), (((/* implicit */unsigned long long int) var_3)))))), (((/* implicit */unsigned long long int) arr_22 [24])));
                            arr_54 [i_15] [i_13 - 1] [i_13 - 1] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_49 [i_12] [i_14 + 1] [i_12] [i_14] [i_15])) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) var_5)) + (((/* implicit */int) arr_30 [i_14] [(_Bool)0]))))), (((long long int) (unsigned char)207))))) : (((((/* implicit */_Bool) ((long long int) var_0))) ? (((/* implicit */unsigned long long int) arr_42 [i_6] [i_6])) : (((((/* implicit */_Bool) arr_33 [(signed char)21] [i_12 - 1] [i_13] [i_14 + 1] [i_14 + 1])) ? (var_6) : (var_8)))))));
                        }
                        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) arr_51 [i_13] [i_6] [i_12 - 1] [i_6] [i_6])) : (((/* implicit */int) arr_48 [i_14 + 1] [i_13 - 1] [i_13] [i_12 + 1] [(_Bool)1] [i_6]))))))))) : ((+((~(var_4))))))))));
                        arr_55 [10] [i_12] [i_12] [i_12] [21LL] = ((/* implicit */int) (-(var_1)));
                    }
                } 
            } 
            arr_56 [i_6] &= ((/* implicit */int) var_7);
        }
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) arr_32 [i_6] [i_6] [i_6] [i_6])) : (max((((/* implicit */unsigned int) ((int) (signed char)(-127 - 1)))), (((((/* implicit */_Bool) arr_31 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_6] [i_6]))) : (arr_42 [i_6] [13U]))))))))));
    }
    var_20 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (+(var_0)))) ? (((/* implicit */long long int) max((-157741429), (((/* implicit */int) (_Bool)1))))) : ((+(5929824408663409397LL)))))));
}
