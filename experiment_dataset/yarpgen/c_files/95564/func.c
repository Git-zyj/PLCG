/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95564
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
    for (unsigned char i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) || (((/* implicit */_Bool) arr_1 [i_0 - 1]))))) / (((/* implicit */int) arr_3 [(_Bool)1]))));
        arr_5 [i_0] &= ((/* implicit */int) 10918787958958375146ULL);
    }
    /* LoopNest 3 */
    for (unsigned char i_1 = 2; i_1 < 9; i_1 += 1) 
    {
        for (unsigned short i_2 = 2; i_2 < 11; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                {
                    var_19 = ((/* implicit */long long int) max((((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_12)), (var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_12), (var_18))))) : (max((8543135842628249674ULL), (8543135842628249674ULL))))), (arr_2 [i_2 + 1])));
                    var_20 = ((/* implicit */unsigned long long int) (_Bool)1);
                    var_21 ^= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (~(arr_12 [i_3] [i_1 - 1])))), (min((var_4), (((/* implicit */unsigned long long int) (_Bool)1))))));
                    arr_13 [i_3] [(short)2] [i_1] = ((/* implicit */unsigned char) ((max((14ULL), (8543135842628249664ULL))) > (((/* implicit */unsigned long long int) arr_12 [i_1 + 3] [i_3]))));
                }
            } 
        } 
    } 
}
