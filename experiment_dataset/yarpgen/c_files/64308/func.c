/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64308
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_1 [i_1]))) + (((arr_1 [i_1]) * (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_9 [i_2] [i_2] [i_2] = ((/* implicit */short) ((((((/* implicit */int) arr_4 [i_0] [i_1] [i_0])) + (((/* implicit */int) arr_4 [i_0] [i_1] [i_2])))) * (((/* implicit */int) ((unsigned short) ((-8443578761229822153LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */int) arr_16 [i_0] [i_1] [i_2] [i_1] [i_4] [i_4 - 1]);
                                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)63938)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)0)) << (((67108856) - (67108849)))))))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)33234))))) ? (((unsigned int) 1203864720929561733ULL)) : (((/* implicit */unsigned int) 536346624))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 2; i_5 < 11; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */int) ((var_10) + (((/* implicit */long long int) (+(((/* implicit */int) arr_8 [i_0] [i_5] [i_2])))))));
                                var_19 = ((/* implicit */unsigned long long int) min((max((((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_18 [i_2] [i_2] [i_6])) : (((/* implicit */int) arr_14 [i_6] [i_5 - 2] [i_2] [i_1] [i_0])))), (((/* implicit */int) min((var_8), (arr_5 [i_0] [i_5] [i_6])))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_0])) + (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_5 - 1] [i_6]))))))))));
                                arr_21 [i_2] [i_1] [i_2] [i_5 + 1] [i_2] = ((/* implicit */short) (((-(((/* implicit */int) (short)-24844)))) == (1008)));
                                var_20 = ((/* implicit */unsigned short) var_8);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
    {
        for (unsigned short i_8 = 0; i_8 < 23; i_8 += 3) 
        {
            for (long long int i_9 = 0; i_9 < 23; i_9 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [i_7 - 1] [i_7 - 1])) ? (((unsigned long long int) arr_25 [i_7] [i_7] [i_9])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (_Bool)0))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 23; i_10 += 3) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 23; i_11 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (+(((int) arr_27 [i_7] [i_7 - 1] [i_7 - 1])))))));
                                var_23 = ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)20927))) > (min((((/* implicit */unsigned int) arr_22 [i_7])), (arr_33 [i_7] [i_8] [i_9] [i_10] [i_11])))))), ((-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) >= (var_10))))))));
                                var_24 = ((/* implicit */signed char) ((1743103744U) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) var_11))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) arr_30 [i_9] [i_9] [i_9])))))));
                                var_25 -= arr_22 [i_8];
                                var_26 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_7 - 1] [i_11] [i_7 - 1])) ? (min((arr_33 [i_7 - 1] [i_8] [i_8] [i_8] [i_10]), (((/* implicit */unsigned int) arr_27 [i_7 - 1] [i_11] [i_11])))) : (arr_33 [i_7 - 1] [i_10] [i_10] [i_10] [i_11])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? ((+(((/* implicit */int) var_0)))) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) ((-2068388243) == (((/* implicit */int) (signed char)95))))), (-686055908)))) : (((((((/* implicit */_Bool) var_8)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39835))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_13)), ((unsigned short)0)))))))));
}
