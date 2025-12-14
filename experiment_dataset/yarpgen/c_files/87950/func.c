/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87950
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((((unsigned int) arr_0 [i_0] [i_0])) >> (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (arr_0 [i_0] [i_0])))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            arr_7 [i_1] [i_0] [i_1] = ((((/* implicit */_Bool) arr_5 [i_0] [i_1 - 3] [5U])) ? (((/* implicit */int) ((_Bool) arr_5 [i_1] [i_0] [i_0]))) : (((var_1) ? (var_6) : (((/* implicit */int) var_8)))));
            var_10 = var_2;
        }
    }
    for (int i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        arr_12 [i_2] [i_2] = ((/* implicit */unsigned short) var_7);
        var_11 = ((/* implicit */signed char) var_5);
        /* LoopSeq 1 */
        for (int i_3 = 2; i_3 < 19; i_3 += 3) 
        {
            var_12 = arr_14 [i_2];
            var_13 = ((/* implicit */unsigned int) ((int) var_4));
            var_14 *= ((/* implicit */unsigned char) arr_10 [i_2]);
        }
        var_15 ^= ((((/* implicit */int) var_7)) | (((int) var_9)));
    }
    for (signed char i_4 = 2; i_4 < 11; i_4 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_4] [i_4] [i_4])) + (((var_7) ? (((/* implicit */int) ((signed char) arr_1 [10LL] [i_4]))) : (((/* implicit */int) ((_Bool) arr_2 [i_4])))))));
        /* LoopSeq 3 */
        for (int i_5 = 0; i_5 < 13; i_5 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_6 = 2; i_6 < 9; i_6 += 3) 
            {
                arr_25 [i_4] [i_4] [i_6] [i_4] = ((/* implicit */unsigned char) ((var_6) * (((/* implicit */int) ((_Bool) ((int) var_8))))));
                arr_26 [i_4] [i_4] [i_6] = ((/* implicit */unsigned long long int) ((long long int) arr_24 [i_4] [i_5] [i_5]));
                var_17 &= ((/* implicit */unsigned int) ((((unsigned int) arr_5 [i_5] [i_5] [i_5])) == (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                arr_27 [i_6] [i_5] [i_5] = ((/* implicit */signed char) ((unsigned int) (((((_Bool)0) && (((/* implicit */_Bool) 173000716)))) ? (((unsigned int) arr_11 [i_6])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [(_Bool)0] [(_Bool)0] [(_Bool)0] [(_Bool)0]))))));
                var_18 &= ((/* implicit */unsigned char) ((var_7) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
            }
            /* LoopNest 2 */
            for (unsigned char i_7 = 0; i_7 < 13; i_7 += 1) 
            {
                for (int i_8 = 2; i_8 < 12; i_8 += 4) 
                {
                    {
                        var_19 *= ((/* implicit */unsigned int) ((var_6) == (((((arr_32 [i_8] [i_7] [i_5] [i_8]) ^ (var_6))) - (((((var_6) + (2147483647))) << (((/* implicit */int) arr_28 [(unsigned char)4] [i_7] [i_8]))))))));
                        var_20 = ((/* implicit */unsigned long long int) arr_5 [i_4 - 2] [i_4 - 2] [i_8]);
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (int i_9 = 1; i_9 < 10; i_9 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_10 = 0; i_10 < 13; i_10 += 1) 
                {
                    for (int i_11 = 0; i_11 < 13; i_11 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned int) var_8);
                            var_22 += ((/* implicit */_Bool) ((int) ((int) var_6)));
                            arr_44 [i_4] [(unsigned char)12] [i_10] [(unsigned char)12] [(unsigned char)12] [i_11] = ((/* implicit */unsigned long long int) var_6);
                            var_23 = ((int) var_1);
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) var_4))));
                var_25 -= ((/* implicit */unsigned int) ((int) ((int) arr_37 [i_4] [i_5] [(unsigned char)7])));
                var_26 = ((/* implicit */int) ((((_Bool) ((_Bool) arr_14 [i_5]))) ? (((unsigned int) var_4)) : (((((/* implicit */_Bool) arr_4 [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_2) && (((/* implicit */_Bool) 2411401589U)))))) : (((unsigned int) var_7))))));
            }
            /* vectorizable */
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
            {
                var_27 |= ((/* implicit */unsigned int) ((((/* implicit */int) var_7)) < (((((/* implicit */int) var_5)) | (((/* implicit */int) var_1))))));
                arr_48 [i_4] [i_4] [i_12] = ((/* implicit */unsigned long long int) ((long long int) var_1));
                var_28 -= ((/* implicit */unsigned long long int) arr_2 [i_4]);
                var_29 &= ((/* implicit */unsigned char) var_1);
            }
            for (int i_13 = 0; i_13 < 13; i_13 += 1) 
            {
                var_30 = ((/* implicit */unsigned int) ((short) 4294967295U));
                arr_53 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) var_9);
                arr_54 [i_4 + 1] [i_5] [i_4 + 1] = ((/* implicit */signed char) var_9);
            }
        }
        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
        {
            var_31 = ((/* implicit */_Bool) var_4);
            arr_58 [6ULL] [i_14] [0U] = ((/* implicit */int) var_9);
            var_32 = ((/* implicit */unsigned int) var_9);
        }
        for (signed char i_15 = 0; i_15 < 13; i_15 += 2) 
        {
            var_33 = ((/* implicit */unsigned char) ((((unsigned long long int) ((((/* implicit */int) arr_8 [i_15])) > (((/* implicit */int) var_5))))) - (((/* implicit */unsigned long long int) ((int) var_7)))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (int i_16 = 0; i_16 < 13; i_16 += 3) 
            {
                arr_64 [i_4] [i_4] [i_16] = ((/* implicit */int) ((long long int) var_5));
                arr_65 [i_16] = ((/* implicit */short) ((int) var_7));
            }
            for (int i_17 = 0; i_17 < 13; i_17 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_18 = 0; i_18 < 13; i_18 += 1) 
                {
                    for (unsigned long long int i_19 = 1; i_19 < 11; i_19 += 4) 
                    {
                        {
                            arr_75 [i_18] = ((/* implicit */unsigned int) var_9);
                            var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((long long int) ((((((/* implicit */int) var_8)) + (2147483647))) << (((((((/* implicit */_Bool) var_0)) ? (arr_49 [i_19] [i_15]) : (((/* implicit */int) var_9)))) - (1371348365)))))))));
                            var_35 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_17] [i_18] [i_18])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) arr_59 [i_4] [i_4] [i_17])) : (var_4)));
                            var_36 = ((/* implicit */signed char) ((unsigned char) ((unsigned long long int) var_6)));
                        }
                    } 
                } 
                arr_76 [i_4 + 1] = ((/* implicit */long long int) arr_14 [1ULL]);
                var_37 = ((/* implicit */unsigned int) ((int) ((int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_0)))));
                var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) arr_55 [i_15] [i_15]))));
            }
            for (int i_20 = 0; i_20 < 13; i_20 += 1) 
            {
                arr_80 [i_4] [i_4] [i_4] = ((/* implicit */int) ((unsigned char) ((((/* implicit */int) ((short) var_9))) * (((/* implicit */int) ((unsigned char) var_3))))));
                arr_81 [i_4] [(unsigned char)11] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)12526))));
                var_39 = ((/* implicit */signed char) ((arr_35 [3U] [3U] [i_4]) ? (arr_70 [10ULL] [(_Bool)1] [i_15] [i_15] [(signed char)2]) : (((/* implicit */long long int) arr_49 [i_4] [i_4]))));
                var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) arr_2 [i_4]))) < (((/* implicit */int) var_2)))))));
                /* LoopNest 2 */
                for (int i_21 = 3; i_21 < 12; i_21 += 1) 
                {
                    for (int i_22 = 1; i_22 < 12; i_22 += 1) 
                    {
                        {
                            arr_88 [i_4] [i_15] [i_4] [(signed char)9] [i_15] [i_21] [i_21] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_4])) ? (((/* implicit */unsigned int) ((int) var_4))) : (((unsigned int) var_6))))) ? (((/* implicit */unsigned long long int) arr_19 [i_21] [i_21])) : (((((/* implicit */_Bool) var_5)) ? (((var_3) | (((/* implicit */unsigned long long int) arr_10 [i_22])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                            arr_89 [i_21] [i_15] [i_20] [i_15] [i_21] [i_15] [i_20] = ((/* implicit */unsigned int) var_2);
                        }
                    } 
                } 
            }
            var_41 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2024716314)) ? (((/* implicit */int) (short)-12541)) : (1136050079)))) <= (((unsigned long long int) ((unsigned int) var_9)))));
        }
        var_42 -= ((/* implicit */long long int) ((int) ((((/* implicit */unsigned long long int) ((long long int) var_8))) * (arr_41 [i_4 + 1] [i_4] [i_4 + 1] [i_4] [i_4]))));
    }
    for (int i_23 = 0; i_23 < 22; i_23 += 3) 
    {
        var_43 -= ((((/* implicit */_Bool) var_3)) ? (((int) var_9)) : (((/* implicit */int) arr_91 [i_23])));
        arr_92 [(unsigned char)0] [(unsigned char)0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
    }
    var_44 = ((/* implicit */int) ((long long int) ((((/* implicit */int) var_7)) | (((int) var_6)))));
    var_45 &= var_1;
    var_46 += ((/* implicit */_Bool) ((int) var_1));
}
