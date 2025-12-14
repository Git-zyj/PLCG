/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56054
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 20; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_0])) : (0)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_8)), (arr_2 [i_2] [i_0])))) ? ((-(((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) max(((unsigned char)67), (((/* implicit */unsigned char) arr_1 [i_0] [i_0])))))))) : (((((/* implicit */_Bool) (+(3129680676U)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_3 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) -41392259)) ? (arr_6 [i_1] [i_1] [i_1] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_4] [i_2] [i_0])))))) ? (((((/* implicit */_Bool) (unsigned char)129)) ? (var_4) : (4294967276U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)237)) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_0])))))))));
                                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) max(((((!(((/* implicit */_Bool) var_4)))) ? ((-(var_9))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_3] [i_0])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_3))))))), (((/* implicit */long long int) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)12019)) : (-1970151983))), ((+(((/* implicit */int) (unsigned short)43776))))))))))));
                                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) min((max((((((/* implicit */_Bool) arr_6 [i_3] [i_3] [i_2] [i_2])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_1)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_0] [i_2])) : (((/* implicit */int) var_10)))))), ((~(((((/* implicit */_Bool) arr_9 [i_3] [i_3] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)77)) : (((/* implicit */int) var_10)))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((-295503739935424929LL), (((/* implicit */long long int) (short)15942))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_1))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)36)) : (((/* implicit */int) var_10))))), (((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3)))))))) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)102)) : (((/* implicit */int) (short)-15943))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (5610973296151252739ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) var_2)))))))));
}
