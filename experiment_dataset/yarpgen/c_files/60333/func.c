/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60333
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
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] = var_8;
                    var_13 = ((/* implicit */long long int) arr_1 [i_1] [i_1]);
                    var_14 = ((/* implicit */unsigned long long int) min((var_14), (max((min((var_0), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1023)) && (((/* implicit */_Bool) arr_5 [(_Bool)1] [(_Bool)1] [(_Bool)1]))))))), (((((/* implicit */_Bool) max(((signed char)-80), ((signed char)107)))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) : (arr_2 [i_0]))) : (0ULL)))))));
                    var_15 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_5 [4U] [4U] [4U]), (((/* implicit */unsigned long long int) (!(var_8)))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 264594902U)) ? (((/* implicit */unsigned long long int) 234578441)) : (9433860786924930743ULL)));
}
