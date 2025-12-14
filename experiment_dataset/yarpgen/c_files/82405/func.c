/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82405
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */_Bool) 0)) && (((/* implicit */_Bool) 939524096))))), (min((((/* implicit */int) ((((/* implicit */_Bool) (-2147483647 - 1))) || (((/* implicit */_Bool) 2150993979U))))), (((((/* implicit */int) arr_3 [5LL] [i_1 + 2])) ^ (((/* implicit */int) var_7))))))));
                    var_19 = ((/* implicit */unsigned char) arr_4 [i_0] [i_1 + 1]);
                    var_20 |= -939524096;
                    var_21 = ((/* implicit */signed char) 288230376151711743LL);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) 6653208108138645102LL);
    var_23 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_6))))), (min((((/* implicit */unsigned long long int) var_10)), (17112760320ULL))))) : (((/* implicit */unsigned long long int) 939524096))));
}
