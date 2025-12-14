/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89315
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
    var_17 = ((/* implicit */unsigned int) ((min((((var_11) | (((/* implicit */long long int) 3783776016U)))), (((/* implicit */long long int) ((((/* implicit */_Bool) 5928251013888133627ULL)) ? ((-2147483647 - 1)) : (((/* implicit */int) var_15))))))) >= (((/* implicit */long long int) (+(((/* implicit */int) ((signed char) var_15))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_9 [i_1] = ((/* implicit */short) (+(var_9)));
                    arr_10 [i_2] [i_1] [6LL] [i_2] = ((/* implicit */unsigned long long int) min((min((min((585396445), (((/* implicit */int) var_4)))), (((/* implicit */int) var_4)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_2])))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) ((short) (!(((/* implicit */_Bool) ((-8293628694535426750LL) & (((/* implicit */long long int) var_13))))))));
    var_19 = (+(((long long int) min(((short)4032), ((short)4042)))));
}
