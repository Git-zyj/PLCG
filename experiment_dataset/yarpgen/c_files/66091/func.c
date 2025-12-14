/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66091
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
    var_19 = ((/* implicit */unsigned short) ((signed char) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)30854)) : (((/* implicit */int) var_4)))))));
    var_20 = ((/* implicit */unsigned long long int) (unsigned char)207);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) min((var_21), ((-((~(0ULL)))))));
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned short) ((_Bool) var_13));
                var_22 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (unsigned char)0)), (((unsigned long long int) max((var_8), ((unsigned short)30100))))));
                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)-105)), (arr_6 [i_1] [i_1])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 7747580245863411633ULL)) ? (34359738367LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)23)))))) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)251))))) : (((12674060019283350488ULL) ^ (((/* implicit */unsigned long long int) 4432302959813252982LL))))));
                arr_9 [i_0] [i_0] = ((/* implicit */unsigned short) ((_Bool) 3994299477605899573LL));
            }
        } 
    } 
}
