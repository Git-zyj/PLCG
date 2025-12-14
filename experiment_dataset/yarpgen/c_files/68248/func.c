/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68248
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
    var_15 = ((/* implicit */unsigned short) ((var_2) - (var_4)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 11; i_3 += 2) 
                    {
                        arr_11 [i_0] [i_0] [3LL] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((var_13) - (4187405250318100646LL)))));
                        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_14))));
                    }
                    arr_12 [i_0] [i_0] [9U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32686))) : (5900835375455429466ULL)));
                }
            } 
        } 
    } 
}
