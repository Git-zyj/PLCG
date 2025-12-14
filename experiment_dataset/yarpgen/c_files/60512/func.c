/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60512
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
    var_10 = ((/* implicit */_Bool) var_2);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2] [i_1])) ? (arr_4 [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [(unsigned short)2] [i_1])))))) ? (140455276U) : (((unsigned int) ((long long int) 3171173473090012237LL)))));
                    arr_10 [i_0] [(unsigned short)8] [i_0] = ((/* implicit */unsigned long long int) (-(max(((+(arr_2 [13ULL] [13ULL]))), ((+(-3171173473090012228LL)))))));
                    arr_11 [i_0] [i_2] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) 375488720187637856ULL))))))));
                }
            } 
        } 
    } 
}
