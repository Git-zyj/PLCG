/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73191
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((int) var_7))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_16))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) | (9174898665369972158ULL)));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(-1LL)))) ? (((unsigned long long int) 20LL)) : (((var_4) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
        var_18 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0]))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (30LL) : (-31LL)))) ? ((~(-1LL))) : (((/* implicit */long long int) (~(((/* implicit */int) var_3)))))));
    }
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (unsigned long long int i_2 = 3; i_2 < 15; i_2 += 2) 
        {
            {
                arr_13 [i_1] [i_1] = ((/* implicit */short) var_0);
                var_19 = var_12;
            }
        } 
    } 
}
