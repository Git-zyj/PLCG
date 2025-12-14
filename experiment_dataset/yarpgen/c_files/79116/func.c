/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79116
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) var_9)), (((((/* implicit */int) var_6)) / (((/* implicit */int) (unsigned short)9))))))) ? (((/* implicit */unsigned long long int) (+((-(var_10)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_11)) - (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) (signed char)127)) ? (3263401748313518525ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */_Bool) max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_4))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            var_20 = arr_0 [i_0] [i_3];
                            var_21 = ((((/* implicit */_Bool) arr_0 [i_3] [i_1])) ? ((+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_2] [i_3] [15ULL])) : (((/* implicit */int) arr_9 [i_3] [i_2] [i_1] [i_1] [i_0] [i_0])))))) : (((/* implicit */int) var_17)));
                            var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_8), (((/* implicit */long long int) arr_3 [i_1]))))) ? (((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_2 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_9 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]), (((/* implicit */short) (unsigned char)175))))))))) ? (((/* implicit */int) ((unsigned char) arr_3 [i_0 + 2]))) : (-1698736182)));
                        }
                    } 
                } 
                var_23 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (((/* implicit */int) arr_1 [i_0 + 2])))), (((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */int) arr_1 [i_0 - 2])) : (((/* implicit */int) arr_1 [i_0 + 3]))))));
                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (-(arr_6 [i_1] [i_1] [i_0 - 1])))) ? (((((/* implicit */_Bool) arr_5 [i_0])) ? (0ULL) : (((/* implicit */unsigned long long int) arr_6 [i_1] [i_0] [i_0])))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_8 [i_0 - 2] [(_Bool)1] [i_0 + 2] [(short)15] [i_0]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65514))) : (4908990818327611807LL))))));
                var_25 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 2892762478U)))))));
            }
        } 
    } 
    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */long long int) -1880413391)) != (var_1))))))) : (((unsigned int) (!(((/* implicit */_Bool) var_6))))))))));
}
