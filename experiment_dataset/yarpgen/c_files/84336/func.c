/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84336
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
    var_18 = ((min((((/* implicit */unsigned int) ((int) 8260699140469239725LL))), (((unsigned int) 18446744073709551615ULL)))) | (((/* implicit */unsigned int) ((/* implicit */int) ((var_10) > ((~(((/* implicit */int) (signed char)127)))))))));
    var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (_Bool)0);
                var_20 = ((/* implicit */signed char) arr_2 [i_1] [i_1] [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 6; i_2 += 3) 
                {
                    for (unsigned int i_3 = 2; i_3 < 9; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_1] [(_Bool)1] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_3] [7] [i_0])) != (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 1323823923U)))) != ((~(13472494912589303701ULL))))))));
                            var_21 -= ((/* implicit */unsigned long long int) arr_4 [i_0] [3ULL]);
                            var_22 += ((/* implicit */long long int) 16770174171131954634ULL);
                            var_23 += min((((/* implicit */unsigned int) (_Bool)0)), (((((/* implicit */_Bool) -1108450695)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)64189))))) : (((var_13) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                            arr_12 [i_3 + 1] [i_3 - 2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))));
                        }
                    } 
                } 
                var_24 = min((max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) arr_2 [i_0] [i_0] [i_1])))))), (((/* implicit */int) ((((unsigned long long int) arr_10 [i_1])) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
            }
        } 
    } 
}
