/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87861
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)90))) : (((((var_6) != (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) var_9)), (var_13)))) : (((var_9) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 *= ((((/* implicit */int) min((arr_5 [i_1 + 1] [i_0 - 1] [i_2 - 1]), (((/* implicit */unsigned char) var_10))))) != ((~(((/* implicit */int) var_11)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_0] [i_1] [i_4] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(min((3ULL), (((/* implicit */unsigned long long int) arr_7 [(_Bool)0] [i_1] [i_1] [i_3]))))))) ? (min((((((/* implicit */long long int) ((/* implicit */int) var_10))) / (-23LL))), (((/* implicit */long long int) arr_1 [i_0 + 1])))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) / (max((var_8), (((/* implicit */long long int) var_2))))))));
                                arr_13 [i_0] [i_1] [i_0] [i_0] [i_4] [i_1] = ((((((/* implicit */_Bool) (unsigned char)252)) ? (min((arr_2 [i_4] [i_3]), (((/* implicit */unsigned long long int) arr_9 [(unsigned char)18] [(unsigned char)18])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_2] [i_3] [i_0])) == (((/* implicit */int) arr_9 [i_4] [i_1 + 2])))))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((8243217694391775398LL) != (((/* implicit */long long int) ((/* implicit */int) (signed char)17))))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned char) arr_6 [i_0] [i_0]);
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (_Bool)1))));
                }
            } 
        } 
    } 
}
