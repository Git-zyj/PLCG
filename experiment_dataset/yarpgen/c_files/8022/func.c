/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8022
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
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 12; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) 96181447);
                                arr_16 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */int) var_3)) == (((/* implicit */int) var_13))));
                                arr_17 [i_2] = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_3 + 2] [i_3 + 2] [i_3] [i_3] [i_3] [i_3 + 3] [i_3 + 3]))))), (((((/* implicit */int) arr_12 [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_3] [i_3 + 3] [i_3 + 3] [i_3])) % (((/* implicit */int) arr_12 [i_3 + 3] [i_3] [i_3] [i_3 + 1] [i_3] [i_3 + 1] [i_3 - 1]))))));
                                var_21 = ((/* implicit */unsigned short) (_Bool)0);
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */unsigned long long int) (+(max((((/* implicit */int) arr_12 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 1])), (arr_10 [i_1 + 1])))));
                /* LoopSeq 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 2; i_6 < 14; i_6 += 3) 
                    {
                        for (unsigned int i_7 = 2; i_7 < 13; i_7 += 3) 
                        {
                            {
                                arr_27 [i_7] [i_6] [i_6 + 1] [i_5] [i_5] [(short)9] [i_7] = min((((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)3)) >> (((886803236U) - (886803231U)))))) | (((3780284269679855595ULL) | (((/* implicit */unsigned long long int) arr_18 [i_0])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_18 [i_7])))) ? (((/* implicit */int) ((_Bool) 10522455200830974479ULL))) : (((/* implicit */int) ((short) var_2)))))));
                                var_23 &= ((/* implicit */unsigned long long int) var_10);
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */short) max((((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (var_19)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_17) > (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))) : (((((/* implicit */_Bool) (signed char)65)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                }
                for (unsigned int i_8 = 0; i_8 < 15; i_8 += 2) 
                {
                    var_25 = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) == (arr_15 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 - 1]))) ? ((+(arr_15 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 1]))) : ((-(arr_15 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 1])))));
                    var_26 = ((/* implicit */unsigned int) max((min((((/* implicit */int) ((var_0) && (((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_8] [i_0]))))), (((((/* implicit */_Bool) arr_26 [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_2 [9U])))))), (((/* implicit */int) ((((/* implicit */_Bool) max((arr_12 [12ULL] [9ULL] [(short)5] [i_1 - 1] [i_1 - 1] [i_8] [i_8]), (((/* implicit */unsigned short) arr_0 [i_0] [i_1 - 1]))))) || (min(((_Bool)0), ((_Bool)1))))))));
                }
            }
        } 
    } 
    var_27 = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
}
