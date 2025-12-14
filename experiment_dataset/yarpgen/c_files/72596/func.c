/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72596
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
    var_13 = (unsigned char)88;
    var_14 = min((((((((/* implicit */_Bool) (unsigned char)88)) ? (((/* implicit */int) (unsigned char)58)) : (((/* implicit */int) (short)-14479)))) / (((/* implicit */int) var_10)))), (((/* implicit */int) min((max(((unsigned short)15357), (((/* implicit */unsigned short) (unsigned char)90)))), (((/* implicit */unsigned short) var_1))))));
    var_15 |= (-(728026330U));
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((1599622782U) % (min((426977609U), (((/* implicit */unsigned int) var_8))))))) ? (((/* implicit */int) (signed char)58)) : (((/* implicit */int) (signed char)-127))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_17 [i_3] [(signed char)13] [i_3] [i_3] [4LL] [i_3] = ((/* implicit */signed char) -1LL);
                                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((max((0ULL), (((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_2] [i_1])))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [i_2] [i_3] [i_4]))))))));
                                var_18 = ((/* implicit */unsigned char) min(((-(((/* implicit */int) (signed char)80)))), ((-(((/* implicit */int) (signed char)-127))))));
                            }
                        } 
                    } 
                    arr_18 [i_0] = min((((/* implicit */long long int) var_0)), (min((((/* implicit */long long int) (unsigned char)37)), (-4LL))));
                    var_19 = ((/* implicit */unsigned char) min((((/* implicit */int) ((1885647223065466912ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)165)))))), (((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_1] [i_1] [i_0] [i_2] [i_0])) ? (((/* implicit */int) arr_14 [i_0] [i_0] [(unsigned char)1] [i_1] [15LL] [i_2] [i_2])) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1] [i_2]))))));
                    arr_19 [i_0] = (short)-28186;
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [16U]))) : (18446744073709551615ULL)));
                }
            } 
        } 
    } 
}
