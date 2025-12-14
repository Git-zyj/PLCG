/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81349
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
    var_14 = ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 7; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_15 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) -69024064))))), (((var_4) * (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [10U])))))))) >= (((arr_0 [(signed char)7] [i_0 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [4LL] [i_0 - 3]))) : (18446744073709551615ULL)))));
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 10; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */short) (~(0ULL)));
                                arr_16 [i_0] [i_0] [i_0] [i_3] [i_3] [i_0] [i_3] = ((/* implicit */unsigned char) arr_5 [(unsigned short)9]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) var_6))));
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)62592))))) ? (((/* implicit */int) var_12)) : (var_3)))) ? (var_1) : (((/* implicit */int) var_13))));
}
