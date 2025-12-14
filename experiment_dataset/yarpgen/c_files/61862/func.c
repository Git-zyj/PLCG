/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61862
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
    var_16 -= ((/* implicit */unsigned short) ((var_5) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_6)))) ? (((((/* implicit */int) var_13)) * (((/* implicit */int) var_15)))) : (((/* implicit */int) (unsigned char)103))))) : (((unsigned int) var_9))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((arr_4 [i_0]) + (2147483647))) << (((((/* implicit */int) (unsigned char)133)) - (133)))))) ? (((/* implicit */unsigned long long int) var_8)) : (((((/* implicit */_Bool) (unsigned char)157)) ? (var_0) : (((/* implicit */unsigned long long int) var_8))))))));
                    var_17 = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) > (((/* implicit */int) ((var_0) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_1]))))))))), ((-(((/* implicit */int) (!(((/* implicit */_Bool) -6703370468078606629LL)))))))));
                    var_18 = ((/* implicit */unsigned short) ((long long int) (-(((((/* implicit */_Bool) var_4)) ? (var_2) : (var_10))))));
                    var_19 = ((/* implicit */unsigned short) ((unsigned long long int) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) (!(arr_0 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1] [i_1]))))))));
                }
            } 
        } 
    } 
}
