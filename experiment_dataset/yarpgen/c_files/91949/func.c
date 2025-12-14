/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91949
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
    var_13 = ((/* implicit */_Bool) 800744120U);
    var_14 ^= var_12;
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_7 [i_0 + 1] [i_1] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min(((unsigned char)132), (((/* implicit */unsigned char) (_Bool)1)))))));
                    var_15 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) var_9)), ((+(((((/* implicit */_Bool) 1007050951980116210LL)) ? (3776147412U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_3] [i_1] [i_1] [i_3] [i_3] = ((/* implicit */int) var_3);
                                var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (unsigned short)16)) : (((/* implicit */int) (unsigned char)237)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
