/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82298
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 20; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (~(((/* implicit */int) var_8)))))));
                            var_20 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0]))))), (((((var_17) == (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) var_10)) : (min((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (var_18)))))));
                            arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((var_11), (var_11)));
                            arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) -2960122029291342468LL)) ? (var_13) : (((/* implicit */unsigned int) -2079709933)))) ^ ((((!((_Bool)1))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) (short)-25966)))))) : (((((/* implicit */_Bool) (signed char)95)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (var_17)))))));
                        }
                    } 
                } 
                arr_12 [i_0] [i_0] = ((/* implicit */_Bool) (unsigned char)104);
                arr_13 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((unsigned short)60808), (((/* implicit */unsigned short) arr_2 [i_0] [i_0] [i_0]))))) ? (min((((/* implicit */long long int) arr_2 [i_0] [i_0] [i_0])), (var_1))) : (((/* implicit */long long int) var_17))));
                var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1])))))) + (min((arr_0 [i_0]), (arr_0 [i_1])))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)118)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4426))) : (17172550919703278709ULL)))))))));
}
