/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66690
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
    var_19 = ((/* implicit */unsigned long long int) var_2);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)9)) || (((/* implicit */_Bool) -660027596419581245LL))));
        /* LoopNest 3 */
        for (signed char i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 2; i_3 < 8; i_3 += 2) 
                {
                    {
                        arr_10 [(unsigned char)8] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((unsigned short) min((((/* implicit */unsigned int) var_18)), (var_12))));
                        var_21 = ((/* implicit */unsigned char) (((~(max((((/* implicit */unsigned long long int) var_17)), (arr_3 [i_0]))))) != (min((((/* implicit */unsigned long long int) -6381854087637106023LL)), (max((((/* implicit */unsigned long long int) var_16)), (arr_3 [i_0])))))));
                    }
                } 
            } 
        } 
    }
}
