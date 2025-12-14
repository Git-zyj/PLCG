/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69346
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
    var_20 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) 2885839166U)) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (min((((/* implicit */unsigned long long int) 33030144)), (15ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)65513))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
    var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_6)), (3343703174074173936LL)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 18446744073709551600ULL)))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) (short)9090))))));
        var_23 += ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)19)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))));
        var_24 = ((/* implicit */unsigned int) var_13);
        var_25 |= ((/* implicit */unsigned short) arr_1 [i_0]);
    }
    for (signed char i_1 = 2; i_1 < 15; i_1 += 3) 
    {
        var_26 = ((/* implicit */unsigned short) ((unsigned int) arr_5 [i_1]));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 3; i_2 < 18; i_2 += 4) 
        {
            for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                {
                    var_27 = ((/* implicit */signed char) ((unsigned int) min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)16))) - (631926221U))), (((/* implicit */unsigned int) arr_12 [i_1] [i_2 - 1] [i_2])))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 4; i_4 < 18; i_4 += 2) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */long long int) (((~(((/* implicit */int) arr_10 [i_1 - 2] [i_1 - 1] [i_1])))) | (((/* implicit */int) arr_10 [i_1 - 2] [i_1 - 1] [i_1]))));
                                var_29 = ((/* implicit */short) ((((((arr_15 [i_4] [i_2] [i_1] [i_3]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_4]))))) ? (min((((/* implicit */unsigned int) var_2)), (2885839151U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_0), (((/* implicit */unsigned short) arr_14 [i_1] [i_2] [i_2] [i_1])))))))) >> ((((-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)4))) <= (12509069845932421183ULL)))))) + (1)))));
                                var_30 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_17 [i_1] [i_2] [i_2] [i_4] [i_2])))))));
                                arr_19 [i_1] [i_1] [i_2] [i_3] [i_3] [i_4] [i_5] = ((/* implicit */unsigned int) arr_18 [i_1] [i_1] [i_2] [i_3] [i_1] [i_1] [i_5]);
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */unsigned char) ((unsigned int) (~(((((/* implicit */_Bool) var_10)) ? (arr_16 [i_3] [i_3] [i_3] [i_2] [i_1]) : (((/* implicit */unsigned long long int) arr_18 [i_1] [i_3] [i_2] [i_2] [i_2] [i_2] [i_1])))))));
                }
            } 
        } 
        arr_20 [i_1] [i_1] = ((/* implicit */_Bool) min((max((arr_13 [i_1] [i_1]), (((/* implicit */unsigned short) ((arr_7 [i_1] [i_1]) != (arr_15 [i_1] [i_1] [i_1] [i_1])))))), (((/* implicit */unsigned short) var_17))));
    }
}
