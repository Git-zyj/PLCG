/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84730
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
    var_15 = ((unsigned short) (!(((/* implicit */_Bool) ((unsigned short) -3977830413072153852LL)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */long long int) arr_9 [i_0 + 3] [i_1] [i_1] [(unsigned short)12]);
                    arr_10 [i_2] [i_0] [i_1] = ((/* implicit */unsigned int) (~((+(arr_1 [i_0])))));
                    arr_11 [i_0 + 1] [i_0 + 1] [i_2] [i_0] = (~(min((((/* implicit */unsigned int) (unsigned short)50154)), (1073725440U))));
                    var_17 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) (+(-450524044376094402LL))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_2 [1LL]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [1U])))))) ? (((long long int) (unsigned short)0)) : (((((/* implicit */_Bool) (unsigned short)0)) ? (-3630740038640443462LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))))) : (((((/* implicit */_Bool) min((553550967968443026LL), (((/* implicit */long long int) 3958624254U))))) ? (((long long int) -5545685646942291367LL)) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_9 [i_0] [i_1] [i_2] [i_2]))))))));
                }
            } 
        } 
    } 
    var_18 *= ((/* implicit */unsigned int) var_12);
}
