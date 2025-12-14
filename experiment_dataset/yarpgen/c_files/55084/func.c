/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55084
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
    var_13 = ((/* implicit */unsigned long long int) ((((_Bool) ((((/* implicit */_Bool) var_1)) ? (var_1) : (var_9)))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_1] |= ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) 6142721289844927933ULL)) ? (12304022783864623689ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)27839)) ? (3891783668091206392LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-34)))))))));
                    arr_10 [i_2] [i_0] [i_0] [i_0] = min((((/* implicit */long long int) max(((unsigned short)41138), ((unsigned short)3735)))), (max((-4204890917479272773LL), (((/* implicit */long long int) (unsigned short)63)))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned short) ((long long int) (-(((/* implicit */int) max((((/* implicit */unsigned short) (short)7168)), ((unsigned short)34437)))))));
}
