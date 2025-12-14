/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58598
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_14 = ((unsigned long long int) var_2);
                arr_5 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (((((/* implicit */_Bool) var_4)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))) > (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) arr_3 [4]))))))));
                var_15 = ((/* implicit */unsigned short) 5903481867686480371LL);
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) var_8);
    var_17 ^= ((/* implicit */unsigned long long int) (-(min((((/* implicit */long long int) ((((/* implicit */int) var_11)) * (((/* implicit */int) var_10))))), (min((((/* implicit */long long int) var_4)), (var_6)))))));
    var_18 = ((/* implicit */unsigned int) var_6);
}
