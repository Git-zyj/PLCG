/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5838
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
    var_11 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) var_9)) >= (6018814262558216879LL)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) (short)-2876)))))))), (var_5)));
    var_12 = ((/* implicit */signed char) (+(((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2876))) >= (var_3))))) & (min((var_10), ((-9223372036854775807LL - 1LL))))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (unsigned char)205)), (12678141679522111411ULL)));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_10 [i_0 + 1] [i_0] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) 1755040139)) : (6639154283585901205ULL)))) ? (((/* implicit */int) ((unsigned short) (unsigned char)0))) : (((/* implicit */int) ((((((/* implicit */_Bool) (short)-13942)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)67))) : (0ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52028))))))));
                    var_14 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 + 1] [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 1])) : (((/* implicit */int) ((unsigned char) arr_2 [i_0] [i_1]))))) << (((((/* implicit */int) var_7)) + (22989)))));
                    arr_11 [i_0] = ((/* implicit */short) 5768602394187440205ULL);
                    arr_12 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) (+(((unsigned int) (unsigned char)74))));
                    arr_13 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */short) 5768602394187440201ULL);
                }
                arr_14 [i_0] = ((((1084083568U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_0] [i_0 + 3] [i_0]))))) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_0 - 1] [i_0 + 1])))))));
                /* LoopNest 3 */
                for (unsigned char i_3 = 3; i_3 < 24; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (int i_5 = 1; i_5 < 23; i_5 += 3) 
                        {
                            {
                                arr_22 [i_0] [i_0] [i_1] [i_3 + 1] [i_4] [i_5 + 2] = min(((-((~(var_9))))), ((-(((/* implicit */int) ((arr_18 [i_0 + 2] [i_0] [i_3] [i_4] [i_5]) >= (((/* implicit */int) (unsigned char)31))))))));
                                arr_23 [i_0 + 2] [i_1] [i_3] [i_4] [i_0] = ((/* implicit */unsigned int) ((((long long int) 532076710)) & (((/* implicit */long long int) (~(((/* implicit */int) min((var_0), (var_0)))))))));
                                var_15 = ((/* implicit */unsigned long long int) var_9);
                            }
                        } 
                    } 
                } 
                arr_24 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((511U), (((/* implicit */unsigned int) (unsigned char)101))))) ? (((int) (short)7593)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_16 [i_1] [i_1] [i_0])) : (((/* implicit */int) var_6))))))) & (max((((/* implicit */unsigned long long int) (unsigned char)0)), (2141162146597355244ULL)))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) ((((/* implicit */int) var_1)) + (((((/* implicit */int) var_8)) << (((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)144))) & (var_2))) - (141LL)))))));
}
