/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98441
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
    var_14 = ((((/* implicit */_Bool) (~(((((/* implicit */int) var_1)) << (((((/* implicit */int) (unsigned char)122)) - (117)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)0))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)8))) : (var_13)))) ? (((/* implicit */long long int) var_6)) : (max((((/* implicit */long long int) (short)0)), (var_11))))));
    var_15 = ((((((/* implicit */int) ((signed char) var_3))) >> (((/* implicit */int) max((((/* implicit */unsigned char) var_10)), ((unsigned char)4)))))) != (((((/* implicit */_Bool) ((unsigned char) var_9))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) != (var_3)))) : (((/* implicit */int) ((var_9) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)29)))))))));
    var_16 *= ((/* implicit */unsigned char) var_2);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_14 [i_4] [i_0] [12LL] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (arr_2 [i_0] [i_4]) : (((/* implicit */unsigned int) arr_6 [i_4] [i_3] [i_2 - 1] [i_0])))) - (((/* implicit */unsigned int) ((arr_6 [i_0] [5ULL] [i_3] [i_4]) >> (((3137915812U) - (3137915797U))))))))) ? (((/* implicit */int) arr_13 [i_4])) : (((int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [14U] [i_1])) || (var_10))))));
                                arr_15 [i_4] |= ((/* implicit */unsigned short) ((((unsigned long long int) (unsigned short)255)) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))));
                                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)13109))) | (11U))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */int) (unsigned short)271)) : (var_6))))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_10)) & (((/* implicit */int) (signed char)11))))))))));
                                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) max(((~(arr_11 [i_0] [i_2 + 1]))), (((/* implicit */unsigned int) var_2)))))));
                                arr_16 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_4] [i_3] [i_2] [i_0])) ? (255) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)252)) != (((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))))) != (((/* implicit */int) ((short) 13401415738498238786ULL))))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) >= (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0] [i_1])) && (((/* implicit */_Bool) var_6))))) <= (min((arr_6 [i_1] [i_0] [i_1] [i_0]), (((/* implicit */int) (signed char)89))))))))))));
                    var_20 = ((/* implicit */_Bool) max((var_20), (((((/* implicit */int) ((min((var_3), (((/* implicit */unsigned int) var_10)))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((var_9) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0])))))))))) <= (min((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) == (-393876544)))), (arr_6 [i_0] [i_1] [i_2] [i_2])))))));
                }
            } 
        } 
    } 
}
