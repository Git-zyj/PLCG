/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9117
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
    var_11 = ((/* implicit */short) (unsigned short)62568);
    var_12 &= ((/* implicit */unsigned int) var_4);
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_13 = ((short) 9557009946977329322ULL);
                arr_5 [i_0] [i_0] [(unsigned short)10] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)23814)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65525))) : (8889734126732222293ULL)))) ? (((/* implicit */int) min(((unsigned short)0), (arr_2 [i_0] [i_1])))) : (((/* implicit */int) arr_0 [i_0 - 2]))))) ? (min((arr_1 [i_0 - 1]), (arr_1 [i_0 - 2]))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
                arr_6 [i_0 - 1] = ((/* implicit */unsigned char) arr_1 [i_0 - 1]);
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2)))) <= (((((/* implicit */int) var_0)) << (((((/* implicit */int) var_0)) - (31888)))))))) >> (((((/* implicit */int) var_4)) - (1619)))));
}
