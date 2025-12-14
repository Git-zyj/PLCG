/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58331
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
    var_20 = ((/* implicit */signed char) ((unsigned int) max((((/* implicit */int) (signed char)100)), ((+(((/* implicit */int) (signed char)(-127 - 1))))))));
    var_21 &= ((/* implicit */short) (+((~((-2147483647 - 1))))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                {
                    var_22 = ((/* implicit */_Bool) var_7);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 3; i_3 < 16; i_3 += 3) 
                    {
                        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) var_6))));
                        var_24 = ((/* implicit */short) max((var_24), (arr_6 [i_0] [18] [i_2] [(short)8])));
                        arr_9 [i_2] [18LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_1] [i_2 - 1] [i_3 - 1])) ? (arr_7 [i_3 - 2] [i_2] [i_0 - 1] [i_2 + 1] [i_2] [i_0 - 1]) : (((/* implicit */unsigned int) ((-102419723) ^ (((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_3])))))));
                    }
                }
            } 
        } 
    } 
}
