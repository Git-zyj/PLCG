/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79330
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
    for (long long int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_19))) >= ((-(var_3)))));
            var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_2 [i_1]))))));
            arr_8 [i_0] = ((/* implicit */unsigned short) ((long long int) -1964403812));
        }
        var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (var_18) : (var_1)))) >= (arr_0 [i_0 - 1] [i_0 + 1])))), (((((/* implicit */int) arr_3 [i_0])) * (((/* implicit */int) arr_3 [i_0]))))));
        arr_9 [i_0] = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned long long int) arr_2 [i_0])) : (var_13)))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) var_16)))))));
        arr_10 [i_0] [i_0 + 1] = ((max((((/* implicit */unsigned int) var_18)), (var_9))) > (((/* implicit */unsigned int) ((/* implicit */int) max((max((var_15), (((/* implicit */unsigned char) arr_4 [i_0 + 1])))), (((/* implicit */unsigned char) (!(var_5)))))))));
    }
    var_22 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)63578))))) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)22)) || (((/* implicit */_Bool) (short)6)))))))));
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 4) 
        {
            for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) 
            {
                {
                    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (((+(var_2))) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)83))) < (2860154849U)))))))) ? (((((/* implicit */_Bool) arr_13 [i_2] [i_3] [i_2])) ? ((-(var_17))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_12)))))) : (((/* implicit */long long int) ((/* implicit */int) var_15)))));
                    var_24 ^= ((/* implicit */long long int) var_13);
                }
            } 
        } 
    } 
    var_25 = ((_Bool) var_19);
}
