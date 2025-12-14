/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60195
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
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) (short)-28740)))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_9 [i_1] [i_0 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)8319)) ? (((/* implicit */int) min((arr_4 [i_0 - 2] [i_0 - 2] [i_0 - 2]), (arr_4 [i_0 - 2] [i_0 - 2] [i_0 - 2])))) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) ((var_3) | (((/* implicit */long long int) ((/* implicit */int) (short)1023)))))))))));
                    arr_10 [i_0] [i_2] &= ((/* implicit */short) (~(((/* implicit */int) (unsigned short)0))));
                    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_8)))))))));
                    arr_11 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned int) (short)32767));
                }
            } 
        } 
    }
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) & (var_3)))))));
}
