/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91465
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
    var_18 ^= ((/* implicit */long long int) var_13);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned int) max((((_Bool) 0ULL)), (((((/* implicit */_Bool) arr_2 [i_0 - 1])) || (((/* implicit */_Bool) arr_3 [i_0 + 1]))))));
                var_20 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_4 [i_0 + 1] [i_0 - 1]), (arr_4 [i_0 + 1] [i_0 + 1])))) ? (((/* implicit */int) arr_4 [i_0 - 1] [i_0 + 1])) : (((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_4 [i_0 - 1] [i_0 + 1])) : (((/* implicit */int) arr_4 [i_0 - 1] [i_0 + 1]))))));
                var_21 = (+(((/* implicit */int) arr_5 [i_0] [i_0] [i_1])));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((arr_10 [9LL] [9LL] [16LL] [i_3] [(_Bool)1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_12 [i_0] [i_0] [i_0]))))) : (((((/* implicit */_Bool) 0U)) ? (max((((/* implicit */unsigned long long int) (_Bool)1)), (2073917041614199206ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)102)))))));
                                arr_16 [i_2] [i_1] [i_0] [(unsigned char)17] [i_3] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_15 [i_0 + 1]))));
                                var_23 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((arr_9 [i_4] [i_2] [i_2] [i_2]) && (((/* implicit */_Bool) (unsigned char)7))))), (((unsigned short) arr_12 [1LL] [i_3] [i_4]))))) ? (((int) (unsigned char)163)) : (max(((~(-1589982303))), (((/* implicit */int) arr_14 [i_0] [i_0] [i_2] [i_2] [i_3] [i_1] [i_4]))))));
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((arr_5 [i_0 + 1] [i_0 - 1] [i_0 + 1]) ? (arr_15 [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 1]))))))));
            }
        } 
    } 
}
