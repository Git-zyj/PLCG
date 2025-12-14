/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79600
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
    var_12 = ((/* implicit */_Bool) ((short) var_1));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) min((((/* implicit */unsigned int) ((signed char) (-(((/* implicit */int) var_11)))))), (max((max((4010981802U), (((/* implicit */unsigned int) arr_2 [i_0] [i_1])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_11)) : (-2107454149)))))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 2; i_3 < 15; i_3 += 3) 
                    {
                        {
                            var_14 = (+((~(arr_5 [i_1]))));
                            /* LoopSeq 1 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_15 = ((/* implicit */signed char) (~(((/* implicit */int) arr_10 [i_0] [i_3] [i_3] [i_4]))));
                                var_16 |= ((/* implicit */unsigned char) max((((arr_2 [i_3 - 2] [i_0 - 1]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_2 [i_3 - 2] [i_0 - 2])))), (((((/* implicit */int) arr_2 [i_3 - 2] [i_0 - 3])) | (((/* implicit */int) arr_2 [i_3 + 1] [i_0 - 2]))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
