/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82384
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
    var_20 &= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((((/* implicit */int) (signed char)33)) << (((18446744073709551608ULL) - (18446744073709551586ULL))))) : (((/* implicit */int) var_16))))));
    var_21 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_22 = ((/* implicit */signed char) ((min((arr_1 [i_0]), (arr_0 [i_0]))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)48)))) >> (((((/* implicit */_Bool) 12620967335534170695ULL)) ? (6U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */int) var_3)) * (((/* implicit */int) var_12)))) >= (((/* implicit */int) ((((/* implicit */int) (short)-19871)) >= (((/* implicit */int) arr_2 [i_0] [i_0])))))))) + (max((var_2), (((/* implicit */int) (_Bool)1))))));
                    var_24 = min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)5954)) : (var_2))), ((~(((/* implicit */int) var_8)))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) min((((/* implicit */short) var_1)), (arr_4 [(_Bool)1]))))));
            arr_10 [6U] [10LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [(unsigned char)13])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) min((((/* implicit */unsigned short) var_13)), (var_8))))))) : ((~(((((/* implicit */_Bool) 12934038965191515781ULL)) ? (((/* implicit */unsigned int) 1330082716)) : (3789938396U)))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned int i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                /* LoopSeq 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_17 [i_0] [2ULL] [9] [9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_0] [i_3] [i_3] [i_5] [i_3])) ? ((~(((/* implicit */int) (unsigned short)9797)))) : (((/* implicit */int) ((((/* implicit */int) var_9)) == (((/* implicit */int) arr_6 [i_0])))))));
                    var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_2 [i_0] [i_0])))))))));
                    arr_18 [i_0] [i_0] [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) >= (145231261U));
                }
                for (signed char i_6 = 0; i_6 < 15; i_6 += 2) 
                {
                    var_27 = ((/* implicit */_Bool) ((arr_1 [i_4]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
                    arr_22 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_10);
                }
                var_28 = arr_5 [i_0] [i_3] [i_3] [i_0];
            }
            for (unsigned int i_7 = 1; i_7 < 11; i_7 += 1) 
            {
                var_29 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_24 [i_7 + 4] [i_7] [(short)1] [i_7])), ((unsigned char)255))))) - (((((/* implicit */_Bool) var_10)) ? (max((((/* implicit */long long int) arr_7 [i_0] [i_0] [i_7 - 1] [i_7 + 2])), (arr_20 [i_0] [i_3] [i_3] [i_0] [i_3]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_19)))))))));
                arr_25 [i_7] = ((((((/* implicit */unsigned long long int) arr_19 [10LL] [i_7 + 1] [i_3])) | (18446744073709551615ULL))) ^ (((/* implicit */unsigned long long int) (~(((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (short)(-32767 - 1)))))))));
                var_30 = ((/* implicit */_Bool) min((arr_19 [i_7] [i_3] [i_0]), (((/* implicit */int) arr_12 [2LL]))));
                arr_26 [i_7] [i_7] = ((/* implicit */int) max((max(((~(9903108249248189297ULL))), (((/* implicit */unsigned long long int) (unsigned short)1743)))), (((/* implicit */unsigned long long int) (short)1022))));
            }
            for (long long int i_8 = 0; i_8 < 15; i_8 += 2) 
            {
                var_31 *= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_7 [i_8] [i_3] [i_0] [i_0])))) || (((/* implicit */_Bool) ((max((((/* implicit */int) var_19)), (var_2))) % (((/* implicit */int) arr_13 [i_0] [i_3] [i_8] [i_0])))))));
                var_32 += ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((1336336439U) - (1336336419U)))))) >= (min((((/* implicit */long long int) var_14)), (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                var_33 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_20 [i_8] [i_3] [i_0] [i_0] [i_0])) ? (arr_20 [i_8] [i_8] [12LL] [i_0] [(unsigned short)10]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46467))))), (arr_20 [i_8] [(_Bool)1] [i_3] [11U] [i_0])));
            }
            arr_30 [i_0] = ((/* implicit */signed char) var_1);
        }
    }
    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) /* same iter space */
    {
        arr_35 [i_9] = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_9 + 1] [i_9 + 1])) != (arr_19 [i_9] [i_9] [i_9])));
        arr_36 [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_9])) ? (((/* implicit */int) arr_13 [3LL] [i_9] [i_9] [i_9 + 1])) : (var_17)));
        var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-1043)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)61676)) - (61672)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_24 [i_9 + 1] [i_9] [i_9] [i_9 + 1]))))) : ((~(((12620967335534170695ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))))));
        var_35 = ((/* implicit */unsigned long long int) max((var_35), (var_4)));
    }
    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) /* same iter space */
    {
        var_36 = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) -5916526516055641847LL)) || (((/* implicit */_Bool) arr_8 [i_10])))) ? (max((arr_1 [i_10]), (((/* implicit */unsigned long long int) 499207467)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_10 + 1]))))), (((((/* implicit */_Bool) min((((/* implicit */short) arr_34 [(signed char)14])), ((short)-9340)))) ? (min((((/* implicit */unsigned long long int) arr_19 [i_10 + 1] [(_Bool)1] [(_Bool)1])), (arr_29 [i_10]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
        var_37 -= ((/* implicit */unsigned short) min((min((((/* implicit */long long int) min((((/* implicit */short) var_1)), (arr_9 [i_10])))), (((((/* implicit */_Bool) -1LL)) ? (arr_20 [(_Bool)1] [i_10] [i_10 + 1] [i_10] [i_10]) : (((/* implicit */long long int) arr_7 [(unsigned char)4] [i_10] [i_10] [(unsigned char)4])))))), (((/* implicit */long long int) max((arr_38 [i_10 + 1]), (arr_38 [i_10 + 1]))))));
        var_38 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_5 [i_10 + 1] [i_10] [i_10] [i_10]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))) + (max((((arr_1 [i_10]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned long long int) var_16))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 1) 
    {
        for (unsigned char i_12 = 1; i_12 < 14; i_12 += 1) 
        {
            {
                var_39 &= ((/* implicit */unsigned long long int) ((long long int) (short)-1043));
                arr_44 [i_11] = min((((((/* implicit */long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1))))) + (min((arr_42 [i_11]), (((/* implicit */long long int) var_11)))))), (((((/* implicit */long long int) ((/* implicit */int) var_11))) & (arr_42 [i_12 + 1]))));
                arr_45 [i_11] [i_12 + 3] [i_12 + 3] = ((/* implicit */short) ((min((((((/* implicit */int) var_12)) * (((/* implicit */int) arr_41 [i_11])))), (((/* implicit */int) (short)31293)))) - (min((((/* implicit */int) ((5825776738175380920ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_11])))))), (arr_43 [i_12 - 1] [4])))));
                var_40 += ((/* implicit */unsigned short) min((arr_43 [i_12 - 1] [(_Bool)1]), (((((/* implicit */_Bool) arr_43 [i_12 + 2] [i_12 + 2])) ? (((/* implicit */int) (unsigned short)4601)) : (((/* implicit */int) (unsigned short)14802))))));
            }
        } 
    } 
}
