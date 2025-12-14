/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68544
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_16 = var_13;
                    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_4)) ? (1951976373) : (1868038058)))))) ? (max((((/* implicit */int) var_13)), (((((/* implicit */int) arr_4 [i_2] [i_2] [i_1] [i_0])) + (arr_7 [(_Bool)1] [i_1] [i_1]))))) : (var_4))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_1] [(short)9] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [i_3] [(short)7])) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((((/* implicit */_Bool) (unsigned short)44503)) ? (-1) : (537024882))))) / (((var_13) ? (var_7) : (((/* implicit */int) arr_12 [(unsigned short)10] [i_3] [(unsigned short)10] [i_0] [i_0]))))));
                                arr_15 [i_4] [i_3] [i_3] [i_3] [i_1] [i_0] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0 - 1] [i_2])) & (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) ((arr_3 [i_0] [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1] [(unsigned short)3]))))) ? ((~(((/* implicit */int) var_0)))) : (((((/* implicit */int) var_0)) & (((/* implicit */int) (short)-25926)))))) : (((((/* implicit */_Bool) 33553920)) ? (var_8) : (((/* implicit */int) (short)15872))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13)))))));
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) ((var_6) != (((/* implicit */int) var_5))))) : (((/* implicit */int) var_15))))) || (((/* implicit */_Bool) ((((((/* implicit */int) var_0)) & (((/* implicit */int) (unsigned short)11)))) + (-1812571860)))))))));
}
