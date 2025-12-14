/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80980
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) arr_1 [i_0])))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */long long int) ((unsigned short) arr_3 [i_0] [i_1]));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        var_22 ^= ((short) ((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_5 [i_1]) : (arr_5 [i_1])));
                        var_23 = ((/* implicit */unsigned char) arr_6 [(signed char)0] [i_2 - 2] [i_1] [i_0]);
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_5 = 3; i_5 < 14; i_5 += 1) 
                        {
                            var_24 = ((/* implicit */long long int) var_4);
                            var_25 = ((unsigned char) ((((/* implicit */_Bool) (short)-32763)) ? (2969029861714078003ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32763)))));
                            var_26 = ((/* implicit */unsigned int) (((+(((/* implicit */int) (unsigned short)18391)))) % ((-(((/* implicit */int) (short)511))))));
                            arr_17 [i_0] [(unsigned short)10] [i_2] [(unsigned short)10] [i_5] = ((/* implicit */signed char) (+(arr_7 [i_2])));
                            arr_18 [i_0] [i_1] [i_2] [i_4] [i_5] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)64)) ? (((long long int) var_9)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0)))))))))));
                        }
                        /* vectorizable */
                        for (short i_6 = 0; i_6 < 15; i_6 += 2) 
                        {
                            var_27 = ((/* implicit */unsigned char) ((short) (((_Bool)1) ? (var_9) : (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_2 + 3] [i_4])))));
                            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_2 + 3] [i_1] [i_2])) ? (((/* implicit */int) arr_10 [i_2 + 3] [i_1] [i_1])) : (((/* implicit */int) arr_10 [i_2 + 2] [i_1] [i_1]))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 15; i_7 += 2) 
                        {
                            var_29 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_23 [i_2 + 2] [i_2 - 2] [i_2 - 1])) << (((/* implicit */int) arr_23 [i_2 - 1] [i_2 + 1] [i_2 + 1]))))), (((unsigned long long int) arr_1 [i_0]))));
                            var_30 &= ((/* implicit */unsigned char) max(((-(((((/* implicit */_Bool) arr_5 [i_1])) ? (var_9) : (((/* implicit */unsigned long long int) arr_5 [i_7])))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_19 [i_2 - 1] [i_1] [i_2 - 2] [i_2 + 2] [i_4])))))));
                        }
                        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_1] [i_1])) ? (((/* implicit */long long int) ((((arr_5 [i_2]) << (((((/* implicit */int) (short)-4983)) + (4998))))) / (((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_2])))))))) : (arr_22 [i_0])));
                        /* LoopSeq 2 */
                        for (long long int i_8 = 0; i_8 < 15; i_8 += 1) 
                        {
                            var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) 11337093689150659091ULL)) ? ((+(((/* implicit */int) arr_3 [i_2] [i_2 + 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                            arr_27 [i_0] [i_1] [i_1] [i_1] |= ((/* implicit */short) ((((0ULL) - (((/* implicit */unsigned long long int) 463541577U)))) >> (((((int) (-(7109650384558892524ULL)))) + (819602946)))));
                            var_33 = ((/* implicit */long long int) min((((unsigned int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2] [i_4] [i_0]))))), (((/* implicit */unsigned int) (~(((/* implicit */int) ((short) arr_21 [6LL] [i_1] [i_1] [i_1] [i_1]))))))));
                        }
                        for (signed char i_9 = 0; i_9 < 15; i_9 += 3) 
                        {
                            var_34 = ((/* implicit */unsigned char) ((short) ((unsigned short) 15477714211995473630ULL)));
                            var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) ((((unsigned int) arr_10 [i_4] [i_2 + 2] [i_1])) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_28 [i_2 - 1] [i_2 - 1] [i_2] [i_2])))))))));
                            var_36 = min((((/* implicit */long long int) ((short) arr_23 [i_2 + 1] [i_2 - 1] [i_4]))), ((~(arr_6 [i_2 + 3] [i_2 + 3] [i_2 + 3] [i_2]))));
                        }
                    }
                }
            } 
        } 
        var_37 ^= ((/* implicit */long long int) ((((((/* implicit */int) arr_23 [i_0] [i_0] [i_0])) >> (((/* implicit */int) arr_23 [i_0] [i_0] [i_0])))) > (((/* implicit */int) arr_23 [i_0] [i_0] [i_0]))));
    }
    /* vectorizable */
    for (unsigned char i_10 = 0; i_10 < 17; i_10 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_11 = 0; i_11 < 17; i_11 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_12 = 2; i_12 < 16; i_12 += 1) 
            {
                for (unsigned int i_13 = 0; i_13 < 17; i_13 += 3) 
                {
                    {
                        var_38 = ((/* implicit */int) ((unsigned long long int) arr_34 [i_10] [i_10]));
                        arr_43 [(signed char)13] [(signed char)13] [(signed char)13] [i_10] = ((/* implicit */unsigned short) (+(arr_39 [i_12 - 2] [i_12 - 1] [i_12 + 1])));
                        var_39 = ((((/* implicit */_Bool) arr_32 [i_12 + 1] [i_13])) ? (((/* implicit */unsigned int) arr_37 [10U] [i_12 - 1] [i_13])) : (var_18));
                    }
                } 
            } 
            var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_35 [i_10] [i_10])) % ((-(((/* implicit */int) var_16))))));
            /* LoopNest 2 */
            for (unsigned char i_14 = 0; i_14 < 17; i_14 += 2) 
            {
                for (short i_15 = 0; i_15 < 17; i_15 += 2) 
                {
                    {
                        var_41 = ((/* implicit */long long int) arr_34 [i_15] [i_15]);
                        var_42 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_33 [i_10] [i_15])) ? (((/* implicit */int) arr_38 [i_10] [i_11] [i_14])) : (((/* implicit */int) arr_38 [i_15] [i_11] [i_15]))));
                        var_43 = ((/* implicit */unsigned long long int) (unsigned char)255);
                        var_44 |= ((/* implicit */unsigned short) (-(2969029861714077993ULL)));
                    }
                } 
            } 
            var_45 = ((/* implicit */long long int) ((unsigned char) arr_47 [i_10] [i_11] [i_11]));
        }
        var_46 &= ((/* implicit */short) ((unsigned short) ((short) var_14)));
    }
    for (unsigned long long int i_16 = 0; i_16 < 15; i_16 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_17 = 0; i_17 < 15; i_17 += 2) 
        {
            var_47 = ((/* implicit */_Bool) arr_39 [i_16] [3U] [i_17]);
            arr_57 [i_16] [i_16] [i_16] = ((/* implicit */long long int) arr_1 [i_16]);
        }
        var_48 = ((/* implicit */unsigned char) min((var_48), (((/* implicit */unsigned char) ((((/* implicit */int) min((arr_50 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16]), (arr_50 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16])))) >> (((((/* implicit */int) arr_50 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16])) - (7805))))))));
        /* LoopNest 2 */
        for (unsigned int i_18 = 0; i_18 < 15; i_18 += 4) 
        {
            for (unsigned char i_19 = 3; i_19 < 13; i_19 += 1) 
            {
                {
                    var_49 &= ((/* implicit */signed char) (+(min((((((/* implicit */_Bool) arr_41 [i_19] [i_16])) ? (arr_58 [i_16]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_19] [i_18] [i_16]))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_49 [i_18] [i_18] [i_18])))))))));
                    /* LoopNest 2 */
                    for (short i_20 = 1; i_20 < 12; i_20 += 1) 
                    {
                        for (unsigned short i_21 = 0; i_21 < 15; i_21 += 1) 
                        {
                            {
                                arr_69 [i_16] [i_18] [i_16] [i_20] [i_20] [i_16] [i_18] = ((/* implicit */unsigned int) (-((((-(((/* implicit */int) var_19)))) / (((/* implicit */int) ((((/* implicit */int) arr_60 [i_20] [i_16])) > (((/* implicit */int) (unsigned short)4)))))))));
                                arr_70 [i_16] [i_18] [i_18] [i_19] [i_16] [i_21] [i_21] = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned int) (+(((/* implicit */int) arr_50 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16]))))) * (((((/* implicit */_Bool) (unsigned char)44)) ? (arr_11 [i_16] [i_16] [i_16] [i_16] [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_16] [i_18] [i_18] [i_18] [i_20 + 1] [i_16])))))))));
                            }
                        } 
                    } 
                    var_50 = (+(((/* implicit */int) min((arr_66 [i_19 - 3] [i_19] [i_16] [i_19] [i_19 - 2]), (((/* implicit */unsigned short) arr_23 [i_18] [i_18] [i_18]))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_22 = 0; i_22 < 15; i_22 += 3) 
        {
            for (short i_23 = 1; i_23 < 13; i_23 += 1) 
            {
                {
                    var_51 = ((/* implicit */_Bool) min((var_51), (((/* implicit */_Bool) ((unsigned short) (((-(((/* implicit */int) (unsigned short)57710)))) - (((/* implicit */int) ((signed char) arr_48 [i_16] [(short)12] [i_23 + 1])))))))));
                    /* LoopSeq 1 */
                    for (short i_24 = 0; i_24 < 15; i_24 += 3) 
                    {
                        var_52 = ((unsigned int) ((((/* implicit */_Bool) arr_14 [i_23 + 2] [i_23 + 1])) ? (((/* implicit */int) arr_14 [i_23 + 1] [i_23 + 2])) : (((/* implicit */int) arr_14 [i_23 - 1] [i_23 + 2]))));
                        var_53 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_28 [i_24] [i_23 + 1] [i_22] [i_16])) ? (((/* implicit */int) ((unsigned char) arr_28 [i_16] [i_22] [i_22] [i_24]))) : (((((/* implicit */_Bool) arr_28 [i_24] [i_23 - 1] [i_22] [i_16])) ? (((/* implicit */int) arr_28 [i_24] [i_23] [i_22] [i_16])) : (((/* implicit */int) arr_28 [i_22] [i_22] [(unsigned char)5] [i_24]))))));
                        var_54 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) 4115146056275268277ULL))) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_14 [i_22] [(unsigned char)5])))) ? (((((/* implicit */_Bool) arr_62 [(signed char)2] [i_16])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65531))) : (arr_42 [i_16] [i_22] [i_23 + 2] [i_16]))) : (((((/* implicit */_Bool) 18406940903734663247ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_66 [(unsigned char)3] [i_23 + 1] [i_16] [i_22] [13U]))) : (var_12)))))) : (((((/* implicit */_Bool) arr_68 [i_24] [i_23 + 1] [i_23])) ? (arr_45 [9LL] [i_22] [i_23 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_16] [i_24])))))));
                        var_55 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_65 [i_23 - 1] [i_23 + 1] [i_23 - 1] [i_23]), (arr_65 [i_23 - 1] [i_23 + 1] [i_23 + 2] [i_23 + 1]))))));
                        var_56 = ((/* implicit */unsigned int) ((unsigned long long int) ((signed char) (+(((/* implicit */int) var_17))))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_25 = 3; i_25 < 12; i_25 += 1) 
                    {
                        for (unsigned short i_26 = 2; i_26 < 13; i_26 += 2) 
                        {
                            {
                                var_57 = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)63)) * (((/* implicit */int) arr_30 [i_16] [i_22] [7ULL] [i_25] [i_16] [i_25] [i_26]))))), (((((/* implicit */_Bool) arr_8 [i_16] [i_16] [i_16] [i_16] [i_16])) ? (var_5) : (((/* implicit */unsigned long long int) arr_76 [i_16] [i_25 - 2] [i_16])))))) / (((unsigned long long int) arr_63 [i_25] [i_25 + 1] [i_25 + 1] [i_26]))));
                                var_58 = ((/* implicit */unsigned char) (-(((unsigned long long int) min((arr_83 [i_16] [i_22] [i_23] [i_16] [i_25 - 1] [i_26 + 2]), (((/* implicit */short) var_6)))))));
                            }
                        } 
                    } 
                    var_59 += ((/* implicit */unsigned char) (+((+(arr_45 [i_23 - 1] [i_23 + 2] [i_23 - 1])))));
                }
            } 
        } 
        var_60 = ((/* implicit */unsigned int) max((var_60), (((((/* implicit */_Bool) ((arr_80 [i_16] [i_16] [i_16] [i_16] [i_16]) - (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((((/* implicit */_Bool) max((arr_40 [i_16] [i_16] [i_16] [i_16] [i_16]), (((/* implicit */unsigned long long int) arr_23 [i_16] [(unsigned char)6] [i_16]))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_50 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16]))))) : (((unsigned int) var_11)))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_16])))))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_27 = 0; i_27 < 15; i_27 += 3) 
    {
        for (unsigned int i_28 = 0; i_28 < 15; i_28 += 2) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_29 = 0; i_29 < 15; i_29 += 4) 
                {
                    var_61 = ((/* implicit */short) ((unsigned int) ((((/* implicit */int) arr_48 [i_28] [i_28] [i_27])) - (((/* implicit */int) arr_0 [i_29])))));
                    /* LoopNest 2 */
                    for (short i_30 = 0; i_30 < 15; i_30 += 4) 
                    {
                        for (short i_31 = 4; i_31 < 12; i_31 += 3) 
                        {
                            {
                                var_62 = ((/* implicit */unsigned short) min((var_62), (((/* implicit */unsigned short) ((signed char) ((short) arr_48 [i_27] [i_30] [i_30]))))));
                                var_63 += ((/* implicit */short) (!(((/* implicit */_Bool) arr_50 [i_31 - 3] [i_31 - 2] [i_31 - 2] [i_31 + 1] [i_31 - 4] [i_31 - 4]))));
                            }
                        } 
                    } 
                }
                for (signed char i_32 = 0; i_32 < 15; i_32 += 4) 
                {
                    var_64 = ((/* implicit */unsigned long long int) ((unsigned char) ((signed char) arr_0 [i_27])));
                    var_65 = ((/* implicit */unsigned short) arr_73 [i_27] [i_27]);
                }
                var_66 = ((/* implicit */short) max((var_66), (((/* implicit */short) (!(((/* implicit */_Bool) ((long long int) arr_78 [i_28] [i_28]))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_33 = 1; i_33 < 14; i_33 += 2) 
                {
                    var_67 ^= ((long long int) arr_82 [i_33 + 1] [i_28] [i_28] [i_33 - 1]);
                    var_68 = ((/* implicit */unsigned char) ((unsigned long long int) ((signed char) var_10)));
                    /* LoopNest 2 */
                    for (unsigned char i_34 = 1; i_34 < 13; i_34 += 2) 
                    {
                        for (unsigned int i_35 = 2; i_35 < 14; i_35 += 1) 
                        {
                            {
                                var_69 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_48 [i_35 - 1] [i_28] [i_33 + 1]))));
                                var_70 = ((/* implicit */_Bool) arr_87 [i_33 + 1] [i_35 - 2]);
                                var_71 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_34 + 1] [i_33] [i_34] [i_35 + 1] [i_35 + 1]))) & (((((/* implicit */_Bool) 2504018245U)) ? (((/* implicit */unsigned long long int) arr_5 [i_33])) : (15477714211995473645ULL))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_72 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)31))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned short)38396))))) : (var_9))));
}
