/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69033
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
    for (short i_0 = 2; i_0 < 7; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned char i_4 = 4; i_4 < 8; i_4 += 1) 
                            {
                                arr_11 [i_0] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_6 [i_1 - 1] [i_1] [i_2 + 1] [i_1])) | (((/* implicit */int) arr_6 [i_1 - 1] [i_1] [i_2 + 1] [i_1])))) & (((/* implicit */int) min((arr_8 [i_2] [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2] [i_2]), (arr_8 [i_2] [i_2 - 2] [i_2] [i_2 - 1] [i_2] [i_2]))))));
                                var_18 |= ((/* implicit */_Bool) (+(((((/* implicit */int) arr_4 [i_3] [i_0 + 3])) << (((((/* implicit */int) arr_4 [i_3] [i_0 - 1])) - (202)))))));
                                var_19 -= ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) ((1831411013) + (((/* implicit */int) var_3))))) ? (((/* implicit */int) ((unsigned char) var_8))) : (((/* implicit */int) var_5)))));
                            }
                            for (long long int i_5 = 0; i_5 < 11; i_5 += 4) 
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_3] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3))))) ? (((((/* implicit */int) arr_6 [i_0 - 2] [i_0] [i_0 - 2] [i_1])) - (((/* implicit */int) arr_6 [i_0] [i_2] [i_3] [i_1])))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_6)) - (((/* implicit */int) arr_4 [i_1] [i_1]))))) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) ((((/* implicit */_Bool) -1831411013)) || ((_Bool)1))))))));
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) max((var_12), (var_10))))) | (((long long int) max((((/* implicit */unsigned long long int) var_6)), (var_13))))));
                                var_21 -= ((/* implicit */unsigned short) ((_Bool) min((((/* implicit */int) arr_7 [i_0] [i_3] [i_0] [i_1 + 1])), (((((/* implicit */int) var_0)) + (((/* implicit */int) arr_9 [i_0] [i_1 + 2] [i_2] [i_0] [i_3])))))));
                                arr_15 [i_0] [i_1] [i_0] [i_0] [i_3] [i_5] [i_3] = (+(max((((/* implicit */int) max(((unsigned char)191), (var_5)))), ((-(1831411020))))));
                            }
                            arr_16 [i_0] [i_0] [i_1] [i_3] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) (signed char)-30)) ^ (((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1))))))));
                            var_22 = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_6 [i_1] [i_2 - 1] [i_1 + 2] [i_1]))))));
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_3)))))))) << (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : ((((_Bool)1) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (short)20104)))))) - (18305)))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) max(((unsigned char)250), ((unsigned char)224))))));
                var_25 ^= ((/* implicit */_Bool) ((unsigned short) ((short) (unsigned char)237)));
                var_26 ^= ((/* implicit */unsigned char) (+(((((((/* implicit */int) var_2)) >> (((((/* implicit */int) var_0)) - (85))))) + (((/* implicit */int) arr_3 [(_Bool)1] [i_1 + 2]))))));
            }
        } 
    } 
    var_27 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_14))))) + (var_13)));
}
