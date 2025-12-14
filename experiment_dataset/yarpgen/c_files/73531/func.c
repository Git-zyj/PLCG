/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73531
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
    var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) min((((/* implicit */int) var_8)), (var_5))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_13 -= ((/* implicit */unsigned short) max((((((/* implicit */int) ((_Bool) arr_1 [i_0]))) >> (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) ((_Bool) ((unsigned int) arr_0 [i_0]))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (unsigned int i_3 = 1; i_3 < 24; i_3 += 4) 
                {
                    {
                        arr_12 [i_0] [i_1] [i_1] [i_3 - 1] = ((/* implicit */unsigned short) arr_8 [i_3] [i_1] [i_1] [i_3]);
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
                        {
                            arr_15 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */long long int) arr_11 [i_2] [i_1] [i_2] [i_3] [i_4]);
                            arr_16 [i_0] [i_0] [i_0] [i_1] [i_4] = ((/* implicit */signed char) ((unsigned long long int) arr_14 [i_0] [i_3 + 1] [i_1 - 1] [i_0] [i_4 - 1] [i_1]));
                            var_14 = ((/* implicit */_Bool) arr_7 [i_0]);
                        }
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            var_15 &= min((((/* implicit */unsigned int) ((unsigned short) arr_14 [i_0] [i_1] [i_0] [i_3] [i_3] [i_2]))), (max((((/* implicit */unsigned int) arr_5 [i_0] [i_2])), (min((((/* implicit */unsigned int) (_Bool)1)), (1841618162U))))));
                            var_16 = ((/* implicit */long long int) arr_5 [i_0] [i_1]);
                            var_17 += ((/* implicit */unsigned char) max((((/* implicit */long long int) arr_17 [i_0] [i_1 - 1] [i_2])), (((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_9 [i_0] [i_3] [i_2])))) % (max((((/* implicit */long long int) 559637332U)), (-8630958498155220525LL)))))));
                            arr_19 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_14 [i_0] [i_1 - 1] [i_2] [i_2] [i_3] [i_1]);
                        }
                    }
                } 
            } 
        } 
        arr_20 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)321), (((/* implicit */unsigned short) (_Bool)1)))))) * (((long long int) arr_7 [i_0]))));
        arr_21 [i_0] [i_0] = ((/* implicit */long long int) arr_3 [i_0]);
    }
    for (int i_6 = 3; i_6 < 18; i_6 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_7 = 0; i_7 < 19; i_7 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_8 = 0; i_8 < 19; i_8 += 1) 
            {
                var_18 = ((/* implicit */unsigned long long int) ((unsigned short) min((arr_10 [i_6] [i_7] [i_8] [i_6 - 2] [i_7]), (arr_10 [i_6] [i_7] [i_8] [i_6 - 2] [i_6]))));
                /* LoopSeq 1 */
                for (long long int i_9 = 3; i_9 < 15; i_9 += 3) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_33 [i_6] [i_6] [i_6] [i_7] [i_10] = ((/* implicit */_Bool) max((min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_8]))) | (arr_10 [i_6] [i_6] [i_6] [i_6] [i_6]))), (((/* implicit */unsigned long long int) arr_23 [i_6 - 3])))), (((/* implicit */unsigned long long int) arr_23 [i_9 + 4]))));
                        var_19 = ((/* implicit */unsigned int) arr_4 [i_7] [i_7]);
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 3) 
                    {
                        var_20 = ((/* implicit */long long int) max((var_20), (((long long int) arr_7 [i_9]))));
                        var_21 -= ((/* implicit */long long int) arr_6 [i_9 + 1] [i_9 - 1] [i_9 + 3] [i_9 - 2]);
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((((unsigned short) arr_27 [i_7])), (((/* implicit */unsigned short) max((arr_31 [i_6] [i_6] [i_7] [i_9] [i_6]), (arr_13 [i_6] [i_7] [i_8] [i_7] [i_8]))))))) ^ (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1))))));
                    }
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) arr_1 [i_6]))));
                    var_24 += ((/* implicit */int) min((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_27 [4ULL])), (arr_8 [i_9 - 2] [i_9 + 1] [0LL] [i_9])))), (((-5867516111914754507LL) & (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_6] [i_6] [(_Bool)1])))))));
                    var_25 = ((/* implicit */short) min((((/* implicit */long long int) min((arr_25 [i_9 - 2]), (arr_25 [i_9 - 3])))), (max((5867516111914754506LL), (((/* implicit */long long int) 241603813U))))));
                }
                var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) min(((unsigned short)2032), (((/* implicit */unsigned short) arr_29 [i_8])))))));
            }
            var_27 = ((/* implicit */unsigned char) min((max((min((((/* implicit */unsigned long long int) arr_25 [i_6])), (arr_0 [i_7]))), (((((/* implicit */unsigned long long int) arr_28 [i_6] [i_6] [i_6] [i_6])) | (arr_10 [i_6] [i_6] [i_6] [i_7] [i_7]))))), (((/* implicit */unsigned long long int) ((unsigned int) arr_9 [i_6] [i_6] [i_7])))));
            var_28 = ((/* implicit */unsigned char) arr_34 [i_6] [i_7] [i_6] [i_6] [i_7] [i_7] [i_6]);
            var_29 = ((/* implicit */signed char) arr_4 [i_7] [i_7]);
            var_30 = ((/* implicit */_Bool) max((min((arr_8 [i_6] [i_6] [i_7] [i_6]), (((/* implicit */unsigned int) arr_13 [i_6] [i_7] [i_6] [i_7] [i_7])))), (((/* implicit */unsigned int) arr_11 [i_6 - 3] [i_6] [i_6 - 3] [i_7] [i_7]))));
        }
        var_31 = ((/* implicit */unsigned long long int) arr_2 [i_6] [i_6 - 2] [i_6]);
        var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) arr_24 [i_6]))));
    }
}
