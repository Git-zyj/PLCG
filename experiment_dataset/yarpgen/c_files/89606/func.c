/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89606
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
    var_18 = (+(((((/* implicit */int) var_4)) & (min((((/* implicit */int) var_10)), (var_15))))));
    var_19 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) max(((short)32747), ((short)24519)))) < (((/* implicit */int) ((var_5) <= (((/* implicit */int) var_8)))))))) * (var_15)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)20243)) ? (((/* implicit */int) (unsigned short)45312)) : (-2147483622))), ((-(((/* implicit */int) (short)28672))))));
                var_21 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) max((((/* implicit */unsigned long long int) var_6)), (var_0)))))));
                arr_8 [i_0] [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((((/* implicit */int) var_9)) >= (arr_7 [i_1] [i_0]))) ? (((/* implicit */int) min((var_3), (((/* implicit */unsigned short) arr_3 [(unsigned char)12] [i_1]))))) : (((/* implicit */int) ((unsigned short) arr_2 [i_0])))))), (min((((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [5U] [i_1] [2ULL])) <= (((/* implicit */int) var_1))))), (max((var_17), (((/* implicit */unsigned int) var_3))))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (unsigned int i_3 = 4; i_3 < 10; i_3 += 2) 
                    {
                        for (short i_4 = 1; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_22 = ((((/* implicit */int) arr_6 [(_Bool)1] [i_0] [(_Bool)1])) << (((min((((/* implicit */int) ((unsigned short) var_6))), ((-(((/* implicit */int) var_9)))))) + (6086))));
                                var_23 = ((/* implicit */_Bool) arr_3 [(unsigned short)6] [i_4]);
                                arr_15 [i_0] [i_1 + 2] [i_2] [i_2] [6] [i_3] [(unsigned short)11] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [(_Bool)1] [(_Bool)1] [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
