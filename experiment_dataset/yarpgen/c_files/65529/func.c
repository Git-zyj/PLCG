/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65529
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 23; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_1 - 1] = ((/* implicit */unsigned long long int) (signed char)113);
                arr_6 [i_0] [i_0] = ((/* implicit */short) ((max((((10926431628137520108ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) (signed char)-122)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))));
                arr_7 [14U] [14U] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) 2913792769168510403LL)))));
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) (signed char)15)), (2899069806169857990ULL))) == (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_8)), (9223372036854775807LL))))));
                arr_9 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((9223372036854775807LL) / (((/* implicit */long long int) (+(((/* implicit */int) ((short) (signed char)12))))))));
            }
        } 
    } 
    var_15 = var_0;
    var_16 = ((/* implicit */short) (~(((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (unsigned int i_2 = 1; i_2 < 18; i_2 += 2) 
    {
        for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            {
                arr_17 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_4) > (((/* implicit */unsigned long long int) var_0)))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) 4059349098U)) : (10926431628137520121ULL)))));
                arr_18 [i_3] [i_2] = ((/* implicit */unsigned int) (+(min(((~(var_14))), (2361015724562910127ULL)))));
            }
        } 
    } 
}
