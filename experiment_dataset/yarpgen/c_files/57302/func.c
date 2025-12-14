/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57302
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
    var_16 &= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)255)) > (((/* implicit */int) (signed char)(-127 - 1)))))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_4)))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) var_13))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_11)) / (((/* implicit */int) var_10))))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned int) ((((/* implicit */long long int) arr_2 [(_Bool)1])) >= (arr_0 [i_0])))))));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((short) var_4)))))) ? (arr_2 [i_0 + 1]) : (var_12)));
        var_18 &= ((/* implicit */short) min((((/* implicit */unsigned short) (signed char)8)), ((unsigned short)50922)));
    }
    for (short i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            var_19 = ((/* implicit */signed char) max((((/* implicit */int) arr_8 [(unsigned short)16] [i_2])), (((((/* implicit */_Bool) (+(-1163556613441697871LL)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((unsigned short) (unsigned short)18829)))))));
            arr_9 [i_1] = ((/* implicit */int) ((signed char) ((((min((-1163556613441697871LL), (((/* implicit */long long int) var_9)))) + (9223372036854775807LL))) >> (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3)))))));
            var_20 = ((/* implicit */long long int) min((var_20), ((+(min((1163556613441697870LL), (((/* implicit */long long int) (short)9792))))))));
        }
        for (long long int i_3 = 4; i_3 < 23; i_3 += 2) 
        {
            var_21 += ((/* implicit */unsigned int) max((-1163556613441697871LL), (((/* implicit */long long int) (unsigned char)8))));
            var_22 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? ((-(((/* implicit */int) var_3)))) : (((((/* implicit */int) arr_10 [22] [i_3] [i_3 - 2])) / (((/* implicit */int) arr_10 [i_3 - 3] [i_3] [i_3 - 3]))))));
            /* LoopNest 3 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (short i_5 = 0; i_5 < 25; i_5 += 2) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_23 |= ((/* implicit */_Bool) arr_20 [i_1] [i_1] [i_1]);
                            var_24 -= ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_21 [i_3] [i_3 - 2] [i_3] [i_3] [i_3 - 2]))))));
                            var_25 = ((/* implicit */_Bool) arr_13 [(unsigned short)14]);
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_7 = 0; i_7 < 25; i_7 += 1) 
            {
                var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [i_1] [i_1] [i_7])) * (((/* implicit */int) ((signed char) -1163556613441697851LL)))));
                var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))));
            }
            for (short i_8 = 0; i_8 < 25; i_8 += 1) 
            {
                var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_11 [(signed char)17] [i_1] [(unsigned char)17])))) ? (((/* implicit */int) arr_13 [(_Bool)1])) : (((((/* implicit */_Bool) (short)-9792)) ? (((/* implicit */int) (unsigned short)63463)) : (((/* implicit */int) (_Bool)1))))))), (min((arr_17 [(_Bool)1] [i_3] [i_8] [i_8]), (((/* implicit */long long int) (+(((/* implicit */int) arr_16 [i_8] [i_8] [i_8] [i_3]))))))))))));
                arr_29 [i_1] = ((/* implicit */unsigned long long int) (~(((((((/* implicit */_Bool) arr_26 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_1]))) : (var_13))) ^ (((/* implicit */unsigned int) min((arr_5 [i_1] [i_1]), (((/* implicit */int) var_0)))))))));
                var_29 &= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) arr_14 [i_3 - 1] [i_3 - 3] [i_3 - 4] [i_3]))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_3 - 1] [i_3 - 1] [i_3 - 3] [i_8])) / (((/* implicit */int) arr_14 [i_3 - 1] [i_3 - 2] [i_3 + 2] [i_8]))))) : (((4294967295U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)241)))))));
            }
            var_30 = ((/* implicit */int) (((~(arr_5 [i_1] [i_1]))) < ((-(((/* implicit */int) arr_19 [(unsigned char)4] [i_3 - 2] [(unsigned char)2] [i_3 - 3] [i_3]))))));
        }
        for (unsigned short i_9 = 0; i_9 < 25; i_9 += 1) 
        {
            arr_32 [i_1] [i_1] [i_1] = (i_1 % 2 == 0) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(1163556613441697870LL)))) ? (((((/* implicit */int) var_3)) << (((((/* implicit */int) arr_25 [i_1])) - (39280))))) : (((/* implicit */int) arr_23 [22LL] [i_9] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_20 [i_1] [i_9] [i_9])))) : (((49041456U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3228)))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(1163556613441697870LL)))) ? (((((/* implicit */int) var_3)) << (((((((/* implicit */int) arr_25 [i_1])) - (39280))) + (30812))))) : (((/* implicit */int) arr_23 [22LL] [i_9] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_20 [i_1] [i_9] [i_9])))) : (((49041456U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3228))))))));
            var_31 = ((/* implicit */_Bool) (+(min((((/* implicit */long long int) arr_10 [i_1] [i_1] [i_1])), (var_8)))));
            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-9788)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)140))))) ? (((/* implicit */int) var_14)) : ((-(((/* implicit */int) (_Bool)1))))))) ? (var_8) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_1] [i_1] [(unsigned short)2] [i_9] [i_9])) ? (arr_12 [i_1] [i_1] [i_1]) : (((/* implicit */int) arr_6 [i_1] [24LL])))))));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 3) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    var_33 += ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) != (1163556613441697870LL)));
                    /* LoopNest 2 */
                    for (short i_12 = 1; i_12 < 24; i_12 += 3) 
                    {
                        for (unsigned short i_13 = 2; i_13 < 22; i_13 += 3) 
                        {
                            {
                                arr_45 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_40 [i_12 + 1] [i_13 - 1] [i_13 + 2]) : (arr_40 [i_12 + 1] [15] [i_13 - 2])))) ? (arr_40 [i_12 + 1] [i_12 + 1] [i_13 + 2]) : (((int) arr_40 [i_12 + 1] [i_12 + 1] [i_13 + 2]))));
                                var_34 = min((((/* implicit */long long int) ((_Bool) arr_14 [i_12 + 1] [i_13 - 1] [i_13] [(short)4]))), ((~(((((/* implicit */_Bool) arr_26 [18])) ? (((/* implicit */long long int) arr_11 [i_1] [17] [i_1])) : (var_4))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_35 = ((/* implicit */unsigned short) min(((~(((/* implicit */int) min((arr_19 [i_1] [i_1] [i_1] [i_1] [i_1]), (var_7)))))), (((/* implicit */int) ((_Bool) ((unsigned char) var_11))))));
        arr_46 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)52763)) ? ((~(((int) arr_11 [i_1] [i_1] [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_5))))))));
    }
    /* vectorizable */
    for (unsigned short i_14 = 0; i_14 < 18; i_14 += 1) 
    {
        var_36 = ((/* implicit */_Bool) (-(arr_17 [i_14] [i_14] [i_14] [i_14])));
        var_37 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) <= (arr_28 [4ULL] [(_Bool)1] [(unsigned short)11])));
        /* LoopNest 2 */
        for (signed char i_15 = 0; i_15 < 18; i_15 += 2) 
        {
            for (long long int i_16 = 1; i_16 < 16; i_16 += 1) 
            {
                {
                    arr_55 [i_14] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 37605539)) ? (-1163556613441697871LL) : (((/* implicit */long long int) 186114224U))))) ? (((((/* implicit */int) arr_50 [i_16 - 1])) & (arr_33 [i_14]))) : (((/* implicit */int) arr_38 [(unsigned short)2] [i_15] [i_14])));
                    /* LoopSeq 1 */
                    for (unsigned short i_17 = 0; i_17 < 18; i_17 += 4) 
                    {
                        var_38 = ((/* implicit */long long int) var_10);
                        var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [i_14])) ? (((/* implicit */int) arr_25 [i_14])) : (((/* implicit */int) arr_25 [i_14]))));
                    }
                    var_40 = ((/* implicit */signed char) ((((/* implicit */int) arr_16 [i_16 + 2] [(signed char)19] [i_16 + 1] [i_14])) >> (((((/* implicit */int) arr_50 [i_16 + 1])) - (237)))));
                    /* LoopNest 2 */
                    for (int i_18 = 2; i_18 < 15; i_18 += 1) 
                    {
                        for (unsigned short i_19 = 3; i_19 < 17; i_19 += 1) 
                        {
                            {
                                var_41 |= ((/* implicit */unsigned char) ((((/* implicit */long long int) (+(((/* implicit */int) arr_8 [i_14] [i_15]))))) < (((var_8) | (((/* implicit */long long int) arr_11 [i_18] [i_15] [i_14]))))));
                                arr_62 [i_14] [i_14] [i_14] [i_18] [i_19] = ((/* implicit */int) (~(arr_18 [i_14] [i_18 - 2] [i_14] [i_19 - 1] [i_19 - 2])));
                                arr_63 [i_14] [i_14] [i_16] [i_16] [i_18] [i_19 - 1] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_13 [18])) ? (((/* implicit */int) arr_22 [i_14])) : (((/* implicit */int) arr_50 [i_14]))))));
                                var_42 = ((((/* implicit */int) arr_7 [i_14] [i_15] [i_19])) ^ (((/* implicit */int) arr_51 [i_14] [(unsigned short)0] [i_15])));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_64 [i_14] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_13 [i_14]))));
        arr_65 [i_14] = ((/* implicit */unsigned int) var_3);
    }
}
