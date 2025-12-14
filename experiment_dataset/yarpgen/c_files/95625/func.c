/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95625
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
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 3; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_20 -= ((/* implicit */short) ((unsigned long long int) max((max((((/* implicit */unsigned int) (unsigned char)131)), (4204059740U))), (((/* implicit */unsigned int) min((var_19), (var_11)))))));
                                var_21 = ((/* implicit */unsigned int) min((var_2), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_8 [i_4 + 4] [i_2 - 3] [i_2 - 1])))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 4 */
                for (unsigned int i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    var_22 = ((/* implicit */unsigned char) max((((long long int) arr_1 [i_0])), (((/* implicit */long long int) (!(((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_5)))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 14; i_6 += 2) 
                    {
                        for (int i_7 = 0; i_7 < 14; i_7 += 1) 
                        {
                            {
                                arr_18 [i_1] [i_0] [i_1] [i_1] [i_6] [i_7] = ((unsigned char) ((((/* implicit */int) max(((unsigned short)65533), ((unsigned short)16)))) ^ (((/* implicit */int) var_12))));
                                arr_19 [i_0] [i_1] [i_5] [i_5] = ((/* implicit */signed char) ((var_13) >> (((((/* implicit */int) ((unsigned char) (-(((/* implicit */int) var_4)))))) - (211)))));
                            }
                        } 
                    } 
                }
                for (short i_8 = 0; i_8 < 14; i_8 += 2) /* same iter space */
                {
                    arr_23 [i_0] [i_0] [i_1] [i_8] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_8] [i_1] [i_0]))) + ((+(var_2))))) | (min((((/* implicit */unsigned long long int) ((var_8) / (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))), (arr_11 [i_0] [i_1] [i_1]))));
                    arr_24 [i_0] [i_1] [i_8] = ((/* implicit */short) ((min((((/* implicit */int) (!(((/* implicit */_Bool) var_15))))), (max((var_15), (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_1] [i_8] [i_8])))))) >= (((511) >> (((((/* implicit */int) (unsigned char)219)) - (213)))))));
                }
                for (short i_9 = 0; i_9 < 14; i_9 += 2) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned char) max((var_13), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_10 [(unsigned char)1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) var_19))))), ((~(var_17)))))));
                    var_24 = max((((/* implicit */long long int) (~(((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_1])))))))), (max((((/* implicit */long long int) var_5)), (min((arr_7 [i_0] [i_0] [i_1] [i_1] [i_9]), (((/* implicit */long long int) arr_8 [i_0] [i_0] [i_9])))))));
                    var_25 = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) 4294967295U)), (arr_11 [i_0] [i_1] [i_1]))), (((/* implicit */unsigned long long int) min((min((((/* implicit */short) (unsigned char)40)), ((short)-2608))), (((/* implicit */short) (signed char)-107)))))));
                }
                for (short i_10 = 0; i_10 < 14; i_10 += 2) /* same iter space */
                {
                    var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) max((max((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_6 [i_10] [i_10] [i_10] [i_1] [i_0])) : (((/* implicit */int) arr_27 [i_0] [i_1] [i_0])))))), (((/* implicit */int) var_19)))))));
                    var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) min(((+(max((var_13), (((/* implicit */unsigned int) arr_15 [i_0] [i_0] [i_0] [i_1] [i_10] [i_10])))))), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_6))))), (var_13))))))));
                }
                arr_31 [i_0] [i_0] [i_1] = ((/* implicit */signed char) (-((~(((((/* implicit */int) arr_2 [i_0] [i_0] [i_1])) ^ (((/* implicit */int) var_18))))))));
                var_28 -= ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((unsigned char) var_2))) : ((+(((/* implicit */int) (unsigned char)160))))))));
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned long long int) ((signed char) var_18));
    var_30 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)124))));
}
