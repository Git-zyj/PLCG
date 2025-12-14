/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62576
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0])) - (((arr_0 [i_0]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_0]))))));
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) var_5))));
    }
    for (unsigned int i_1 = 2; i_1 < 16; i_1 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            arr_10 [i_2] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (139611588448485376LL))) ? (((/* implicit */int) (unsigned char)105)) : (((/* implicit */int) (unsigned short)8))));
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                for (long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_17 [i_1 + 1] [i_1] [i_2] [i_3] [15ULL] [15] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((_Bool)1) ? (139611588448485376LL) : (((/* implicit */long long int) var_11)))))));
                            var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) (((_Bool)1) ? (2937952836U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
                        }
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) var_6))) ? (((long long int) (unsigned short)35686)) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 + 1])))));
                    }
                } 
            } 
        }
        for (long long int i_6 = 0; i_6 < 17; i_6 += 4) 
        {
            arr_20 [i_1] [i_1 - 1] [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)65535))))), (max((((/* implicit */unsigned long long int) var_7)), (arr_13 [0ULL] [i_1 + 1])))));
            arr_21 [i_6] = ((/* implicit */unsigned int) (unsigned short)29826);
            /* LoopNest 2 */
            for (unsigned short i_7 = 3; i_7 < 16; i_7 += 2) 
            {
                for (long long int i_8 = 0; i_8 < 17; i_8 += 4) 
                {
                    {
                        arr_27 [i_8] [i_8] [i_7] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_22 [i_7 - 1] [i_8] [i_7 - 1])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 - 1]))))), (((/* implicit */unsigned long long int) (-(arr_4 [i_1 + 1]))))));
                        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) var_10))));
                    }
                } 
            } 
        }
        for (unsigned short i_9 = 0; i_9 < 17; i_9 += 1) 
        {
            var_19 ^= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_23 [i_1] [i_1 - 1])) || (((/* implicit */_Bool) arr_23 [8U] [i_9])))), (((((((/* implicit */_Bool) (unsigned short)29849)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1 - 1] [i_1 - 1] [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1 - 2]))))) == (((((/* implicit */unsigned int) ((/* implicit */int) (short)-10827))) + (1357014460U)))))));
            var_20 = ((/* implicit */unsigned int) ((unsigned char) ((signed char) ((((/* implicit */int) var_2)) << (((/* implicit */int) arr_1 [i_1]))))));
            arr_30 [i_9] = ((((/* implicit */_Bool) max((((3606631147485434317ULL) & (((/* implicit */unsigned long long int) 0U)))), (((/* implicit */unsigned long long int) ((var_13) + (((/* implicit */long long int) arr_18 [(_Bool)1])))))))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_3 [i_1]), (((/* implicit */unsigned short) (unsigned char)242)))))) : (((long long int) 0U)));
        }
        arr_31 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (max((((/* implicit */unsigned long long int) 139611588448485376LL)), (4340941450546788656ULL)))))) ? (((/* implicit */int) min(((unsigned char)0), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_22 [1ULL] [(signed char)7] [i_1 + 1])))))))) : (((((/* implicit */_Bool) ((short) var_10))) ? (((/* implicit */int) (unsigned char)255)) : ((+(((/* implicit */int) (unsigned char)202))))))));
        var_21 = ((/* implicit */unsigned short) ((signed char) (-(((((/* implicit */int) (unsigned char)128)) ^ (((/* implicit */int) (unsigned char)159)))))));
        var_22 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)3)) & (((/* implicit */int) arr_3 [i_1]))));
        var_23 = ((/* implicit */unsigned long long int) (~(max((min((((/* implicit */int) (unsigned short)65521)), (var_11))), (((/* implicit */int) (!(((/* implicit */_Bool) 5654851399561803452ULL)))))))));
    }
    for (int i_10 = 1; i_10 < 13; i_10 += 4) 
    {
        /* LoopSeq 4 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            arr_37 [i_10] [i_10 - 1] [i_10 - 1] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_26 [i_10] [i_10] [0] [7U] [0])), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)10))) & (max((((/* implicit */unsigned long long int) (short)-7499)), (var_1)))))));
            var_24 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)101)) ? (((/* implicit */int) arr_8 [i_10 + 1] [i_10 - 1])) : (((/* implicit */int) arr_32 [i_10 + 1]))))) <= (var_1));
        }
        /* vectorizable */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) | (((/* implicit */int) arr_29 [(_Bool)1]))));
            /* LoopNest 2 */
            for (unsigned char i_13 = 2; i_13 < 10; i_13 += 4) 
            {
                for (int i_14 = 0; i_14 < 14; i_14 += 4) 
                {
                    {
                        var_26 = ((/* implicit */unsigned char) arr_36 [i_13]);
                        arr_46 [i_10] [i_12] [i_10] [(unsigned short)13] [i_12] |= ((/* implicit */unsigned int) ((unsigned long long int) 288912041U));
                    }
                } 
            } 
        }
        for (signed char i_15 = 0; i_15 < 14; i_15 += 4) 
        {
            var_27 = ((/* implicit */_Bool) arr_16 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]);
            var_28 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)48677))));
            var_29 = ((/* implicit */short) ((((/* implicit */_Bool) max(((~(((/* implicit */int) (short)14336)))), (1923196173)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1371734255510183785ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((18446181123756130304ULL) != (83631059410095817ULL))))))) : (3606631147485434317ULL)));
            /* LoopNest 3 */
            for (unsigned char i_16 = 0; i_16 < 14; i_16 += 4) 
            {
                for (unsigned short i_17 = 0; i_17 < 14; i_17 += 2) 
                {
                    for (unsigned short i_18 = 3; i_18 < 13; i_18 += 4) 
                    {
                        {
                            arr_59 [i_10 + 1] [i_15] [i_10 + 1] [12LL] [i_18 + 1] = ((/* implicit */_Bool) min(((unsigned short)1023), (((/* implicit */unsigned short) (signed char)-59))));
                            arr_60 [i_10] [(_Bool)1] [i_16] [i_17] [i_17] [i_18] = ((/* implicit */signed char) min((((/* implicit */long long int) (unsigned short)13445)), (-6106576935902841413LL)));
                            arr_61 [(unsigned short)11] [i_17] [i_16] [(unsigned short)11] [i_10] = ((/* implicit */unsigned int) ((((var_1) - (((11140904389524764149ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))))) > (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_5)) < (((/* implicit */int) var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (arr_25 [i_16] [i_10 - 1] [i_10 - 1] [i_18 - 3] [i_10 - 1]))))));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            var_30 = ((/* implicit */long long int) (!(((((/* implicit */int) arr_49 [i_10 - 1] [i_10 - 1] [i_10 - 1])) >= (((/* implicit */int) arr_49 [i_10 - 1] [i_10 - 1] [i_10 + 1]))))));
            var_31 = ((/* implicit */signed char) (+(18074757692889371645ULL)));
            var_32 = ((/* implicit */signed char) -383876393);
        }
        var_33 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_54 [i_10] [i_10] [i_10 + 1] [i_10] [i_10 + 1]))))) ? (min((4294967295U), (((/* implicit */unsigned int) (signed char)46)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? ((+((-(741093496))))) : (((/* implicit */int) min(((unsigned char)255), (((/* implicit */unsigned char) ((var_9) || (((/* implicit */_Bool) var_8)))))))));
    }
    for (signed char i_20 = 0; i_20 < 19; i_20 += 4) 
    {
        var_34 = ((/* implicit */unsigned short) 2937952836U);
        var_35 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) var_12)) >> (((/* implicit */int) arr_1 [i_20]))))) | (max((6075748531857876905LL), (((/* implicit */long long int) (signed char)51))))));
        var_36 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (short)-10827)) ? (1006632960U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_20])))))));
        arr_67 [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_20])) - (((((/* implicit */int) (signed char)83)) * (((/* implicit */int) (unsigned short)0))))));
    }
    var_37 = ((/* implicit */signed char) max((((/* implicit */long long int) max((var_11), (((((/* implicit */int) (unsigned char)20)) | (8388480)))))), ((+(-6075748531857876926LL)))));
    var_38 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_0)) ? (var_0) : (var_0))), (((/* implicit */int) var_2))));
}
