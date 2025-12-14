/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90735
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
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */int) (+(arr_1 [i_1])));
                    var_13 = ((/* implicit */unsigned short) (-((((-(arr_4 [i_2]))) * (((/* implicit */unsigned int) (-(((/* implicit */int) var_0)))))))));
                }
            } 
        } 
    } 
    var_14 = var_11;
    var_15 = ((/* implicit */unsigned long long int) var_5);
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((var_3) * (((/* implicit */unsigned int) ((((((int) var_12)) + (2147483647))) >> (((((/* implicit */int) ((unsigned char) (signed char)-113))) - (133)))))))))));
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) var_5)))))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (var_11))) | (((/* implicit */int) min((var_8), (((/* implicit */short) var_5)))))))) : (max((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) var_12)) ? (4503599627370496ULL) : (((/* implicit */unsigned long long int) var_10))))))));
}
