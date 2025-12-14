/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97540
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 4; i_3 < 22; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_15 += ((/* implicit */short) var_5);
                                var_16 *= min((((((/* implicit */_Bool) arr_6 [i_3 - 2] [i_3] [i_3 - 2] [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-8675)))), (((/* implicit */int) ((unsigned char) (_Bool)1))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((short)8685), (((/* implicit */short) (_Bool)1))))) ? ((+(arr_14 [i_0] [i_0] [i_0 + 1] [i_0 - 1] [8LL] [i_0 - 1]))) : (((((/* implicit */_Bool) ((var_4) + (var_3)))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))));
                }
            } 
        } 
        var_18 += ((((int) arr_3 [i_0 + 1])) <= (((/* implicit */int) (short)-8675)));
    }
    for (unsigned char i_5 = 1; i_5 < 14; i_5 += 2) 
    {
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) max((((((arr_10 [i_5] [i_5] [23ULL] [i_5]) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) + (((/* implicit */long long int) arr_3 [i_5 + 3])))), ((-(var_6))))))));
        var_20 -= ((/* implicit */_Bool) (short)8674);
    }
    var_21 = ((/* implicit */unsigned char) var_9);
}
