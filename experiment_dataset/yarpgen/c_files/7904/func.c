/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7904
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
    var_15 |= ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)4))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 4; i_4 < 23; i_4 += 4) 
                        {
                            var_16 -= ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(unsigned short)6] [i_4] [i_4 - 1])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_2] [i_4 + 1])))))) ? (((/* implicit */int) arr_7 [(unsigned short)6] [i_0] [i_1 - 1])) : ((~(((/* implicit */int) arr_11 [i_0] [i_1 + 1] [i_1] [i_2] [i_3] [i_4] [i_2]))))))));
                            var_17 = ((/* implicit */unsigned long long int) (~((~((~(arr_0 [i_2] [i_4])))))));
                        }
                        /* LoopSeq 2 */
                        for (signed char i_5 = 0; i_5 < 24; i_5 += 4) 
                        {
                            var_18 &= ((/* implicit */int) var_3);
                            arr_15 [i_0] [i_2] [i_0] [i_0] [23U] = ((/* implicit */signed char) max((((unsigned long long int) var_5)), (((/* implicit */unsigned long long int) arr_2 [i_1 - 1] [(signed char)9] [i_1]))));
                        }
                        for (unsigned int i_6 = 3; i_6 < 22; i_6 += 4) 
                        {
                            var_19 = ((/* implicit */short) arr_7 [i_2] [i_2] [i_6 - 2]);
                            var_20 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_2] [(short)1]))) & (arr_13 [i_0] [(short)0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_1 [(unsigned short)11])) ? (var_8) : (((/* implicit */unsigned long long int) var_7)))) : (((((/* implicit */_Bool) arr_10 [i_2])) ? (var_9) : (((/* implicit */unsigned long long int) arr_14 [(signed char)21] [i_0] [i_1] [i_0]))))))));
                            arr_18 [i_6] [10ULL] [i_2] [i_1] [i_0] = (+(((((/* implicit */_Bool) 2039772809)) ? (((((/* implicit */_Bool) 2039772802)) ? (((/* implicit */unsigned int) 2039772787)) : (4212029230U))) : (((/* implicit */unsigned int) 2039772806)))));
                            arr_19 [(signed char)9] [i_2] [i_2 - 1] [i_3] = ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_6 [i_1 - 1] [i_6 - 1]), (arr_6 [i_1 + 1] [i_6 + 1]))))) * (var_9));
                        }
                    }
                    for (unsigned int i_7 = 0; i_7 < 24; i_7 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned int) max((max((var_5), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) arr_2 [i_0] [21ULL] [i_2])) : (var_2)))))), (((/* implicit */long long int) (-(arr_5 [(short)0] [i_2] [i_7]))))));
                        /* LoopSeq 4 */
                        for (unsigned char i_8 = 0; i_8 < 24; i_8 += 4) 
                        {
                            var_22 *= ((/* implicit */signed char) ((((long long int) var_8)) << ((((~(((/* implicit */int) arr_1 [i_0])))) - (51)))));
                            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [(unsigned short)20] [i_0] [i_2])) ? (((/* implicit */unsigned long long int) var_6)) : (var_8)))) ? (((/* implicit */long long int) arr_5 [i_0] [i_7] [i_0])) : ((+(var_3)))))) ? (((/* implicit */int) ((max((((/* implicit */long long int) var_1)), (var_3))) == (max((arr_20 [i_1] [i_8]), (((/* implicit */long long int) arr_9 [i_8] [i_8] [15U] [i_2] [i_1 - 1] [i_0]))))))) : (((/* implicit */int) arr_24 [i_2 - 1] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])))))));
                        }
                        for (int i_9 = 0; i_9 < 24; i_9 += 4) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned int) arr_26 [i_0] [i_0]);
                            arr_27 [i_2] [4] [i_2] [i_1] [i_2] = ((/* implicit */signed char) arr_25 [i_0] [i_2] [i_1] [i_2] [i_7] [i_9]);
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 24; i_10 += 4) /* same iter space */
                        {
                            var_25 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2 + 4] [i_1]))) | (arr_25 [i_0] [i_2] [i_2 + 1] [i_2 + 4] [i_10] [i_10]));
                            arr_30 [i_2] [i_7] [i_2] [i_1] [i_0] [i_2] = ((/* implicit */short) var_2);
                            var_26 |= ((/* implicit */short) ((((/* implicit */int) arr_24 [i_10] [i_0] [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_1 + 1] [i_0])) == (((/* implicit */int) var_4))));
                        }
                        for (int i_11 = 0; i_11 < 24; i_11 += 4) /* same iter space */
                        {
                            var_27 = ((/* implicit */short) (+((-(arr_32 [i_1 - 1] [(_Bool)1] [i_1 + 1] [i_1 - 1] [i_2 - 1])))));
                            var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) 13868434420099678832ULL)) ? (18446744073709551593ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))))) / (((/* implicit */unsigned long long int) var_11)))))));
                            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [16ULL] [i_1] [i_11] [i_7]))) / (var_3))), (((/* implicit */long long int) arr_29 [2ULL]))))))))));
                            var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) <= (arr_32 [i_0] [i_1 - 1] [i_2 + 3] [i_7] [i_11])))) | ((+((~(((/* implicit */int) var_10)))))))))));
                            arr_35 [i_2] [i_7] [i_2] = ((/* implicit */short) arr_6 [i_0] [i_2]);
                        }
                        var_31 *= ((/* implicit */short) ((((/* implicit */unsigned int) (+(((/* implicit */int) min(((signed char)72), ((signed char)59))))))) * (((((((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_7])) > (var_11))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_23 [15U] [7ULL] [i_2] [i_2] [i_2] [i_2 + 3] [i_2])), (var_4))))) : (arr_32 [i_1 - 1] [i_1] [i_2] [i_2 - 1] [i_7])))));
                        var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_3))) ? ((~(((/* implicit */int) (signed char)88)))) : (((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [i_0] [5LL] [i_0] [(_Bool)1] [2U])) < (((/* implicit */int) arr_17 [i_0] [i_1 + 1] [i_2 + 2] [i_7] [i_2 + 2] [i_2])))))))) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_7])) : (((/* implicit */int) arr_24 [i_0] [i_1] [i_2 + 4] [i_7] [i_0] [i_2 + 1] [i_1]))))), (((((/* implicit */_Bool) arr_26 [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_7] [i_2] [i_7]))) : (arr_25 [i_0] [i_0] [(signed char)8] [(signed char)10] [i_2] [i_7]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_9 [10U] [3ULL] [10U] [i_2] [i_2] [i_7]))))) ? (((/* implicit */int) arr_17 [i_7] [i_1 + 1] [i_2 + 3] [i_2] [i_2 + 1] [i_2 - 1])) : (((/* implicit */int) var_0))))))))));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_39 [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-76)) ? ((+(82938066U))) : (4212029230U)));
                        arr_40 [i_2] = ((/* implicit */unsigned short) max(((signed char)126), ((signed char)59)));
                    }
                    var_33 |= ((/* implicit */short) (~((~(arr_5 [i_2] [i_0] [i_2 + 4])))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_13 = 0; i_13 < 18; i_13 += 4) /* same iter space */
    {
        var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */int) arr_37 [i_13] [i_13])))) >> (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_25 [i_13] [i_13] [(signed char)6] [i_13] [i_13] [i_13]))) - (59423U)))))) ? ((+(((/* implicit */int) (unsigned short)41274)))) : (max((((int) arr_9 [i_13] [i_13] [(short)9] [i_13] [i_13] [i_13])), (((/* implicit */int) ((unsigned char) arr_16 [i_13] [i_13] [i_13] [i_13] [(short)10] [i_13])))))));
        var_35 = ((/* implicit */int) min((var_35), (((var_14) / ((+(((/* implicit */int) arr_4 [i_13] [i_13] [i_13]))))))));
        /* LoopNest 2 */
        for (signed char i_14 = 2; i_14 < 17; i_14 += 4) 
        {
            for (unsigned int i_15 = 1; i_15 < 16; i_15 += 4) 
            {
                {
                    arr_47 [i_13] [i_14] [i_15] [i_13] = ((/* implicit */int) var_6);
                    var_36 = ((/* implicit */signed char) var_2);
                }
            } 
        } 
        arr_48 [i_13] [i_13] = ((/* implicit */unsigned short) (+(2565219219U)));
    }
    for (unsigned int i_16 = 0; i_16 < 18; i_16 += 4) /* same iter space */
    {
        var_37 *= ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_28 [i_16] [i_16] [i_16] [i_16])) && (((/* implicit */_Bool) var_1)))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_16] [14LL] [i_16])) / (((/* implicit */int) var_13))))))))) + (var_11));
        /* LoopNest 2 */
        for (short i_17 = 0; i_17 < 18; i_17 += 4) 
        {
            for (unsigned long long int i_18 = 4; i_18 < 17; i_18 += 4) 
            {
                {
                    arr_57 [i_16] [2ULL] [2ULL] [i_16] = ((/* implicit */unsigned long long int) max(((~(arr_16 [i_16] [i_18 + 1] [i_18 - 3] [2U] [i_18 - 2] [i_16]))), (((((((/* implicit */_Bool) arr_24 [i_16] [i_17] [i_17] [i_16] [i_17] [i_18] [i_18 - 2])) ? (((/* implicit */int) arr_1 [i_16])) : (((/* implicit */int) arr_23 [i_16] [9ULL] [i_16] [1ULL] [i_17] [i_18] [i_18])))) + (((((((/* implicit */int) arr_10 [i_18])) + (2147483647))) << (((arr_12 [i_18] [i_16] [i_17] [i_17] [(short)22] [i_18] [i_18]) - (667742291U)))))))));
                    var_38 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_42 [i_16])))) < ((~(((((/* implicit */_Bool) arr_31 [i_16] [i_16] [0U])) ? (((/* implicit */unsigned int) arr_5 [i_16] [i_16] [(short)22])) : (var_7)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_19 = 0; i_19 < 18; i_19 += 4) 
                    {
                        for (int i_20 = 0; i_20 < 18; i_20 += 4) 
                        {
                            {
                                var_39 = ((/* implicit */short) ((((/* implicit */_Bool) min(((+(arr_25 [i_16] [i_19] [i_19] [i_18] [2ULL] [i_20]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_16] [(signed char)8])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_41 [(signed char)1] [i_18]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [4LL] [i_20] [i_18 - 3] [i_19] [i_20]))) % (min((((/* implicit */unsigned long long int) var_12)), (arr_43 [i_20] [i_19] [i_16])))))));
                                var_40 = arr_7 [i_16] [i_17] [i_18];
                                var_41 = ((/* implicit */unsigned int) (+(((((/* implicit */int) ((_Bool) arr_8 [i_16] [i_17] [4ULL] [i_16]))) - ((+(((/* implicit */int) arr_61 [i_16] [(unsigned short)4] [i_16] [(unsigned short)4] [i_16] [i_16]))))))));
                            }
                        } 
                    } 
                    arr_62 [i_16] [i_16] [i_18] = (~(((/* implicit */int) (unsigned short)13359)));
                }
            } 
        } 
        arr_63 [i_16] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_16] [i_16] [11LL] [i_16])) ? (((/* implicit */int) var_1)) : (var_2)))) ? (((/* implicit */int) ((var_2) < (arr_45 [i_16])))) : (((/* implicit */int) arr_2 [8U] [i_16] [i_16]))))) ? (((((/* implicit */_Bool) -1518864320)) ? (((/* implicit */int) arr_56 [(unsigned short)8] [i_16] [i_16])) : (((/* implicit */int) ((arr_14 [i_16] [i_16] [i_16] [20ULL]) > (-1518864328)))))) : ((+(((/* implicit */int) var_10))))));
    }
}
