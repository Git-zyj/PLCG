/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58727
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
    var_12 ^= ((/* implicit */long long int) max((var_3), (((/* implicit */signed char) ((_Bool) (+(9223372036854775788LL)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_13 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) min((arr_3 [i_0]), (((/* implicit */unsigned short) (signed char)0))))))));
                    var_14 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_8 [i_2] [i_2] [i_0] [i_0]) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))) % ((-(53244779)))))) == ((+(((((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_0] [i_2])) - (832712355256418616ULL)))))));
                    var_15 -= ((/* implicit */unsigned long long int) (signed char)-7);
                }
            } 
        } 
    } 
}
