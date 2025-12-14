/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75322
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
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_19 += ((short) ((unsigned short) arr_6 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1]));
                    var_20 = ((((/* implicit */int) var_7)) - (((/* implicit */int) ((unsigned short) var_17))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_3 = 0; i_3 < 25; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
        {
            for (unsigned int i_5 = 2; i_5 < 23; i_5 += 2) 
            {
                {
                    var_21 += ((/* implicit */unsigned long long int) ((_Bool) max((((/* implicit */unsigned int) var_4)), (((((/* implicit */_Bool) arr_10 [i_3])) ? (311387532U) : (((/* implicit */unsigned int) var_15)))))));
                    var_22 = ((/* implicit */long long int) ((unsigned long long int) 2663858041351466186LL));
                    var_23 = 3983579764U;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        for (short i_7 = 0; i_7 < 25; i_7 += 1) 
                        {
                            {
                                var_24 = min((max((((/* implicit */long long int) 311387532U)), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_7] [i_6] [i_5] [i_5 + 2] [i_4] [i_3]))) : (var_12))))), (((/* implicit */long long int) ((var_8) | (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))));
                                var_25 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)41082), (((/* implicit */unsigned short) var_7)))))) / (var_10))) >> (((var_11) - (3263465926602947451ULL)))));
                                var_26 ^= ((/* implicit */unsigned int) ((int) 1308386561U));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) min((((/* implicit */int) (((+(var_11))) <= (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 1208498446)) | (arr_17 [i_5] [i_4] [i_4] [i_3] [i_3]))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [8] [8]))) : (arr_12 [i_4] [i_4] [i_4])))) ? (((int) arr_15 [i_3] [i_4] [i_5 + 1])) : (((((/* implicit */_Bool) (short)4223)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)7723)))))))))));
                }
            } 
        } 
        var_28 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_3] [i_3] [i_3] [(unsigned short)19] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_17 [(unsigned short)7] [i_3] [i_3] [(unsigned short)7] [i_3])))) ? (max((arr_17 [i_3] [(_Bool)1] [i_3] [i_3] [i_3]), (((/* implicit */long long int) -1348460139)))) : (arr_17 [i_3] [i_3] [i_3] [i_3] [i_3])));
        /* LoopNest 2 */
        for (short i_8 = 0; i_8 < 25; i_8 += 3) 
        {
            for (short i_9 = 0; i_9 < 25; i_9 += 2) 
            {
                {
                    var_29 = ((/* implicit */unsigned long long int) ((((max((((/* implicit */long long int) -1494027982)), (arr_22 [i_3] [i_8]))) + (9223372036854775807LL))) >> ((((~(((/* implicit */int) (short)23130)))) + (23154)))));
                    var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)12883))))) ? (((/* implicit */int) arr_20 [i_3] [i_3] [i_8] [i_8])) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)18568)) : (((/* implicit */int) arr_15 [i_9] [i_8] [i_3]))))))))));
                    var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((long long int) max((((/* implicit */short) arr_10 [i_9])), ((short)19722)))))));
                }
            } 
        } 
    }
    for (signed char i_10 = 1; i_10 < 21; i_10 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 3) 
        {
            for (unsigned int i_12 = 2; i_12 < 22; i_12 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 1; i_13 < 21; i_13 += 1) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */short) ((((/* implicit */long long int) max(((-(311387532U))), (((/* implicit */unsigned int) arr_15 [i_12 + 1] [i_13 + 1] [i_14]))))) / (((((/* implicit */_Bool) arr_36 [i_14] [i_13 + 1] [i_13] [i_11] [i_13] [i_10] [i_10])) ? (arr_21 [i_13 - 1] [i_12 - 1] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
                                var_33 = ((/* implicit */signed char) ((((unsigned long long int) arr_19 [i_12 + 1] [i_13] [i_13 + 2] [i_13] [i_13 + 2] [i_13 + 2])) + (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_20 [i_11] [i_12 + 1] [0] [i_14]), (arr_20 [i_14] [i_13] [i_11] [13ULL])))))));
                                var_34 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) 4987121159310976267LL)) ? (arr_14 [i_13] [i_12] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [23U]))))))) ? (((/* implicit */int) min((((/* implicit */short) arr_29 [i_10 - 1] [i_10] [i_10])), (var_18)))) : (((/* implicit */int) var_3))));
                            }
                        } 
                    } 
                    var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)49004)) ? (((/* implicit */long long int) ((/* implicit */int) (short)12878))) : (arr_21 [i_10 + 1] [i_10 - 1] [i_12 - 1])))) ? (max((arr_32 [i_10 + 1] [i_12 - 1] [i_12]), (((/* implicit */long long int) arr_36 [i_10] [i_10 - 1] [i_10 - 1] [i_10 - 1] [(short)6] [(short)6] [i_10 + 2])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) var_4)))))));
                    /* LoopNest 2 */
                    for (short i_15 = 0; i_15 < 23; i_15 += 1) 
                    {
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            {
                                var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) (~(((((((/* implicit */_Bool) arr_25 [i_12])) ? (((/* implicit */int) (unsigned short)16516)) : (((/* implicit */int) arr_16 [i_10] [i_12 - 2])))) ^ (((/* implicit */int) ((short) arr_33 [i_15]))))))))));
                                var_37 = ((unsigned short) arr_36 [i_10 + 1] [10] [12] [i_12 - 2] [(short)10] [(short)10] [i_12 - 2]);
                                var_38 ^= ((/* implicit */short) ((unsigned long long int) max((arr_38 [i_10] [i_10] [i_10] [i_10 + 1] [(unsigned char)18]), (arr_38 [i_10] [i_10] [i_10 + 2] [i_10 + 1] [(short)12]))));
                                arr_44 [i_10] [i_10] [i_10] [i_15] [i_16] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_16] [i_12 + 1] [i_11]))))) ? (min((arr_34 [i_16] [i_15] [i_12] [i_11] [i_10 - 1]), (((/* implicit */long long int) 305823645U)))) : (var_5)))) ? (arr_31 [i_12] [i_11] [i_10 + 2]) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)49004)) >> (((/* implicit */int) (_Bool)1)))))));
                                var_39 -= ((/* implicit */unsigned long long int) arr_32 [i_11] [i_11] [i_16]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_17 = 1; i_17 < 22; i_17 += 1) 
                    {
                        for (int i_18 = 2; i_18 < 22; i_18 += 1) 
                        {
                            {
                                var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_10 - 1] [i_10 - 1] [i_17 - 1] [i_18 + 1] [10])) ? (var_15) : (((/* implicit */int) (signed char)69))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_18])) ? (min((arr_26 [i_10] [i_12] [i_10]), (arr_14 [i_10] [20LL] [i_10 - 1]))) : (arr_17 [i_17 - 1] [i_17 - 1] [i_17] [i_17 - 1] [i_17 - 1])))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)247)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_10])))))), (((unsigned long long int) var_14)))))))));
                                var_41 = ((/* implicit */int) max((var_41), (((/* implicit */int) ((((/* implicit */_Bool) arr_37 [i_10] [i_11] [i_10] [i_11] [i_10] [i_17] [(unsigned short)18])) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_17 + 1] [i_12] [17U] [i_10 + 2]))) | (max((((/* implicit */unsigned int) (signed char)74)), (2122330343U))))) : (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_10 [i_10 - 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))))))))));
                                arr_50 [(short)6] [(unsigned short)9] [i_12] [i_11] [i_10] [i_10] = ((/* implicit */int) arr_28 [i_17 + 1]);
                                var_42 = ((/* implicit */int) (-(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_17 + 1] [i_11] [(unsigned short)1]))) + (var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_12 - 2] [i_17 - 1] [i_18 - 2]))) : (max((var_8), (((/* implicit */unsigned int) arr_35 [(short)16]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_19 = 0; i_19 < 23; i_19 += 1) 
        {
            for (unsigned int i_20 = 2; i_20 < 21; i_20 += 2) 
            {
                {
                    var_43 = ((/* implicit */long long int) min((min((((unsigned short) 4425888254969292274LL)), ((unsigned short)41082))), (((/* implicit */unsigned short) ((-4425888254969292274LL) <= (((((/* implicit */_Bool) -93566492)) ? (-2811607566321276091LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21979))))))))));
                    var_44 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_18))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_19 [i_10] [i_10] [20ULL] [i_10] [(short)4] [i_10])) : (((/* implicit */int) (signed char)-69))))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_52 [i_10] [i_19] [i_19]))))), (max((((/* implicit */unsigned long long int) arr_11 [i_10] [i_20])), (arr_54 [16ULL] [i_19] [16ULL] [i_20])))))));
                }
            } 
        } 
        var_45 = ((/* implicit */unsigned short) min((((((/* implicit */int) arr_20 [i_10] [i_10 + 1] [i_10 - 1] [i_10 + 1])) & (((/* implicit */int) arr_20 [i_10 + 2] [i_10 + 2] [i_10 + 2] [i_10])))), (((/* implicit */int) max((((/* implicit */unsigned char) arr_20 [i_10] [i_10 + 1] [(signed char)3] [i_10 + 1])), ((unsigned char)242))))));
        var_46 = ((/* implicit */unsigned char) min((var_46), (arr_11 [i_10] [i_10 - 1])));
        var_47 = ((/* implicit */short) max((var_47), (((/* implicit */short) min((((((/* implicit */_Bool) arr_36 [i_10 + 1] [i_10 + 1] [i_10 - 1] [i_10] [18U] [i_10] [i_10])) ? (3870137122U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_10] [i_10] [i_10] [(short)16] [8U] [i_10 + 2] [i_10]))))), (((/* implicit */unsigned int) ((short) 453252775))))))));
    }
    for (long long int i_21 = 2; i_21 < 11; i_21 += 1) 
    {
        var_48 += ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_7 [i_21 - 2] [i_21 - 2] [i_21 - 2])), (var_11)))) && (((/* implicit */_Bool) min((var_14), (((/* implicit */unsigned long long int) (-(2986580735U)))))))));
        var_49 ^= ((/* implicit */int) ((var_5) / (((/* implicit */long long int) (+(((/* implicit */int) var_16)))))));
        var_50 = ((/* implicit */unsigned int) ((min((((/* implicit */long long int) var_9)), (arr_41 [i_21] [i_21] [i_21] [i_21 + 2] [i_21 - 1] [i_21]))) - (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_21] [i_21] [i_21 + 3] [i_21 - 1] [14LL])))));
    }
    var_51 = ((/* implicit */unsigned char) ((unsigned short) max(((signed char)-29), (((/* implicit */signed char) ((((/* implicit */int) (unsigned char)12)) == (1494027981)))))));
}
