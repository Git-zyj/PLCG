/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55069
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0])));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_8 [i_0] [i_2] [(_Bool)1])) ? (arr_6 [i_1]) : (((/* implicit */unsigned int) arr_7 [i_0] [i_0])))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [i_2] [i_2])))));
                    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */unsigned long long int) -1936542335727216914LL)) : (280375465082880ULL))))));
                }
            } 
        } 
    }
    for (int i_3 = 0; i_3 < 24; i_3 += 3) 
    {
        arr_13 [i_3] [i_3] = ((/* implicit */unsigned int) arr_10 [i_3]);
        var_16 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_9 [i_3] [i_3]))));
        /* LoopNest 2 */
        for (signed char i_4 = 3; i_4 < 21; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                {
                    arr_19 [i_5] [i_3] = ((/* implicit */unsigned char) (+((+(((arr_15 [i_3] [(_Bool)1] [(_Bool)1]) & (((/* implicit */int) arr_10 [i_3]))))))));
                    arr_20 [i_3] [i_4] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_15 [i_3] [i_4] [15])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6)))), (min((arr_16 [i_3] [i_3] [i_3]), (((/* implicit */int) arr_14 [i_3] [i_3]))))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [(short)12] [i_3]))) : (var_4)))));
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned char) ((max(((~(((/* implicit */int) var_11)))), ((~(((/* implicit */int) var_10)))))) / (((/* implicit */int) max((arr_9 [i_3] [i_3]), (arr_9 [i_3] [i_3]))))));
        var_18 = ((/* implicit */unsigned int) (((!(var_10))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_3] [i_3] [i_3])) ? (arr_16 [17] [i_3] [i_3]) : (arr_16 [i_3] [15] [i_3]))))));
    }
    /* LoopNest 2 */
    for (signed char i_6 = 1; i_6 < 12; i_6 += 3) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            {
                var_19 = ((/* implicit */_Bool) var_4);
                arr_25 [i_6] = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (unsigned short)31923))))));
            }
        } 
    } 
}
