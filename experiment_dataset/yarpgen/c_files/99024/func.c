/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99024
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
    var_14 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)28))))), (max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_8)) : (var_1))), (((/* implicit */unsigned long long int) ((unsigned int) 251658240U)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) (signed char)24)), (9225694756852782095ULL))), (((/* implicit */unsigned long long int) min((3705107426476125607LL), (((/* implicit */long long int) 1568279876U)))))))) ? (((long long int) 2348041150911113303ULL)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)22))))))));
                /* LoopNest 3 */
                for (signed char i_2 = 2; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned int i_3 = 3; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned long long int) (signed char)99));
                                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((((/* implicit */_Bool) (+(((unsigned int) 1163592247U))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-85))))) : (((((/* implicit */_Bool) 1568279867U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)127), (((/* implicit */unsigned short) (signed char)-29)))))) : (min((((/* implicit */unsigned long long int) 4194303U)), (9225694756852782095ULL)))))))));
                                arr_16 [i_0] [i_3 - 3] = ((/* implicit */unsigned short) 6061459344425626307ULL);
                            }
                        } 
                    } 
                } 
                arr_17 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((unsigned int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1]))))), (((((/* implicit */unsigned int) (+(((/* implicit */int) arr_9 [i_1] [i_0] [i_1] [i_0] [i_0]))))) % (((((/* implicit */_Bool) 1143914305352105984ULL)) ? (arr_4 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65409)))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) (+(((/* implicit */int) min((((/* implicit */unsigned short) (signed char)29)), ((unsigned short)0))))));
    var_18 = ((/* implicit */long long int) (+(1950982426U)));
    var_19 = ((/* implicit */unsigned short) (~(min((var_3), (((/* implicit */long long int) var_12))))));
}
