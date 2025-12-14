/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98944
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            {
                arr_6 [8U] [8U] [i_1] = ((/* implicit */int) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) (-(0U)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54900))) : (var_10))))), (max((((/* implicit */unsigned long long int) (+(var_8)))), (min((var_0), (((/* implicit */unsigned long long int) var_17))))))));
                var_19 = ((/* implicit */short) ((unsigned char) (~(((/* implicit */int) (unsigned short)23192)))));
                var_20 = ((/* implicit */unsigned int) (+(3360994433075482423LL)));
                arr_7 [i_1] = ((/* implicit */short) var_1);
                arr_8 [i_0] [i_0] [i_1 - 1] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) != (((/* implicit */int) var_11)))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_14)))))) > (((int) min((var_9), (((/* implicit */unsigned long long int) var_18)))))));
    var_22 = ((/* implicit */signed char) var_0);
    var_23 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (-(var_9)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_9) : (var_13)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)84))))) : (((14171353489895875945ULL) ^ (var_13))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (unsigned short)0)))) ? (((((/* implicit */_Bool) 14171353489895875945ULL)) ? (2701758889U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)223))))))))));
}
