/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87505
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
    for (long long int i_0 = 4; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_7 [10U] [i_1] [i_1] = ((/* implicit */unsigned short) max((-1025849633), (-1025849633)));
                arr_8 [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_5 [i_1])) ? (((((/* implicit */_Bool) 1025849632)) ? (((/* implicit */int) arr_2 [8ULL])) : (((/* implicit */int) arr_3 [i_1])))) : (((/* implicit */int) arr_5 [i_1])))), (((/* implicit */int) (unsigned short)62687))));
            }
        } 
    } 
    var_11 = ((/* implicit */int) max((var_11), (((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (-1025849617)))))) ? (var_4) : (-1025849633)))));
}
