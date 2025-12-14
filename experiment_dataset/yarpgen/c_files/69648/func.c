/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69648
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) / (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            var_11 = ((/* implicit */int) ((short) (+(15U))));
            arr_5 [i_0] [i_0] [(_Bool)1] = ((/* implicit */_Bool) arr_1 [i_1]);
            var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) != (((/* implicit */int) arr_1 [i_0])))))));
            arr_6 [i_1] = ((/* implicit */unsigned int) var_2);
            var_13 = ((/* implicit */unsigned int) ((arr_4 [i_0] [i_1] [i_1]) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_1] [i_0] [i_0])))))));
        }
        var_14 = ((/* implicit */signed char) ((unsigned short) arr_0 [i_0]));
    }
    for (unsigned int i_2 = 1; i_2 < 21; i_2 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            arr_11 [i_2] = ((/* implicit */unsigned int) arr_1 [i_2]);
            var_15 = ((/* implicit */signed char) var_9);
        }
        for (signed char i_4 = 3; i_4 < 20; i_4 += 2) 
        {
            arr_14 [i_2 - 1] [i_2] [i_4] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_2 [i_2]))));
            /* LoopSeq 2 */
            for (short i_5 = 0; i_5 < 22; i_5 += 4) 
            {
                arr_17 [0] [i_2] [i_5] = ((/* implicit */short) (~(((/* implicit */int) var_7))));
                arr_18 [i_2 + 1] [i_4] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)29891))));
            }
            /* vectorizable */
            for (short i_6 = 3; i_6 < 19; i_6 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 22; i_7 += 2) 
                {
                    for (int i_8 = 3; i_8 < 21; i_8 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (signed char)-83))));
                            arr_26 [i_2 - 1] [i_8] [i_8] [i_2] [i_2] [i_7] = arr_20 [i_2] [i_2] [i_2] [i_2];
                            var_17 *= ((/* implicit */signed char) arr_15 [(short)8] [i_7] [i_7]);
                        }
                    } 
                } 
                arr_27 [6U] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_2 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2 + 1]))) : (var_1)));
            }
        }
        arr_28 [i_2] = ((/* implicit */unsigned short) (~(((((/* implicit */int) (!(((/* implicit */_Bool) (short)29907))))) | (((/* implicit */int) arr_0 [i_2]))))));
        /* LoopSeq 2 */
        for (short i_9 = 3; i_9 < 21; i_9 += 2) 
        {
            arr_31 [i_2] = ((/* implicit */short) (~((-(((/* implicit */int) arr_20 [i_2] [i_9 + 1] [i_2] [i_2]))))));
            arr_32 [i_2] [i_2] [(_Bool)1] = ((short) var_0);
            arr_33 [(_Bool)1] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((547038659U), (((/* implicit */unsigned int) arr_19 [i_9] [i_9] [i_9] [i_9 - 1]))))) && ((!(((/* implicit */_Bool) arr_19 [i_9 + 1] [i_9 - 3] [i_9 - 3] [i_9 - 1]))))));
        }
        /* vectorizable */
        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
        {
            arr_38 [i_2] [16U] [(unsigned short)3] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (short)-29886)) : (((/* implicit */int) (short)-29889))));
            /* LoopNest 3 */
            for (unsigned int i_11 = 2; i_11 < 21; i_11 += 4) 
            {
                for (unsigned short i_12 = 0; i_12 < 22; i_12 += 2) 
                {
                    for (signed char i_13 = 0; i_13 < 22; i_13 += 4) 
                    {
                        {
                            var_18 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_2 - 1] [i_10 - 1] [i_10 - 1])) ? (((/* implicit */int) arr_36 [i_2 - 1] [i_10 - 1] [i_10 - 1])) : (((/* implicit */int) arr_36 [i_2 - 1] [i_10 - 1] [i_10 - 1]))));
                            var_19 &= ((arr_48 [i_10 - 1] [(short)12] [i_10 - 1] [i_13] [i_2 + 1]) != (arr_48 [i_10 - 1] [(_Bool)1] [i_11] [i_12] [i_2 - 1]));
                            arr_49 [i_2] [i_13] [i_12] [i_2 - 1] [i_13] [(signed char)20] [i_2 - 1] = ((/* implicit */int) var_4);
                        }
                    } 
                } 
            } 
            var_20 = ((/* implicit */unsigned short) arr_30 [i_2 - 1]);
            arr_50 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_37 [i_2 + 1])) || (((/* implicit */_Bool) arr_37 [i_2 + 1]))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_14 = 2; i_14 < 19; i_14 += 2) 
        {
            var_21 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_3 [i_14 - 1])) : (((/* implicit */int) arr_16 [4U] [i_2 + 1]))));
            /* LoopSeq 1 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                var_22 = ((/* implicit */short) arr_57 [i_2 - 1] [i_14 + 2] [i_2 - 1]);
                var_23 = ((/* implicit */unsigned short) ((var_5) ? (((/* implicit */int) arr_0 [i_2 + 1])) : (((/* implicit */int) ((arr_13 [i_14 - 2]) && (((/* implicit */_Bool) var_7)))))));
                var_24 = ((/* implicit */_Bool) arr_43 [i_2 - 1] [i_14 + 1] [(short)20] [i_15] [(_Bool)1] [(short)20]);
            }
            var_25 = ((/* implicit */int) ((unsigned short) arr_51 [i_2] [i_2] [6]));
        }
    }
    var_26 = ((/* implicit */int) (short)32762);
    var_27 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
}
