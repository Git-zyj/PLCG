/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89795
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
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_11 [i_0] |= max((((7849896298487678272ULL) >> (((3023958799978593891ULL) - (3023958799978593886ULL))))), (7849896298487678300ULL));
                    arr_12 [i_0 - 1] [i_0 - 1] [(signed char)6] [i_0 - 1] = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)12)) ? (15855823075034559246ULL) : (((/* implicit */unsigned long long int) 282779828924485366LL)))) | (((9095768545924650624ULL) ^ (16166599022258069834ULL)))));
                    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)249))) != (257160918275540862ULL)))), (((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) >> (((257160918275540857ULL) - (257160918275540844ULL))))))))));
                }
            } 
        } 
    } 
    var_18 *= var_1;
}
