/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74170
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
    var_19 = ((/* implicit */long long int) (-(max((9223372036854775808ULL), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)6))) ^ (4177333264U))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((((/* implicit */int) arr_4 [i_0])) == (((/* implicit */int) var_14)))), (((((/* implicit */long long int) var_6)) < (var_7))))))) & (var_3)));
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_20 -= ((/* implicit */long long int) var_15);
                                arr_13 [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((-1957804465746114589LL), (((/* implicit */long long int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (signed char)-68)) : (((/* implicit */int) (signed char)-69)))))))) || (((/* implicit */_Bool) (signed char)50))));
                                var_21 = ((/* implicit */signed char) (-((-(min((((/* implicit */unsigned int) (signed char)20)), (var_8)))))));
                            }
                        } 
                    } 
                } 
                arr_14 [(_Bool)1] [i_1 + 1] [(_Bool)1] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) arr_2 [i_1 + 2] [i_1 + 2])))));
            }
        } 
    } 
}
