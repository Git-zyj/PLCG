/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63781
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
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_20 = ((/* implicit */_Bool) (~(((arr_2 [i_0] [(unsigned char)11]) & (((/* implicit */int) (signed char)-70))))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_14 [i_0] [(unsigned short)18] [i_2] [i_3] [2U] [i_3] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((var_3), (((/* implicit */short) (_Bool)1))))), (((var_13) | (((/* implicit */unsigned long long int) arr_2 [i_1 + 1] [i_1 - 1]))))));
                        arr_15 [3U] [3U] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (-(-1358592826221987517LL)))) || (((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0]))));
                        var_21 = ((/* implicit */unsigned long long int) (+(var_14)));
                    }
                } 
            } 
        } 
        arr_16 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_0] [i_0])))))));
    }
    var_22 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)7)) ? ((~(9378111122190000190ULL))) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-70))) : (var_15))))), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned char)255)))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) (-2147483647 - 1))) / (var_17)))) : (((((/* implicit */long long int) ((/* implicit */int) var_18))) | (var_4))))))));
}
