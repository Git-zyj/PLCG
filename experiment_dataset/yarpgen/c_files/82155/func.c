/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82155
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
    var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)245))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_18 &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_3 [i_2])))) >> (((((/* implicit */int) arr_2 [i_0])) >> (((((/* implicit */int) var_3)) - (39)))))));
                    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) 1021454948U)) ? ((+(arr_6 [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [i_1] [(unsigned char)10])))));
                }
                /* vectorizable */
                for (short i_3 = 3; i_3 < 17; i_3 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 18; i_4 += 4) 
                    {
                        for (unsigned char i_5 = 2; i_5 < 17; i_5 += 3) 
                        {
                            {
                                var_20 = (i_3 % 2 == zero) ? (((/* implicit */short) ((((/* implicit */int) arr_13 [i_3] [i_3 - 1] [i_3])) >> (((((/* implicit */int) arr_13 [i_3] [i_3 - 1] [i_3])) - (148)))))) : (((/* implicit */short) ((((/* implicit */int) arr_13 [i_3] [i_3 - 1] [i_3])) >> (((((((/* implicit */int) arr_13 [i_3] [i_3 - 1] [i_3])) - (148))) + (110))))));
                                var_21 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_8 [i_3] [i_3])) > (((/* implicit */int) arr_13 [i_3] [i_1] [i_3]))))) > ((((_Bool)1) ? (5) : (-6)))));
                                var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_10 [i_5] [i_3] [i_3] [i_1])))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [9U] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])) ? (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0])))))));
                    /* LoopNest 2 */
                    for (int i_6 = 4; i_6 < 16; i_6 += 3) 
                    {
                        for (short i_7 = 0; i_7 < 18; i_7 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */int) ((_Bool) 0U));
                                var_25 = ((/* implicit */_Bool) var_15);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 18; i_8 += 2) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 18; i_9 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_7 [i_9] [i_1] [i_8] [i_3]))));
                                arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */short) 4294967295U);
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_18 [i_0] [i_1] [i_3] [i_0])) : (((/* implicit */int) ((unsigned char) (_Bool)1)))));
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_28 = ((/* implicit */short) (+(((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_5)) > (((/* implicit */int) (_Bool)1))))))));
                    arr_34 [i_10] [i_10] = ((/* implicit */unsigned char) -1);
                    var_29 ^= ((/* implicit */int) max((max((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0))))), (((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_0] [i_0]))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((unsigned char)180), (arr_23 [i_10] [i_0] [i_1] [i_0] [i_0])))) ? (((arr_11 [i_0] [15U] [i_0]) - (((/* implicit */int) arr_33 [i_0] [i_0] [i_0] [i_0])))) : (max((((/* implicit */int) var_3)), (arr_1 [i_1] [i_1]))))))));
                    arr_35 [i_0] &= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (~(arr_12 [i_0] [i_0] [i_0] [i_10])))) ? (((/* implicit */int) max((((/* implicit */short) var_10)), (arr_5 [i_0] [i_0] [i_0])))) : (max((arr_27 [i_0] [i_0] [i_1] [i_0]), (-1380841730))))), (((/* implicit */int) max((var_10), ((unsigned char)104))))));
                    var_30 = 22U;
                }
                /* vectorizable */
                for (unsigned int i_11 = 0; i_11 < 18; i_11 += 2) 
                {
                    var_31 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned char)127)) ? (arr_7 [i_0] [i_1] [i_1] [i_1]) : (((/* implicit */int) (_Bool)1))))));
                    var_32 = ((/* implicit */unsigned char) 0U);
                }
                var_33 = arr_37 [i_0] [i_0] [i_1];
                arr_40 [i_1] [i_0] [i_0] = ((/* implicit */_Bool) max((0U), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] [i_1])))))));
            }
        } 
    } 
    var_34 = ((/* implicit */_Bool) max((max((((((/* implicit */int) (unsigned char)240)) % (((/* implicit */int) var_15)))), (((/* implicit */int) ((var_1) != (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))), (((/* implicit */int) var_14))));
    var_35 = ((/* implicit */short) ((max(((!(((/* implicit */_Bool) (unsigned char)57)))), (max((var_16), ((_Bool)1))))) ? (((((/* implicit */_Bool) ((unsigned char) (short)2047))) ? (((1380841730) | (-6))) : ((-(((/* implicit */int) var_16)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_9)) >> (((((/* implicit */int) var_2)) - (121)))))) ? (((/* implicit */int) max((((/* implicit */short) var_3)), (var_15)))) : (((/* implicit */int) var_12))))));
    var_36 = ((/* implicit */short) max((max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) (unsigned char)127)))), (max((((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned char)127)))), (((((/* implicit */_Bool) (unsigned char)161)) ? (((/* implicit */int) (_Bool)0)) : (-113508889)))))));
}
