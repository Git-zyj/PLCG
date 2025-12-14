/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68595
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
    var_19 = ((/* implicit */unsigned char) ((max(((-(3800437968604365207ULL))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_1))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) var_2))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_17))) > (arr_1 [i_1] [i_0 + 1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1] [i_1]))) : (14646306105105186431ULL)));
                var_20 = ((/* implicit */short) (~(((/* implicit */int) var_7))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) arr_1 [i_0] [i_1])))))))) ? (((((/* implicit */_Bool) ((14646306105105186431ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)33)))))) ? (((/* implicit */unsigned long long int) ((2470484058U) << (((14646306105105186416ULL) - (14646306105105186410ULL)))))) : ((-(3800437968604365207ULL))))) : ((~((-(14646306105105186424ULL)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) var_3);
}
