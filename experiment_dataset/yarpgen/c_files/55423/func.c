/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55423
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
    var_15 = ((/* implicit */unsigned int) ((int) var_7));
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) min((((4194303) | (-4194304))), (min((((/* implicit */int) var_14)), (var_8)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) 4194303)) : (-1LL)))))))) : (((((/* implicit */_Bool) -1609114273)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_6)) : (var_3))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) var_4)) : (2783952426U))))))));
    var_17 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((long long int) -4194303)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (-1914529277)))) && (((/* implicit */_Bool) var_8))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                var_18 += ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_3 [i_1 + 2] [i_1 + 2]))))) < (arr_0 [i_1 + 1] [i_1 + 2])));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_9 [i_0] [i_1 + 1])), (arr_7 [19U] [i_1 + 1]))))));
                            /* LoopSeq 3 */
                            for (unsigned short i_4 = 2; i_4 < 20; i_4 += 4) 
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_1 + 2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) var_8))) ? (min((((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_0] [i_3] [i_4 - 2])), (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 8012887727232648898LL)) && (((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_2] [i_3] [i_4 - 2]))))))));
                                arr_15 [i_0] [i_2] [i_4] [i_0] [i_4] [i_1 - 1] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((var_13) - (((/* implicit */int) arr_11 [i_0] [(short)3])))) : (((/* implicit */int) (signed char)-95))));
                                var_20 = arr_3 [i_3] [i_2];
                            }
                            for (unsigned short i_5 = 2; i_5 < 20; i_5 += 3) /* same iter space */
                            {
                                var_21 = ((/* implicit */signed char) (_Bool)1);
                                var_22 *= ((/* implicit */unsigned int) min((((/* implicit */long long int) (-(((((/* implicit */int) arr_4 [(signed char)20])) - (var_13)))))), (((arr_8 [i_1 + 1] [i_5] [i_5 - 2]) ? (arr_13 [i_1 + 4] [(_Bool)1] [i_1 + 3]) : (arr_13 [i_1 + 3] [2LL] [i_1 + 3])))));
                                var_23 ^= (~((-(var_13))));
                            }
                            for (unsigned short i_6 = 2; i_6 < 20; i_6 += 3) /* same iter space */
                            {
                                arr_22 [i_0] [i_0] [i_2] [i_2] [i_6] = ((/* implicit */int) min((((/* implicit */unsigned int) (!(((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))) < (var_9)))))), (((unsigned int) min((arr_0 [i_1] [i_2]), (((/* implicit */unsigned long long int) var_14)))))));
                                var_24 |= ((/* implicit */signed char) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_6)), (var_0)))) ? (((/* implicit */unsigned int) var_13)) : (((((/* implicit */unsigned int) var_13)) & (var_9)))))));
                            }
                            arr_23 [i_0] [i_1] [i_2] [i_0] [i_3] [i_2] = ((/* implicit */signed char) var_13);
                        }
                    } 
                } 
                arr_24 [i_0] [(short)5] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) ((short) min((((/* implicit */long long int) var_8)), (-3950204646985208821LL)))))));
                arr_25 [i_0] [i_1 + 3] = ((/* implicit */unsigned long long int) ((_Bool) (~(max((1511014869U), (var_9))))));
            }
        } 
    } 
}
