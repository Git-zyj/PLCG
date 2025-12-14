/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78051
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
    var_19 = ((unsigned char) ((((/* implicit */int) ((unsigned char) (unsigned char)127))) << (((((/* implicit */int) ((unsigned char) (unsigned char)52))) - (51)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                var_20 = ((unsigned char) max((arr_3 [i_1 - 1] [i_1 + 1]), ((unsigned char)3)));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 3; i_2 < 21; i_2 += 1) 
                {
                    arr_8 [i_0] [i_0] [(unsigned char)14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_2] [i_1])) ? (((((/* implicit */_Bool) min(((unsigned char)123), ((unsigned char)1)))) ? ((~(((/* implicit */int) (unsigned char)73)))) : (((/* implicit */int) (unsigned char)83)))) : (((/* implicit */int) ((unsigned char) arr_0 [i_0 + 1])))));
                    arr_9 [i_0] = (unsigned char)244;
                }
                for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 3; i_4 < 22; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 2; i_5 < 21; i_5 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)65))) ? (((/* implicit */int) max(((unsigned char)51), (arr_3 [i_0 + 1] [i_3])))) : (((/* implicit */int) ((unsigned char) arr_15 [i_0 - 1] [i_1 - 1] [i_3] [i_4] [i_5 - 2])))));
                                var_22 = ((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned char) arr_6 [i_0] [i_4]))), (((((/* implicit */_Bool) ((unsigned char) arr_10 [i_0] [i_0] [i_0] [i_0]))) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_3] [i_4 - 2] [(unsigned char)16])) : (((((/* implicit */int) (unsigned char)164)) | (((/* implicit */int) (unsigned char)255))))))));
                                arr_18 [i_5] [i_0] [i_4] [i_3] [i_0] [i_0 + 1] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((unsigned char) arr_14 [i_5] [i_4] [i_3] [(unsigned char)15] [i_0]))))) ? ((-(((/* implicit */int) arr_14 [i_4 - 3] [i_4] [i_4 - 3] [i_4] [i_4])))) : (((/* implicit */int) var_6))));
                                var_23 = ((unsigned char) min(((unsigned char)243), ((unsigned char)250)));
                            }
                        } 
                    } 
                    arr_19 [i_0 + 1] [i_0] = ((unsigned char) (unsigned char)149);
                    /* LoopSeq 2 */
                    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)12))));
                        arr_22 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [(unsigned char)18] [(unsigned char)19] [i_3] [i_6] [(unsigned char)8])) ? (((/* implicit */int) (unsigned char)64)) : ((+(((/* implicit */int) ((unsigned char) arr_11 [i_6] [i_3] [(unsigned char)8] [i_0 + 1])))))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 23; i_7 += 2) 
                    {
                        arr_26 [i_0] [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((min(((unsigned char)25), ((unsigned char)118))), (arr_11 [i_0] [i_1] [i_0] [i_7])))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((unsigned char) (-(((/* implicit */int) (unsigned char)1))))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned char i_8 = 0; i_8 < 23; i_8 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_27 [i_0 + 1] [i_0])) || (((/* implicit */_Bool) ((unsigned char) var_10)))));
                            var_26 = ((unsigned char) arr_11 [i_0] [i_0] [i_0 + 1] [i_1 + 1]);
                        }
                        for (unsigned char i_9 = 0; i_9 < 23; i_9 += 2) 
                        {
                            arr_31 [i_1 + 1] [i_0] = arr_14 [i_9] [i_7] [i_3] [i_1] [i_0];
                            arr_32 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)124)) ? (((/* implicit */int) (unsigned char)125)) : (((/* implicit */int) (unsigned char)52))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [(unsigned char)10])) ^ (((/* implicit */int) (unsigned char)117))))) ? (((/* implicit */int) ((unsigned char) (unsigned char)190))) : (((/* implicit */int) arr_7 [i_0 + 1] [i_0] [i_0] [i_0])))) : (((/* implicit */int) min((arr_10 [i_0] [i_1] [i_3] [i_7]), (((unsigned char) var_9)))))));
                            var_27 = arr_24 [i_0] [(unsigned char)11] [i_7] [i_7];
                        }
                        for (unsigned char i_10 = 0; i_10 < 23; i_10 += 2) 
                        {
                            arr_36 [i_0] [i_0] [i_1] [i_3] [i_7] [i_10] [i_0] = (unsigned char)12;
                            arr_37 [i_0] [(unsigned char)15] [i_1] [i_3] [i_0] [i_10] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned char)121)) / (((/* implicit */int) arr_1 [i_0]))))))));
                            var_28 = ((unsigned char) (unsigned char)252);
                        }
                        var_29 = arr_6 [i_0] [i_0];
                        arr_38 [i_0] [i_1] [i_0] [i_7] = ((/* implicit */unsigned char) (((+((~(((/* implicit */int) (unsigned char)252)))))) <= (((/* implicit */int) (unsigned char)171))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_11 = 0; i_11 < 23; i_11 += 1) 
                        {
                            arr_41 [i_0] [i_0] = ((unsigned char) arr_28 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_0 + 1]);
                            var_30 = arr_5 [i_1] [(unsigned char)15];
                        }
                        for (unsigned char i_12 = 1; i_12 < 21; i_12 += 2) 
                        {
                            arr_45 [i_0] [i_1] [i_0] [i_7] [i_12] = arr_16 [i_0 + 1] [i_0] [i_3] [i_7] [(unsigned char)22];
                            arr_46 [i_0] [i_0] [i_1 + 1] [i_3] [(unsigned char)14] [i_7] [i_12] = min((arr_7 [i_0] [(unsigned char)10] [i_0] [i_0 + 1]), (arr_25 [i_1] [i_1] [i_3] [i_7] [i_12 + 1] [i_7]));
                        }
                    }
                }
            }
        } 
    } 
    var_31 = var_4;
    var_32 = (unsigned char)169;
}
