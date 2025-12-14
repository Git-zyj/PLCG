/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68194
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
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */short) ((signed char) 1009918333409376108LL))), (max(((short)13778), ((short)-13778)))))) ? (((((var_3) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)6))))) ^ (((/* implicit */long long int) (-(-1071838078)))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 1498910097)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)25))) : (var_5))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned char i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        {
                            arr_10 [(_Bool)1] [i_1] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */int) ((((((/* implicit */int) arr_3 [i_3 + 2] [i_0 + 1])) - (((/* implicit */int) (signed char)-117)))) > ((+(((/* implicit */int) ((signed char) var_9)))))));
                            var_13 = ((/* implicit */unsigned char) arr_8 [i_2] [i_2] [i_2] [i_3 - 1]);
                            arr_11 [i_0] [i_0] [i_2] [3] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) 1009918333409376108LL))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) var_6))));
}
