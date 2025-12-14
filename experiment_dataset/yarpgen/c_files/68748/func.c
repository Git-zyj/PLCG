/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68748
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 8; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */_Bool) 9151469017298301190LL);
                    arr_11 [i_0] [i_1] [(signed char)0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17513162363866291023ULL)) ? (234513311801918614ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1])))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65532))))) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) min((((/* implicit */short) arr_10 [i_2 - 3])), (arr_3 [i_0]))))));
                }
            } 
        } 
    } 
    var_16 |= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(var_4)))), (var_14)))) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65511)))));
}
