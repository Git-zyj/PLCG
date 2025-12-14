/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94437
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
    var_19 = ((/* implicit */long long int) var_18);
    var_20 = ((/* implicit */int) var_14);
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_7 [i_0 - 1] [11LL] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_12)), (arr_0 [i_0 + 1])))) ? (arr_0 [i_2]) : (((((/* implicit */unsigned long long int) 1840683964)) * (min((12084988913154317912ULL), (((/* implicit */unsigned long long int) (unsigned char)210))))))));
                    arr_8 [(signed char)6] [i_1] [i_0] [(signed char)6] = ((/* implicit */_Bool) (-(((long long int) var_2))));
                    arr_9 [i_0] [6LL] |= ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) (signed char)7)) && (((/* implicit */_Bool) -1778660599)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_0 - 1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_3 [i_2 + 1] [i_4 + 1] [i_1]), (arr_3 [i_2 + 1] [i_4 + 1] [i_1])))) ? (((arr_1 [i_0 - 1]) << (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-85)), (var_1)))))) : (min(((-(var_7))), (((/* implicit */unsigned long long int) arr_3 [i_1] [i_1 - 1] [i_1]))))));
                                arr_16 [0LL] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) 4161536U))))))))));
                                arr_17 [i_1] = ((/* implicit */long long int) min((min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2115792779592928656ULL))))), (var_1))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((9049809894808402625ULL) << (((((/* implicit */int) (signed char)-23)) + (36)))))))))));
                                arr_18 [i_0] [i_1 + 1] [i_2] [(unsigned short)10] [i_4] [i_4 - 1] [i_4] = ((/* implicit */short) ((min((arr_0 [i_2 + 1]), (((/* implicit */unsigned long long int) var_18)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [2] [i_0] [i_0] [i_0] [i_0 + 1]))))))));
                            }
                        } 
                    } 
                    arr_19 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) arr_5 [i_1 + 1])), (arr_1 [i_0 - 1]))), (arr_1 [i_0 + 1])));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((long long int) 0ULL))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (-15LL) : (((/* implicit */long long int) 592200351))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (var_7)))));
}
