/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96054
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
    var_12 = ((/* implicit */unsigned long long int) ((long long int) (_Bool)0));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_13 [i_4] [(unsigned char)14] [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((((arr_4 [(_Bool)1] [i_1 - 2] [i_4 - 1]) >> (((arr_4 [i_0] [i_1 - 2] [i_4 + 2]) - (11461861195183176715ULL))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned char)120))))));
                                arr_14 [i_0] [7ULL] [i_0] [i_0] [i_0] [5LL] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned char) arr_5 [8LL] [8LL] [i_4])))));
                                var_13 = (-(((/* implicit */int) ((signed char) min((-2438507929987277388LL), (var_1))))));
                                arr_15 [i_0] [i_1 - 1] [i_0] [i_3] [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_3))) ? (((((/* implicit */_Bool) 288230375077969920ULL)) ? (((((/* implicit */int) (short)12135)) % (((/* implicit */int) (unsigned char)136)))) : (((/* implicit */int) min(((short)-19680), (((/* implicit */short) (_Bool)0))))))) : (((/* implicit */int) ((((/* implicit */long long int) 1050881847)) <= (arr_8 [i_0] [i_2] [i_3] [i_4]))))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_1] = ((/* implicit */unsigned long long int) var_1);
            }
        } 
    } 
}
