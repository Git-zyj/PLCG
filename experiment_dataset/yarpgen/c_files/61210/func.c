/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61210
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
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_10 [i_2] [i_1] [i_0 + 1] [i_0] = ((/* implicit */unsigned int) -4765394664859160782LL);
                    var_16 = ((/* implicit */_Bool) 4765394664859160789LL);
                    var_17 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (!(var_15)))), (min((max((4765394664859160781LL), (4765394664859160783LL))), (((((-4765394664859160783LL) + (9223372036854775807LL))) << (((-4765394664859160782LL) + (4765394664859160782LL)))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) var_5);
    var_19 = max((4765394664859160789LL), (((/* implicit */long long int) ((((/* implicit */int) ((-4765394664859160782LL) >= (4765394664859160782LL)))) >> (((4765394664859160783LL) - (4765394664859160776LL)))))));
}
