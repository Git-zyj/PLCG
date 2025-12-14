/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85933
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
    var_16 = ((/* implicit */signed char) var_4);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */int) var_6))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 4) 
                {
                    for (unsigned int i_3 = 3; i_3 < 20; i_3 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) 295367464U)))) ? (var_13) : ((-(1006632960U)))))) ? (((/* implicit */int) (signed char)92)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (1686119746)))));
                            var_19 = ((/* implicit */unsigned char) ((int) max((((/* implicit */int) var_15)), (1686119746))));
                            arr_11 [i_1] = ((/* implicit */unsigned char) -1984168595);
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))), (var_13)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4191890310U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_12))))))) : (((((/* implicit */_Bool) max((60U), (((/* implicit */unsigned int) (signed char)-84))))) ? (((((/* implicit */_Bool) (signed char)-105)) ? (-1686119746) : (((/* implicit */int) (unsigned short)2)))) : (((((/* implicit */_Bool) 3104614867U)) ? (((/* implicit */int) (unsigned short)41802)) : (((/* implicit */int) var_15))))))));
                            var_21 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (1006632962U) : (((/* implicit */unsigned int) var_4))))) ? (22U) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (1006632962U))))), (((var_13) | (((/* implicit */unsigned int) ((/* implicit */int) var_3))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 17; i_4 += 2) 
                {
                    for (unsigned int i_5 = 3; i_5 < 19; i_5 += 4) 
                    {
                        for (int i_6 = 3; i_6 < 20; i_6 += 2) 
                        {
                            {
                                var_22 *= max((((/* implicit */unsigned long long int) (_Bool)1)), (2537359965545911442ULL));
                                arr_20 [i_1] = ((/* implicit */unsigned long long int) var_11);
                            }
                        } 
                    } 
                } 
                arr_21 [i_1] [i_1] [i_1] = max((-1686119743), (1686119746));
            }
        } 
    } 
    var_23 = ((/* implicit */int) max((min((((((/* implicit */unsigned long long int) 4064964652U)) ^ (4644291091267409654ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)209)), (3779526380U)))))), (((/* implicit */unsigned long long int) min((22U), (((/* implicit */unsigned int) (unsigned char)94)))))));
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((max((-462382679), (((/* implicit */int) (unsigned char)152)))), (((/* implicit */int) (_Bool)1))))) ? (15909384108163640188ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_15)))) : (min((((/* implicit */unsigned int) -850879894)), (var_13))))))));
    var_25 |= ((/* implicit */signed char) (~(15909384108163640178ULL)));
}
