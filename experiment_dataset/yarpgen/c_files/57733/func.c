/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57733
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
    var_10 *= ((/* implicit */_Bool) ((((/* implicit */int) ((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_1)))) || (((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_4))))))) << (((((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_4))))) - (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-35))) >= (var_6))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            {
                var_11 *= ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) var_6)))) && (((((/* implicit */_Bool) arr_2 [i_0] [i_1 + 3])) || (((/* implicit */_Bool) arr_2 [i_0] [i_0])))))) || (((((((/* implicit */_Bool) (unsigned char)23)) && (((/* implicit */_Bool) 147218968)))) || (((((/* implicit */_Bool) (signed char)73)) || (((/* implicit */_Bool) 361431801))))))));
                var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_3 [i_0] [(_Bool)1] [i_1])) >> (((((/* implicit */int) var_5)) - (20033))))) & (((((/* implicit */int) arr_1 [i_0])) >> (((arr_0 [i_0]) - (3462594214U)))))))) && (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) arr_1 [(signed char)10]))))) << (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_0])) == (((/* implicit */int) var_5))))))))));
            }
        } 
    } 
}
