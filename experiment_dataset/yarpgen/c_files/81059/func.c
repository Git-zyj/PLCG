/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81059
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
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) (signed char)-23))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 |= ((/* implicit */_Bool) arr_3 [i_0] [i_0]);
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */short) (!(min(((_Bool)1), (var_2)))));
                            arr_9 [i_0] [i_0] [i_0] [i_0] = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))))) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) arr_5 [(signed char)14])) : (-6768240409244370346LL))) : (arr_4 [i_3 - 1] [i_1]))));
                        }
                    } 
                } 
                arr_10 [i_1] [(short)14] = ((/* implicit */signed char) max(((+(max((((/* implicit */unsigned int) var_11)), (2583540300U))))), (((/* implicit */unsigned int) (_Bool)1))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_4 = 0; i_4 < 19; i_4 += 3) 
    {
        var_16 = ((/* implicit */int) var_6);
        arr_13 [i_4] [i_4] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_6 [i_4] [i_4] [i_4] [(_Bool)1]))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_4 [i_4] [i_4])))) ? ((-(0U))) : (max((((((/* implicit */_Bool) (unsigned short)65535)) ? (180596317U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))), (((/* implicit */unsigned int) (!((_Bool)1))))))));
    }
    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 1) 
    {
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned char)214), (((/* implicit */unsigned char) (_Bool)1))))) ? ((+(arr_16 [i_5] [i_5]))) : (((/* implicit */long long int) ((/* implicit */int) (short)-19)))))) ? (arr_16 [i_5] [i_5]) : (((((/* implicit */_Bool) ((short) arr_14 [i_5]))) ? (max((((/* implicit */long long int) (short)-1)), (arr_16 [i_5] [i_5]))) : (((/* implicit */long long int) var_11))))));
        var_18 = ((/* implicit */signed char) ((unsigned char) arr_14 [i_5]));
    }
    var_19 &= var_11;
}
