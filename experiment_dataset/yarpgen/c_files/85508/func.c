/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85508
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
    for (int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 20; i_2 += 4) 
            {
                {
                    var_17 += (-(min((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)58568))))), ((-(arr_5 [i_0 + 1] [(unsigned char)10] [(unsigned char)10] [i_0 + 1]))))));
                    var_18 *= ((/* implicit */signed char) min((((/* implicit */unsigned short) (((~(((/* implicit */int) arr_1 [(signed char)16])))) != (((/* implicit */int) arr_3 [0]))))), (((unsigned short) ((((/* implicit */_Bool) (unsigned short)58568)) ? (((/* implicit */int) (unsigned short)6966)) : (((/* implicit */int) (unsigned short)58568)))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 20; i_3 += 3) 
                    {
                        for (short i_4 = 4; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) min((((/* implicit */int) min(((unsigned short)58566), (((/* implicit */unsigned short) arr_11 [i_0] [i_1 - 3] [i_4 - 3] [i_4] [i_4] [i_0]))))), (((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_4 - 2] [i_4] [i_4 - 2] [i_4])) ? (((/* implicit */int) (unsigned short)58568)) : (((/* implicit */int) (unsigned short)58572)))))))));
                                var_20 = ((/* implicit */short) (~(((arr_10 [11] [11] [i_0] [11] [i_4] [11]) & (arr_10 [i_2 - 1] [(unsigned char)12] [i_0] [(short)16] [i_1 + 1] [i_1 + 1])))));
                                var_21 = ((/* implicit */short) max(((-(((/* implicit */int) (unsigned short)6969)))), (((((/* implicit */_Bool) (unsigned short)58561)) ? ((-(((/* implicit */int) var_12)))) : ((-(((/* implicit */int) (unsigned short)6967))))))));
                                var_22 ^= ((/* implicit */unsigned char) var_16);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) max(((unsigned short)6996), ((unsigned short)6996)))), ((+(((/* implicit */int) (unsigned short)6996))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7007))) : (max((arr_7 [i_0 - 2] [i_1 - 1] [i_2 - 1] [i_2]), (((/* implicit */unsigned int) var_13)))))))));
                    var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) var_9))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */_Bool) ((signed char) var_7));
}
