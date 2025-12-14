/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65227
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
    var_16 = ((/* implicit */signed char) var_15);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) (unsigned char)110);
        var_18 = ((/* implicit */unsigned char) ((unsigned short) (unsigned char)119));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_7 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -242670834)) ? (((/* implicit */int) (short)-32764)) : (((/* implicit */int) arr_6 [i_2 - 3]))));
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((unsigned char) arr_1 [i_2] [i_0])))));
                }
            } 
        } 
        var_20 *= ((/* implicit */short) ((unsigned short) arr_2 [i_0]));
    }
}
