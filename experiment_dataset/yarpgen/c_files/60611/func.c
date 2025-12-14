/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60611
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_12 = var_2;
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) >= (min((arr_3 [i_0] [i_0]), (((((/* implicit */int) var_11)) ^ (((/* implicit */int) arr_1 [(unsigned char)11]))))))));
            var_14 = ((/* implicit */unsigned int) ((max(((+(((/* implicit */int) (signed char)-116)))), (var_10))) <= ((-(((arr_2 [i_0] [i_0] [i_0]) / (((/* implicit */int) arr_1 [i_0]))))))));
        }
        for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            var_15 = ((/* implicit */signed char) (-(((211106232532992LL) / (((/* implicit */long long int) arr_2 [i_0] [i_2] [i_2]))))));
            var_16 = ((/* implicit */int) max((var_16), (((((/* implicit */int) (!(((/* implicit */_Bool) (~(var_1))))))) << (min((1505871681U), (((/* implicit */unsigned int) min((((/* implicit */int) var_0)), (var_10))))))))));
        }
        for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 3) 
        {
            /* LoopSeq 1 */
            for (long long int i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                var_17 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_8 [i_3 + 3] [i_0] [(unsigned short)11]))))));
                /* LoopSeq 1 */
                for (signed char i_5 = 1; i_5 < 13; i_5 += 4) 
                {
                    var_18 = ((/* implicit */signed char) min((max((max((4096089442U), (arr_9 [i_5] [i_3] [i_0]))), (((/* implicit */unsigned int) ((var_6) / (arr_2 [i_0] [i_0] [i_4])))))), (((/* implicit */unsigned int) (~(((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) (_Bool)1)))))))));
                    var_19 = ((/* implicit */unsigned char) max((((/* implicit */int) min((arr_6 [i_5 + 2]), (arr_6 [i_5 + 1])))), ((+((-(arr_2 [(short)4] [(short)4] [(signed char)13])))))));
                }
                var_20 = ((/* implicit */signed char) ((min((arr_11 [i_3 + 2] [i_3 + 1] [i_3 + 1]), (((/* implicit */unsigned long long int) arr_1 [i_3 + 1])))) * (((/* implicit */unsigned long long int) var_10))));
                var_21 = ((/* implicit */int) arr_4 [i_0] [i_0]);
                var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(0U)))) - (min((((/* implicit */unsigned long long int) (-(arr_7 [i_4] [i_0])))), (arr_11 [i_4] [i_4] [i_4])))));
            }
            var_23 = ((/* implicit */signed char) 725264404);
            var_24 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_15 [i_0] [(signed char)0] [(unsigned short)14] [i_3 - 1])) << (((/* implicit */int) arr_15 [i_0] [12U] [i_3 + 2] [i_3])))) >> (((((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_3 + 1] [(short)10] [(short)10] [i_0]))) ^ (arr_9 [i_0] [i_0] [i_3 - 1]))) - (967760016U)))));
        }
    }
    for (unsigned short i_6 = 2; i_6 < 9; i_6 += 1) 
    {
        var_25 = ((/* implicit */short) var_2);
        var_26 = ((/* implicit */short) min(((~(((((/* implicit */_Bool) (signed char)58)) ? (arr_18 [0U]) : (var_10))))), ((-((~(arr_3 [i_6] [i_6])))))));
        var_27 = ((/* implicit */unsigned int) (+(((/* implicit */int) min(((!(((/* implicit */_Bool) (unsigned short)65524)))), ((!(var_11))))))));
        var_28 = ((/* implicit */unsigned char) (((~(((4096089442U) << (((arr_7 [3ULL] [i_6]) - (1272339581U))))))) ^ (((/* implicit */unsigned int) max((min((((/* implicit */int) var_8)), (arr_3 [i_6] [i_6]))), (((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */int) var_2)) : (arr_19 [i_6] [i_6]))))))));
    }
    var_29 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min(((signed char)-55), (((/* implicit */signed char) (_Bool)1))))) ? (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned short)13340)) : (((/* implicit */int) var_11)))) : (max((var_6), (var_10))))) ^ (((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) <= (198877854U)))), (var_4))))));
}
