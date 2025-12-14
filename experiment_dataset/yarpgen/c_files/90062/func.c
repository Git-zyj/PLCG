/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90062
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_11 = ((/* implicit */signed char) (~(max((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_0 [i_0] [i_0])))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((unsigned char) arr_1 [i_0]));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 18; i_3 += 4) 
                {
                    {
                        var_12 = max((((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) var_9))))), (arr_4 [i_3] [i_1] [i_1])))), (var_1));
                        arr_11 [i_3 - 1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) arr_9 [i_3] [i_3] [i_3 - 1] [i_0]);
                    }
                } 
            } 
        } 
    }
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (-(1417757210504464751ULL))))));
    var_14 = ((/* implicit */short) 17028986863205086864ULL);
    var_15 = ((/* implicit */long long int) var_8);
    var_16 = ((/* implicit */int) min((max((12300104802295685619ULL), (((/* implicit */unsigned long long int) var_1)))), (((unsigned long long int) max((6146639271413865996ULL), (12300104802295685619ULL))))));
}
