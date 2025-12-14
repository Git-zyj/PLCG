/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8258
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
    for (long long int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */signed char) min((((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (arr_3 [i_0] [i_0]))) != (arr_3 [i_0] [i_0])))), (max((((/* implicit */short) ((unsigned char) arr_4 [i_0]))), (arr_1 [i_0 + 2] [i_0])))));
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) arr_0 [i_0])))))))) >= (arr_0 [i_0])));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_7 [i_2] [(unsigned short)18] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (((/* implicit */int) arr_6 [i_2] [i_2])) : (((/* implicit */int) arr_6 [i_2] [i_2]))));
        var_19 = ((/* implicit */unsigned short) arr_6 [i_2] [i_2]);
    }
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            for (unsigned short i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65524)))))));
                    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) min((arr_10 [i_4] [(short)23]), (16LL))))))) >= (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned short)14)) || (((/* implicit */_Bool) arr_15 [(_Bool)1])))))))))));
                    var_22 += ((/* implicit */_Bool) max((max((((((/* implicit */_Bool) -7LL)) ? (arr_5 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [(unsigned short)16]))))), ((~(0U))))), (((((/* implicit */_Bool) arr_9 [i_3])) ? (arr_5 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_3])))))));
                    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((short) arr_16 [10U] [i_4] [i_3] [i_3])))))) ? (((/* implicit */int) ((unsigned short) arr_16 [i_3] [i_3] [i_4] [i_5]))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [14LL])) && (((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_12 [i_4])) : (((/* implicit */int) arr_8 [4ULL]))))))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */short) var_9);
    /* LoopNest 2 */
    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 3) 
    {
        for (long long int i_7 = 0; i_7 < 25; i_7 += 4) 
        {
            {
                arr_24 [i_6] = ((/* implicit */_Bool) min((arr_23 [i_6]), (((((/* implicit */_Bool) arr_23 [i_6])) ? (arr_23 [i_6]) : (arr_23 [i_6])))));
                arr_25 [i_6] = ((/* implicit */unsigned short) (signed char)-84);
                arr_26 [i_6] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((int) arr_22 [i_6] [i_6]))), (((arr_22 [i_6] [i_6]) - (arr_22 [i_6] [i_6])))));
            }
        } 
    } 
}
