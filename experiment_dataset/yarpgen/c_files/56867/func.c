/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56867
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
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) (short)-11210)), ((~(((/* implicit */int) (signed char)13))))))) ? (max((((((/* implicit */_Bool) arr_2 [i_0] [(signed char)16] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (arr_4 [i_1] [9LL] [9LL]))), (((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)0)))) : (arr_4 [0] [i_1] [0])))));
                var_15 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_2 [11ULL] [i_1] [i_0]))))) ? (((/* implicit */int) (short)11217)) : (max((((/* implicit */int) arr_3 [i_0] [i_0])), (0))))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_13)) : (var_1)))) ? (((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-11232))))) : (((/* implicit */unsigned int) min((var_7), (((/* implicit */int) var_6)))))))), (((((/* implicit */_Bool) max((((/* implicit */int) var_6)), ((-2147483647 - 1))))) ? ((~(var_2))) : (((/* implicit */unsigned long long int) var_11))))));
    var_17 += ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) max((1580528304), (var_7)))) ? (((int) var_10)) : (min((((/* implicit */int) var_9)), (-962283431))))) : (var_1));
    var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (unsigned char)49)) : (((/* implicit */int) max(((unsigned char)129), ((unsigned char)56)))))) <= (((/* implicit */int) (signed char)-74))));
    var_19 = ((/* implicit */unsigned char) var_0);
}
