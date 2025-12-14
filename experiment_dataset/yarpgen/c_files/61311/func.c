/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61311
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
    var_12 = ((/* implicit */unsigned short) max((min((min((((/* implicit */long long int) (unsigned char)234)), (var_11))), (max((((/* implicit */long long int) var_2)), (var_11))))), (((/* implicit */long long int) max((((/* implicit */unsigned short) ((var_5) >= (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))), (max((((/* implicit */unsigned short) var_7)), ((unsigned short)49383))))))));
    var_13 &= ((/* implicit */unsigned int) ((min((((/* implicit */long long int) ((1703355727U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)234)))))), (min((-9096469917295704874LL), (((/* implicit */long long int) (unsigned char)22)))))) != (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_10)) == (((/* implicit */int) var_6))))) >> (((/* implicit */int) max((var_6), (var_6)))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [9U]))) > (var_1)))), (((((/* implicit */int) arr_2 [(short)6])) + (((/* implicit */int) arr_3 [i_0] [8LL] [i_2]))))))) || (((/* implicit */_Bool) ((((arr_1 [i_2] [i_1]) / (((/* implicit */int) var_7)))) + (((arr_1 [5U] [5U]) + (((/* implicit */int) (short)29223))))))))))));
                    arr_9 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) max((min((((/* implicit */long long int) ((2591611586U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34721)))))), (min((((/* implicit */long long int) 2591611551U)), (var_3))))), (min((((/* implicit */long long int) ((((/* implicit */int) arr_6 [0LL] [i_1] [0LL] [0LL])) - (((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))))), (max((var_9), (((/* implicit */long long int) var_2))))))));
                    var_15 = ((/* implicit */int) ((((/* implicit */long long int) max((max((((/* implicit */unsigned int) (short)13169)), (2591611551U))), (min((((/* implicit */unsigned int) var_2)), (1703355749U)))))) / (min((((/* implicit */long long int) min((arr_8 [(unsigned short)7] [i_1] [i_2]), (arr_5 [3LL] [i_1] [i_2])))), (min((var_11), (((/* implicit */long long int) 2591611567U))))))));
                    var_16 = ((/* implicit */unsigned short) max((max((((2113927120U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)300))))), (((593844565U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_2]))))))), (min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)232))) - (2442748751U))), (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) + (((/* implicit */int) arr_8 [i_0] [i_1] [i_2])))))))));
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((((/* implicit */int) ((arr_4 [i_0] [i_0]) && (((/* implicit */_Bool) (unsigned char)232))))) | (((((/* implicit */int) var_2)) / (((/* implicit */int) (unsigned char)255)))))) >> (((max((((/* implicit */long long int) max((((/* implicit */int) arr_3 [i_0] [(signed char)2] [i_1])), (arr_1 [i_2] [i_1])))), (max((-7821022332147323596LL), (((/* implicit */long long int) (short)2016)))))) - (518097320LL))))))));
                }
            } 
        } 
    } 
}
