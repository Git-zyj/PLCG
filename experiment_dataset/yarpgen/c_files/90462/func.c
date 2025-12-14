/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90462
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
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((unsigned char) var_14)))));
    var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) 510889128590103466LL)) ? (((unsigned long long int) var_16)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13247))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (var_16) : (((/* implicit */int) var_3)))) > (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_15))))))))));
    var_20 = ((/* implicit */unsigned char) var_1);
    var_21 = ((/* implicit */unsigned char) ((long long int) var_5));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (((((/* implicit */int) var_4)) >> (((var_6) - (678683894))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 - 1]))) < (11163315391758115834ULL)))))))));
                                var_23 |= ((/* implicit */unsigned long long int) var_4);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 14; i_6 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) min((((/* implicit */int) (unsigned char)222)), (46639232))))));
                                var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 510889128590103466LL))));
                                var_26 = ((/* implicit */signed char) (~(max((((((/* implicit */_Bool) (unsigned char)67)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (11163315391758115834ULL))), (((/* implicit */unsigned long long int) (short)960))))));
                                arr_17 [i_2] [i_1 - 1] [i_1] [i_1] [i_1] [i_1 - 1] = ((/* implicit */short) (unsigned char)188);
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_0] [i_2] [i_0] = ((((/* implicit */long long int) ((/* implicit */int) max((var_5), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -8808579870199003757LL)) && (((/* implicit */_Bool) 8808579870199003756LL))))))))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) : (9223372036854775807LL)))) ? (((/* implicit */long long int) arr_3 [i_1])) : (4536206641541491199LL))));
                    var_27 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (1613467836)))) ? (((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) min((arr_0 [i_1]), (var_2))))));
                }
            } 
        } 
    } 
}
