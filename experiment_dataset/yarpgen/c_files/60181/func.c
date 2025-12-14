/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60181
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
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_10 ^= ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)60))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    {
                        var_11 ^= ((/* implicit */unsigned long long int) arr_6 [i_1] [i_1]);
                        var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) -867972346))));
                    }
                } 
            } 
        } 
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_8 [i_0] [(unsigned short)8] [i_0] [i_0] [8] [8]) : (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
    }
    var_14 = ((/* implicit */int) max((((unsigned long long int) var_2)), (((/* implicit */unsigned long long int) var_9))));
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (~(((/* implicit */int) var_9)))))));
    var_16 = ((/* implicit */short) max((((/* implicit */long long int) var_4)), (2941488960980218305LL)));
}
