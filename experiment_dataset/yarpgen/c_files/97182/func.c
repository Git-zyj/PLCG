/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97182
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
    for (long long int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 23; i_3 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (~(-326724047)))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) 1737121226124903525LL)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)128))) : (arr_6 [i_0] [i_0] [i_0]))))), (min((((((/* implicit */long long int) 3387607075U)) / (4982731758925357838LL))), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (var_7))))))));
                            arr_8 [i_0] [i_0] [i_2] [i_0] [i_1 + 1] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)126))));
                            arr_9 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) ((short) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0 + 3] [i_1 - 2] [i_3 + 1] [i_3])))));
                            var_14 = ((/* implicit */long long int) (-((-(((3387607071U) - (((/* implicit */unsigned int) var_7))))))));
                        }
                    } 
                } 
                var_15 ^= ((/* implicit */int) ((max((((/* implicit */long long int) max((var_2), (((/* implicit */int) arr_2 [i_0 + 2] [i_0 + 4] [(_Bool)1]))))), (((-4979279877051082997LL) - (-18LL))))) + (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-70)) ? (arr_0 [i_0] [(short)3]) : (var_12))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) ((((((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (3951162571100090389LL))) % (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)38687)) ? (((/* implicit */unsigned int) 947632183)) : (3387607071U))))));
    var_17 += ((unsigned char) 3655138738U);
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) -32LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_6)))))) ? (min((((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */int) (unsigned char)128)))), (((/* implicit */int) var_9)))) : (var_8)));
    var_19 &= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_0))) <= (((((/* implicit */_Bool) ((((/* implicit */long long int) var_8)) + (-671390105923675481LL)))) ? (var_6) : (((/* implicit */long long int) (-(3387607070U))))))));
}
