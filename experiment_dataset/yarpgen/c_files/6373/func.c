/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6373
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
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 21; i_2 += 4) 
            {
                {
                    var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) ((((((/* implicit */unsigned long long int) (((_Bool)1) ? (968943955U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) / (((((/* implicit */_Bool) var_2)) ? (arr_4 [i_0] [i_0] [i_0] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)93)) ? (arr_4 [i_0] [i_1] [i_2] [i_0 + 4]) : (((/* implicit */unsigned long long int) 4294967295U))))) ? (((/* implicit */int) ((((/* implicit */int) arr_3 [i_2 + 2] [i_1] [i_0])) <= (((/* implicit */int) arr_1 [i_1]))))) : (((var_5) << (((arr_6 [i_0] [i_1] [i_1] [i_2 - 2]) - (1262386695685233459ULL)))))))))))));
                    var_11 = ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 5LL)) ? (var_5) : (arr_5 [i_2]))) << (((((((/* implicit */_Bool) arr_1 [i_1])) ? (var_5) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_2])))) - (69)))))) >= (((((((/* implicit */_Bool) 3648699063985955402LL)) || (((/* implicit */_Bool) var_1)))) ? (((((/* implicit */_Bool) 1300393272146454287ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_6 [i_0] [i_0] [i_2] [i_2]))) : (((((/* implicit */_Bool) (unsigned char)1)) ? (arr_4 [i_0] [i_0 + 1] [i_1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 24; i_3 += 4) 
                    {
                        for (int i_4 = 2; i_4 < 24; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0 + 2] [i_2] = (i_2 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)121)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_0] [i_3])))) % (((((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3] [i_4])) << (((arr_11 [i_2]) + (1853356236)))))))) * (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)35))) + (5LL)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-93))) / (968943974U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_6)))))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)121)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_0] [i_3])))) % (((((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3] [i_4])) << (((((arr_11 [i_2]) + (1853356236))) - (1428405874)))))))) * (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)35))) + (5LL)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-93))) / (968943974U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_6))))))))));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4] [i_2] = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_2)) ? (arr_10 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) ^ (((/* implicit */unsigned long long int) ((var_7) ? (((/* implicit */int) var_0)) : (arr_5 [i_2])))))) & (((/* implicit */unsigned long long int) (((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_1))) | (((/* implicit */long long int) ((((/* implicit */_Bool) 6195402045389999408LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)12))))))))));
                                var_12 = ((/* implicit */_Bool) min((var_12), (((((((/* implicit */_Bool) ((1300393272146454287ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? ((((_Bool)1) ? (((/* implicit */int) arr_8 [i_1] [i_1])) : (((/* implicit */int) var_2)))) : (((((/* implicit */int) var_8)) >> (((var_5) - (457098687))))))) != (((((((/* implicit */int) var_2)) * (((/* implicit */int) (signed char)99)))) % (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))))))))));
                                var_13 = ((((/* implicit */_Bool) ((((((/* implicit */int) var_8)) ^ (((/* implicit */int) arr_9 [i_4] [i_3] [i_2] [i_1] [i_0])))) ^ (((-1096268969) | (((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_1] [i_4 + 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)54231))))) || (((/* implicit */_Bool) ((arr_5 [i_2]) / (((/* implicit */int) var_4)))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1096268969)) ? (arr_0 [i_2]) : (-3892794475943253760LL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)99)) ? (arr_6 [i_0] [i_1] [i_2] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (short)14047))))) : (6LL)))) ? (((((/* implicit */_Bool) 1027008943U)) ? (3892794475943253767LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)117))))) : (3892794475943253767LL))))));
}
