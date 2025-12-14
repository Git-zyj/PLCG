/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90408
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
    var_15 += ((/* implicit */unsigned int) (+((~(((-2401618962396517144LL) / (6400730039239448545LL)))))));
    var_16 = ((/* implicit */signed char) ((unsigned int) ((((var_6) < (((/* implicit */long long int) ((/* implicit */int) var_14))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)25231)))));
    var_17 = ((/* implicit */short) (+(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */unsigned long long int) var_3))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned int) max((var_18), (var_9)));
        arr_2 [i_0] = ((((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_0 [i_0])))) ? (4294967273U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-13997)) || (((/* implicit */_Bool) 1706287115U)))))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) (-(((max((9502350501816561631ULL), (((/* implicit */unsigned long long int) 181932037U)))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) / (((/* implicit */int) var_13)))))))));
        arr_7 [i_1] [i_1] = ((/* implicit */short) (signed char)-93);
        /* LoopNest 2 */
        for (unsigned int i_2 = 3; i_2 < 22; i_2 += 3) 
        {
            for (short i_3 = 0; i_3 < 23; i_3 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) ((((var_9) >= (1302221525U))) ? (max((min((((/* implicit */unsigned long long int) arr_12 [i_1] [i_1] [i_3])), (var_4))), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (short)-10633))))));
                    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [1ULL] [1ULL])) ? (((/* implicit */unsigned long long int) (~(arr_13 [12U] [i_2 + 1] [i_2 - 3] [12U])))) : (arr_4 [i_3])))) ? (((((_Bool) var_7)) ? (var_4) : (max((((/* implicit */unsigned long long int) var_1)), (arr_4 [i_2]))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-10236))) : (19U))), (arr_12 [(short)20] [(short)20] [i_3])))))))));
                    var_21 &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((unsigned int) ((arr_10 [i_1] [i_2]) / (((/* implicit */long long int) arr_13 [(short)10] [i_2 - 2] [i_1] [(short)10])))))) * (min((1940558813385024992ULL), (((/* implicit */unsigned long long int) (-(arr_13 [(short)22] [i_1] [i_1] [(short)22]))))))));
                }
            } 
        } 
        arr_14 [i_1] = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) != (var_4))))) % (((((/* implicit */_Bool) 4294967282U)) ? (134216704U) : (413719751U))));
        var_22 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)87))) ^ (var_10))))) && (((/* implicit */_Bool) arr_3 [i_1] [4U]))));
    }
    var_23 = (~(4294967282U));
}
