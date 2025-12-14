/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63613
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
    var_14 = ((/* implicit */long long int) (~(((((var_9) + (2147483647))) << (((((/* implicit */int) min((((/* implicit */unsigned short) var_5)), ((unsigned short)20549)))) - (6021)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) max((arr_4 [i_0] [(unsigned short)5]), (((/* implicit */long long int) (_Bool)0)))))) != (1140132481)));
                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 82859358)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10)))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        {
                            arr_9 [i_0] = ((/* implicit */unsigned short) arr_8 [i_0] [i_0] [i_2] [i_2]);
                            var_17 -= ((/* implicit */_Bool) min((((((/* implicit */int) (signed char)-108)) / (((/* implicit */int) (short)10464)))), ((-(((/* implicit */int) var_11))))));
                            var_18 ^= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)59407)) <= (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((var_4), (arr_0 [(unsigned short)6]))))) > (arr_4 [i_0] [i_0]))))));
                            arr_10 [i_0] [i_0] [i_0] [i_0] [(unsigned short)11] [i_3] = ((unsigned short) (short)-10137);
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned short) ((signed char) (_Bool)1));
            }
        } 
    } 
}
