/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81665
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
    var_18 = ((((/* implicit */_Bool) min((var_8), (((/* implicit */int) var_9))))) ? (((((/* implicit */unsigned long long int) (~(255U)))) * (var_6))) : ((+(min((17757969963319567779ULL), (((/* implicit */unsigned long long int) (short)145)))))));
    var_19 &= ((/* implicit */short) ((((/* implicit */int) (unsigned char)185)) != (var_7)));
    var_20 = min((1321476266U), (((/* implicit */unsigned int) var_14)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 4; i_0 < 7; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_21 += ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)133)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)102))) : (9223372036854775807LL))), (((/* implicit */long long int) (-(-1454699003))))))) ? (((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0] [i_0 - 4])) ? (0ULL) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)241))) / (5257434948923591006ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_1 [0U]), (arr_1 [6])))))));
                    arr_10 [i_0] = ((/* implicit */long long int) ((unsigned long long int) arr_2 [i_0 - 1] [i_1]));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) ((((/* implicit */int) min(((unsigned short)47013), ((unsigned short)31592)))) << (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)112)) ? (-1) : (((/* implicit */int) (short)139))))) && (((/* implicit */_Bool) var_14)))))));
}
