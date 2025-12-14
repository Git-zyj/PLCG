/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80627
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
    var_11 = ((/* implicit */short) 0LL);
    var_12 = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) / (((var_2) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14582)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_0 + 2] [i_1])) * (((/* implicit */int) (unsigned short)3570))));
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0] [i_1 + 2])) || (((/* implicit */_Bool) 3967818874406093026ULL))));
                arr_6 [i_1] = ((/* implicit */_Bool) (unsigned short)27867);
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) ((((/* implicit */int) var_9)) + (((/* implicit */int) (unsigned short)50954))));
    var_15 = ((/* implicit */int) ((((/* implicit */long long int) ((((var_0) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) var_8))))) - (1)))))) ^ (((8919647767304800174LL) - (((/* implicit */long long int) ((((/* implicit */int) (short)32767)) ^ (2030981636))))))));
}
