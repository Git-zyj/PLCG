/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83578
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) max((((unsigned int) arr_2 [i_0] [i_0])), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1203669990U)))))));
        /* LoopNest 2 */
        for (short i_1 = 4; i_1 < 23; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_9 [i_1 - 4] [i_1] [i_0] [i_1] = ((/* implicit */_Bool) (unsigned char)40);
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_1 - 1] [i_1 + 1]))));
                    var_15 = ((/* implicit */int) var_2);
                    arr_11 [i_0] [i_0] [i_0] [i_0] = (((!(((/* implicit */_Bool) min((((/* implicit */unsigned int) 1968490514)), (3091297310U)))))) ? ((((~(arr_7 [i_0] [i_0] [i_1] [i_0]))) / (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_0]))))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_1] [i_1 - 3]))))));
                }
            } 
        } 
    }
    var_16 = ((/* implicit */unsigned int) ((unsigned char) 1203669976U));
    var_17 *= ((/* implicit */signed char) var_8);
}
