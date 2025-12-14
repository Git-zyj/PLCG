/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61837
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
    var_11 = ((/* implicit */int) min((((unsigned int) ((unsigned int) var_1))), (((/* implicit */unsigned int) min((((/* implicit */short) var_0)), (min((var_1), (var_10))))))));
    var_12 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) var_1)) != (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6)))))));
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((var_8) != (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_5)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_14 &= ((/* implicit */signed char) ((max((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))))), (((/* implicit */unsigned long long int) (~(var_9)))))) >> (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_0] [i_1])) != (((/* implicit */int) arr_2 [i_0] [i_1] [i_1])))))));
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 20; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) ((short) min((arr_6 [i_0] [i_1] [i_2] [i_0]), (max((((/* implicit */int) arr_3 [i_0] [i_3])), (var_4))))));
                            arr_10 [i_0] [i_1] [i_1] [i_2] [i_2] = ((unsigned short) ((((/* implicit */_Bool) 4228088690003229843ULL)) ? (arr_5 [i_0] [i_2] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                        }
                    } 
                } 
                var_16 |= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((arr_6 [i_1] [i_1] [i_0] [i_0]) + (2147483647))) >> (((arr_6 [i_0] [i_1] [i_1] [i_1]) + (1794254197)))))) != (arr_1 [i_0])));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 2; i_5 < 21; i_5 += 1) 
                    {
                        {
                            arr_17 [i_0] [i_1] [12ULL] [i_0] [i_5] [i_5 - 1] = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_4] [i_4]);
                            var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_4] [i_5 + 1]))));
                            var_18 &= ((/* implicit */signed char) min(((+(((((/* implicit */_Bool) var_4)) ? (arr_5 [i_1] [i_1] [i_0]) : (((/* implicit */long long int) arr_0 [i_1])))))), (((/* implicit */long long int) min((((unsigned short) arr_2 [i_0] [(unsigned short)3] [i_4])), (((/* implicit */unsigned short) var_7)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 22; i_6 += 3) 
                {
                    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) min((((unsigned int) (short)32764)), (((/* implicit */unsigned int) ((((arr_0 [i_7]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_7]))))))));
                            arr_24 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */short) ((_Bool) (+(((/* implicit */int) var_10)))))), (var_10)));
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_2 [i_0] [i_1] [i_6])) : (((/* implicit */int) arr_21 [i_1] [i_1] [i_6] [i_7] [i_7] [i_7]))))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
