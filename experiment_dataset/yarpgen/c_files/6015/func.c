/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6015
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_12 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((max((((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_0])), (1706065379U))) != (max((((/* implicit */unsigned int) (signed char)0)), (var_4))))))) + (((((/* implicit */_Bool) ((var_3) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_11)))) ? (((/* implicit */unsigned long long int) ((int) (unsigned char)91))) : (((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(unsigned char)6])))))))));
                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) var_0)), (arr_5 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)-25656)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (((var_4) + (((/* implicit */unsigned int) var_9)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                arr_7 [i_1] [i_0] [0] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)(-32767 - 1))) % (((/* implicit */int) arr_2 [i_1] [i_1]))))) && (((/* implicit */_Bool) var_10))))), (((((/* implicit */_Bool) (-(var_5)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_4)) : (var_0))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [(_Bool)1] [i_0])))))));
                var_14 ^= ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6)))))) ? (max(((~(arr_5 [8ULL]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8))))))) : (((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [(unsigned short)18])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_4)))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */int) (signed char)119)) << (0ULL))), (((/* implicit */int) arr_0 [i_3]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (unsigned char)239))) ? (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(unsigned short)18] [i_3]))) : (var_4))) : (((/* implicit */unsigned int) var_9))))) : (max((arr_9 [i_2 - 1]), (((/* implicit */long long int) arr_0 [i_3])))))))));
                                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) (signed char)4))))))))));
                                arr_17 [i_0] [(unsigned char)3] [i_2] [i_1] [i_3] = ((/* implicit */long long int) ((1460660792) == (((/* implicit */int) (unsigned char)164))));
                                var_17 |= ((/* implicit */unsigned char) (unsigned short)34174);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_8)), (var_7))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) | (6094866382123397127ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7503263627178200139ULL)) ? (((/* implicit */int) (signed char)-87)) : (((/* implicit */int) (_Bool)0)))))));
}
