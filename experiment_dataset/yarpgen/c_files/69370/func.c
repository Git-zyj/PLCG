/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69370
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
    var_20 = ((/* implicit */unsigned char) ((unsigned short) var_8));
    var_21 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_17)))) / (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_3))))))), (((long long int) var_3))));
    var_22 += ((((/* implicit */_Bool) max((min((2929635036U), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) var_0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_6)))))))) : (((var_2) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)218))))))));
    var_23 -= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0))))) <= (var_9)))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (18446744073709551595ULL)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_15))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)171)) + (((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) var_11);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_13 [i_1] [i_4] [i_4] [i_3] [i_4] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) arr_2 [i_3]))));
                                var_24 = ((/* implicit */int) min((var_24), (((((/* implicit */_Bool) arr_3 [i_0] [i_3])) ? (((/* implicit */int) ((((/* implicit */int) var_11)) == (((/* implicit */int) var_10))))) : (((/* implicit */int) var_10))))));
                                arr_14 [i_0] [i_1] [i_4] [i_3] [i_4 + 1] = var_11;
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)118))) & (-6669704994301257854LL)))) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_16)))) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_0] [i_2])))) == (((/* implicit */int) ((unsigned char) (short)-1))))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            {
                                arr_20 [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_1] [i_2] [i_5 - 1] [i_6]))));
                                var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) arr_4 [i_1] [i_2] [i_5 - 1] [i_6]))));
                                var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) var_3))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
