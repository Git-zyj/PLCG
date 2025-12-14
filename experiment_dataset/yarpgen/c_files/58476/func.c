/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58476
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
    var_17 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (_Bool)1)), (4294967292U)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_7 [i_1] = ((/* implicit */unsigned int) min((max((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */long long int) 3470042395U)) : (var_11))))), (((/* implicit */long long int) max(((-(((/* implicit */int) arr_0 [(unsigned short)11])))), ((((_Bool)0) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_3 [i_1])))))))));
                arr_8 [10ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_3 [10ULL]), (arr_3 [(unsigned short)12])))) << (((((/* implicit */int) arr_3 [(signed char)12])) - (21252)))));
                arr_9 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) (unsigned short)13))))))))) - (-8866635019362019749LL)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 22; i_2 += 2) 
    {
        for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            {
                arr_16 [i_3] [(short)7] = ((/* implicit */signed char) (~(((/* implicit */int) ((short) ((((/* implicit */_Bool) 528482304LL)) ? (((/* implicit */int) arr_12 [i_2])) : (((/* implicit */int) arr_12 [i_2]))))))));
                arr_17 [i_2] [i_2] [i_2] = ((/* implicit */short) max((((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)-7476)), (arr_15 [i_2 - 3] [i_2] [i_2])))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)194)), (var_9)))) : (((/* implicit */int) max((arr_12 [i_3]), (((/* implicit */unsigned char) (_Bool)1))))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_2 + 1])))))));
                arr_18 [(_Bool)1] = ((/* implicit */int) ((unsigned long long int) (unsigned short)13));
            }
        } 
    } 
    var_18 = min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))))), (var_10)))), (((((/* implicit */_Bool) max((var_14), (var_1)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_10)) : (1379515092428935407ULL))) : (((/* implicit */unsigned long long int) -656277725)))));
}
