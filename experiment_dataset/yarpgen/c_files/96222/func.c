/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96222
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
    var_16 = ((/* implicit */short) ((min((((/* implicit */long long int) ((((/* implicit */_Bool) 17267393324223522979ULL)) || (((/* implicit */_Bool) 706364567))))), (((((/* implicit */_Bool) var_11)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))) - (((/* implicit */long long int) ((/* implicit */int) var_4)))));
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) < (((/* implicit */int) var_1))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    {
                        var_18 = ((/* implicit */unsigned long long int) (!(((-4588248311596417972LL) < (((/* implicit */long long int) ((/* implicit */int) (short)28117)))))));
                        arr_11 [i_0] [i_0] [i_2] [1LL] [i_2] = ((/* implicit */int) ((((var_11) * (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1 - 2] [i_2] [i_3]))))) / ((((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-126)))))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) arr_8 [i_0] [i_0] [i_0] [i_0]))))))));
    }
}
