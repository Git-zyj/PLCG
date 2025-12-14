/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80124
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        var_16 *= ((/* implicit */signed char) (~(((/* implicit */int) var_12))));
        var_17 = ((/* implicit */int) ((unsigned long long int) arr_1 [i_0 + 2] [i_0]));
    }
    for (int i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)157)), (4139835861U)));
        arr_7 [i_1] = (-(((((((/* implicit */_Bool) 155131425U)) ? (155131439U) : (arr_3 [i_1]))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) (unsigned short)127)) : (((/* implicit */int) var_15))))))));
        var_18 = ((/* implicit */unsigned int) arr_5 [i_1]);
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            arr_11 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) arr_10 [i_1]);
            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) (short)32762)) && (((/* implicit */_Bool) ((((arr_8 [(signed char)20]) + (9223372036854775807LL))) >> (((((/* implicit */int) var_1)) - (20772))))))))))))));
        }
    }
    var_20 = ((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) var_4)))));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        for (signed char i_4 = 2; i_4 < 15; i_4 += 3) 
        {
            for (unsigned int i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                {
                    var_21 = 4139835871U;
                    /* LoopSeq 4 */
                    for (unsigned char i_6 = 1; i_6 < 15; i_6 += 1) 
                    {
                        arr_25 [i_3] [i_6] [i_3] [i_6] = ((/* implicit */int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_3] [i_5]))))), (((((/* implicit */_Bool) 4139835879U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3] [i_4]))) : ((-(arr_9 [i_3])))))));
                        var_22 = ((/* implicit */unsigned int) var_8);
                        var_23 = ((/* implicit */int) ((((/* implicit */int) var_11)) >= (var_14)));
                    }
                    for (long long int i_7 = 1; i_7 < 15; i_7 += 1) /* same iter space */
                    {
                        arr_28 [i_7] [i_7] = ((/* implicit */unsigned char) ((min((((((/* implicit */long long int) 2147483645)) + (arr_2 [i_4] [i_7]))), (((/* implicit */long long int) ((((/* implicit */_Bool) 4139835863U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (4139835850U)))))) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35350)))));
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_20 [i_7 + 3] [i_5] [i_3] [i_3])), ((unsigned short)35339))))) ^ (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_3] [i_3] [i_7 + 2]))) : (arr_17 [i_4] [i_4 - 2] [i_4 + 2]))))))));
                    }
                    for (long long int i_8 = 1; i_8 < 15; i_8 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((int) max((((/* implicit */unsigned int) min((arr_5 [i_5]), (((/* implicit */unsigned short) var_6))))), (min((var_7), (((/* implicit */unsigned int) var_15))))))))));
                        var_26 *= ((/* implicit */short) (unsigned char)22);
                    }
                    for (long long int i_9 = 1; i_9 < 15; i_9 += 1) /* same iter space */
                    {
                        arr_33 [i_3] [i_5] [i_4] [i_4] = ((/* implicit */int) ((short) 16U));
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_21 [i_9 + 1] [i_4 + 2] [i_4 + 2]) - ((-(4226016417U)))))) ? (((((/* implicit */_Bool) min((arr_22 [i_3] [i_3]), (((/* implicit */unsigned char) var_15))))) ? (((/* implicit */int) (signed char)-105)) : (((/* implicit */int) (short)-21975)))) : (((/* implicit */int) ((((/* implicit */_Bool) 1643596560U)) || (((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_26 [i_3] [i_3] [i_3] [i_3] [i_5] [i_9])))))))));
                    }
                }
            } 
        } 
    } 
}
