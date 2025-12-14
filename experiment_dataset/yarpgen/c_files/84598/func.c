/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84598
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
    var_18 += ((/* implicit */unsigned short) 0);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (int i_3 = 2; i_3 < 16; i_3 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1])) ? (arr_6 [i_0] [i_0 - 1] [i_2] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 1])))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)65532))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)3))) ^ (arr_6 [i_1] [i_1] [i_1] [i_1]))))))));
                            arr_9 [i_0] [i_1] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 14714482877629455497ULL)) ? (((/* implicit */unsigned long long int) arr_0 [i_0 - 1])) : (arr_1 [i_3] [i_3]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2])))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_1 [i_1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) var_3)) : (var_1)))));
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_14)) <= (((/* implicit */int) var_15))))))))) ? (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)0)), (arr_0 [i_0])))) : (((((/* implicit */unsigned long long int) (-2147483647 - 1))) & (arr_1 [i_0 - 1] [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3)))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((((/* implicit */int) arr_8 [i_0])), (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_3 [i_1]))))))) != (arr_4 [i_1] [i_1] [i_1] [i_1])));
                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((2156351399082954618LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_10) : (var_11)))) ? (((/* implicit */int) var_0)) : (max((2147483638), (((/* implicit */int) var_2))))))), (var_4)));
}
