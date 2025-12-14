/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79217
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
    var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) ((((/* implicit */int) var_10)) < (((((/* implicit */_Bool) (short)30181)) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) (_Bool)0)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned int) ((15680291619980632264ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)113)))));
                var_12 = ((/* implicit */long long int) max((((((/* implicit */_Bool) 8060854406873415684ULL)) ? (8060854406873415673ULL) : (((/* implicit */unsigned long long int) 3088698999U)))), (((unsigned long long int) (unsigned char)164))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        for (long long int i_3 = 1; i_3 < 17; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 18; i_4 += 3) 
            {
                {
                    var_13 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [(unsigned char)8])) ? ((~(((/* implicit */int) (short)-5118)))) : (((/* implicit */int) arr_5 [(signed char)1] [(signed char)1]))));
                    arr_14 [i_2] [i_2] [i_4] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((int) max((((/* implicit */long long int) (unsigned short)58071)), (arr_1 [i_4] [(_Bool)1]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) / (min((10385889666836135942ULL), (((/* implicit */unsigned long long int) (unsigned char)3))))))));
                }
            } 
        } 
    } 
}
