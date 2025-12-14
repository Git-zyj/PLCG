/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85726
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_1 [i_0])) << (((((var_2) + (448309755))) - (13))))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_5))) ? ((+(((arr_0 [i_0]) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16))))))) : (((/* implicit */long long int) (-(((arr_0 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (2040U))))))));
    }
    var_12 = ((/* implicit */signed char) var_3);
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)9))) : (2040U))), (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (var_6))))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)1)), (var_0)))) : ((+((~(32767U)))))));
    /* LoopNest 2 */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        for (int i_2 = 1; i_2 < 20; i_2 += 1) 
        {
            {
                var_14 *= ((/* implicit */int) arr_6 [i_1] [i_1] [i_1]);
                arr_9 [i_2 + 3] [i_1] [i_1] = ((((/* implicit */unsigned long long int) (-(arr_7 [i_1] [i_1])))) | (14147052175884836364ULL));
                var_15 = ((/* implicit */long long int) var_0);
                var_16 = arr_8 [i_1 - 1] [i_2 + 3] [i_2 - 1];
                arr_10 [i_1] [i_1] = (!(((/* implicit */_Bool) (signed char)9)));
            }
        } 
    } 
    var_17 = ((((/* implicit */int) (signed char)-99)) + (((((_Bool) var_4)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_1))))))));
}
