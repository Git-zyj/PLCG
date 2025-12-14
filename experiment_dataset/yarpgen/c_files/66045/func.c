/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66045
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
    var_14 = ((/* implicit */_Bool) (-(((/* implicit */int) var_11))));
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? ((((((~(((/* implicit */int) var_4)))) + (2147483647))) << (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_8)) : (var_12))) - (8210913773000255317ULL))))) : (((/* implicit */int) ((((/* implicit */_Bool) -1200736096)) && (((/* implicit */_Bool) (unsigned short)59504)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_4 [i_2] [(_Bool)1])) || (((/* implicit */_Bool) arr_3 [(unsigned short)9] [i_1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) arr_1 [i_1]))))) : (arr_3 [i_0] [i_0])));
                    arr_10 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 705227815613142783LL)) ? (((/* implicit */int) (unsigned short)20099)) : (((/* implicit */int) (unsigned short)20099))));
                }
            } 
        } 
    } 
}
