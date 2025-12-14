/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77595
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
    var_19 = ((/* implicit */unsigned char) (~(657119336)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_20 |= ((/* implicit */unsigned int) var_6);
                var_21 += ((/* implicit */int) var_4);
                var_22 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [11ULL])) >> (((-1011505478) + (1011505503)))))) ? (2685742258U) : (1063735672U)))), (((((/* implicit */_Bool) (unsigned short)7694)) ? (((/* implicit */unsigned long long int) -2016896662)) : (7812059733831297555ULL)))));
                arr_6 [i_0] = ((/* implicit */unsigned int) ((((unsigned long long int) 1750732784U)) & (((/* implicit */unsigned long long int) (-(9223372036854775807LL))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        for (signed char i_3 = 1; i_3 < 16; i_3 += 1) 
        {
            {
                var_23 = (+(((/* implicit */int) (!(((/* implicit */_Bool) var_18))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (int i_6 = 1; i_6 < 18; i_6 += 3) 
                            {
                                var_24 = ((/* implicit */signed char) ((var_13) / (((/* implicit */unsigned int) 2147483647))));
                                var_25 ^= ((/* implicit */_Bool) (-((+(arr_13 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_6 - 1])))));
                            }
                            var_26 = ((/* implicit */int) ((long long int) ((int) (~(((/* implicit */int) var_6))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned char) (+(max((((unsigned int) (_Bool)1)), (((/* implicit */unsigned int) (~(((/* implicit */int) var_17)))))))));
}
