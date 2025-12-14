/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99812
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
    var_16 = max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)10)))) : (((/* implicit */int) (unsigned short)57344)))), (((((/* implicit */int) max((((/* implicit */unsigned short) var_8)), ((unsigned short)1809)))) - (((/* implicit */int) (unsigned short)1808)))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_17 = ((/* implicit */_Bool) var_5);
        var_18 = ((/* implicit */long long int) (~((~(arr_0 [i_0])))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) 1971585046)))));
        var_20 = (unsigned short)63727;
    }
    for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) 
    {
        var_21 *= ((/* implicit */_Bool) ((unsigned short) var_3));
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2])) ? (arr_6 [(unsigned short)2]) : (((/* implicit */unsigned long long int) var_12))))) ? (((1971585046) + (((/* implicit */int) (unsigned short)0)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)63726)) : (((/* implicit */int) (unsigned short)1808))))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)63727)) == (-1971585071)))) : (((((/* implicit */_Bool) min((((/* implicit */signed char) var_8)), (var_1)))) ? (((((/* implicit */_Bool) 2378680655225408693ULL)) ? (((/* implicit */int) (unsigned short)1806)) : (((/* implicit */int) (unsigned char)201)))) : (((/* implicit */int) (unsigned short)1809)))))))));
        arr_8 [i_2] = ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) % (((/* implicit */int) (signed char)57))))), (arr_6 [(signed char)0]))), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) (unsigned short)1809)) != (1971585046)))))));
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
    {
        arr_11 [i_3] = ((/* implicit */signed char) (unsigned short)4946);
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned short) ((unsigned char) var_5));
        arr_13 [i_3] = ((/* implicit */short) var_0);
    }
    /* LoopSeq 4 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopSeq 3 */
        for (int i_5 = 0; i_5 < 16; i_5 += 2) 
        {
            arr_18 [i_4] = ((/* implicit */int) arr_4 [(unsigned short)21]);
            arr_19 [i_4] [i_4] = ((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)14093)) ? (((/* implicit */int) arr_14 [i_4])) : (((/* implicit */int) var_7)))))), ((~(((/* implicit */int) (!((_Bool)1))))))));
            arr_20 [i_5] &= min((((/* implicit */unsigned short) var_5)), ((unsigned short)1805));
        }
        for (long long int i_6 = 0; i_6 < 16; i_6 += 2) /* same iter space */
        {
            arr_23 [i_6] [i_4] [i_4] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_5 [i_4] [i_6])) ? (((/* implicit */int) (unsigned short)1809)) : (((/* implicit */int) arr_5 [i_4] [i_6])))), (((/* implicit */int) ((((/* implicit */int) arr_5 [i_4] [i_6])) == (-1971585071))))));
            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_15))))) ? (max((arr_4 [i_4]), (((/* implicit */unsigned long long int) (unsigned short)63714)))) : (((arr_4 [i_6]) ^ (arr_4 [i_4])))));
        }
        /* vectorizable */
        for (long long int i_7 = 0; i_7 < 16; i_7 += 2) /* same iter space */
        {
            arr_26 [i_4] [i_4] = ((/* implicit */long long int) arr_14 [i_4]);
            arr_27 [i_4] = ((/* implicit */_Bool) arr_22 [i_7] [i_4]);
        }
        arr_28 [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned short)11804))))))) ? (((int) max((((/* implicit */long long int) (unsigned short)63721)), (arr_16 [(_Bool)1] [i_4] [i_4])))) : (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) arr_5 [i_4] [(unsigned char)12])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)93)))) : (((/* implicit */int) var_5))))));
        /* LoopNest 2 */
        for (unsigned char i_8 = 0; i_8 < 16; i_8 += 2) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 2) 
            {
                {
                    arr_33 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */signed char) arr_30 [i_4]);
                    var_24 &= ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (-1971585071) : (((/* implicit */int) min(((unsigned short)1809), (((/* implicit */unsigned short) (unsigned char)117))))))));
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 16; i_10 += 4) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 16; i_11 += 4) 
                        {
                            {
                                arr_41 [i_4] [i_8] [(unsigned short)6] [i_4] [i_11] [i_9] [i_8] = ((/* implicit */unsigned short) ((((((_Bool) (unsigned char)163)) || (((/* implicit */_Bool) arr_25 [(unsigned char)3] [i_8])))) && (((/* implicit */_Bool) ((long long int) arr_30 [i_4])))));
                                var_25 = ((/* implicit */_Bool) (unsigned char)130);
                                var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((1653562986332788505ULL) >> (((((/* implicit */int) var_9)) - (37056)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 16793181087376763120ULL)) ? (((/* implicit */int) (signed char)-24)) : (((/* implicit */int) (short)24966))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_14 [i_9])), (arr_32 [i_4] [i_4] [i_10] [(short)14])))) : (((((/* implicit */_Bool) 2451042144540833709LL)) ? (((/* implicit */int) arr_34 [i_4] [i_8] [i_8] [i_9] [i_10] [i_11])) : (((/* implicit */int) var_15)))))) : ((((+(((/* implicit */int) (unsigned short)1809)))) * (((/* implicit */int) min(((unsigned char)176), (((/* implicit */unsigned char) var_8)))))))));
                            }
                        } 
                    } 
                    arr_42 [i_4] = ((/* implicit */unsigned char) ((int) (short)11163));
                    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) arr_7 [i_4] [(unsigned char)9]))) ^ (((/* implicit */int) (unsigned char)252))))) ? (((/* implicit */int) var_10)) : (min((var_11), (var_13)))));
                }
            } 
        } 
        arr_43 [i_4] [8LL] |= ((/* implicit */unsigned long long int) (signed char)-37);
    }
    for (unsigned short i_12 = 0; i_12 < 12; i_12 += 4) 
    {
        /* LoopNest 3 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            for (unsigned short i_14 = 0; i_14 < 12; i_14 += 2) 
            {
                for (unsigned short i_15 = 0; i_15 < 12; i_15 += 4) 
                {
                    {
                        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)10110)) : (((/* implicit */int) (short)11163))));
                        var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) (short)11174))));
                        arr_57 [(unsigned char)0] [i_13] [i_13] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_4 [i_13]) ^ (arr_4 [i_12])))) ? (((((/* implicit */_Bool) arr_21 [i_13] [i_13])) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_12))) : (((/* implicit */long long int) (~(arr_55 [i_12] [(short)8] [i_14] [i_15] [i_13])))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-121))) == (1653562986332788504ULL)))))));
                        arr_58 [i_13] [i_13] [i_13] [(unsigned short)1] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned short) ((short) max((((/* implicit */unsigned char) var_8)), (arr_15 [i_13] [i_13]))));
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) ((_Bool) var_7)))) ? (((((/* implicit */_Bool) arr_46 [i_12] [i_12])) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) -1971585046)) | (var_2)))) : (arr_39 [(unsigned short)2] [i_14] [i_14] [i_13] [i_12] [i_12] [i_12]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_12), (((/* implicit */long long int) var_15)))))))))));
                    }
                } 
            } 
        } 
        var_31 *= ((/* implicit */unsigned char) (signed char)28);
        var_32 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 16793181087376763111ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (1653562986332788495ULL))) == (((/* implicit */unsigned long long int) var_13))))), (max((((/* implicit */unsigned long long int) arr_55 [(unsigned short)4] [i_12] [i_12] [i_12] [i_12])), (min((((/* implicit */unsigned long long int) 1971585083)), (1653562986332788476ULL)))))));
        var_33 = ((/* implicit */unsigned long long int) (unsigned char)4);
    }
    for (long long int i_16 = 0; i_16 < 23; i_16 += 2) 
    {
        var_34 = ((/* implicit */int) min((min((max((((/* implicit */long long int) (signed char)-53)), (var_4))), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) ((((/* implicit */_Bool) 1971585083)) ? (var_11) : (((((/* implicit */_Bool) arr_62 [(unsigned char)6] [i_16])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_7 [i_16] [i_16])))))))));
        var_35 = arr_62 [i_16] [i_16];
        var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) arr_6 [i_16]))));
    }
    /* vectorizable */
    for (unsigned short i_17 = 0; i_17 < 17; i_17 += 4) 
    {
        arr_67 [i_17] = ((/* implicit */unsigned char) var_15);
        var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_66 [i_17])))))));
        arr_68 [i_17] &= var_15;
        arr_69 [i_17] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_61 [i_17]))) ? (arr_63 [i_17]) : (((/* implicit */int) arr_5 [i_17] [i_17]))));
    }
}
