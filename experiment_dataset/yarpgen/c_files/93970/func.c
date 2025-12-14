/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93970
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                arr_5 [8] [i_1] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-32757)) + (((/* implicit */int) (unsigned char)63))))) : (var_9))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_1 + 1] [i_2] [i_2]))))) ? (((/* implicit */int) min((arr_8 [i_3] [i_2] [i_1 - 1] [i_1] [i_0] [i_0]), (((/* implicit */short) arr_0 [i_2]))))) : (((/* implicit */int) arr_4 [i_1 - 1]))))) ? (var_7) : (((/* implicit */unsigned long long int) ((int) (short)-1)))));
                            var_14 = ((/* implicit */signed char) var_6);
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((_Bool) -2))), (var_11)))) ? (var_1) : (((/* implicit */int) ((_Bool) var_8)))));
    var_16 = ((/* implicit */short) min((((int) var_3)), (((int) var_7))));
    var_17 ^= ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((unsigned char) (unsigned char)203))) : (((/* implicit */int) max((var_3), (((/* implicit */signed char) var_12))))))));
}
