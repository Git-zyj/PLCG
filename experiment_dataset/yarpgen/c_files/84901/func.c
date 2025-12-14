/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84901
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */int) (!((!(((/* implicit */_Bool) arr_3 [i_1]))))))) != (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_18)))))))))));
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) min((arr_4 [i_0] [i_0] [i_0]), (arr_5 [i_0] [i_1] [i_0]))))) ? (((((((/* implicit */int) var_17)) != (((/* implicit */int) arr_4 [i_1] [i_0] [i_0])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) - (arr_2 [i_0] [i_1]))) : (((/* implicit */unsigned long long int) ((var_5) ? (var_15) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_15))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        {
                            arr_10 [i_2] = ((/* implicit */long long int) (((((!(((/* implicit */_Bool) arr_6 [i_3])))) ? (arr_9 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) ^ (((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned char) var_13))), (((((/* implicit */int) var_14)) & (((/* implicit */int) arr_5 [i_0] [i_2] [i_0])))))))));
                            arr_11 [i_3] [i_3] [i_1] [i_3] = ((_Bool) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_5)))))));
                        }
                    } 
                } 
                var_21 *= ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-127)) - (((/* implicit */int) (short)-13096))));
                arr_12 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) - (arr_2 [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((arr_9 [i_0] [i_1]) >= (((/* implicit */unsigned long long int) var_0)))))))) ? ((+(((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) * (((/* implicit */int) arr_4 [i_0] [i_0] [i_1])))))) : (((/* implicit */int) var_5)));
            }
        } 
    } 
    var_22 = ((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) var_6))));
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) var_0)) >= (max((((/* implicit */unsigned int) ((var_0) != (var_13)))), (((((/* implicit */_Bool) var_13)) ? (var_1) : (var_1)))))));
    var_24 = ((/* implicit */unsigned short) var_1);
    /* LoopNest 3 */
    for (short i_4 = 0; i_4 < 18; i_4 += 4) 
    {
        for (unsigned short i_5 = 0; i_5 < 18; i_5 += 2) 
        {
            for (unsigned char i_6 = 0; i_6 < 18; i_6 += 3) 
            {
                {
                    arr_22 [i_4] [i_5] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)69)) & (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) min((((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) >= (var_16)))), (var_18)))) : (((/* implicit */int) ((signed char) var_11)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 1) 
                        {
                            {
                                arr_30 [i_8] [i_7] [i_6] [i_6] [i_4] [i_4] = ((/* implicit */unsigned short) var_8);
                                var_25 = ((/* implicit */short) (~(min((((((/* implicit */int) var_5)) >> (((((/* implicit */int) var_10)) - (32120))))), (var_0)))));
                                var_26 = ((/* implicit */short) (~(min((((/* implicit */unsigned long long int) var_15)), (max((var_9), (((/* implicit */unsigned long long int) var_10))))))));
                                arr_31 [i_4] [i_5] [i_6] [i_5] [i_7] [i_5] = var_5;
                                arr_32 [i_4] [i_4] [i_6] [i_7] [i_8] = ((unsigned short) min((((/* implicit */int) var_4)), (((((((/* implicit */int) var_2)) + (2147483647))) << (((var_15) - (1616418490)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
