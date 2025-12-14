/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76406
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
    for (unsigned char i_0 = 1; i_0 < 7; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) (signed char)-57)) & (((/* implicit */int) var_7)))));
                        var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) var_9))));
                        var_15 |= ((/* implicit */unsigned int) ((unsigned char) arr_1 [i_2]));
                    }
                    var_16 += ((/* implicit */unsigned char) max((arr_7 [i_0 - 1]), (arr_8 [i_0] [i_0 + 3] [i_0 + 2] [i_0] [i_0 + 2] [(signed char)3])));
                }
            } 
        } 
    } 
    var_17 &= var_9;
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) ((short) -2049367449))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) var_3)) : (var_5))))))))));
}
