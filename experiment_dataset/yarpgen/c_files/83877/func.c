/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83877
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                arr_5 [(unsigned short)4] &= ((/* implicit */short) ((((((/* implicit */_Bool) min((3306371669U), (((/* implicit */unsigned int) 1023))))) ? (((/* implicit */unsigned int) (+(1017)))) : ((-(3306371669U))))) + ((+(max((arr_0 [(short)20] [6U]), (((/* implicit */unsigned int) arr_4 [i_0] [i_0]))))))));
                var_17 = ((/* implicit */int) ((_Bool) (~(288228177128456192ULL))));
                arr_6 [i_0] [i_0] = ((/* implicit */int) ((988595627U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-1)))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 3 */
        for (int i_3 = 2; i_3 < 20; i_3 += 4) /* same iter space */
        {
            var_18 = arr_3 [i_2] [i_2] [i_2];
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned short i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    {
                        var_19 = ((((/* implicit */_Bool) arr_14 [i_2 - 1])) ? (((/* implicit */unsigned int) max((2097136), (((/* implicit */int) var_1))))) : (max((arr_14 [i_2 - 1]), (((/* implicit */unsigned int) arr_2 [i_3 - 2] [i_2] [i_4])))));
                        var_20 = ((/* implicit */unsigned short) arr_8 [i_4] [i_5]);
                        var_21 = ((/* implicit */_Bool) max((max((arr_0 [i_2 - 1] [i_5]), (((/* implicit */unsigned int) var_16)))), (arr_0 [i_2 - 1] [i_5])));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (long long int i_6 = 1; i_6 < 19; i_6 += 4) 
            {
                var_22 = ((/* implicit */unsigned short) max((((/* implicit */long long int) min((-1919091806), (((/* implicit */int) (signed char)-82))))), (min((((((/* implicit */_Bool) -396626952)) ? (arr_10 [i_2] [i_2]) : (((/* implicit */long long int) arr_3 [i_2] [19] [16ULL])))), (((/* implicit */long long int) max(((unsigned short)0), (((/* implicit */unsigned short) arr_12 [i_2 - 1] [i_6 + 2])))))))));
                var_23 = ((/* implicit */_Bool) var_8);
                arr_20 [i_6] [i_3] [i_2 - 1] = ((/* implicit */signed char) (unsigned short)65535);
            }
            for (unsigned short i_7 = 0; i_7 < 21; i_7 += 2) 
            {
                arr_23 [(unsigned char)19] [i_2] = ((/* implicit */int) arr_9 [(signed char)15]);
                var_24 = ((/* implicit */unsigned short) max((((/* implicit */long long int) var_15)), (((((_Bool) (unsigned short)35196)) ? (var_9) : (((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_2 - 1] [i_2])))))))));
            }
            var_25 -= ((/* implicit */signed char) max((max((arr_8 [i_2 - 1] [i_3 - 2]), (arr_8 [i_2 - 1] [i_3 - 2]))), (arr_7 [i_3 + 1])));
            arr_24 [i_2] [i_2] [i_3] = ((/* implicit */unsigned short) max((arr_2 [i_2] [i_2] [22]), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_0)), (396626952)))))))));
        }
        for (int i_8 = 2; i_8 < 20; i_8 += 4) /* same iter space */
        {
            var_26 = ((/* implicit */_Bool) arr_16 [(unsigned short)0] [i_2] [i_2 - 1]);
            var_27 = ((/* implicit */int) max((var_27), (((((arr_25 [(_Bool)1]) <= (((arr_18 [i_2] [i_8]) ^ (((/* implicit */unsigned long long int) 1032)))))) ? (((/* implicit */int) arr_16 [i_2] [i_2] [i_2 - 1])) : (max((arr_7 [i_2 - 1]), (((/* implicit */int) max((arr_13 [i_2] [i_2] [(_Bool)1] [i_8]), ((unsigned short)60344))))))))));
            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) max((arr_17 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]), (((/* implicit */int) arr_13 [i_8 - 2] [i_8 - 2] [i_8 - 2] [i_8 - 1])))))));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            arr_30 [i_9] [i_2 - 1] [i_2 - 1] = ((/* implicit */_Bool) ((max((((/* implicit */unsigned int) arr_29 [i_2 - 1])), (arr_22 [i_2] [i_2 - 1] [i_2]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (-9223372036854775807LL - 1LL)))))));
            var_29 = ((/* implicit */int) 988595604U);
        }
        var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))), (min((arr_28 [(unsigned short)5] [(unsigned short)15] [i_2]), (((/* implicit */long long int) arr_22 [i_2] [i_2] [i_2]))))))) - ((-(min((arr_25 [i_2]), (((/* implicit */unsigned long long int) (_Bool)1)))))))))));
        arr_31 [20] [i_2] = ((min((((/* implicit */unsigned int) (_Bool)1)), (arr_22 [i_2] [i_2 - 1] [(short)20]))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_2] [i_2 - 1])) ? (((/* implicit */int) arr_27 [i_2] [i_2 - 1] [i_2])) : (arr_8 [i_2] [i_2 - 1])))));
    }
}
