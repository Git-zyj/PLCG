/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93954
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
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (int i_2 = 3; i_2 < 23; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_3 [24ULL])), (((((/* implicit */_Bool) (unsigned char)89)) ? (((/* implicit */int) (_Bool)1)) : (1087106026)))))) ? (max((min((((/* implicit */int) (unsigned char)167)), (1087106036))), ((-(((/* implicit */int) (signed char)-39)))))) : (((int) (-(((/* implicit */int) (unsigned short)65535)))))));
                                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((unsigned long long int) arr_11 [(short)4] [i_1] [i_0] [(_Bool)1] [i_0] [i_1] [i_0]))))) ? (max((-1087106036), (2147483643))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 1651437682)) ? (((/* implicit */int) (unsigned char)89)) : (arr_6 [i_1])))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned char) (-(min((((/* implicit */long long int) (unsigned char)89)), (9082214985265630823LL)))));
                    var_16 = ((/* implicit */long long int) min((arr_8 [i_0] [i_0] [i_1] [i_0]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (max((((/* implicit */int) (_Bool)1)), (-1))) : ((-(1554331962))))))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_14 [i_1] = ((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1 + 1] [i_5]);
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1] [i_1] [i_1 - 1])) ? (arr_1 [i_0] [i_1 - 1]) : (arr_1 [i_0] [i_1 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_0] [i_1 - 1]) < (arr_1 [i_0] [i_1 - 1]))))) : (((((/* implicit */_Bool) (unsigned char)83)) ? (arr_1 [i_0] [i_1 + 1]) : (((/* implicit */unsigned long long int) arr_7 [i_1 - 1] [i_1] [i_1] [i_1 - 1]))))));
                    var_18 = ((/* implicit */unsigned short) min((((((_Bool) 2375037144U)) ? (((/* implicit */unsigned long long int) ((3998825084030700231LL) >> (((-1087106007) + (1087106056)))))) : (((unsigned long long int) 4164160617U)))), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_0] [1LL] [i_1]))));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_17 [i_1] [i_1] [i_1 + 1] [i_1] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) (-(arr_16 [i_6] [i_1 + 1] [i_0])))) ? ((~(1087106044))) : (((((/* implicit */_Bool) arr_16 [i_0] [14U] [(signed char)10])) ? (((/* implicit */int) (unsigned short)28954)) : (arr_16 [i_0] [i_0] [(_Bool)1]))))) + (2147483647))) << (((((((/* implicit */_Bool) min((arr_12 [i_0]), (-293296468259827482LL)))) ? (((7121399284375955932ULL) >> (((((/* implicit */int) (unsigned char)255)) - (213))))) : (((((/* implicit */_Bool) arr_13 [i_0] [i_1])) ? (arr_1 [i_0] [i_1]) : (((/* implicit */unsigned long long int) arr_12 [i_0])))))) - (1619218ULL)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_7 = 2; i_7 < 23; i_7 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) min((((/* implicit */int) arr_18 [i_0] [i_7 - 1] [i_1 + 1] [i_7 + 1] [i_1 - 1] [i_0])), (((((/* implicit */_Bool) arr_4 [i_7 - 1] [19] [i_1 + 1] [i_7])) ? (((/* implicit */int) arr_18 [i_0] [i_7 + 1] [i_1 + 1] [i_6] [i_0] [i_1])) : (((/* implicit */int) arr_18 [(unsigned short)8] [i_7 + 2] [i_1 + 1] [i_6] [i_7 - 1] [i_1 + 1])))))))));
                        var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) var_1)))))))));
                    }
                    var_21 = ((/* implicit */long long int) (_Bool)1);
                    arr_20 [i_6] [i_1] [i_1] [i_0] = ((((/* implicit */_Bool) (+(arr_0 [i_6] [i_0])))) ? (((/* implicit */unsigned long long int) arr_6 [i_1])) : (max((((/* implicit */unsigned long long int) arr_6 [i_1])), (14616624992709927572ULL))));
                    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) -6530478176667731029LL))));
                }
                arr_21 [i_0] [20ULL] &= ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) ((arr_4 [i_1] [i_0] [i_1] [i_0]) != (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0])))))), (max((9740773338205963490ULL), (((/* implicit */unsigned long long int) 2147483643)))))), (min((arr_1 [i_0] [i_1 + 1]), (arr_1 [i_0] [i_1 - 1])))));
                var_23 ^= ((/* implicit */long long int) (unsigned char)255);
                arr_22 [i_0] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_7 [i_1] [i_1] [i_1] [i_0])))))), (max((((/* implicit */int) (!(((/* implicit */_Bool) -293296468259827480LL))))), (((int) (unsigned char)233))))));
            }
        } 
    } 
    var_24 &= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((-8288331734665641987LL) - (((/* implicit */long long int) 445809745))))))) / (((unsigned long long int) 909668952U))));
    var_25 |= ((/* implicit */unsigned char) -8444507649557116425LL);
}
