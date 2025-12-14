/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59688
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
    var_20 = ((/* implicit */long long int) ((_Bool) (!(((/* implicit */_Bool) (signed char)-40)))));
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) min(((unsigned char)255), ((unsigned char)252)))), (-589829703871432449LL)))) ? (((((((/* implicit */int) var_12)) > (-1427817918))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (max((((/* implicit */long long int) var_8)), (var_15))))) : (var_6)));
    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) var_1))));
    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((var_3) & (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))) && (((/* implicit */_Bool) 1058967024U))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                {
                    var_24 ^= (-((-((-(arr_8 [i_1] [(unsigned char)14] [(unsigned char)14]))))));
                    var_25 = ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) 278344931)) : (3887727526U)))) ? (max((((((/* implicit */int) var_9)) << (((((/* implicit */int) arr_7 [i_0 + 1])) - (100))))), (((/* implicit */int) var_17)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)70)) <= (((/* implicit */int) (signed char)15))))));
                    arr_9 [i_0 + 2] [i_0 + 2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) ((signed char) arr_7 [i_2]))), (((((/* implicit */_Bool) arr_6 [4] [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) var_10))))))) ? (arr_4 [i_1]) : (((long long int) ((arr_8 [i_0] [i_2] [i_1]) & (((/* implicit */long long int) ((/* implicit */int) arr_0 [15ULL]))))))));
                    var_26 += ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_3)))) * (min((((/* implicit */unsigned long long int) arr_0 [i_2 + 2])), (arr_3 [i_2 + 2]))));
                }
            } 
        } 
    } 
}
