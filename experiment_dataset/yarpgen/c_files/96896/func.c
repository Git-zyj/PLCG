/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96896
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned long long int) var_1);
                arr_6 [11] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) 3660780865U)) : (var_6)))) ? (((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (2152639716U) : (var_3)))))), (((/* implicit */unsigned long long int) arr_4 [i_1] [i_0]))));
                var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) == (var_6)))) != (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (short)28539)) : (((/* implicit */int) arr_3 [i_0]))))))), (arr_4 [i_0] [i_0]))))));
                arr_7 [i_0] [i_0] &= ((/* implicit */signed char) max((((/* implicit */unsigned short) min((arr_1 [i_0] [i_1]), (arr_1 [7ULL] [i_1])))), (arr_3 [i_0])));
            }
        } 
    } 
    var_11 &= ((/* implicit */signed char) var_8);
    var_12 = ((/* implicit */_Bool) (((+(var_7))) + (((/* implicit */unsigned long long int) min((((int) var_9)), (((/* implicit */int) ((short) var_7))))))));
    var_13 = ((/* implicit */signed char) var_8);
    var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_7))))))) ? (((/* implicit */unsigned long long int) var_4)) : (((((/* implicit */_Bool) min((((/* implicit */int) var_8)), (var_5)))) ? (max((((/* implicit */unsigned long long int) var_4)), (var_6))) : (((((/* implicit */_Bool) 3670016)) ? (var_6) : (var_9))))));
}
