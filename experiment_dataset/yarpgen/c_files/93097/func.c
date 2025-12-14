/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93097
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
    var_10 *= (!(((/* implicit */_Bool) (signed char)0)));
    var_11 = ((/* implicit */unsigned int) var_0);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                var_12 = arr_5 [i_0] [i_1];
                arr_7 [(_Bool)1] [i_0] [i_0] = ((/* implicit */int) max((var_4), (var_1)));
                arr_8 [i_0] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0] [(_Bool)1])) + (((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (11971745349911500657ULL))))) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_0] [i_1 - 1])))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_13 += ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
                            arr_14 [(_Bool)1] [i_0] [(_Bool)1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned short) arr_9 [i_0 - 3])))));
                            arr_15 [i_3] [i_1 - 1] [i_0] [i_3] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (short)-16879)), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) | (var_5)))) ? (((/* implicit */unsigned long long int) ((unsigned int) (short)31626))) : (min((((/* implicit */unsigned long long int) arr_1 [i_2])), (var_9)))))));
                            var_14 = ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10))) != (2468743441115024228ULL)))) & (((((/* implicit */_Bool) arr_12 [i_1 - 1] [i_1 - 2] [i_0 - 3] [i_0 - 2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))));
                            arr_16 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_6);
                        }
                    } 
                } 
                var_15 *= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_5 [i_1] [i_1])), (arr_11 [i_1])));
            }
        } 
    } 
}
