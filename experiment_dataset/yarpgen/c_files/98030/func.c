/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98030
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
    var_18 = ((/* implicit */_Bool) 11175567865356399422ULL);
    var_19 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)-10874))) / (9223372036854775807LL)));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] = ((/* implicit */long long int) (~((~(((/* implicit */int) arr_2 [i_0] [i_0] [i_0 - 3]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_20 = (+((-9223372036854775807LL - 1LL)));
                                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_10 [i_0] [i_1] [i_2] [i_3] [i_4])), (var_17))))) - (max((((/* implicit */long long int) var_1)), (-9223372036854775795LL)))))) ? (((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_8)))) - (arr_3 [i_4] [i_3]))) : (((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 - 2] [i_1] [i_2] [i_4 + 1] [i_4 - 2] [i_4 + 1]))) * (1693864894708533883LL))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
