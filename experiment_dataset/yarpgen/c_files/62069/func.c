/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62069
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
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                var_12 ^= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) 2396340021921936494LL)), (max((2221354957066914762ULL), (((/* implicit */unsigned long long int) 4294967279U))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) >= (2221354957066914762ULL))))) >= (min((((/* implicit */unsigned long long int) 674856565U)), (16225389116642636848ULL))))))));
                                arr_13 [i_3] [i_1 + 2] [i_2] [i_1 + 2] [i_3] [i_2] = ((/* implicit */signed char) min((2221354957066914767ULL), (((/* implicit */unsigned long long int) (unsigned char)0))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((-7292321485782191739LL) < (((/* implicit */long long int) 2147483647))))), (((unsigned short) 133189492429913162LL))))) && (((((/* implicit */long long int) ((/* implicit */int) var_9))) > (arr_2 [i_1 + 2])))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) var_1);
}
