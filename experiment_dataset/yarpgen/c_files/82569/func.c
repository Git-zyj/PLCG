/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82569
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
    var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) var_1))));
    var_16 = ((/* implicit */unsigned int) var_1);
    var_17 = ((/* implicit */unsigned long long int) var_11);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 24; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) ((((((/* implicit */int) max((arr_7 [i_0] [i_0] [i_0]), (((/* implicit */unsigned char) (_Bool)1))))) * ((+(((/* implicit */int) var_8)))))) / (((((/* implicit */_Bool) min((var_7), (arr_4 [i_0] [i_0])))) ? (((((/* implicit */int) arr_5 [(short)17])) / (((/* implicit */int) arr_3 [i_2])))) : (((/* implicit */int) (_Bool)1))))));
                    var_19 = ((/* implicit */_Bool) ((((unsigned long long int) max((((/* implicit */long long int) var_1)), (arr_4 [17U] [i_0])))) >> (((/* implicit */int) ((min((33554176ULL), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0])))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-116)))))))))));
                    var_20 = ((/* implicit */int) (-(arr_6 [i_2 - 2] [i_2 - 2] [i_2 - 2])));
                    var_21 = ((/* implicit */long long int) ((min((((unsigned int) var_10)), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)2413))))))) << (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_2 - 2] [i_2 - 2] [i_2 - 1])) || (((/* implicit */_Bool) arr_3 [i_2 + 1])))))));
                }
            } 
        } 
    } 
}
