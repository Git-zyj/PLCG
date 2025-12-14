/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58993
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
    var_20 = ((/* implicit */unsigned char) max((5569545899387281518ULL), (5569545899387281505ULL)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_21 += ((short) ((((/* implicit */_Bool) 5569545899387281524ULL)) ? (((/* implicit */int) (short)0)) : (-719858180)));
                    var_22 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_15)) % (arr_5 [i_0] [i_0] [i_2])))) ? (arr_4 [(short)13]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(signed char)19])))))) - (max((min((((/* implicit */unsigned long long int) var_0)), (arr_1 [11ULL]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (arr_4 [i_1]) : (3030630316U))))))));
                }
            } 
        } 
    } 
}
