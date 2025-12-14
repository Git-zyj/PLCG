/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87587
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 1254129968))));
                arr_8 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((unsigned int) ((unsigned int) arr_5 [i_1 + 1] [i_1 - 1])));
                arr_9 [(_Bool)1] [10] [21LL] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_2 [i_1 - 1] [i_1 + 1])), (1445085703U)))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_6)));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) (((((-(((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_13))))))) + (9223372036854775807LL))) >> ((((+(((((/* implicit */_Bool) -3127730067673232601LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_13)))))) + (19532)))));
    /* LoopNest 3 */
    for (short i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            for (long long int i_4 = 1; i_4 < 19; i_4 += 3) 
            {
                {
                    var_16 += ((/* implicit */_Bool) var_7);
                    /* LoopNest 2 */
                    for (long long int i_5 = 2; i_5 < 21; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 20; i_6 += 4) 
                        {
                            {
                                arr_27 [i_2] [i_6] [(unsigned short)12] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) min((max((var_4), (((/* implicit */long long int) var_13)))), (((/* implicit */long long int) ((short) var_4)))))) ? (((/* implicit */int) ((_Bool) max((var_7), (((/* implicit */long long int) var_11)))))) : ((~((~(((/* implicit */int) (short)24076))))))));
                                arr_28 [i_2] [(_Bool)1] [i_5] [i_4] = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_8)), (((((/* implicit */_Bool) max(((unsigned char)90), ((unsigned char)175)))) ? (min((var_0), (((/* implicit */long long int) (unsigned char)90)))) : (((/* implicit */long long int) arr_18 [i_2] [i_4] [i_5 - 2]))))));
                                arr_29 [i_3] [(unsigned short)4] [i_4] [6U] [i_6] &= ((/* implicit */signed char) (+(((/* implicit */int) (short)-24062))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) min((min((var_0), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)216)) ? (((/* implicit */int) (short)14075)) : (var_9)))))), (((((/* implicit */long long int) var_11)) ^ (min((((/* implicit */long long int) (unsigned char)212)), (var_12)))))));
}
