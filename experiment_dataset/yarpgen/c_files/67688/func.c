/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67688
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
    var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned int) var_8)) == (var_14)));
    var_16 = ((/* implicit */long long int) ((((/* implicit */int) var_11)) * (((/* implicit */int) ((signed char) var_5)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_12 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_0]))) == (var_7)));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        var_17 = ((/* implicit */signed char) ((unsigned int) var_2));
                        arr_16 [i_0] [16LL] [i_2] [(short)21] [i_0] [i_3] = ((/* implicit */long long int) arr_3 [i_1]);
                        arr_17 [i_0] [i_0] [i_0] [(unsigned char)16] = ((/* implicit */short) var_13);
                    }
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) ((unsigned char) (((-(var_9))) & (((/* implicit */long long int) (~(((/* implicit */int) var_10))))))));
}
