/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70843
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) ((min((((/* implicit */unsigned long long int) (signed char)96)), (arr_2 [i_1]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) >> (((arr_0 [i_0] [i_1]) - (3843119316U)))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((arr_3 [i_1]) ^ (min((((/* implicit */long long int) (short)28533)), (arr_3 [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 17; i_2 += 1) 
                {
                    for (int i_3 = 2; i_3 < 19; i_3 += 1) 
                    {
                        {
                            arr_11 [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0])) ? ((+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_10 [i_3])))))) : (((((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_3] [i_3 + 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_9 [i_2] [i_1] [i_1] [i_3 - 1]))))));
                            var_16 = ((((/* implicit */_Bool) ((short) (-(((/* implicit */int) var_5)))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_9 [i_2] [i_1] [i_1] [i_1])));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) 4611686018427387904ULL)) ? (576460477425516544ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
    var_18 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(var_13)))))))));
    var_19 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((576460477425516544ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) >= (((/* implicit */unsigned long long int) 993472100)))))) * (((((2707651766U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) / (((/* implicit */unsigned int) -482051352))))));
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 2) 
    {
        for (unsigned short i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            {
                arr_17 [i_4] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((arr_13 [i_5]) / (var_10))), (((/* implicit */unsigned long long int) arr_9 [(unsigned short)6] [i_5] [i_4 + 3] [i_5]))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) (unsigned short)56316)) ? (((/* implicit */int) (unsigned short)41074)) : (((/* implicit */int) var_8))))));
                arr_18 [i_4] [i_5] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (-993472101))))));
                /* LoopNest 2 */
                for (signed char i_6 = 2; i_6 < 17; i_6 += 3) 
                {
                    for (unsigned long long int i_7 = 2; i_7 < 18; i_7 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */short) (-(2759539396U)));
                            var_21 -= ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_9 [i_7] [i_6] [i_7 - 2] [i_7])) : (482051351)))) / ((-((~(var_10))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
