/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63441
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_10 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_2)) / (((/* implicit */int) (unsigned short)31)))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 6; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) var_3))));
                    arr_9 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_4)), (281474976710655LL)))) ? (((/* implicit */int) ((unsigned char) ((unsigned int) var_6)))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_1 + 4] [i_1])) ? (((/* implicit */int) arr_6 [i_0] [i_1 - 2] [i_1])) : (var_6)))));
                }
            } 
        } 
        arr_10 [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) (unsigned char)3))), ((~(((/* implicit */int) (unsigned char)6))))));
    }
    var_12 &= var_6;
    /* LoopSeq 2 */
    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
        {
            for (int i_5 = 0; i_5 < 19; i_5 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_13 = ((/* implicit */long long int) ((int) ((long long int) arr_13 [i_3] [i_3])));
                        var_14 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (var_7))))))) | (2452486089U)));
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 0; i_7 < 19; i_7 += 2) 
                        {
                            arr_22 [i_7] [i_6] [i_5] [i_4] [i_6] [i_3] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_14 [18U]) : (var_8)))) ? (arr_19 [i_3] [i_4] [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_18 [i_6] [i_4] [9ULL] [i_7])))))));
                            arr_23 [(unsigned short)14] [i_6] [i_4] [11ULL] [i_6] [i_7] = (+(var_6));
                            arr_24 [i_3] [i_3] [i_3] [i_7] [i_6] [10] [9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */int) arr_21 [i_3] [i_4] [i_5] [i_6] [(unsigned char)8] [i_5] [11LL]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_3] [(unsigned char)7] [i_5] [i_6] [i_7] [(unsigned short)8] [(unsigned char)8]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_7] [i_7] [i_6] [i_5] [i_4] [i_4] [i_3])))))));
                        }
                    }
                    for (unsigned short i_8 = 0; i_8 < 19; i_8 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_9 = 0; i_9 < 19; i_9 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_4)) ? (arr_18 [i_9] [i_9] [(unsigned short)17] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [7] [3]))))) >= (((((/* implicit */_Bool) 2452486089U)) ? (2452486109U) : (1842481222U)))))), (((unsigned int) arr_28 [(unsigned short)11] [i_4] [i_4] [i_4] [i_4] [i_4]))));
                            var_16 = ((/* implicit */_Bool) ((unsigned short) var_9));
                            var_17 = ((/* implicit */unsigned char) ((_Bool) arr_14 [i_5]));
                        }
                        for (int i_10 = 0; i_10 < 19; i_10 += 3) 
                        {
                            arr_32 [i_10] [i_8] [i_5] [i_4] [i_3] = ((/* implicit */_Bool) var_4);
                            var_18 |= ((/* implicit */_Bool) var_8);
                            arr_33 [i_3] [i_4] [2ULL] [i_8] [13] = ((/* implicit */unsigned char) (_Bool)1);
                            var_19 = ((/* implicit */_Bool) ((unsigned short) var_8));
                        }
                        arr_34 [(unsigned char)8] [i_4] [(_Bool)1] [i_4] = ((/* implicit */int) max((arr_31 [i_3] [i_4] [i_5] [i_5] [i_8]), (((/* implicit */unsigned long long int) ((min((-1722976169863077739LL), (((/* implicit */long long int) arr_26 [i_3] [i_3] [17U] [5ULL] [17U] [i_8])))) / (((/* implicit */long long int) max((var_0), (2452486109U)))))))));
                    }
                    for (unsigned char i_11 = 0; i_11 < 19; i_11 += 4) 
                    {
                        var_20 = min((((unsigned int) var_9)), (max((((((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_3] [i_3] [i_3] [i_5] [i_11] [i_3]))) + (1842481204U))), (((/* implicit */unsigned int) var_6)))));
                        arr_38 [i_3] [1] [i_5] [i_5] [i_11] = arr_12 [i_3];
                        arr_39 [i_11] [0LL] [i_4] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (max((((/* implicit */unsigned long long int) var_4)), ((-(8796093022207ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((18446735277616529408ULL) | (((/* implicit */unsigned long long int) 1842481226U)))))))));
                    }
                    for (int i_12 = 0; i_12 < 19; i_12 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned short) (-((-(min((var_4), (var_3)))))));
                        var_22 -= ((/* implicit */unsigned int) ((unsigned short) var_5));
                        arr_42 [i_3] [i_4] |= ((/* implicit */unsigned long long int) min(((~(var_8))), (((long long int) max((var_4), (((/* implicit */int) arr_17 [i_5] [i_5] [i_12])))))));
                        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((((/* implicit */int) ((_Bool) var_8))) ^ (((((/* implicit */int) arr_12 [i_3])) >> (((arr_28 [i_3] [i_3] [i_4] [i_5] [9] [6LL]) - (4509279692789976962LL))))))) : (((/* implicit */int) max(((!(((/* implicit */_Bool) var_1)))), (arr_29 [i_3] [i_4] [14] [i_12]))))));
                        arr_43 [(_Bool)1] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_35 [(unsigned short)17] [i_4] [i_5] [i_12] [i_4] [i_3])) ? (var_8) : (((/* implicit */long long int) ((((((/* implicit */int) arr_27 [i_3] [i_4] [i_4] [i_5] [i_12])) * (((/* implicit */int) var_7)))) / (var_5))))));
                    }
                    arr_44 [i_3] = ((/* implicit */_Bool) min((min((min((((/* implicit */unsigned int) arr_15 [i_4])), (var_0))), (min((((/* implicit */unsigned int) var_9)), (var_0))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)169)) | (((/* implicit */int) (_Bool)1))))) ? (((int) var_6)) : (var_9))))));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (-(var_1))))));
        arr_45 [i_3] = ((/* implicit */unsigned long long int) max(((+(((int) arr_36 [i_3] [i_3] [i_3] [i_3] [i_3])))), (((/* implicit */int) (unsigned char)250))));
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (unsigned short)64341)) ? (min((((/* implicit */unsigned long long int) arr_15 [i_3])), (8796093022207ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_17 [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_36 [i_3] [i_3] [i_3] [i_3] [i_3]))))))) : (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) 1080863910568919040ULL)) || (((/* implicit */_Bool) var_1))))))));
    }
    /* vectorizable */
    for (unsigned short i_13 = 0; i_13 < 24; i_13 += 2) 
    {
        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) -7399779937081846983LL)) < (((unsigned long long int) var_8))));
        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) arr_47 [i_13] [i_13]))));
        var_28 -= ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_2))) <= (arr_47 [i_13] [i_13])));
        arr_49 [i_13] = ((/* implicit */short) (~(arr_47 [i_13] [(unsigned char)0])));
        /* LoopNest 2 */
        for (unsigned short i_14 = 0; i_14 < 24; i_14 += 4) 
        {
            for (unsigned char i_15 = 0; i_15 < 24; i_15 += 1) 
            {
                {
                    var_29 = ((/* implicit */long long int) ((unsigned char) (unsigned short)0));
                    var_30 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) & (891939285)));
                    /* LoopNest 2 */
                    for (unsigned char i_16 = 0; i_16 < 24; i_16 += 3) 
                    {
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            {
                                var_31 -= ((/* implicit */_Bool) var_8);
                                arr_64 [18U] [i_14] [i_14] [i_15] [i_14] = ((/* implicit */unsigned char) (+((~(18446735277616529409ULL)))));
                                var_32 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_59 [i_15] [i_14] [i_14] [i_14]))));
                                var_33 = ((/* implicit */int) ((long long int) arr_46 [i_13] [i_16]));
                                arr_65 [i_13] [i_15] = ((/* implicit */unsigned char) (~(((arr_52 [i_13] [i_13] [i_13]) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                    arr_66 [i_13] [i_15] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))));
                    var_34 |= ((/* implicit */unsigned short) ((unsigned char) ((arr_47 [i_15] [(_Bool)1]) >> (((var_1) - (13486468126063172619ULL))))));
                }
            } 
        } 
    }
    var_35 = ((/* implicit */int) max((((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_2)), (0U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_5) : (var_4)))) : ((+(var_1))))), (((/* implicit */unsigned long long int) var_9))));
}
