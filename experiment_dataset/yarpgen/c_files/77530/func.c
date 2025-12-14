/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77530
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
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 23; i_2 += 1) 
            {
                {
                    var_18 -= ((/* implicit */signed char) ((((unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 2] [22LL])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_17))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) min((var_14), (var_15))))))));
                    arr_7 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)42742)) && (((/* implicit */_Bool) 1971339539U))));
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (2752170436U) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (((7987204731008571390ULL) * (((/* implicit */unsigned long long int) var_8)))))) - (min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_17)) / (var_1)))), (min((((/* implicit */unsigned long long int) (-2147483647 - 1))), (var_13))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
    {
        for (unsigned long long int i_4 = 4; i_4 < 20; i_4 += 1) 
        {
            for (int i_5 = 0; i_5 < 21; i_5 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 1; i_6 < 19; i_6 += 2) 
                    {
                        for (int i_7 = 0; i_7 < 21; i_7 += 4) 
                        {
                            {
                                arr_21 [i_3] [i_4] [i_3] = ((/* implicit */int) var_3);
                                arr_22 [i_3] [i_4] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) var_9)))));
                                var_20 = ((/* implicit */long long int) max((var_20), (min((((((/* implicit */_Bool) ((7987204731008571389ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) ? (var_6) : (var_9))), (((/* implicit */long long int) arr_16 [i_4 - 1] [i_6 + 2] [i_6] [i_7]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                arr_28 [i_3] [i_4] [i_5] = ((/* implicit */short) var_13);
                                arr_29 [i_3] [i_3] [i_3] [i_4] [i_9] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_4)))) ? (((/* implicit */long long int) (+(var_8)))) : (((var_9) / (var_6))))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((var_8) < (((/* implicit */int) var_0)))))) >= (min((var_10), (((/* implicit */long long int) var_1))))))))));
                                arr_30 [i_4] [i_9] = ((/* implicit */short) ((((((/* implicit */_Bool) var_11)) || (arr_17 [i_3] [i_4 + 1] [i_4 - 3]))) ? (((long long int) var_3)) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_4])) << (((((/* implicit */int) var_0)) - (69)))))) ? (((/* implicit */int) ((signed char) var_16))) : (((/* implicit */int) ((_Bool) -1854004701))))))));
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (var_10)))) ? (((/* implicit */int) ((signed char) (~(((/* implicit */int) var_0)))))) : (((int) var_1))));
                                arr_31 [i_4] = max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_25 [i_4 - 4] [i_4 - 1] [i_5] [i_8] [i_8]))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) arr_11 [i_3] [i_4 - 2] [i_3])) : (var_2))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned char) ((long long int) var_8));
                }
            } 
        } 
    } 
}
