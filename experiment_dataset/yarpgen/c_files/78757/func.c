/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78757
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
    var_18 |= ((/* implicit */unsigned long long int) ((unsigned char) var_6));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_19 &= ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
                arr_6 [i_0] [i_0] = ((max((((/* implicit */unsigned long long int) var_9)), (13087593275105656956ULL))) | (var_8));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            {
                var_20 -= ((/* implicit */unsigned long long int) arr_8 [(unsigned char)10] [i_3]);
                arr_13 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_9 [i_2]))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)127)) || (((/* implicit */_Bool) (signed char)3))))) != (((/* implicit */int) var_9))))) : (min(((~(((/* implicit */int) var_16)))), (((((/* implicit */int) (signed char)-22)) * (((/* implicit */int) (signed char)-56))))))));
                var_21 = ((/* implicit */unsigned long long int) var_7);
            }
        } 
    } 
}
