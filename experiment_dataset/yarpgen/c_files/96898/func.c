/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96898
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 18; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [(_Bool)1] [i_3] [(_Bool)1] &= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_13 [i_0] [i_1] [i_3 + 2] [i_1] [i_0] [i_3 + 2] [i_0])) & (((/* implicit */int) arr_13 [i_0] [i_1] [i_3 + 2] [i_2] [i_4] [i_0] [i_0])))) & ((~(((/* implicit */int) arr_13 [i_0] [i_1] [i_3 + 2] [(_Bool)1] [i_4] [i_0] [i_4]))))));
                                arr_16 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) arr_7 [i_0] [i_1] [i_1] [i_2]);
                            }
                        } 
                    } 
                    var_12 ^= ((((/* implicit */int) ((_Bool) (_Bool)1))) <= (((/* implicit */int) arr_6 [(unsigned short)0] [(unsigned short)0] [i_1] [i_2])));
                    var_13 ^= ((/* implicit */signed char) ((min((((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_2]))) * (2830986684U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [(_Bool)1] [i_1] [i_2] [i_1])) * (((/* implicit */int) arr_9 [(signed char)6] [i_1] [i_1]))))))) * (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)123)))))));
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        var_14 += ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) var_6))))));
                        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_2] [i_2] [i_2] [i_5 + 1] [(_Bool)1] [i_5 + 1] [i_5]))))) ? (((((/* implicit */int) arr_13 [i_0] [i_5] [i_0] [i_5 + 1] [i_5] [(_Bool)1] [i_5])) + (((/* implicit */int) var_6)))) : (((/* implicit */int) ((((/* implicit */int) arr_13 [i_1] [i_2] [i_2] [i_5 + 1] [i_2] [i_5] [(short)14])) < (((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [i_5 + 1] [i_5 + 1] [i_5] [i_5])))))));
                        var_16 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((short)7680), (((/* implicit */short) arr_12 [i_0] [i_2] [i_5 + 1]))))) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_2])) : (((/* implicit */int) min((arr_12 [i_1] [i_2] [i_5 + 1]), (arr_12 [i_0] [i_1] [i_2]))))));
                    }
                }
                for (unsigned int i_6 = 0; i_6 < 20; i_6 += 1) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_26 [i_0] [i_0] [i_6] [i_7] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (-(((/* implicit */int) (short)-7677))))) ? (((/* implicit */int) arr_7 [i_7] [i_6] [i_1] [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_6] [i_1] [i_0]))))));
                        /* LoopSeq 1 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_30 [i_8] [i_1] [(_Bool)1] &= ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */short) (signed char)-84)), ((short)-7678)))) * ((-(((/* implicit */int) (unsigned short)39479))))));
                            arr_31 [i_0] = ((_Bool) (~(max((1463980611U), (((/* implicit */unsigned int) arr_19 [i_1] [i_6] [i_0]))))));
                            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) arr_9 [(unsigned short)8] [i_1] [i_1]))));
                        }
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_36 [(unsigned short)6] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */signed char) ((_Bool) ((arr_24 [i_0] [i_1] [i_6] [i_0]) ? (((/* implicit */int) arr_19 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_5)))))), (max((((/* implicit */signed char) ((((/* implicit */int) var_2)) != (((/* implicit */int) arr_0 [i_0]))))), (max((arr_14 [i_0] [i_0] [i_0] [i_9]), (arr_14 [i_9] [i_0] [i_0] [i_0])))))));
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) arr_4 [i_0] [i_0])) & (((/* implicit */int) (_Bool)1)))))) && (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)110)))))));
                        arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_19 [i_0] [i_0] [i_0])) >= (((/* implicit */int) (_Bool)1))));
                    }
                    var_19 = ((/* implicit */unsigned short) (signed char)-63);
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 20; i_10 += 3) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 20; i_11 += 3) 
                        {
                            {
                                arr_44 [i_0] [i_1] [i_6] [i_6] [i_6] [(short)3] [i_0] = var_6;
                                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) arr_20 [i_0] [i_6] [i_10] [i_11]))));
                                arr_45 [i_0] [i_0] [i_0] [i_10] [i_11] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)71)) ? ((~(((/* implicit */int) arr_32 [i_0] [(short)11] [i_6] [i_10])))) : (((/* implicit */int) ((arr_27 [i_0] [i_1] [i_11] [i_10] [i_10] [i_1]) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24676)))))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_38 [i_6] [i_11] [i_6] [i_11])) : (((/* implicit */int) var_11)))) : (((/* implicit */int) arr_2 [i_0] [i_1]))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (short)-7673)) : (((/* implicit */int) (signed char)127))));
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [17U])) ? ((~((~(((/* implicit */int) var_6)))))) : (min((((/* implicit */int) min((((/* implicit */short) var_10)), (arr_43 [i_6] [i_6] [i_6] [i_6] [i_0] [i_0])))), ((~(((/* implicit */int) (_Bool)1))))))));
                }
                /* vectorizable */
                for (short i_12 = 0; i_12 < 20; i_12 += 2) 
                {
                    arr_50 [i_0] [i_1] [i_1] = (((_Bool)1) || (((/* implicit */_Bool) (unsigned short)29156)));
                    arr_51 [i_0] = ((/* implicit */unsigned short) (!(var_1)));
                }
                arr_52 [i_0] = ((/* implicit */unsigned int) ((((2500193264U) >> (((/* implicit */int) arr_12 [i_0] [i_1] [i_1])))) == (((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_0] [i_1] [i_1])) >> (((((/* implicit */int) var_4)) - (30522))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) (-(((/* implicit */int) var_5))));
}
