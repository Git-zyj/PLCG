/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57063
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
    var_10 = ((/* implicit */short) ((((unsigned int) max((var_9), (((/* implicit */unsigned short) var_0))))) * (((((/* implicit */_Bool) ((8111581303828277144LL) % (((/* implicit */long long int) var_8))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)7992))))) : (var_7)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 4; i_0 < 6; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) (((~(((/* implicit */int) var_2)))) & (((/* implicit */int) min((var_1), (arr_4 [i_0] [i_0] [i_0]))))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_2 [i_0])), (((unsigned short) var_8))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_5 [i_2])) & (((/* implicit */int) var_6))))))));
                    var_12 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -4952593317984898147LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63180))) : (8111581303828277141LL))) == (((/* implicit */long long int) ((/* implicit */int) max((((unsigned short) arr_5 [i_1])), (((/* implicit */unsigned short) ((_Bool) 8111581303828277130LL)))))))));
                    /* LoopSeq 4 */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) /* same iter space */
                    {
                        arr_9 [i_0] [i_3] [i_2] &= ((/* implicit */unsigned int) arr_7 [i_3] [i_1]);
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned int i_4 = 2; i_4 < 9; i_4 += 2) 
                        {
                            var_13 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0 - 4] [i_4 - 2] [i_4 - 2]))));
                            var_14 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [i_0] [i_3] [i_0] [i_1]))));
                        }
                        /* vectorizable */
                        for (unsigned int i_5 = 0; i_5 < 10; i_5 += 2) 
                        {
                            arr_15 [i_0 + 4] [(_Bool)1] [i_2] [i_2] [i_5] = ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_2 [i_0])) >> (((var_7) - (4272255084U)))))));
                            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_8)))) ? (((((/* implicit */int) arr_1 [i_3])) - (((/* implicit */int) arr_8 [i_3] [i_2] [i_2] [i_2])))) : (((/* implicit */int) arr_1 [i_0 + 4]))));
                            var_16 = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)24830))));
                        }
                        for (long long int i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) min((((/* implicit */unsigned int) arr_8 [(unsigned short)0] [i_3] [(unsigned short)2] [(unsigned short)0])), (((((unsigned int) arr_14 [i_0] [i_0] [(unsigned short)6] [i_3] [i_1])) | (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)30484)) ^ (((/* implicit */int) arr_0 [i_0 - 4] [i_0 + 4]))))))))))));
                            var_18 = ((/* implicit */long long int) var_6);
                            var_19 = arr_11 [i_0] [i_0] [i_0] [i_0] [i_6];
                        }
                        for (unsigned short i_7 = 0; i_7 < 10; i_7 += 3) 
                        {
                            arr_22 [(unsigned short)4] [(unsigned short)4] [i_2] [i_0 - 3] [i_0] [i_0] [(unsigned short)8] = ((/* implicit */short) max((((/* implicit */unsigned int) arr_16 [i_7] [i_1] [i_1] [i_3] [i_7] [i_2] [i_3])), (((((/* implicit */_Bool) arr_20 [i_0 + 2] [i_2] [i_2] [4U] [i_7] [i_1])) ? (arr_20 [i_0] [i_2] [i_2] [i_1] [i_2] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
                            var_20 += ((/* implicit */_Bool) arr_13 [i_0] [i_2] [i_3]);
                            var_21 += ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) var_6))) >> (((((/* implicit */int) var_0)) - (213)))));
                            var_22 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((unsigned char) (_Bool)1))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16757))) : (min((-7230460435030903632LL), (((/* implicit */long long int) 2616294467U))))))));
                        }
                    }
                    for (unsigned int i_8 = 0; i_8 < 10; i_8 += 4) /* same iter space */
                    {
                        arr_26 [i_2] [i_1] [i_2] [i_8] = ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_8 [(_Bool)1] [i_2] [(_Bool)1] [i_8])) + (((/* implicit */int) var_6))))));
                        var_23 = ((/* implicit */unsigned short) max((((short) max((arr_5 [i_2]), ((unsigned short)41810)))), (var_5)));
                    }
                    for (unsigned int i_9 = 0; i_9 < 10; i_9 += 4) /* same iter space */
                    {
                        arr_29 [7U] [i_2] [7U] [i_1] [i_2] [i_9] = ((/* implicit */_Bool) (+(((/* implicit */int) var_0))));
                        var_24 -= ((/* implicit */short) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) max((min((((/* implicit */unsigned int) var_1)), (var_7))), (((/* implicit */unsigned int) var_2)))))));
                        var_25 -= ((/* implicit */unsigned short) arr_2 [i_2]);
                    }
                    for (unsigned int i_10 = 0; i_10 < 10; i_10 += 4) /* same iter space */
                    {
                        var_26 += (+(var_8));
                        arr_34 [i_0] [i_10] [i_2] [i_2] = ((/* implicit */unsigned short) ((unsigned int) (unsigned short)1067));
                        var_27 = ((/* implicit */unsigned short) min((((/* implicit */int) var_6)), ((+(((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)11379))))))));
                    }
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) var_1))) & (((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (var_6))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-17098)) ? (1496208461U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2062)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((long long int) var_8)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) ((var_7) < (var_7))))))))));
    var_29 = ((/* implicit */unsigned int) ((unsigned short) max((max(((unsigned short)42401), ((unsigned short)38364))), ((unsigned short)8363))));
}
