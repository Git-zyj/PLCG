/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8522
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
    var_17 = ((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (var_7)));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_3 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [16LL])) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) min((((long long int) arr_2 [i_0])), (((/* implicit */long long int) ((((/* implicit */int) var_7)) << (((((((/* implicit */int) var_12)) + (7821))) - (25))))))))) : (((unsigned long long int) min((((/* implicit */long long int) arr_2 [i_0])), (arr_1 [i_0])))));
        var_18 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_8) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))))));
        var_19 = ((/* implicit */unsigned short) (+(min((((/* implicit */int) var_5)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_16))))))));
        /* LoopSeq 4 */
        for (unsigned short i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            var_20 = ((/* implicit */short) arr_0 [i_1 - 1]);
            /* LoopSeq 2 */
            for (unsigned short i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                arr_8 [i_2 - 1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) max((var_14), (var_16)))) > (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (var_16))))))) << (((/* implicit */int) var_11))));
                /* LoopNest 2 */
                for (short i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    for (unsigned short i_4 = 3; i_4 < 17; i_4 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) arr_9 [i_4] [i_4] [i_4] [i_4] [i_4 - 2]))) ? (max((((/* implicit */long long int) arr_9 [i_4 - 1] [i_4 - 1] [i_4] [i_4] [i_4 - 1])), (var_9))) : (((/* implicit */long long int) ((/* implicit */int) max((var_12), (((/* implicit */short) arr_9 [i_4] [i_4] [i_4] [i_4] [i_4 - 2]))))))));
                            arr_15 [i_0] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_5 [i_2 + 2]), (arr_5 [i_2 + 1])))) ? (((((/* implicit */int) arr_5 [i_3])) - (((/* implicit */int) arr_5 [i_0])))) : (((/* implicit */int) max((var_6), (((/* implicit */short) arr_5 [i_1 - 3])))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned short) arr_5 [14LL]);
                var_23 = ((/* implicit */short) var_16);
            }
            /* vectorizable */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                arr_18 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_7 [i_1 - 2] [i_1 + 1]) : (((/* implicit */long long int) var_8))));
                arr_19 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) var_13))))));
                var_24 ^= ((/* implicit */unsigned int) var_1);
            }
            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) min(((+(((/* implicit */int) arr_17 [i_0] [i_0])))), (((/* implicit */int) arr_13 [i_0]))))) ? (((long long int) arr_0 [i_0])) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
            arr_20 [i_1] = ((/* implicit */unsigned short) arr_13 [i_0]);
        }
        for (unsigned short i_6 = 1; i_6 < 17; i_6 += 2) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_7 = 0; i_7 < 18; i_7 += 4) 
            {
                var_26 = ((/* implicit */_Bool) arr_7 [i_0] [i_7]);
                var_27 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_16))))) < (((unsigned long long int) var_16))));
            }
            for (unsigned long long int i_8 = 1; i_8 < 16; i_8 += 1) 
            {
                var_28 += ((/* implicit */unsigned long long int) (~((~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_4))))))));
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 18; i_9 += 4) 
                {
                    for (short i_10 = 0; i_10 < 18; i_10 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) var_0))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5))));
                            var_30 = max(((~(((long long int) arr_1 [i_8])))), (min((((((/* implicit */_Bool) arr_23 [i_0] [i_10] [i_10])) ? (arr_1 [i_6]) : (arr_6 [i_9] [i_6] [i_6]))), (((/* implicit */long long int) var_8)))));
                        }
                    } 
                } 
                arr_33 [i_6] [i_8] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_25 [i_0] [i_6 + 1] [i_8 - 1])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) var_14)))), ((-(((/* implicit */int) arr_4 [i_0]))))));
                arr_34 [i_0] |= ((/* implicit */signed char) arr_30 [i_0]);
                var_31 = ((/* implicit */unsigned char) ((((arr_24 [i_0] [i_8] [i_8 - 1] [i_8 + 1]) / (arr_24 [i_8] [i_8] [i_8 + 2] [i_8 + 1]))) * (((/* implicit */long long int) (~(var_8))))));
            }
            var_32 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((((arr_23 [(unsigned char)13] [(unsigned char)13] [i_6]) >= (((/* implicit */int) var_11)))) ? (((/* implicit */long long int) max((((/* implicit */int) arr_2 [i_0])), (arr_31 [i_0] [i_0] [3LL] [i_0] [i_0])))) : (((var_16) ? (arr_7 [i_0] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_6] [i_6]))))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((unsigned char) arr_5 [i_0])))))));
            var_33 ^= ((/* implicit */short) arr_1 [i_0]);
        }
        /* vectorizable */
        for (long long int i_11 = 4; i_11 < 17; i_11 += 2) 
        {
            var_34 += ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_7 [i_0] [i_11 - 2]))));
            arr_39 [i_0] [i_0] |= ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_24 [i_0] [i_11] [i_0] [i_11])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))))));
            var_35 &= ((((/* implicit */_Bool) ((var_16) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((arr_2 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_11]))) : (var_3)))) : (arr_1 [i_11 + 1]));
            /* LoopNest 2 */
            for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 1) 
            {
                for (long long int i_13 = 0; i_13 < 18; i_13 += 3) 
                {
                    {
                        arr_46 [i_12] [i_11] [(_Bool)1] [i_12] [i_13] [i_12] = ((/* implicit */signed char) arr_43 [i_13]);
                        arr_47 [(_Bool)1] [i_11] [i_11] [i_11] [i_0] &= ((/* implicit */unsigned short) arr_12 [16ULL] [i_11 + 1] [i_11 - 4] [i_11 - 4]);
                        var_36 ^= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_6))))) | (((/* implicit */int) arr_2 [i_0]))));
                        var_37 = ((/* implicit */signed char) arr_16 [i_0] [i_11 - 2] [(unsigned char)6]);
                    }
                } 
            } 
        }
        for (unsigned short i_14 = 2; i_14 < 16; i_14 += 2) 
        {
            arr_50 [i_0] [i_0] = ((/* implicit */short) ((arr_2 [i_0]) ? (((/* implicit */int) var_6)) : ((((((~(((/* implicit */int) arr_22 [i_14] [i_0])))) + (2147483647))) << (((max((((/* implicit */int) var_12)), (524287))) - (524287)))))));
            var_38 *= ((((long long int) arr_2 [i_0])) <= (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_4 [i_14 - 2])), (((unsigned char) arr_1 [i_0])))))));
            arr_51 [i_14] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_45 [i_14] [i_14 + 2] [i_14] [i_14 + 2] [i_14] [i_14]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_6 [i_14 + 1] [i_14] [i_14])))) : (arr_6 [i_14 - 2] [i_0] [i_0])));
        }
    }
    for (int i_15 = 2; i_15 < 9; i_15 += 4) /* same iter space */
    {
        var_39 -= ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */int) arr_44 [i_15 - 1] [i_15] [i_15])) | (((/* implicit */int) arr_44 [i_15 + 1] [i_15 + 1] [i_15]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_15])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (arr_7 [i_15] [(short)9]) : (((((/* implicit */_Bool) var_15)) ? (var_2) : (var_2)))))));
        var_40 -= var_11;
        var_41 -= ((/* implicit */unsigned long long int) (~(var_8)));
    }
    for (int i_16 = 2; i_16 < 9; i_16 += 4) /* same iter space */
    {
        var_42 *= ((/* implicit */unsigned short) var_0);
        arr_60 [i_16] = ((/* implicit */unsigned short) arr_31 [i_16] [i_16] [i_16] [(unsigned short)4] [i_16]);
        var_43 = ((((/* implicit */_Bool) arr_37 [i_16 + 2])) || (((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_26 [i_16] [i_16] [i_16 + 1] [i_16]))))), (arr_57 [i_16 - 1] [i_16 - 1])))));
        /* LoopNest 2 */
        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
        {
            for (long long int i_18 = 1; i_18 < 10; i_18 += 4) 
            {
                {
                    var_44 += ((/* implicit */long long int) var_7);
                    /* LoopNest 2 */
                    for (long long int i_19 = 1; i_19 < 10; i_19 += 1) 
                    {
                        for (unsigned short i_20 = 1; i_20 < 7; i_20 += 1) 
                        {
                            {
                                var_45 = ((/* implicit */int) (-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) max((var_15), (arr_40 [i_19 + 1] [i_18] [i_18] [i_16]))))) : (arr_63 [i_16] [i_17])))));
                                var_46 ^= ((/* implicit */unsigned char) max((((/* implicit */long long int) (-(((/* implicit */int) var_16))))), ((+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_57 [i_20] [i_17])))))));
                                var_47 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_7 [i_16] [i_17]), (((/* implicit */long long int) ((int) var_10)))))) ? ((~(((/* implicit */int) min((var_13), (((/* implicit */unsigned short) var_15))))))) : (((/* implicit */int) min((min((((/* implicit */short) var_1)), (var_6))), (((/* implicit */short) arr_5 [i_18 + 1])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        for (long long int i_22 = 0; i_22 < 11; i_22 += 1) 
                        {
                            {
                                arr_77 [5U] [i_17] [i_16 + 1] [i_21] [i_22] [i_18] = ((/* implicit */short) (~(min((max((((/* implicit */long long int) arr_66 [i_17] [i_21])), (arr_55 [(_Bool)1]))), (((/* implicit */long long int) arr_5 [17]))))));
                                arr_78 [i_16 - 2] [i_18] [i_18] [i_21] [i_22] = ((long long int) min((arr_74 [i_16] [i_17] [i_16] [i_18 - 1] [i_22]), (arr_74 [(short)7] [(unsigned char)8] [(unsigned char)8] [i_18 + 1] [i_18])));
                            }
                        } 
                    } 
                    var_48 = ((/* implicit */long long int) arr_26 [i_16 + 1] [i_18] [i_16 + 1] [i_16]);
                }
            } 
        } 
    }
    var_49 = ((/* implicit */long long int) var_13);
}
