/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7241
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
    var_13 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (short)-3479)), (max((((/* implicit */long long int) (signed char)-73)), (-6471947519781832903LL)))));
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((_Bool) var_9))))) : (((/* implicit */int) var_0))));
    var_15 = ((/* implicit */long long int) var_2);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        var_16 = ((/* implicit */short) max((((/* implicit */int) arr_0 [i_0 + 1])), ((((!(((/* implicit */_Bool) (short)-3470)))) ? ((-(((/* implicit */int) var_11)))) : (((/* implicit */int) arr_0 [(unsigned char)2]))))));
        arr_3 [i_0] = ((/* implicit */_Bool) var_11);
        arr_4 [i_0] = var_6;
    }
    for (unsigned short i_1 = 1; i_1 < 15; i_1 += 3) 
    {
        arr_7 [10] &= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)3483))))) ? (((/* implicit */int) var_10)) : ((~(((/* implicit */int) (short)13456))))));
        var_17 = ((/* implicit */int) arr_6 [i_1] [i_1 + 3]);
        /* LoopSeq 2 */
        for (long long int i_2 = 2; i_2 < 16; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                for (long long int i_4 = 2; i_4 < 14; i_4 += 3) 
                {
                    {
                        arr_14 [i_1] [(unsigned short)6] |= ((/* implicit */short) arr_11 [i_4 + 3] [i_4] [i_4] [i_4]);
                        var_18 = ((/* implicit */unsigned long long int) (signed char)-22);
                        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) 6471947519781832903LL))));
                        var_20 &= arr_5 [i_3 - 1];
                        var_21 &= ((/* implicit */short) (!(((/* implicit */_Bool) arr_10 [(short)14] [i_2] [i_3] [i_4]))));
                    }
                } 
            } 
            var_22 = ((/* implicit */unsigned int) (~(-6471947519781832903LL)));
            /* LoopSeq 1 */
            for (unsigned short i_5 = 1; i_5 < 14; i_5 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned int i_6 = 1; i_6 < 15; i_6 += 3) 
                {
                    for (short i_7 = 3; i_7 < 16; i_7 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) max(((unsigned char)153), (((/* implicit */unsigned char) (signed char)112))));
                            var_24 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (!(arr_22 [i_6 + 3])))), (((unsigned int) 3258690080U))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_8 = 4; i_8 < 17; i_8 += 3) 
                {
                    arr_26 [i_1] [i_1] [i_1] [i_1] [i_5 + 1] = ((/* implicit */unsigned int) arr_6 [i_1] [i_2]);
                    arr_27 [i_8] [i_1] [i_5] [i_1] [12LL] = ((/* implicit */int) (!(((/* implicit */_Bool) max(((short)-3480), (((/* implicit */short) (signed char)-22)))))));
                    var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_25 [i_1 + 3] [i_1] [i_1] [14LL] [i_1])))) ? (((/* implicit */unsigned long long int) ((int) (~(((/* implicit */int) arr_5 [i_2])))))) : (arr_8 [(unsigned short)2] [i_8 - 1]))))));
                    arr_28 [i_1] = ((/* implicit */unsigned char) (~(-991611449)));
                }
            }
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_26 = ((((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_1] [i_1])) ? (3258690067U) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_9] [i_1 - 1]))) : (1036277202U))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_10 = 1; i_10 < 15; i_10 += 3) 
            {
                var_27 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_4))));
                arr_33 [i_1] [i_10 + 2] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_19 [i_9] [i_1] [i_1] [i_1] [i_10] [i_10 + 2]))));
                var_28 = ((/* implicit */long long int) (!((!(var_0)))));
                var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) arr_21 [i_10] [i_10] [i_10 + 3] [i_1 + 3]))));
                var_30 = ((/* implicit */unsigned int) max((var_30), (arr_25 [i_1] [i_9] [i_1] [(_Bool)1] [i_10])));
            }
            /* LoopNest 3 */
            for (short i_11 = 3; i_11 < 17; i_11 += 3) 
            {
                for (unsigned short i_12 = 1; i_12 < 15; i_12 += 3) 
                {
                    for (unsigned int i_13 = 1; i_13 < 17; i_13 += 3) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned char) arr_41 [(signed char)13] [i_11] [i_12] [i_13]);
                            var_32 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (unsigned char)124)), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)135)), (var_12)))) ? ((~(arr_42 [i_1 + 1] [i_9] [i_9] [i_12] [i_13]))) : (((/* implicit */long long int) arr_13 [i_1] [(unsigned short)16] [(unsigned short)16] [i_1] [i_13 + 1]))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_14 = 2; i_14 < 16; i_14 += 3) 
            {
                for (int i_15 = 2; i_15 < 15; i_15 += 3) 
                {
                    {
                        arr_48 [i_1 - 1] [i_1] [i_14] = 1118237509U;
                        var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)95)) ? (((/* implicit */int) min((arr_19 [(unsigned char)2] [(unsigned char)2] [i_14 + 2] [i_1] [(unsigned char)2] [i_1]), ((short)-17038)))) : (((/* implicit */int) var_8)))))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (long long int i_16 = 1; i_16 < 16; i_16 += 3) 
        {
            for (long long int i_17 = 2; i_17 < 17; i_17 += 3) 
            {
                {
                    arr_54 [1ULL] [i_1] [i_17] = ((/* implicit */signed char) ((arr_41 [(unsigned char)2] [i_16] [i_16 + 2] [i_16 + 2]) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-116))))) : ((~(0U)))));
                    var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) var_10))));
                }
            } 
        } 
    }
}
