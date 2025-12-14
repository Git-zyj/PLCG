/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59321
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
    var_11 = ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) var_10)) * (((/* implicit */int) (unsigned short)65535)))) : (((((var_3) && (((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_5)))));
    var_12 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (unsigned short)17977)) ? (((/* implicit */int) (short)4678)) : (((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)17977))))))) & (max((var_8), (((/* implicit */long long int) max((var_6), (((/* implicit */unsigned short) var_2)))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)47562)) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))) : (max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0])))))))));
        var_13 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(var_4))))));
    }
    for (unsigned int i_1 = 4; i_1 < 20; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 1; i_2 < 19; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_10 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)0)) + (((/* implicit */int) arr_4 [i_1 - 4])))) <= (((/* implicit */int) ((((/* implicit */int) (short)-29022)) <= (730630430))))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 1; i_4 < 18; i_4 += 3) 
                    {
                        for (long long int i_5 = 0; i_5 < 21; i_5 += 1) 
                        {
                            {
                                var_14 *= max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_12 [i_1] [i_2 + 1] [i_3] [(unsigned char)16]))))), ((unsigned short)16));
                                var_15 = (+(min((min((arr_3 [i_2] [i_5]), (((/* implicit */int) var_5)))), (((arr_13 [i_1] [i_2 - 1] [i_2 + 2] [(signed char)19] [i_2 - 1] [i_5]) - (((/* implicit */int) var_3)))))));
                                var_16 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (2636570016U) : (960795189U)));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_17 [i_1] [i_1] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 - 3] [i_1]))) : ((+((-(-8446291608428566240LL)))))));
        arr_18 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) arr_9 [i_1 - 2] [i_1 + 1] [i_1 - 3])), ((~(((/* implicit */int) (signed char)9))))))) ? ((((!(((/* implicit */_Bool) (short)7936)))) ? (arr_13 [i_1] [i_1] [i_1 - 4] [i_1] [7LL] [i_1]) : (((/* implicit */int) arr_0 [i_1])))) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535)))))))));
        var_17 -= var_4;
        arr_19 [(short)5] [i_1] = ((/* implicit */short) (+(min((min((2800454599U), (((/* implicit */unsigned int) (_Bool)1)))), (arr_11 [i_1 - 4] [i_1 - 3])))));
    }
}
