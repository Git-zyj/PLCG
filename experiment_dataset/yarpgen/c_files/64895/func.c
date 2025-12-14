/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64895
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 7; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 6; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */signed char) max((((/* implicit */int) (signed char)32)), ((-(((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_2))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_17 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)32748)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (4290318780484234809ULL)));
                                arr_10 [i_0] [i_2] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) (unsigned char)113);
                            }
                        } 
                    } 
                    arr_11 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */long long int) max((var_4), (((/* implicit */unsigned int) (unsigned short)9516))))) : (max((((((/* implicit */_Bool) arr_2 [7LL])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)255)))))))));
                    arr_12 [i_0] [i_0] [i_2] [(signed char)7] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) -8714578181408611866LL)) <= (3901582373479777197ULL)));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) (unsigned char)76))) ? (((/* implicit */int) (signed char)116)) : (((/* implicit */int) min((var_1), (var_6))))))) * (var_13)));
    var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (max((((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)36350))), (((((/* implicit */_Bool) var_5)) ? (21ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-68)))))))));
}
