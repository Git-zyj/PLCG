/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73747
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
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? ((((~(((/* implicit */int) (unsigned short)49984)))) & (((/* implicit */int) var_2)))) : (min((((((/* implicit */_Bool) (unsigned short)23562)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)25482)))), (((/* implicit */int) ((unsigned short) var_2))))))))));
    var_17 |= (unsigned short)63;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    var_18 = ((unsigned short) (~(((/* implicit */int) ((unsigned short) arr_1 [i_0] [i_0])))));
                    arr_7 [i_1] [i_2] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_5 [i_1] [i_1]))))));
                    arr_8 [i_2] [i_2] [i_1] [i_0] = (unsigned short)29486;
                }
                for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)13312)) << (((((/* implicit */int) (unsigned short)64425)) - (64418)))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned short)65465)) : (((/* implicit */int) (unsigned short)65473)))) : (((/* implicit */int) var_8)))) + (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_4 [i_1])))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_5 = 0; i_5 < 10; i_5 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_1])))))));
                            var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)7)) << (((((/* implicit */int) ((unsigned short) (unsigned short)6144))) - (6119)))));
                            var_22 = (unsigned short)41960;
                        }
                        arr_17 [i_4] [i_3] [i_1] [i_0] [i_0] [i_0] = min((arr_14 [i_4] [i_1] [(unsigned short)6] [i_4] [i_3]), (((unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_5 [i_0] [i_4])) : (((/* implicit */int) var_4))))));
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_4] [i_0]))) ? (((((/* implicit */_Bool) (unsigned short)2213)) ? (((/* implicit */int) (unsigned short)12909)) : (((/* implicit */int) arr_0 [i_0] [i_1])))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)22571))))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 10; i_6 += 3) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_7 = 0; i_7 < 10; i_7 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_5 [i_3] [i_7]))));
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_3] [i_1])) && (((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_3] [(unsigned short)0]))));
                        }
                        arr_22 [i_0] [i_6] [i_0] [(unsigned short)0] = var_8;
                        arr_23 [i_0] [i_1] [i_6] [i_6] = ((unsigned short) ((unsigned short) var_14));
                    }
                    var_26 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) ((unsigned short) (unsigned short)64399))))));
                }
                /* vectorizable */
                for (unsigned short i_8 = 0; i_8 < 10; i_8 += 2) /* same iter space */
                {
                    var_27 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)62564)) ? (((/* implicit */int) arr_16 [(unsigned short)2] [(unsigned short)9] [i_1] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_1))))) ? (((((/* implicit */int) var_3)) | (((/* implicit */int) (unsigned short)7)))) : (((/* implicit */int) (unsigned short)19))));
                    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_8])) : (((/* implicit */int) arr_0 [i_8] [i_1]))));
                }
                for (unsigned short i_9 = 0; i_9 < 10; i_9 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_10 = 0; i_10 < 10; i_10 += 1) 
                    {
                        arr_30 [i_0] [i_1] [i_1] [i_9] [i_10] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_4 [i_9]))));
                        var_29 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)27143))));
                        arr_31 [i_0] [(unsigned short)1] [i_1] [i_9] [i_9] = (unsigned short)35272;
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 0; i_11 < 10; i_11 += 3) 
                    {
                        for (unsigned short i_12 = 0; i_12 < 10; i_12 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((unsigned short) (unsigned short)63))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)488))))) : (((((/* implicit */_Bool) (unsigned short)1362)) ? (((/* implicit */int) (unsigned short)23562)) : (((/* implicit */int) (unsigned short)15300)))))), (((/* implicit */int) min((arr_35 [i_0] [i_9] [i_0] [(unsigned short)2] [i_0] [i_0] [i_0]), (arr_35 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
                                var_31 = ((unsigned short) (unsigned short)65473);
                                arr_36 [i_0] [i_12] [i_0] [i_12] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)31960)) ? (((/* implicit */int) arr_29 [i_12] [(unsigned short)0] [(unsigned short)0] [i_9] [(unsigned short)0] [(unsigned short)0])) : (((/* implicit */int) (!(((((/* implicit */_Bool) (unsigned short)19544)) && (((/* implicit */_Bool) var_9)))))))));
                                arr_37 [(unsigned short)8] [i_1] [(unsigned short)1] [i_1] [i_11] [i_12] [i_12] = ((unsigned short) max(((unsigned short)40196), ((unsigned short)60370)));
                            }
                        } 
                    } 
                }
                var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) min((((/* implicit */int) var_10)), ((~(((/* implicit */int) var_12)))))))));
                var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)64320)) ? (((/* implicit */int) ((unsigned short) (unsigned short)65535))) : (((((/* implicit */_Bool) (unsigned short)42951)) ? (((/* implicit */int) (unsigned short)63322)) : (((/* implicit */int) (unsigned short)65041)))))) - (((((/* implicit */_Bool) min((var_15), (arr_6 [i_0] [i_1] [(unsigned short)3] [(unsigned short)3])))) ? (((((/* implicit */_Bool) arr_5 [(unsigned short)3] [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)63323)))) : (((/* implicit */int) min(((unsigned short)54876), ((unsigned short)20889)))))))))));
            }
        } 
    } 
}
