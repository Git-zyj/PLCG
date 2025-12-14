/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83123
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
    var_18 -= ((/* implicit */unsigned long long int) var_4);
    var_19 = ((/* implicit */long long int) var_8);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        var_20 = (signed char)-66;
        var_21 = ((/* implicit */int) ((unsigned short) -402619414990140229LL));
        var_22 -= ((/* implicit */signed char) (~(((/* implicit */int) arr_1 [i_0] [i_0 - 1]))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                {
                    var_23 = ((/* implicit */signed char) ((var_2) ? ((-(((/* implicit */int) arr_3 [i_2] [i_1])))) : (((/* implicit */int) (signed char)0))));
                    var_24 = ((/* implicit */_Bool) min((var_24), ((!(((/* implicit */_Bool) arr_8 [i_0] [i_0 + 1] [i_2 - 1] [i_2 - 1]))))));
                }
            } 
        } 
        var_25 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(4677904304880496197ULL))))));
    }
}
