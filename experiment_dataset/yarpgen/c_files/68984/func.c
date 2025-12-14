/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68984
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
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 2; i_2 < 14; i_2 += 4) 
                {
                    var_10 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min(((short)254), (((/* implicit */short) (unsigned char)41)))))) & (((((/* implicit */_Bool) (unsigned char)215)) ? (-761363402629333282LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-118)))))));
                    arr_7 [i_2] [i_2] [i_1] [i_0] = ((((/* implicit */_Bool) max((8184718775062236022ULL), (((/* implicit */unsigned long long int) var_8))))) ? (((/* implicit */int) min((arr_5 [i_2 + 2] [i_1] [i_1 - 1]), (arr_5 [i_2 + 2] [i_1] [i_1 + 1])))) : (((int) (signed char)-123)));
                }
                arr_8 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (70368744177536LL) : ((((+(2984660391906741005LL))) & (285978576338026496LL)))));
                arr_9 [i_1] |= arr_1 [(signed char)13];
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned int) var_6);
}
