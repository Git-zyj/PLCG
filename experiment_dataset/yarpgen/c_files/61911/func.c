/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61911
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */unsigned int) min((var_10), ((-(max((((/* implicit */unsigned int) (+(-593409225)))), (3224750496U)))))));
                var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) 639431916U))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_9 [i_1] [(_Bool)1] [i_1] &= ((/* implicit */unsigned int) (unsigned short)12115);
                    var_12 = ((/* implicit */unsigned char) (((-(arr_6 [i_0] [i_0] [i_0] [i_0]))) >> (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)208))) & (var_8)))));
                }
                arr_10 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) var_2);
            }
        } 
    } 
    var_13 = ((/* implicit */short) (-(((/* implicit */int) var_6))));
}
