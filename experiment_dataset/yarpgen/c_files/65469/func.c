/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65469
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
    var_13 = ((/* implicit */short) var_6);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((var_1) % (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))), (((((/* implicit */_Bool) 16515072U)) ? (min((var_11), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)1), (var_3))))))))))));
                var_15 += ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
                var_16 = ((/* implicit */_Bool) arr_4 [i_0] [(_Bool)1] [i_1]);
                var_17 = arr_1 [(unsigned char)21] [i_1];
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 1; i_2 < 9; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 2) 
        {
            {
                var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)32767))) > (((var_10) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_1 [i_2] [i_3]))))))) != (min((arr_10 [i_2 - 1] [i_3 - 1] [i_3 + 1]), (((/* implicit */unsigned long long int) arr_6 [i_2 - 1] [i_3 - 1]))))));
                var_19 *= ((/* implicit */unsigned char) (short)-4315);
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_4 [i_2 + 1] [i_2 - 1] [i_2 + 1])), (min((((((/* implicit */_Bool) arr_9 [i_2] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3] [i_2] [i_2]))) : (arr_9 [i_2] [i_3]))), (((/* implicit */unsigned long long int) var_12)))))))));
            }
        } 
    } 
}
