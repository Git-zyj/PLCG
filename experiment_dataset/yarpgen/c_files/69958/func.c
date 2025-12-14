/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69958
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 13; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) arr_2 [i_0]))) + ((~(((/* implicit */int) arr_0 [i_0]))))));
                                arr_10 [i_0] [i_1] [i_2] [i_3] [i_1] [i_0] [i_1] = ((/* implicit */signed char) ((((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_0)))) & (((/* implicit */int) arr_0 [i_0]))));
                            }
                        } 
                    } 
                    var_19 -= ((/* implicit */signed char) arr_9 [i_0] [i_2] [i_2] [i_1] [i_0]);
                    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) 4217179319365486214LL))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) var_8);
    var_22 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) var_4)) : (min((6673198638189074867ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)118)) : (((/* implicit */int) (short)19660)))))))));
}
