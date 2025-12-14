/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/946
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (signed char)-66)), (((((/* implicit */_Bool) min((var_4), (((/* implicit */long long int) (short)-30584))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) & (412885488U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)112)))))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (short)-16221)) ^ (((/* implicit */int) (signed char)-114))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 13; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */int) min((var_10), (((/* implicit */int) ((long long int) ((((/* implicit */_Bool) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (signed char)-97))))) || (((((/* implicit */_Bool) 130816ULL)) && (((/* implicit */_Bool) 2949290666627269840LL))))))))));
                    var_11 ^= ((/* implicit */unsigned long long int) max((((int) ((int) -8))), ((~(((/* implicit */int) (short)10112))))));
                    arr_9 [i_0] [7LL] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)10088)), (var_6)))) && (((/* implicit */_Bool) min(((short)13633), ((short)30703))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 13; i_3 += 1) 
                    {
                        for (long long int i_4 = 2; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((((/* implicit */_Bool) 763727282)) && (((/* implicit */_Bool) 1641163054))))));
                                var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) (((-(var_9))) & (((/* implicit */long long int) ((unsigned int) (short)-13446))))))));
                                arr_17 [i_0] [i_0] [i_2 + 1] [i_0] [(signed char)11] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3435860714U)) ? (((/* implicit */int) (short)13023)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) ((_Bool) var_8))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) > (8843689178258105993LL))))));
                                arr_18 [i_0] [i_1] [i_2 - 1] [i_3 - 2] [i_0] [i_0] = ((((/* implicit */_Bool) min(((unsigned char)255), (((/* implicit */unsigned char) (signed char)-58))))) ? (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) -5211936725054982187LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)31))))))) : (max((((/* implicit */unsigned int) var_7)), (3435860714U))));
                            }
                        } 
                    } 
                    arr_19 [i_0] [5] [i_1] [i_0] = ((/* implicit */signed char) min((max((((/* implicit */long long int) var_5)), (9223372036854775807LL))), ((~(34359738367LL)))));
                }
            } 
        } 
    }
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) var_4))));
}
