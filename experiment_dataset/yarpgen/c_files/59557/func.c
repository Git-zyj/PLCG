/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59557
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 3; i_2 < 24; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        arr_9 [i_1] [i_1] [(unsigned short)21] [i_3] [(unsigned short)21] = ((/* implicit */_Bool) ((((arr_4 [i_2 - 3] [i_2 - 2] [i_2 + 1]) + (2147483647))) >> (((arr_4 [i_2 - 2] [i_2 - 3] [i_2 - 2]) + (793629962)))));
                        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((var_12) << (((((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])) + (73))))) == (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
                        var_21 = ((/* implicit */signed char) ((((2092055827U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) * (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                    }
                    var_22 = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_11)))));
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (!(((-9212935927177536274LL) == (((/* implicit */long long int) arr_7 [(_Bool)1])))))))));
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_24 = ((/* implicit */signed char) max((var_24), (((signed char) (+(((/* implicit */int) (signed char)-44)))))));
                    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_4])))) : ((+(((/* implicit */int) (_Bool)1))))));
                    var_26 = ((/* implicit */int) (_Bool)1);
                    arr_12 [i_0] [i_1] [i_1] = ((/* implicit */int) arr_8 [i_1]);
                    /* LoopSeq 4 */
                    for (signed char i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        arr_15 [i_0] [i_1] [i_1] [i_1] [i_4] [i_5] = ((/* implicit */short) arr_0 [i_0]);
                        var_27 = ((/* implicit */int) 4294967295U);
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        arr_18 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_8))));
                        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) (short)-31471))));
                    }
                    /* vectorizable */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_0]) : (arr_3 [i_1])));
                        arr_23 [i_1] = ((/* implicit */signed char) ((4294967273U) % (var_12)));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        arr_26 [i_1] [i_8] [i_8] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_11 [i_8] [i_1] [i_0]))));
                        var_30 |= ((/* implicit */unsigned short) (!(((((/* implicit */int) arr_1 [i_0])) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [20LL])))))))));
                    }
                }
                arr_27 [i_1] = ((/* implicit */unsigned short) (((_Bool)1) || (((/* implicit */_Bool) -73790607))));
            }
        } 
    } 
    var_31 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)82)) > (((/* implicit */int) (unsigned short)65535))));
}
