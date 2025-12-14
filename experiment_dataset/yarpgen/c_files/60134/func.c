/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60134
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
    var_20 = ((/* implicit */int) ((((/* implicit */unsigned int) (~(var_15)))) / (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1441299793U)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) (unsigned short)32461))))) : ((-(1441299783U)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_5)), (min((((/* implicit */long long int) 964543336U)), (var_3)))))) ? (min((4055843837U), (((/* implicit */unsigned int) 1329439101)))) : (((/* implicit */unsigned int) (+(-1329439090))))));
                            arr_8 [i_2 + 1] [i_0] [i_0] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) min(((~(((/* implicit */int) var_9)))), (((/* implicit */int) (signed char)20))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) : (((var_8) - (((/* implicit */long long int) -1329439101))))));
                        }
                    } 
                } 
                var_22 = ((((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)12806)) < (1329439074))) ? (max((-15), (((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) (unsigned short)31593))))))) - (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)33943))))) ? ((-(arr_6 [i_0] [i_0] [i_1 - 1] [i_1]))) : (((/* implicit */unsigned long long int) arr_0 [i_1 - 2] [i_1 + 2])))));
                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(553262403U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [14ULL] [i_0] [(signed char)5]))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_15)) >= (((((/* implicit */_Bool) var_12)) ? (arr_6 [i_1] [(unsigned short)6] [i_0] [i_0]) : (var_4))))))));
                var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [(unsigned char)18])) ? (1329439086) : (((/* implicit */int) var_13))))), (10523011906808346638ULL)))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned char) (~(var_18)));
}
