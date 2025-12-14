/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85098
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
    var_16 = ((/* implicit */unsigned int) ((signed char) var_2));
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) var_11)) > (min((min((((/* implicit */int) (unsigned char)60)), (61234349))), (((/* implicit */int) (!(((/* implicit */_Bool) 1652470694U)))))))));
    var_18 = ((/* implicit */_Bool) var_7);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_3 [9] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) * (var_1)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_11)))))) == ((+(((/* implicit */int) (short)-30816))))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                for (signed char i_3 = 2; i_3 < 20; i_3 += 1) 
                {
                    {
                        var_19 -= ((/* implicit */short) max((((/* implicit */unsigned long long int) ((unsigned int) max((((/* implicit */long long int) var_1)), (var_4))))), (min((arr_12 [i_2] [i_2 - 1] [i_3 + 4] [(signed char)8]), (((/* implicit */unsigned long long int) var_2))))));
                        /* LoopSeq 3 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_16 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */int) (~(2642496601U)));
                            var_20 = ((/* implicit */int) var_9);
                            arr_17 [i_2] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((unsigned short) var_3))), (((var_12) % (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
                        }
                        for (long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                        {
                            var_21 = ((/* implicit */short) max(((+(((/* implicit */int) arr_1 [i_1])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) var_2)))))));
                            arr_20 [i_5] [i_3] [i_2] [i_1] [i_5] &= ((/* implicit */unsigned int) min((8982535533148923575ULL), (((/* implicit */unsigned long long int) ((arr_13 [i_5]) > (((/* implicit */int) ((unsigned char) arr_8 [i_5] [i_5]))))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            arr_23 [i_0] [i_1] [i_1] [i_2] [(signed char)3] [i_6] = ((/* implicit */unsigned short) (+(var_14)));
                            var_22 -= ((/* implicit */unsigned long long int) var_0);
                        }
                    }
                } 
            } 
            arr_24 [i_0] = ((/* implicit */unsigned char) 1652470678U);
            var_23 = ((/* implicit */_Bool) ((unsigned long long int) ((int) arr_13 [4U])));
        }
        for (unsigned char i_7 = 2; i_7 < 22; i_7 += 4) 
        {
            var_24 &= (~(min((((/* implicit */unsigned long long int) var_15)), (var_13))));
            arr_27 [i_0] [i_7] [i_7 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max(((unsigned short)48718), (((/* implicit */unsigned short) var_11))))) && (((/* implicit */_Bool) min((arr_13 [i_7]), (((/* implicit */int) (_Bool)1))))))))) : (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)13)) || (((/* implicit */_Bool) 15240761307611612929ULL))))), (((((/* implicit */unsigned int) arr_14 [i_0] [i_0] [i_0] [i_0] [17] [i_7 - 2] [i_7 + 2])) / (2642496602U)))))));
        }
    }
    var_25 = ((/* implicit */unsigned char) max(((~(var_7))), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1)))))))));
}
