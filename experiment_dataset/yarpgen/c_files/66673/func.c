/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66673
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
    var_16 ^= ((/* implicit */unsigned char) ((long long int) -5877508705994152171LL));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_3 [(unsigned short)19] [i_0] = ((/* implicit */long long int) var_12);
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    {
                        arr_12 [0U] [i_1] [6U] [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) var_5)) ? (((var_0) & (arr_7 [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_2]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) ((short) 9223372036854775807LL))))))));
                        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_10 [i_0] [i_0]))) || ((!(arr_2 [i_0])))));
                        var_18 += ((/* implicit */int) min((max((3458764513820540928ULL), (((/* implicit */unsigned long long int) -7647196804118968197LL)))), (((/* implicit */unsigned long long int) (unsigned short)7599))));
                    }
                } 
            } 
        } 
        arr_13 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0] [i_0]);
        arr_14 [i_0] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])))));
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            for (long long int i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_19 |= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((unsigned int) var_2))) ? (((/* implicit */long long int) max((var_14), (((/* implicit */unsigned int) (_Bool)1))))) : (((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (7647196804118968222LL)))))));
                                var_20 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)8662)), (5189989290230248915ULL))))));
                                arr_27 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-111)) & (((/* implicit */int) (unsigned short)15))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned int) min((max((((((/* implicit */_Bool) 1303270660)) ? (arr_10 [i_0] [i_0]) : (arr_15 [i_0] [i_4] [i_0]))), (((/* implicit */unsigned long long int) arr_17 [i_0] [i_0] [12U])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0] [i_4] [i_5]))))))));
                }
            } 
        } 
    }
}
