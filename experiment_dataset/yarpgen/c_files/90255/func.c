/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90255
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
    var_20 = var_19;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 3) 
                    {
                        arr_11 [i_3] [i_1] [i_2] [i_1] = ((/* implicit */int) arr_2 [i_0 - 1] [i_3 + 1]);
                        var_21 = var_19;
                    }
                    var_22 ^= max((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) < (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1]))))), ((+(arr_8 [i_0] [i_0] [i_0 - 1] [0LL] [i_0 - 1] [i_0]))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (int i_4 = 1; i_4 < 6; i_4 += 4) 
    {
        arr_14 [i_4] [i_4] = ((/* implicit */long long int) 161164831);
        var_23 ^= ((/* implicit */int) var_0);
    }
    var_24 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((7579186025798403310ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))) <= (max((((/* implicit */unsigned int) var_9)), (var_2))))))));
}
