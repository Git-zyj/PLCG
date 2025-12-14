/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57553
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
    var_19 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) ((-9223372036854775806LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)57)))))) ? (var_17) : (((((/* implicit */long long int) var_1)) / (var_9))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 22; i_3 += 3) 
                    {
                        for (long long int i_4 = 4; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) (unsigned char)174);
                                var_21 = ((/* implicit */signed char) var_15);
                                var_22 = ((_Bool) var_9);
                                var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2730841255U)) ? (((((/* implicit */_Bool) var_10)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_1] [0ULL]))))) : (arr_6 [i_2 + 1] [i_3 - 1] [i_4 - 4])))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) max((1564126049U), (((/* implicit */unsigned int) var_0))))))) : ((~(max((arr_6 [9LL] [i_1] [i_2]), (((/* implicit */long long int) var_13)))))))))));
                            }
                        } 
                    } 
                    var_24 = (~(16750378346567547290ULL));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */long long int) (+((~(((/* implicit */int) (signed char)-84))))));
}
