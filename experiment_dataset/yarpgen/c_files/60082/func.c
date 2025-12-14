/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60082
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
    var_15 |= ((/* implicit */long long int) var_4);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 18; i_2 += 1) 
                {
                    for (long long int i_3 = 2; i_3 < 20; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_12 [i_0] [i_0] [i_0] [i_0])), (min((((/* implicit */unsigned short) (unsigned char)39)), (arr_10 [i_0] [i_1] [i_1] [i_2 + 2] [i_1] [i_1])))))) > (((/* implicit */int) max((((/* implicit */unsigned short) max((arr_0 [i_2] [i_3]), (((/* implicit */short) arr_4 [i_2] [i_2]))))), (var_11))))));
                                var_17 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0] [i_0] [i_3] [i_0])) ? (((/* implicit */int) arr_10 [(unsigned short)7] [i_1] [i_3] [12ULL] [i_4] [i_4])) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_1] [i_1] [i_4]))))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [0LL] [i_0] [i_1 + 1] [0LL] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (arr_2 [i_1] [i_0] [i_0])))) ? (((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) arr_4 [i_0] [i_1 - 1]))))) : (((/* implicit */int) var_12)))) % (((/* implicit */int) var_6)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) (~(((/* implicit */int) min((var_2), (var_12))))));
    var_20 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_1))))))));
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */int) var_10)) * (((/* implicit */int) (unsigned char)225))))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_4))));
}
