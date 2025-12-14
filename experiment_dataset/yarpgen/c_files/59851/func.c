/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59851
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
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 23; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_2] [i_1] [i_2] = ((/* implicit */long long int) (-(((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)0)) : (var_0))) << (((max((((/* implicit */unsigned int) var_12)), (3669653470U))) - (3669653441U)))))));
                    arr_8 [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1460036391632463791LL)) ? (arr_1 [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (((((/* implicit */_Bool) arr_0 [i_2 + 2])) ? (-1460036391632463786LL) : (arr_1 [i_1 - 3]))) : (((/* implicit */long long int) ((unsigned int) var_8))));
                    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) max((6543753470811984579ULL), (((/* implicit */unsigned long long int) -1460036391632463791LL)))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned char) (+((+((~(((/* implicit */int) var_5))))))));
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((unsigned int) var_8))) <= (((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */unsigned long long int) 1460036391632463786LL))))))) <= (((/* implicit */int) max((var_1), (((/* implicit */unsigned short) ((var_0) == (((/* implicit */int) (signed char)-7))))))))));
    var_16 = var_1;
}
