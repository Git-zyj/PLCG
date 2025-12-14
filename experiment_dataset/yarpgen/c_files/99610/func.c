/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99610
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
    var_11 = ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_9)) : (((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */unsigned long long int) 16)))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (((-(((/* implicit */int) (signed char)126)))) >= (((/* implicit */int) ((4080LL) < (-4076LL)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((var_1) % (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 + 1] [i_1 + 1])))))) > (15232174535697199949ULL)));
                var_13 = ((/* implicit */long long int) 15570496460602366801ULL);
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) ((short) -3085969547738288302LL));
}
