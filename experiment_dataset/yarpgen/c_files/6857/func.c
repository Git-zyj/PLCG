/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6857
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((((/* implicit */int) arr_3 [i_0])) % (((/* implicit */int) arr_3 [(signed char)3])))) > ((~(((/* implicit */int) arr_3 [i_0])))))))));
                    arr_8 [i_0] [i_0] &= ((/* implicit */long long int) arr_3 [(_Bool)1]);
                    arr_9 [i_2] [i_0] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (arr_7 [i_0] [i_1]))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) ((signed char) var_3));
    var_19 = ((/* implicit */short) var_7);
}
