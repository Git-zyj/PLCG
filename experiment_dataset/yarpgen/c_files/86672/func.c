/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86672
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_14 *= ((/* implicit */signed char) (+(min((1073741824), (((/* implicit */int) (_Bool)1))))));
                arr_4 [i_0] = ((/* implicit */long long int) (!(((((long long int) (short)-27809)) != (arr_0 [21U])))));
            }
        } 
    } 
    var_15 ^= ((/* implicit */long long int) 8727373545472ULL);
}
