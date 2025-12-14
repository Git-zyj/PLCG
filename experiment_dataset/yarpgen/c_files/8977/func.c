/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8977
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
    var_11 = ((/* implicit */int) min((var_11), (max((max((((((/* implicit */_Bool) (unsigned short)63433)) ? (((/* implicit */int) (unsigned short)2122)) : (((/* implicit */int) (short)-32766)))), (((int) var_9)))), (((/* implicit */int) var_10))))));
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)4096))))) ? (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_8)) : (var_1))) - (((/* implicit */long long int) max((var_7), (((/* implicit */int) var_10))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (max((((/* implicit */unsigned int) var_2)), (var_0))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_7 [i_2] = ((/* implicit */unsigned int) (!((!(var_9)))));
                    var_13 = ((((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) % (var_0))) < (((/* implicit */unsigned int) var_8))))) != (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) var_2))))) : (((/* implicit */int) var_6)))));
                    var_14 &= ((/* implicit */signed char) ((var_9) ? (((/* implicit */int) max(((unsigned short)63459), (((/* implicit */unsigned short) (signed char)-58))))) : (((max((var_7), (((/* implicit */int) var_6)))) >> (((((var_8) % (((/* implicit */int) var_2)))) - (27)))))));
                    arr_8 [i_0] [i_1] [i_0] [i_2 - 1] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_1))) : (((/* implicit */long long int) ((/* implicit */int) var_3))))));
                    arr_9 [i_1] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_0)))), (((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned short)63483))))));
                }
            } 
        } 
        arr_10 [i_0] [i_0 + 2] &= ((/* implicit */short) max((max((var_1), (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) ((var_8) / (((/* implicit */int) var_10)))))));
    }
}
