/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71067
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_16 = ((/* implicit */short) (+((-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12))))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (+(((/* implicit */int) var_6)))))));
            /* LoopSeq 2 */
            for (int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                arr_8 [i_0] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_4))))) : (var_15)));
                var_18 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_15) : (((/* implicit */unsigned int) var_7))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) var_13)) ? (var_15) : (var_14)))));
            }
            for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                arr_11 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_3), (var_4)))) ? (((/* implicit */int) max((var_10), (var_10)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_13))))));
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((var_12) ? (((/* implicit */int) max(((short)23127), (((/* implicit */short) (_Bool)1))))) : (((((/* implicit */int) var_9)) * (((/* implicit */int) var_5)))))) : (((((/* implicit */_Bool) min((((/* implicit */int) var_6)), (var_7)))) ? (((/* implicit */int) max((var_4), (var_6)))) : (max((var_7), (((/* implicit */int) var_9))))))));
            }
        }
        for (int i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            var_20 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */long long int) var_11)) : (min((((/* implicit */long long int) 2758754754U)), ((-9223372036854775807LL - 1LL))))));
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        arr_22 [i_5] = ((/* implicit */_Bool) max((9223372036854775807LL), (9223372036854775807LL)));
                        arr_23 [i_0] [i_4] [i_4] [i_5] = ((/* implicit */unsigned long long int) min((max(((((_Bool)1) ? (6200751313631025912LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))), ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) var_10))));
                    }
                } 
            } 
            arr_24 [i_0] [i_4] [i_4] = max((((/* implicit */long long int) (_Bool)1)), (9223372036854775807LL));
        }
        arr_25 [i_0] |= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0))))) ^ (((((/* implicit */_Bool) var_5)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))));
    }
    for (unsigned int i_7 = 1; i_7 < 12; i_7 += 3) 
    {
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)61985)) | (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)19692)), (10994137250301857411ULL)))))))));
        arr_30 [i_7] = max((min((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (5936294834631587140LL) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3))))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) / (((/* implicit */int) var_3))))), ((+(var_14)))))));
    }
    /* vectorizable */
    for (unsigned int i_8 = 0; i_8 < 22; i_8 += 2) 
    {
        arr_34 [i_8] [i_8] = ((/* implicit */unsigned long long int) ((var_11) / (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
        arr_35 [i_8] [i_8] = ((/* implicit */short) (~(((/* implicit */int) var_5))));
        arr_36 [i_8] = (+(((var_9) ? (9223372036854775786LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
        arr_37 [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12))));
    }
    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) min((min((((/* implicit */unsigned int) var_12)), (((((/* implicit */_Bool) var_11)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))), ((+(((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_11))))))))));
    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_2) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_6), (((/* implicit */short) var_2)))))) : (var_15)))) ? (max((max((((/* implicit */unsigned int) var_7)), (var_14))), (((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned short) var_6))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-294)) ? (((/* implicit */int) (short)-28102)) : (((/* implicit */int) (unsigned short)38159))))) ? ((+(((/* implicit */int) var_0)))) : (((/* implicit */int) max((var_3), (var_5)))))))));
}
