/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98274
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)3114)) ? (((/* implicit */int) (short)-9180)) : (((/* implicit */int) (_Bool)1))));
                var_13 = var_6;
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 4; i_2 < 16; i_2 += 3) 
    {
        for (unsigned short i_3 = 1; i_3 < 15; i_3 += 3) 
        {
            for (short i_4 = 0; i_4 < 17; i_4 += 3) 
            {
                {
                    var_14 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) 3023619483U)))))));
                    var_15 &= ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) ((((0U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [10U]))))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_2 - 3] [i_2 - 3]))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 16; i_6 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */short) var_7)), (arr_9 [i_3 + 1] [i_3 + 1])))) - (((/* implicit */int) arr_10 [i_4] [i_2 - 1] [i_6 + 1] [i_2]))));
                                arr_18 [i_2 - 2] [i_2] = ((/* implicit */unsigned int) (_Bool)1);
                                var_17 ^= ((/* implicit */unsigned int) var_11);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
