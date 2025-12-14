/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69239
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
    var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) (~(var_3)))))));
    var_19 = ((/* implicit */_Bool) max((((/* implicit */unsigned char) var_15)), (var_6)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) (_Bool)1);
                var_21 = (((((~(((/* implicit */int) arr_3 [i_0] [i_0])))) + (2147483647))) << (((((((/* implicit */int) arr_4 [i_0] [i_1])) + (136))) - (8))));
                var_22 = ((/* implicit */int) (unsigned char)255);
            }
        } 
    } 
}
