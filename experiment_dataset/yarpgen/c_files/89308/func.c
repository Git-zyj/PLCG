/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89308
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
    var_12 = ((((/* implicit */_Bool) var_4)) ? ((-(((/* implicit */int) (unsigned char)232)))) : (((/* implicit */int) min((min((var_8), (var_5))), (var_10)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_3 [i_2])))))));
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        var_14 = ((/* implicit */int) min((var_14), (((((/* implicit */int) arr_6 [i_0] [i_0] [i_2])) | ((+(arr_0 [i_2 + 3] [i_1 + 2])))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            arr_13 [i_4] [i_0] [i_2] [i_2] [i_0] [i_1] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_0] [i_1] [i_0] [i_4] [i_0]))))) ? (((/* implicit */int) arr_10 [i_4] [i_4] [i_2] [i_4] [i_2])) : (((/* implicit */int) (unsigned char)24))));
                            var_15 = ((((/* implicit */_Bool) arr_6 [i_2 + 3] [i_2 - 2] [i_2 - 2])) ? (((/* implicit */int) arr_5 [i_2 + 3] [i_2 - 2] [i_2] [i_2 + 1])) : (((/* implicit */int) arr_6 [i_2 + 3] [i_2 - 2] [i_2 - 2])));
                            var_16 = ((((/* implicit */_Bool) arr_11 [i_0] [i_4] [i_1 - 1] [i_0] [i_0] [i_2 - 1])) ? (((/* implicit */int) arr_11 [i_0] [i_4] [i_1 + 2] [i_0] [i_0] [i_2 + 1])) : (((/* implicit */int) arr_11 [i_0] [i_4] [i_1 + 1] [i_3] [i_0] [i_2 + 3])));
                            var_17 = ((unsigned short) -1726375549);
                            var_18 += ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)71)) + (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_12 [i_3])) : (((/* implicit */int) arr_8 [i_1]))))));
                        }
                        for (int i_5 = 0; i_5 < 19; i_5 += 3) 
                        {
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) min((arr_0 [i_1] [i_1]), (((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) - (((/* implicit */int) var_7))))) ? (((/* implicit */int) (unsigned char)21)) : (((((/* implicit */_Bool) arr_10 [i_1] [i_2] [i_2] [i_2] [i_0])) ? (arr_0 [i_3] [i_3]) : (((/* implicit */int) (unsigned short)13294)))))))))));
                            arr_17 [i_0] [i_0] [i_1] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned short) (unsigned char)238);
                        }
                    }
                    /* vectorizable */
                    for (unsigned short i_6 = 1; i_6 < 18; i_6 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (unsigned short)13294)) ? (((/* implicit */int) var_5)) : (var_3))) : (((/* implicit */int) arr_6 [i_1] [i_1] [i_0])))))));
                        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_11 [i_0] [i_2] [i_2] [i_2] [i_2] [i_0])))))));
                        arr_21 [i_0] [i_1] [i_1] [i_2] [i_2] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_7 [i_1 - 1] [i_2 - 2] [i_6 + 1] [i_6 + 1] [i_6 + 1])) : (((/* implicit */int) arr_7 [i_1 + 1] [i_2 + 1] [i_6 + 1] [i_6] [i_6 + 1]))));
                        var_22 = ((/* implicit */unsigned char) (unsigned short)30748);
                        /* LoopSeq 3 */
                        for (unsigned short i_7 = 1; i_7 < 18; i_7 += 2) 
                        {
                            arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_2])) ? ((+(((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) (unsigned short)65359)) ? (var_2) : (var_2)))));
                            arr_26 [i_0] [i_1] [i_1] [i_1] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_19 [i_2 - 2] [i_2 + 3] [i_2 - 2] [i_2 - 1])) - (((/* implicit */int) (unsigned char)5))));
                        }
                        for (unsigned short i_8 = 4; i_8 < 18; i_8 += 4) 
                        {
                            arr_30 [i_2] [i_2] [i_2] [i_1] [i_0] |= ((/* implicit */unsigned char) var_11);
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_0] [i_1])) > (((/* implicit */int) (unsigned short)13736))))) : (((((/* implicit */int) (unsigned char)160)) & (((/* implicit */int) (unsigned char)0))))));
                        }
                        for (unsigned short i_9 = 2; i_9 < 17; i_9 += 4) 
                        {
                            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) (unsigned short)4095))));
                            var_25 = ((/* implicit */int) ((var_0) > (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)1))))));
                        }
                    }
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) var_2))));
}
