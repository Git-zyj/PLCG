/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87292
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
    var_13 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_4)) : (8388607LL))))))));
    var_14 |= ((/* implicit */long long int) (!((!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_8)), (3602719659U))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 4; i_0 < 15; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) min((var_15), (((unsigned char) ((unsigned short) (!(((/* implicit */_Bool) var_3))))))));
                    /* LoopSeq 1 */
                    for (short i_3 = 2; i_3 < 13; i_3 += 4) 
                    {
                        var_16 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) max((arr_0 [i_3] [i_3]), (((/* implicit */unsigned long long int) (short)16383)))))) ? (max((((unsigned long long int) 8388607LL)), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) var_12)), ((short)-16405))))))))));
                        var_17 += ((/* implicit */unsigned int) ((unsigned char) min((((/* implicit */int) ((signed char) var_6))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_3 [i_0 - 4] [i_1])) : (((/* implicit */int) var_0)))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            var_18 |= ((/* implicit */_Bool) ((short) (~(((/* implicit */int) var_11)))));
                            var_19 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3] [i_2] [i_1])) ? (((/* implicit */int) var_3)) : (1302449303)))));
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (!((!(((/* implicit */_Bool) var_10)))))))));
                        }
                        arr_15 [i_0] [i_0 - 2] [i_0] [i_0] = ((/* implicit */long long int) max((((((/* implicit */_Bool) min((var_6), (var_6)))) ? (((/* implicit */int) ((unsigned char) var_11))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)193))))))), (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_0 [i_0] [i_0 + 1]), (((/* implicit */unsigned long long int) arr_7 [i_1] [i_2] [i_3]))))))))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 2; i_5 < 15; i_5 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_6 = 3; i_6 < 12; i_6 += 4) 
                        {
                            arr_22 [i_6] [i_6 + 1] [i_5 - 2] [i_2] [i_1] [i_0] = (+((-(((/* implicit */int) arr_1 [i_1])))));
                            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)16387))))))))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 16; i_7 += 3) 
                        {
                            var_22 = ((/* implicit */unsigned int) min((var_22), (((((/* implicit */_Bool) (~(-8153547587150149251LL)))) ? (((((/* implicit */_Bool) arr_3 [i_2] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_7] [i_2] [i_1] [i_0]))) : (3487992484U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_1])))))))));
                            var_23 = ((/* implicit */unsigned int) ((int) (-(arr_9 [i_5] [i_7]))));
                            var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_18 [i_7] [1] [i_2] [i_1] [i_1] [i_0]))))));
                        }
                        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((unsigned short) (-(-1968653560400068932LL)))))));
                        arr_25 [i_5] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned char) arr_3 [i_0 - 4] [i_0 - 4])))));
                    }
                    for (unsigned short i_8 = 0; i_8 < 16; i_8 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 2) 
                        {
                            arr_32 [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) max((max((var_4), (((/* implicit */int) arr_17 [i_9] [i_8] [i_2] [i_1] [i_0])))), ((~(((/* implicit */int) var_1))))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_24 [i_9] [i_1] [i_0]))))))) : (((/* implicit */int) max((((unsigned short) var_11)), (max((arr_26 [i_0 - 1] [i_0] [i_0] [i_0 - 2] [i_0]), (((/* implicit */unsigned short) (unsigned char)176)))))))));
                            var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((max((((/* implicit */unsigned int) arr_4 [i_8] [i_1])), (arr_11 [i_0] [i_2] [i_8] [i_9]))), (((/* implicit */unsigned int) min((((/* implicit */int) arr_16 [i_9] [i_8] [i_2] [i_1])), (var_8)))))))));
                            var_27 *= ((/* implicit */_Bool) min((0), (((/* implicit */int) (short)32767))));
                        }
                        /* LoopSeq 2 */
                        for (signed char i_10 = 1; i_10 < 13; i_10 += 1) 
                        {
                            var_28 = ((/* implicit */int) min((max((min((((/* implicit */unsigned short) var_3)), (arr_2 [i_0] [0U]))), (((/* implicit */unsigned short) ((signed char) (short)26052))))), (max((max((var_5), (((/* implicit */unsigned short) (_Bool)1)))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_11)))))))));
                            var_29 = ((/* implicit */int) min((var_29), (min((((((/* implicit */_Bool) max((var_10), (-1968653560400068926LL)))) ? (((int) -1968653560400068932LL)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))), (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_21 [i_8] [i_8]), (((/* implicit */unsigned long long int) arr_14 [i_10 + 2] [i_8] [i_2] [i_1] [i_1] [i_0] [i_0]))))))))))));
                            arr_35 [i_8] [i_10 + 2] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(var_9))))))), (min((max((((/* implicit */unsigned long long int) (unsigned short)0)), (arr_21 [i_1] [i_1]))), (((/* implicit */unsigned long long int) min((var_1), (var_1))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_11 = 0; i_11 < 16; i_11 += 1) 
                        {
                            var_30 += (!(((/* implicit */_Bool) ((short) -1968653560400068932LL))));
                            var_31 &= ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                            var_32 = ((/* implicit */short) (~((~(-1432805799320619125LL)))));
                            arr_40 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [(short)13] [i_1]))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_16 [i_0 - 1] [i_1] [i_8] [i_11])))) : (((/* implicit */int) ((unsigned char) var_6)))));
                        }
                    }
                    var_33 = ((/* implicit */unsigned char) ((short) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)16383)) : (((/* implicit */int) arr_4 [i_0] [i_1])))), ((~(((/* implicit */int) var_11)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 2; i_12 < 15; i_12 += 1) 
                    {
                        for (unsigned int i_13 = 0; i_13 < 16; i_13 += 3) 
                        {
                            {
                                var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) ((signed char) arr_0 [i_0] [i_1])))) ? (((/* implicit */long long int) max(((~(var_8))), (((/* implicit */int) ((signed char) (unsigned char)84)))))) : (max((min((var_10), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65533)) ? (var_9) : (((/* implicit */int) arr_38 [i_0] [i_1]))))))))))));
                                var_35 = max((((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_37 [i_2]), (25U))))))), (max((((/* implicit */long long int) ((unsigned int) 13706346743824855259ULL))), (min((-8388585LL), (((/* implicit */long long int) arr_6 [i_1] [i_2] [i_13])))))));
                                arr_46 [i_13] [i_13] [i_12 + 1] [i_2] [i_1] [i_0 - 1] |= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) max((18242142065118314790ULL), (((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_0 - 3] [i_1] [i_2] [i_12] [i_13]))))))) ? (min((max((13706346743824855259ULL), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) ((long long int) var_12))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) min((var_11), (((/* implicit */unsigned char) arr_10 [i_13] [i_2] [i_1] [i_0]))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_36 ^= ((/* implicit */unsigned short) max((max((((long long int) (short)26663)), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_5 [i_0] [i_0 + 1] [i_0])) : (var_4)))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) max(((unsigned short)65535), (((/* implicit */unsigned short) var_6))))))))));
        arr_47 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(max((((/* implicit */unsigned int) arr_6 [i_0] [i_0 - 3] [i_0])), (2147483647U)))))), (((long long int) max((var_0), (((/* implicit */unsigned char) arr_45 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0] [i_0] [i_0])))))));
        /* LoopNest 3 */
        for (unsigned char i_14 = 0; i_14 < 16; i_14 += 4) 
        {
            for (unsigned short i_15 = 0; i_15 < 16; i_15 += 4) 
            {
                for (unsigned long long int i_16 = 1; i_16 < 13; i_16 += 1) 
                {
                    {
                        var_37 ^= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (~(var_9)))) ? (((int) arr_23 [i_16])) : ((~(((/* implicit */int) (_Bool)1)))))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
                        var_38 += ((/* implicit */unsigned int) max(((~(((/* implicit */int) ((unsigned short) (unsigned short)65535))))), (max((((((/* implicit */_Bool) 3083044628866490106LL)) ? (((/* implicit */int) (short)7788)) : (((/* implicit */int) var_2)))), ((~(((/* implicit */int) arr_19 [i_0] [1U] [i_14] [i_15] [i_16]))))))));
                    }
                } 
            } 
        } 
    }
}
