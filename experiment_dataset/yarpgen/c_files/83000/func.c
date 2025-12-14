/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83000
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */int) (+(((long long int) var_7))));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_11 [i_2] = ((/* implicit */long long int) ((signed char) arr_2 [i_1 - 1] [i_2 + 2]));
                    var_17 = ((/* implicit */short) arr_9 [i_2 + 1] [(unsigned short)17] [i_2 + 2] [i_2 - 1]);
                    arr_12 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) var_16);
                    arr_13 [(_Bool)1] [i_2] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1] [i_2])) ? (0U) : (((/* implicit */unsigned int) var_3))))) ? (-513394401) : (((/* implicit */int) ((unsigned short) var_0)))));
                }
            } 
        } 
        var_18 -= ((/* implicit */int) (!(((/* implicit */_Bool) var_0))));
    }
    var_19 = ((/* implicit */unsigned char) var_14);
    var_20 = ((/* implicit */unsigned short) ((long long int) (_Bool)1));
}
