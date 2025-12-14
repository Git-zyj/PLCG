/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57711
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) 416715422);
        arr_4 [i_0] [i_0] = ((/* implicit */short) (((-(416715422))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
    }
    var_17 = ((/* implicit */unsigned char) ((long long int) (-(416715422))));
    /* LoopNest 3 */
    for (int i_1 = 2; i_1 < 20; i_1 += 2) 
    {
        for (int i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 2) 
                        {
                            {
                                arr_17 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-118)) + (2147483647))) >> (((((/* implicit */int) (short)9834)) - (9814)))))) ? (2849731229362560306LL) : (((/* implicit */long long int) ((/* implicit */int) (short)9845)))));
                                arr_18 [i_2] [15] [i_3] [15] [i_2] = ((/* implicit */signed char) arr_6 [i_1 + 1]);
                            }
                        } 
                    } 
                    arr_19 [i_1] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) min((var_15), (((/* implicit */short) arr_14 [i_1] [i_2] [i_3] [i_3]))))))));
                }
            } 
        } 
    } 
}
