/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84643
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
    var_15 = ((/* implicit */signed char) ((1376329133U) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)64)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_16 |= ((/* implicit */unsigned long long int) (signed char)42);
                                arr_15 [i_0] [i_3] [i_0] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)15959)) && (((/* implicit */_Bool) (signed char)-78)))) || (((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)-65)) ? (((/* implicit */long long int) 97495185U)) : (-8265529110166393588LL))))))));
                            }
                        } 
                    } 
                } 
                var_17 -= ((/* implicit */signed char) (-(((((/* implicit */_Bool) (signed char)-25)) ? (((/* implicit */int) (unsigned short)65533)) : (((/* implicit */int) (!((_Bool)1))))))));
                var_18 *= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) 97495212U)), ((-(((((/* implicit */_Bool) (unsigned char)121)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)74))) : (2446169538227083966LL)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) 15035813302080997273ULL);
}
