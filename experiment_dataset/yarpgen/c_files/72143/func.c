/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72143
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
    var_20 = ((/* implicit */int) var_15);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (signed char i_2 = 4; i_2 < 8; i_2 += 2) 
            {
                {
                    arr_7 [i_2 + 1] [i_2] = arr_4 [i_2 + 1] [i_2] [i_2];
                    /* LoopSeq 2 */
                    for (int i_3 = 3; i_3 < 7; i_3 += 3) 
                    {
                        arr_10 [i_1] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)22967)) || (((/* implicit */_Bool) arr_6 [i_2 + 2] [i_2] [i_2] [i_2 - 3])))))) <= ((-(((((/* implicit */_Bool) 208048066)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-39))) : (-1932222512157382221LL)))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            var_21 += ((/* implicit */long long int) ((arr_3 [(signed char)0] [i_2 + 1] [i_2]) << (((arr_3 [i_0] [i_2 + 1] [(short)8]) - (455233359)))));
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_3 - 2] [i_2 + 2] [i_2])) ? (arr_8 [i_3 + 1] [i_2 - 4] [i_3 + 1] [i_3 + 1] [i_4] [i_3 + 1]) : (arr_8 [i_3 + 3] [i_2 - 4] [i_3 + 3] [i_3 + 3] [i_2 - 1] [i_2 - 1])));
                        }
                        for (signed char i_5 = 0; i_5 < 10; i_5 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) max((((((/* implicit */int) arr_6 [i_3 - 3] [i_3 - 3] [i_3 - 2] [i_3])) | (((/* implicit */int) arr_15 [i_5] [i_5] [0LL] [i_2] [(short)3] [i_0] [i_0])))), (((((/* implicit */_Bool) ((long long int) arr_3 [2] [i_1] [i_0]))) ? (((((/* implicit */_Bool) arr_12 [i_0] [6])) ? (arr_2 [i_0]) : (((/* implicit */int) (signed char)86)))) : (((/* implicit */int) max((arr_15 [i_5] [i_3] [i_3] [i_2 + 1] [i_0] [i_1] [i_0]), (arr_9 [6LL] [6LL])))))))))));
                            var_24 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [(signed char)8] [(short)3]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1932222512157382221LL))))) : (((/* implicit */int) var_0)))));
                        }
                    }
                    for (long long int i_6 = 1; i_6 < 8; i_6 += 3) 
                    {
                        arr_20 [i_0] [i_0] [i_0] [i_0] = (+(((/* implicit */int) arr_6 [i_6 - 1] [i_6 - 1] [i_6 + 2] [i_6])));
                        arr_21 [i_0] [i_1] [i_0] [i_6 - 1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)86))))) ? (((arr_2 [i_2]) | (((/* implicit */int) (signed char)97)))) : (((/* implicit */int) (signed char)117)))) ^ (((/* implicit */int) arr_17 [3] [i_1] [i_1] [i_1]))));
                        var_25 = ((((/* implicit */_Bool) max(((unsigned short)42557), (((/* implicit */unsigned short) (signed char)-123))))) ? (((/* implicit */int) arr_6 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_6 - 1])) : ((+(((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0])))));
                    }
                }
            } 
        } 
    } 
    var_26 += ((/* implicit */short) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 372059560)))))))) ? (((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) -1932222512157382195LL))))), (((signed char) var_13))))) : (((/* implicit */int) var_9))));
}
