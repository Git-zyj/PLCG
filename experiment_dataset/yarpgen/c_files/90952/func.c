/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90952
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
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */short) min((((/* implicit */int) ((unsigned char) -4543657052096899148LL))), ((-(arr_1 [i_0] [i_0])))));
                var_17 = min((((/* implicit */long long int) (~(((/* implicit */int) min(((unsigned short)56549), (((/* implicit */unsigned short) var_7)))))))), (min((((long long int) -6555780532703841638LL)), (((/* implicit */long long int) ((unsigned int) -6555780532703841638LL))))));
                var_18 = min((((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_1 [i_1] [i_0])))) && (((/* implicit */_Bool) ((signed char) var_8)))))), (((unsigned int) (short)-6008)));
                var_19 = (-(((var_10) / (var_10))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) var_15);
}
