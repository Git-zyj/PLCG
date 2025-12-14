/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55921
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
    var_18 = ((/* implicit */_Bool) (-(var_0)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 23; i_1 += 3) 
        {
            {
                var_19 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(40591868U))))));
                var_20 = ((/* implicit */unsigned short) 4254375457U);
                var_21 = (((~(((4630967952044321422LL) / (((/* implicit */long long int) ((/* implicit */int) var_6))))))) == (((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_10)))) ? (((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) var_8))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))));
                arr_7 [i_0] [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_1 + 1] [i_0] [i_1 + 2]))))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 - 4] [i_0] [i_1 - 4]))) : (var_0)))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_22 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_6))));
        var_23 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_3))))));
        var_24 -= ((/* implicit */unsigned int) (short)-11223);
    }
    for (int i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) arr_6 [i_3] [i_3])) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-13300)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) var_17)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3] [i_3] [i_3]))) >= (((long long int) var_11)))))));
        var_26 = ((((/* implicit */unsigned long long int) 25U)) >= (((((/* implicit */unsigned long long int) arr_12 [i_3])) % (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) arr_3 [i_3])) : (var_4))))));
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned short i_5 = 1; i_5 < 15; i_5 += 2) 
            {
                {
                    var_27 |= ((/* implicit */signed char) (((~(((/* implicit */int) var_6)))) ^ ((~(((/* implicit */int) arr_5 [i_5 + 1] [(unsigned short)2] [i_5 + 1]))))));
                    var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) (-(max((((/* implicit */long long int) arr_14 [i_3] [10LL] [i_5 - 1])), (var_1)))))), (((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12))))) * (var_2))))))));
                    var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_4])) >> (((var_9) - (2129694057676227850LL))))))));
                }
            } 
        } 
    }
}
