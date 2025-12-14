/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76084
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
    var_13 = ((/* implicit */short) var_2);
    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_6)))))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) (short)(-32767 - 1)))))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        arr_13 [i_1] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_7 [i_0] [(short)0] [(signed char)8])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-126)))) == (((/* implicit */int) arr_0 [i_3]))));
                        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_3])) ? (((/* implicit */int) arr_3 [i_3])) : (((/* implicit */int) arr_12 [i_0] [i_2] [i_2]))));
                        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) | (((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */int) arr_8 [i_0])) | (((/* implicit */int) (signed char)126)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_1)))))))));
                        /* LoopSeq 2 */
                        for (signed char i_4 = 1; i_4 < 16; i_4 += 4) 
                        {
                            arr_16 [i_3] [i_3] [i_1] [i_3] [i_3] = ((/* implicit */signed char) ((((((/* implicit */int) var_8)) == (((/* implicit */int) var_0)))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_6 [i_1] [i_1] [i_1])) : (((/* implicit */int) (signed char)109)))) : (((/* implicit */int) (signed char)-95))));
                            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_2 [i_4 + 1])) : (((/* implicit */int) arr_2 [i_4 + 1]))));
                        }
                        for (signed char i_5 = 0; i_5 < 17; i_5 += 1) 
                        {
                            arr_19 [i_2] [(signed char)2] [(signed char)1] [i_2] [(signed char)7] [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_14 [i_1])) & (((/* implicit */int) var_11))));
                            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_8)))) | (((/* implicit */int) var_8)))))));
                        }
                    }
                    var_19 = var_2;
                }
            } 
        } 
    }
}
