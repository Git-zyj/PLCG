/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67002
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) var_2))))))));
                var_14 = ((/* implicit */short) ((unsigned short) ((var_4) ? (arr_1 [i_0] [13ULL]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_2 [11U]))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 14; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */signed char) max((((/* implicit */int) arr_11 [i_0] [i_0] [(_Bool)1] [i_0] [(signed char)15])), (((int) ((unsigned int) arr_0 [i_3] [i_1])))));
                            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_2)), (var_8)))) ? (max((var_11), (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)65523)) : (((/* implicit */int) var_4))))))))))));
                            var_17 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) 3803362225U)) : (9223372036854775806LL)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65535))))) : (max((((/* implicit */unsigned int) var_2)), (var_8)))))) ? (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) arr_0 [i_1] [i_1])))))) : (min((((((/* implicit */_Bool) arr_5 [(unsigned short)16] [i_1] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4)))), (((/* implicit */int) arr_10 [i_3 - 1] [i_3 + 2] [i_0] [i_3 + 2]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        for (unsigned int i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            {
                var_18 = max((((((/* implicit */_Bool) arr_17 [i_4 - 1])) ? (arr_18 [i_4 - 1] [i_4 - 1] [i_4]) : (arr_18 [i_4 - 1] [i_4 - 1] [i_5]))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_7))))));
                arr_19 [i_4 - 1] [i_5] [i_5] = ((/* implicit */int) max((((unsigned long long int) arr_18 [i_4 - 1] [i_4 - 1] [i_4 - 1])), (((/* implicit */unsigned long long int) min((arr_18 [i_4 - 1] [i_4 - 1] [i_4 - 1]), (arr_18 [i_4 - 1] [21] [i_4 - 1]))))));
                arr_20 [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_14 [i_4] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_8)))))) - (((((unsigned long long int) var_10)) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)4095)) : (arr_17 [i_4]))))))));
            }
        } 
    } 
}
