/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58539
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
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */int) arr_3 [i_0]);
        var_19 = ((/* implicit */signed char) (+(max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))), (max((var_14), (((/* implicit */unsigned long long int) var_7))))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            arr_9 [i_0] &= ((/* implicit */unsigned int) arr_7 [i_1]);
            arr_10 [i_0] [i_0] [i_1] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) arr_6 [i_1])))), (((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) arr_6 [i_0]))))));
            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_5)), (arr_8 [i_0] [i_1] [i_1])))) ? (var_3) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])))))));
        }
        for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((unsigned short) ((((((long long int) arr_12 [i_2])) + (9223372036854775807LL))) >> (((((/* implicit */int) ((unsigned short) arr_12 [i_2]))) - (56630)))))))));
            arr_13 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) 6441211067952301424ULL);
            arr_14 [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) max((3372305184226104336ULL), (((/* implicit */unsigned long long int) var_10))))) ? (18446744073709551597ULL) : (((/* implicit */unsigned long long int) var_7)))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned int) var_15))))) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)194))))))));
        }
        /* vectorizable */
        for (short i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            var_22 = ((/* implicit */long long int) arr_15 [12U]);
            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)172)) ? (2147483643) : (134217720)));
        }
        /* LoopSeq 1 */
        for (unsigned short i_4 = 1; i_4 < 18; i_4 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                var_24 *= ((/* implicit */unsigned int) ((int) (+(((((/* implicit */_Bool) var_3)) ? (arr_1 [i_4 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))))));
                var_25 = ((/* implicit */unsigned short) var_4);
                var_26 |= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)62)))))) ? (max((((/* implicit */long long int) var_3)), (arr_8 [i_0] [i_4] [i_5]))) : (((/* implicit */long long int) arr_0 [i_0]))))));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_27 = ((/* implicit */long long int) arr_18 [i_6] [i_0] [i_0]);
                arr_26 [i_6] [i_4] [i_0] = ((/* implicit */unsigned int) var_12);
                var_28 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2943623319U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) var_3)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)61)) : (((/* implicit */int) var_18))))) ? (arr_11 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0])) && (((/* implicit */_Bool) var_17))))))))));
            }
            /* LoopSeq 1 */
            for (unsigned char i_7 = 0; i_7 < 19; i_7 += 3) 
            {
                arr_31 [i_0] [i_7] [i_0] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((unsigned short)11503), (((/* implicit */unsigned short) (unsigned char)56))))) ? (((/* implicit */long long int) max((((/* implicit */int) (unsigned char)69)), (((((/* implicit */int) (unsigned char)193)) + (((/* implicit */int) var_18))))))) : (-8175544481220818370LL)));
                arr_32 [i_7] [i_7] [i_7] [4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0])) ? (((/* implicit */int) arr_16 [i_7] [i_4] [i_7])) : (((/* implicit */int) (short)17513))));
                var_29 = ((/* implicit */int) arr_11 [i_7]);
                arr_33 [i_0] [i_4] [i_7] = ((/* implicit */unsigned int) max(((short)-30977), (((/* implicit */short) (signed char)-54))));
            }
        }
    }
    for (signed char i_8 = 0; i_8 < 20; i_8 += 4) 
    {
        var_30 = ((/* implicit */short) -698824724035620944LL);
        var_31 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 3818261293U)) ? (((/* implicit */int) (short)20719)) : (((/* implicit */int) (_Bool)1))))) ? (((arr_34 [i_8]) | (((/* implicit */long long int) var_13)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)49))))) & (((/* implicit */long long int) ((/* implicit */int) var_2)))));
        arr_36 [i_8] = ((/* implicit */short) max((((((/* implicit */_Bool) var_4)) ? (var_14) : (((/* implicit */unsigned long long int) (~(arr_34 [i_8])))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-30973)) >= (((/* implicit */int) arr_35 [i_8] [i_8])))))) | (var_14)))));
        /* LoopSeq 2 */
        for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 4) 
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 20; i_10 += 4) 
            {
                for (unsigned short i_11 = 0; i_11 < 20; i_11 += 4) 
                {
                    {
                        arr_47 [i_8] [i_8] [i_8] = ((/* implicit */short) min((((((/* implicit */_Bool) ((arr_42 [i_9] [i_10]) + (arr_42 [(_Bool)1] [i_11])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)28496))) + (arr_46 [i_8] [i_9] [i_8]))) : (((/* implicit */unsigned long long int) arr_41 [i_8] [i_9] [i_10])))), (((/* implicit */unsigned long long int) var_8))));
                        arr_48 [i_11] [i_9] [i_9] [i_9] [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_8] [i_8])) ? (((/* implicit */int) ((unsigned short) (unsigned short)8239))) : (((((/* implicit */int) var_16)) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) < (var_7))))))));
                        arr_49 [i_8] [i_8] [i_8] [(signed char)9] [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)93))))) ? (((long long int) ((((/* implicit */int) var_18)) <= (((/* implicit */int) (short)32757))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((1403007004U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)30962)))))) ? (((((/* implicit */_Bool) var_10)) ? (arr_40 [i_8] [i_9]) : (((/* implicit */int) var_16)))) : (((/* implicit */int) ((unsigned short) arr_38 [(_Bool)1]))))))));
                    }
                } 
            } 
            arr_50 [i_9] = ((/* implicit */signed char) arr_43 [i_9]);
            var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) >> (((18446744073709551615ULL) - (18446744073709551611ULL))))))));
            var_33 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((/* implicit */short) (_Bool)1)), ((short)-30970)))), (18446744073709551607ULL)));
        }
        for (short i_12 = 3; i_12 < 19; i_12 += 2) 
        {
            var_34 &= ((/* implicit */signed char) ((short) ((max((var_4), (((/* implicit */unsigned int) (short)28033)))) & (((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))))));
            var_35 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65528)) ? (((/* implicit */int) arr_35 [i_8] [i_8])) : (((/* implicit */int) arr_35 [i_8] [i_8]))))), (((unsigned int) (unsigned short)8))));
        }
    }
    for (unsigned int i_13 = 0; i_13 < 25; i_13 += 4) 
    {
        var_36 = ((/* implicit */long long int) max((((unsigned long long int) arr_55 [i_13])), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) (short)-30333)) & (var_1)))))));
        /* LoopSeq 1 */
        for (signed char i_14 = 0; i_14 < 25; i_14 += 4) 
        {
            var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_54 [i_13]) ? (((((/* implicit */int) var_11)) + (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)16384))) : (((((/* implicit */_Bool) ((arr_54 [i_13]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)30973))) : (var_14)))) ? (arr_53 [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))));
            arr_58 [i_13] = ((/* implicit */_Bool) (unsigned short)20);
        }
    }
    for (unsigned int i_15 = 0; i_15 < 20; i_15 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            var_38 = ((/* implicit */unsigned int) min(((-(((((/* implicit */_Bool) arr_46 [i_16] [i_15] [i_15])) ? (((/* implicit */int) arr_39 [i_16] [i_15])) : (var_15))))), (((((/* implicit */_Bool) max((((/* implicit */short) arr_54 [(unsigned char)0])), ((short)-30974)))) ? (((((/* implicit */_Bool) arr_42 [i_15] [i_15])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-30977)))) : (((/* implicit */int) (short)-20102))))));
            /* LoopNest 2 */
            for (unsigned int i_17 = 0; i_17 < 20; i_17 += 1) 
            {
                for (int i_18 = 0; i_18 < 20; i_18 += 1) 
                {
                    {
                        arr_70 [i_17] [i_15] [(unsigned short)14] [i_18] [8U] = ((/* implicit */unsigned int) ((arr_35 [(unsigned short)11] [i_17]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) && ((!(((/* implicit */_Bool) 2891960297U)))))))) : (min((min((((/* implicit */unsigned long long int) var_16)), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) arr_52 [i_15] [i_16]))))));
                        arr_71 [(_Bool)1] [i_17] [i_17] [i_17] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 313470295831316163ULL)) ? (((((/* implicit */_Bool) 4ULL)) ? (1403007013U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-3577))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)58)))));
                        arr_72 [i_15] [i_15] [i_15] [i_15] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 18446744073709551608ULL)) ? (9ULL) : (((/* implicit */unsigned long long int) 6034869034661818523LL))));
                        var_39 = ((/* implicit */short) ((((/* implicit */int) (signed char)-92)) & (((/* implicit */int) (short)15392))));
                        var_40 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), (arr_62 [i_17])))) ? (arr_69 [i_15] [i_15] [i_15] [i_15] [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_60 [i_15])))));
                    }
                } 
            } 
        }
        arr_73 [i_15] [i_15] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) >= (arr_38 [i_15]))))) < (((((/* implicit */_Bool) (unsigned short)65526)) ? (((/* implicit */unsigned long long int) var_13)) : (14319399585338263385ULL))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (short)30962)), (min((((/* implicit */unsigned short) (short)17233)), ((unsigned short)65527)))))) : ((-(arr_56 [i_15] [i_15] [i_15])))));
    }
    var_41 = ((/* implicit */int) var_12);
}
