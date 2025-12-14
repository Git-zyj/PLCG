/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77134
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                var_17 -= ((/* implicit */unsigned char) 2519715023U);
                arr_7 [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_4 [i_0]))))) % (arr_6 [i_1]))) - (((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_1 + 1])))))));
            }
        } 
    } 
    var_18 = var_13;
    var_19 = ((/* implicit */int) ((((/* implicit */int) var_10)) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)176)) ? (var_4) : (var_1)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)52106)) < (((/* implicit */int) var_14))))) : (var_13)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_2 = 2; i_2 < 14; i_2 += 1) 
    {
        arr_12 [i_2] = ((/* implicit */long long int) arr_11 [i_2 + 1]);
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_2 - 1])) ? (((/* implicit */int) arr_10 [i_2 - 1])) : (((/* implicit */int) arr_10 [i_2 - 1]))));
        var_21 -= ((/* implicit */long long int) (~(arr_11 [i_2 - 1])));
    }
    var_22 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) != (4683337399868139554ULL))) ? (((((/* implicit */int) var_10)) + (((/* implicit */int) ((((/* implicit */long long int) var_0)) <= (var_3)))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)217)) : (((/* implicit */int) var_5))))))));
}
