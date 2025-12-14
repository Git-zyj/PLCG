/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57053
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned short)10537)) : (((/* implicit */int) (unsigned short)35331))));
        var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (+(arr_0 [i_0]))))));
    }
    var_15 = ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 3 */
    for (short i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        for (int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) ((int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1] [(unsigned short)17] [i_1] [i_1]))))), ((+(arr_9 [i_3] [i_2] [i_1] [i_1]))))));
                    arr_11 [i_3] [1ULL] [i_2] [i_1] = ((/* implicit */short) arr_3 [i_3]);
                }
            } 
        } 
    } 
}
