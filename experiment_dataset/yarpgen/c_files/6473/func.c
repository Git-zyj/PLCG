/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6473
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
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) (~(((((/* implicit */_Bool) (signed char)78)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (_Bool)0)))))))));
        var_12 *= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_0 [i_0 + 2]) : (arr_0 [i_0 - 1])))));
        var_13 = ((((unsigned int) (+(((/* implicit */int) (_Bool)1))))) != (((/* implicit */unsigned int) arr_0 [(signed char)5])));
    }
    for (short i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */signed char) (-(max((((/* implicit */unsigned long long int) (unsigned char)53)), (var_9)))));
        /* LoopSeq 2 */
        for (long long int i_2 = 3; i_2 < 9; i_2 += 1) /* same iter space */
        {
            arr_10 [i_1] [i_2] = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2 - 2]))) % (var_4))) == (min((var_4), (((/* implicit */long long int) var_2))))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    for (short i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        {
                            arr_21 [i_4] [i_4] [i_3] [i_3] [7LL] = ((/* implicit */unsigned int) min((min((var_2), (((/* implicit */int) var_10)))), (((/* implicit */int) ((((/* implicit */int) arr_16 [i_2] [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1])) == (((/* implicit */int) arr_16 [i_2] [i_2] [i_2 + 1] [i_2] [i_2])))))));
                            var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) arr_15 [i_1] [i_2] [(signed char)8] [i_2]))));
                            arr_22 [i_5] [(unsigned char)4] [i_3] [i_3] [i_5] &= ((/* implicit */int) max((arr_6 [i_2 - 1] [i_2]), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-100)))))));
                            var_15 = ((/* implicit */unsigned long long int) max((min((((/* implicit */int) (unsigned char)53)), (var_2))), (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_6 = 3; i_6 < 9; i_6 += 1) /* same iter space */
        {
            var_16 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
            /* LoopNest 2 */
            for (int i_7 = 2; i_7 < 6; i_7 += 1) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 1) 
                {
                    {
                        var_17 = ((/* implicit */short) var_10);
                        arr_33 [i_6] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)203))));
                        arr_34 [i_1] [i_6] [i_6] [i_7] [i_6] = ((/* implicit */unsigned int) (-(((((int) arr_24 [i_1] [i_1] [i_1])) / (((/* implicit */int) var_5))))));
                    }
                } 
            } 
            arr_35 [i_6] [i_1] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))))), (max((2199023255551ULL), (((/* implicit */unsigned long long int) var_7))))))) && (((/* implicit */_Bool) ((((/* implicit */int) min(((unsigned char)41), (((/* implicit */unsigned char) var_5))))) & (((/* implicit */int) (short)-25482)))))));
        }
    }
    for (int i_9 = 0; i_9 < 24; i_9 += 4) 
    {
        arr_38 [i_9] = ((/* implicit */signed char) var_8);
        arr_39 [i_9] = ((/* implicit */signed char) -487692583);
        arr_40 [(signed char)11] = ((/* implicit */unsigned long long int) arr_36 [i_9]);
        var_18 *= ((/* implicit */unsigned char) ((int) ((unsigned int) -1361022333)));
    }
    var_19 -= ((/* implicit */int) (_Bool)1);
    var_20 = max((-9153643547512702648LL), (((/* implicit */long long int) (~(((196608U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)14)))))))));
}
