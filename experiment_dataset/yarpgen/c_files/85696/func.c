/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85696
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */_Bool) ((unsigned int) ((15202947410132914438ULL) != (((/* implicit */unsigned long long int) -89785630)))));
                            arr_14 [i_1] [i_1] [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_1 - 3]))))), (min((((/* implicit */int) arr_4 [i_1] [i_1 - 1])), (arr_7 [i_1] [i_1 - 3])))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (~(8799278042012399037ULL))))));
                var_16 = min((min((8799278042012399037ULL), (((/* implicit */unsigned long long int) (+(2097151U)))))), (min((max((9647466031697152579ULL), (((/* implicit */unsigned long long int) (_Bool)0)))), (((/* implicit */unsigned long long int) arr_12 [i_0] [i_1 + 1] [i_1 + 1] [i_1 + 1])))));
                var_17 -= ((/* implicit */unsigned short) min((((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_1])), (((((/* implicit */_Bool) arr_12 [i_0] [(_Bool)1] [i_0] [i_0])) ? (((/* implicit */int) arr_12 [i_0] [i_1 - 2] [i_1 - 2] [i_1 + 1])) : (((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) (+(((/* implicit */int) (((!(((/* implicit */_Bool) 2097151U)))) && ((_Bool)0))))));
}
