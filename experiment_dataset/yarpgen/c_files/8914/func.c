/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8914
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        var_17 *= var_6;
                        var_18 = ((unsigned char) (unsigned char)204);
                    }
                    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        var_19 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((((/* implicit */int) arr_0 [i_0] [i_1])) & (((/* implicit */int) (unsigned char)24)))))))));
                        arr_16 [i_1] [i_1] [i_2 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_3 [i_1 - 2] [i_2 + 1]), (arr_3 [i_1 + 1] [i_2 + 1])))) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_4])) : ((+(((/* implicit */int) max(((unsigned char)213), (arr_14 [i_0] [i_1] [i_0] [i_4]))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 2; i_5 < 15; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 3) 
                        {
                            {
                                var_20 = ((unsigned char) (unsigned char)231);
                                var_21 = ((/* implicit */unsigned char) min((var_21), (min(((unsigned char)12), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) (unsigned char)65))))))))));
                                arr_23 [i_0] [i_1] [i_2] [i_2] [i_1] = min(((unsigned char)245), ((unsigned char)134));
                                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)250))))), (arr_18 [(unsigned char)2] [i_1] [i_6] [i_6] [i_5] [i_1])))) ? (((/* implicit */int) arr_10 [i_0] [(unsigned char)4] [i_0] [i_0])) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_17 [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_5 [i_2])))))))))));
                                var_23 *= min((((unsigned char) min((arr_17 [i_0]), ((unsigned char)24)))), (((unsigned char) ((((/* implicit */_Bool) arr_22 [i_0] [i_1 - 1] [i_2] [i_5 - 1] [(unsigned char)2])) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) (unsigned char)255))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_7 = 0; i_7 < 16; i_7 += 3) 
                    {
                        arr_28 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_20 [i_1] [i_1 - 1] [i_1 - 1] [i_1])) | (((/* implicit */int) ((((/* implicit */int) arr_26 [i_0] [i_1] [i_2])) != (((/* implicit */int) (unsigned char)7)))))));
                        arr_29 [i_1] [i_1 + 1] = (unsigned char)0;
                    }
                }
            } 
        } 
        var_24 ^= min((((unsigned char) arr_19 [i_0] [i_0] [i_0] [(unsigned char)12] [i_0] [(unsigned char)12])), (((unsigned char) ((((/* implicit */int) var_14)) * (((/* implicit */int) (unsigned char)0))))));
    }
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((unsigned char)65), ((unsigned char)0)))) ? ((+(((/* implicit */int) var_9)))) : (min((((/* implicit */int) var_0)), (((((/* implicit */_Bool) (unsigned char)74)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)18))))))));
    /* LoopNest 3 */
    for (unsigned char i_8 = 0; i_8 < 22; i_8 += 3) 
    {
        for (unsigned char i_9 = 0; i_9 < 22; i_9 += 3) 
        {
            for (unsigned char i_10 = 0; i_10 < 22; i_10 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 0; i_11 < 22; i_11 += 3) 
                    {
                        for (unsigned char i_12 = 1; i_12 < 19; i_12 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) var_5)) * (((/* implicit */int) var_3))));
                                arr_43 [i_12] = ((unsigned char) min((((((/* implicit */_Bool) arr_37 [i_8] [i_10] [i_11])) ? (((/* implicit */int) arr_42 [i_8] [i_9] [i_8] [i_11] [i_9])) : (((/* implicit */int) arr_34 [i_8] [i_8])))), (((/* implicit */int) min((arr_30 [i_8]), (arr_39 [i_8]))))));
                                var_27 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)122)) * (((/* implicit */int) (unsigned char)0))));
                            }
                        } 
                    } 
                    var_28 += ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)190)) ? (((/* implicit */int) arr_42 [i_10] [i_8] [i_8] [i_8] [i_8])) : (((/* implicit */int) var_5))))) || (((/* implicit */_Bool) min((var_5), (var_5))))))));
                    var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) (+(min(((-(((/* implicit */int) var_5)))), (((/* implicit */int) var_14)))))))));
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_30 [i_9]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_10]))))) : (max((((((/* implicit */_Bool) arr_42 [i_8] [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */int) arr_40 [i_8])) : (((/* implicit */int) arr_31 [i_10] [i_8])))), ((~(((/* implicit */int) (unsigned char)4))))))));
                    arr_44 [i_8] [i_8] [i_8] [i_8] = ((unsigned char) ((((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) arr_36 [i_8])))) ? (((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */int) (unsigned char)106)) : (((/* implicit */int) (unsigned char)81)))) : (((/* implicit */int) max(((unsigned char)142), (var_10))))));
                }
            } 
        } 
    } 
}
