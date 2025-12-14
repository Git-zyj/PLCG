/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98560
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
    var_20 = ((/* implicit */unsigned short) ((unsigned int) (unsigned char)171));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_7 [(unsigned char)8] [(unsigned char)8] [i_0] = ((/* implicit */short) min(((+(arr_1 [i_0] [i_0 + 1]))), (((/* implicit */int) ((((/* implicit */unsigned int) arr_1 [i_0] [i_0 - 1])) < (var_4))))));
                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (var_4) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) arr_1 [i_0] [i_1]))) ? (min((var_16), (((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_2 [i_0])) != (arr_5 [i_0])))))))));
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    var_22 &= ((/* implicit */unsigned short) var_19);
                    var_23 *= ((/* implicit */unsigned int) (+(max(((~(((/* implicit */int) arr_8 [i_2] [i_2])))), (((((/* implicit */int) var_19)) << (((((/* implicit */int) arr_8 [i_2] [i_1])) - (9147)))))))));
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */int) var_12);
                }
                for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    arr_13 [i_0] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (var_6)))))));
                    var_24 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_12)))) > (((unsigned int) (unsigned short)10))));
                    arr_14 [i_0 + 2] [i_1] [i_0] [i_0] = ((/* implicit */int) arr_11 [i_0]);
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 11; i_5 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_4 [i_0 + 2] [i_4])))) + (((/* implicit */int) arr_4 [i_0 - 2] [i_3]))));
                                var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (var_18) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)25)), ((short)16364)))) : (((/* implicit */int) (_Bool)0)))))));
                            }
                        } 
                    } 
                }
                var_27 |= ((/* implicit */_Bool) ((short) var_6));
            }
        } 
    } 
}
