/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76954
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */long long int) max(((~(134217472))), (((/* implicit */int) var_9))));
                arr_5 [i_1] = ((/* implicit */unsigned char) 17682488435289885671ULL);
                arr_6 [i_1] [i_0] [(unsigned short)13] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_9))))) || (((/* implicit */_Bool) ((764255638419665945ULL) & (11888802722407879063ULL)))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        var_11 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) arr_3 [i_2 - 1]))));
        var_12 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_2 - 1]))));
    }
}
