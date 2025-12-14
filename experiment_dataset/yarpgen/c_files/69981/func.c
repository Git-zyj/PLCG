/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69981
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
    var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_4)) | (((/* implicit */int) var_11)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */signed char) (~(max((12758219453336887399ULL), (((/* implicit */unsigned long long int) arr_3 [i_1 + 3] [i_1 + 3] [(unsigned short)9]))))));
                var_21 -= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [8]))))) ^ (((((/* implicit */_Bool) arr_3 [i_1] [i_0] [i_0])) ? (max((arr_2 [i_1 + 2]), (((/* implicit */int) var_16)))) : ((-(var_18)))))));
                var_22 = ((((/* implicit */_Bool) (short)-30227)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-6)));
            }
        } 
    } 
    var_23 -= ((/* implicit */signed char) min(((~(((/* implicit */int) (unsigned short)58518)))), (((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) 0U))))), (((unsigned char) (unsigned short)0)))))));
}
