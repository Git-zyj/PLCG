/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98008
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
    var_18 &= ((/* implicit */unsigned short) var_0);
    var_19 = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_3)) >= (max((((/* implicit */unsigned long long int) var_15)), (var_11))))))) : (((unsigned long long int) 15552938642377810816ULL)));
    var_20 = ((/* implicit */signed char) max((var_7), (((/* implicit */long long int) max((((/* implicit */int) var_0)), ((-(((/* implicit */int) (_Bool)0)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned char) (-(min((((/* implicit */long long int) (short)30735)), (-5389138053276684143LL)))));
                arr_7 [16ULL] [16ULL] |= ((/* implicit */short) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 2535017279U)), (arr_6 [i_0])))) ? (arr_4 [i_1 - 1] [(_Bool)1] [i_1]) : (((/* implicit */unsigned long long int) arr_0 [i_0] [i_1 + 1])))) / ((~(arr_6 [i_1 + 1])))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), (var_4)))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_9)) / (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) 1759950048U)) : (arr_0 [i_3] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)139))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -34582556))))))));
                            var_23 = ((/* implicit */unsigned char) (~((~(max((((/* implicit */unsigned long long int) (unsigned char)116)), (6636402637886532671ULL)))))));
                        }
                    } 
                } 
                arr_13 [i_1] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!((!((_Bool)1))))))) / (min((var_7), (((/* implicit */long long int) -905387347))))));
                arr_14 [15ULL] [i_1] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) var_17))))));
            }
        } 
    } 
}
