/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63152
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_16 |= ((12932868132396844805ULL) - (((/* implicit */unsigned long long int) ((arr_0 [i_0]) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1])) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (signed char)91)))) : (((((/* implicit */_Bool) (signed char)-102)) ? (((/* implicit */int) (short)-13848)) : (((/* implicit */int) (unsigned short)36754))))))));
                var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_3 [i_0])), (min((((/* implicit */unsigned int) (unsigned short)48767)), (1190438031U)))))) & (min(((+(var_8))), (((((/* implicit */_Bool) 4503599627369472LL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        {
                            arr_12 [i_0] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */signed char) min((((((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) && (((/* implicit */_Bool) 9223372036854775807LL))))) | (((/* implicit */int) (signed char)102)))), ((((((_Bool)1) ? (((/* implicit */int) arr_10 [i_0] [14U] [i_1] [i_3])) : (((/* implicit */int) (signed char)-92)))) >> ((((-(((/* implicit */int) (unsigned char)13)))) + (22)))))));
                            var_18 = ((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) ((((((/* implicit */int) (short)14339)) - (((/* implicit */int) (unsigned char)148)))) == (((/* implicit */int) min(((unsigned char)196), (((/* implicit */unsigned char) (_Bool)1)))))))));
                            var_19 = ((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_0] [i_1]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 &= ((/* implicit */unsigned short) var_4);
}
