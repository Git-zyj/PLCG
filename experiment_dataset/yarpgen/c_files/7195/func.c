/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7195
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_10 = ((unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (2724932504U) : (4078914150U))) : (((1778792285U) >> (((var_9) - (2907256097U)))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned int i_3 = 4; i_3 < 12; i_3 += 1) 
                    {
                        {
                            arr_9 [5U] [i_0] = (-(368252229U));
                            arr_10 [i_3] [i_0] [i_0] = ((((/* implicit */_Bool) 896233935U)) ? (((((((/* implicit */_Bool) 3917058636U)) ? (1701716760U) : (1733812832U))) << (((((unsigned int) var_2)) - (1393220285U))))) : (max((((((/* implicit */_Bool) 1119392578U)) ? (4U) : (2561154463U))), ((~(arr_8 [i_2]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_11 = ((((/* implicit */_Bool) var_0)) ? (max((2724932514U), (3093914397U))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3573367799U)) ? (var_6) : (4294967292U)))) ? (var_9) : (((((/* implicit */_Bool) var_5)) ? (var_5) : (var_6))))));
}
