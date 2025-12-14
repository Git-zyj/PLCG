/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73756
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
    var_12 = ((/* implicit */_Bool) max((min((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5)))))), (((/* implicit */int) var_2))));
    var_13 = ((((/* implicit */long long int) (+((-(((/* implicit */int) var_0))))))) | ((-(min((var_10), (((/* implicit */long long int) var_4)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 -= ((/* implicit */_Bool) (~(((arr_1 [i_0] [i_1]) ? (((arr_4 [i_0] [10U]) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (arr_5 [i_1]))) : (((/* implicit */unsigned long long int) (~(arr_0 [i_0]))))))));
                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (signed char)17)) : (((/* implicit */int) (unsigned char)19))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) (unsigned char)253))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)251))))))) : ((+(((/* implicit */int) arr_3 [i_1] [i_1]))))));
                arr_6 [(_Bool)1] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_1] [i_0]))))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [0]))) : (arr_5 [i_1]))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_0]))) : (arr_5 [i_0])))))));
                var_16 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_4 [i_0] [i_1]) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_0]))))) ? (((/* implicit */int) (!(arr_4 [i_0] [i_1])))) : (((arr_4 [i_1] [i_1]) ? (((/* implicit */int) arr_4 [i_1] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0]))))));
                var_17 ^= ((/* implicit */int) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_1] [i_0])) : (arr_2 [i_0] [(unsigned short)5] [i_1]))))))));
            }
        } 
    } 
}
