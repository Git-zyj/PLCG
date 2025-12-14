/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65696
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_1] [i_0] = ((/* implicit */long long int) max((((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned short)29219))))));
                arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)139), (((/* implicit */unsigned char) (signed char)127)))))) / (max((((/* implicit */unsigned long long int) (unsigned short)25099)), (288230341791973376ULL)))));
                var_12 = ((/* implicit */_Bool) ((((min((-1), (-1))) + (2147483647))) << (((((/* implicit */int) max(((unsigned char)255), ((unsigned char)0)))) - (255)))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_13 -= ((/* implicit */long long int) ((min((((/* implicit */long long int) (short)2584)), (5484512135612815698LL))) < (((/* implicit */long long int) ((/* implicit */int) (signed char)-123)))));
                                var_14 = ((/* implicit */signed char) (unsigned short)29215);
                                var_15 ^= ((/* implicit */short) max((((((-530295097) + (2147483647))) << (((((/* implicit */int) (unsigned short)1687)) - (1687))))), (-15)));
                                var_16 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) (unsigned char)16)) & (((/* implicit */int) (unsigned char)99)))), (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */_Bool) max((max(((signed char)-46), (((/* implicit */signed char) (_Bool)1)))), (((/* implicit */signed char) ((2093056) >= (((/* implicit */int) (unsigned char)139)))))));
            }
        } 
    } 
    var_18 = var_8;
}
