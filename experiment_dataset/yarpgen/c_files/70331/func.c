/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70331
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */_Bool) 12682014314250992553ULL);
        var_14 = ((/* implicit */_Bool) (~(((arr_1 [i_0] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (var_7)))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((int) arr_0 [i_0]));
    }
    /* LoopNest 2 */
    for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (int i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) var_4))));
                            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) (unsigned char)237))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60207))) : (1524133142837309507ULL))))));
                            arr_16 [i_1] [i_2] [i_3] [i_1] = ((((var_4) - (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_13 [2] [i_3] [(unsigned short)16] [i_3] [i_4])) : (((/* implicit */int) arr_13 [i_1] [i_3] [i_1] [i_1] [i_4]))))))) != (((((/* implicit */long long int) (~(((/* implicit */int) var_2))))) & (arr_6 [i_3]))));
                            var_17 = ((/* implicit */unsigned short) (((_Bool)1) ? (max((((var_10) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-572))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)21))) <= (var_7)))))) : (((/* implicit */unsigned long long int) arr_4 [i_1]))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [12] [i_1] [i_1] [i_1]))));
                arr_17 [i_1] = ((/* implicit */signed char) ((unsigned long long int) max((((/* implicit */int) (signed char)-110)), (((((/* implicit */int) arr_10 [i_1])) << (((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) var_2);
}
