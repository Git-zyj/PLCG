/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8226
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    var_20 = ((/* implicit */signed char) ((((/* implicit */int) ((short) ((((/* implicit */int) (short)23684)) + (((/* implicit */int) (short)23697)))))) - (((((/* implicit */int) (signed char)12)) / (((/* implicit */int) (short)-23670))))));
                    arr_7 [i_0] [i_1] [i_0] [i_0] = ((signed char) ((short) var_17));
                }
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((arr_1 [(signed char)18] [i_0 - 2]) - (((/* implicit */unsigned long long int) arr_2 [i_1]))))) ? (((/* implicit */int) arr_3 [i_0 - 2])) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)20246)))))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_3 = 0; i_3 < 23; i_3 += 4) 
                {
                    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (!(((((/* implicit */_Bool) arr_6 [i_1] [i_1])) && (((/* implicit */_Bool) 4ULL)))))))));
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)23683))) : (arr_8 [i_0] [i_3] [i_0 - 2])));
                    arr_10 [(unsigned char)14] [i_3] [i_0] [i_3] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)56503))));
                }
                var_24 = ((/* implicit */unsigned char) ((unsigned int) (-(((((/* implicit */int) (unsigned short)65535)) | (((/* implicit */int) (signed char)35)))))));
            }
        } 
    } 
    var_25 = ((/* implicit */short) ((unsigned int) ((unsigned int) ((((/* implicit */_Bool) 532743667143490218ULL)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
    var_26 = ((/* implicit */unsigned short) var_12);
}
