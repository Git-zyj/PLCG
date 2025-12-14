/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6287
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_7 [i_1] = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)15564)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [i_0]))))))) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_2])) : (min((min((((/* implicit */int) (unsigned char)255)), (arr_1 [i_0]))), ((+(var_3))))));
                    arr_8 [i_2] = ((/* implicit */long long int) arr_0 [i_0]);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */int) var_2)) >> (((var_3) + (1070693760))))), (var_12)))) ? (((/* implicit */long long int) var_6)) : (((((/* implicit */_Bool) var_12)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) ((var_6) <= (((/* implicit */int) var_4))))))))));
    /* LoopSeq 1 */
    for (int i_3 = 1; i_3 < 20; i_3 += 1) 
    {
        arr_11 [i_3] &= ((/* implicit */unsigned short) arr_10 [i_3] [i_3 + 2]);
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (+(((/* implicit */int) (!(((((/* implicit */long long int) ((/* implicit */int) (signed char)-21))) == (arr_2 [i_3] [i_3] [i_3 - 1])))))))))));
    }
    var_15 = ((/* implicit */short) ((((/* implicit */int) var_11)) <= (var_1)));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)26)) : (var_1)));
}
