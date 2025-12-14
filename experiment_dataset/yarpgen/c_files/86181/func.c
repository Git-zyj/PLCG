/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86181
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
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((long long int) min((((/* implicit */int) var_15)), ((+(((/* implicit */int) (_Bool)1))))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_7 [i_0] = min((min((max((arr_2 [i_2] [(_Bool)1] [(_Bool)0]), (arr_6 [11LL] [i_1]))), (((/* implicit */long long int) arr_3 [i_0])))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_14) ? (arr_2 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [14LL] [i_1] [i_0])))))) && (arr_4 [i_0] [i_1 + 2] [i_0])))));
                    arr_8 [i_0] [i_1] [i_2] = ((((((/* implicit */long long int) ((/* implicit */int) ((13U) <= (0U))))) >= (arr_2 [i_2] [i_2] [i_2]))) ? ((-(min((var_10), (((/* implicit */unsigned int) var_3)))))) : (((((/* implicit */_Bool) ((arr_6 [i_0] [i_1]) << (((4294967283U) - (4294967283U)))))) ? (((unsigned int) (_Bool)1)) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) -5406361851099750982LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (min((max((var_17), (((/* implicit */long long int) arr_4 [i_0] [i_1] [(_Bool)1])))), (((((/* implicit */_Bool) 3213910408U)) ? (var_12) : (((/* implicit */long long int) arr_5 [2LL] [4U] [(_Bool)1] [i_2])))))))))));
                    arr_9 [4U] |= ((var_12) + (((/* implicit */long long int) 4294967280U)));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            for (long long int i_5 = 3; i_5 < 21; i_5 += 4) 
            {
                {
                    var_20 = ((/* implicit */long long int) (-(((/* implicit */int) max((arr_12 [i_5 + 1]), (((_Bool) arr_17 [i_3])))))));
                    /* LoopSeq 2 */
                    for (long long int i_6 = 1; i_6 < 21; i_6 += 4) 
                    {
                        var_21 = arr_13 [i_3] [i_4 - 1];
                        var_22 = ((/* implicit */_Bool) max((min((((/* implicit */long long int) ((unsigned int) arr_21 [i_3] [i_3] [(_Bool)1] [i_3] [i_5]))), (min((arr_10 [i_5]), (6021029409877836973LL))))), (((/* implicit */long long int) var_8))));
                    }
                    for (unsigned int i_7 = 1; i_7 < 20; i_7 += 4) 
                    {
                        arr_26 [i_3] [i_4] [(_Bool)1] [i_5] [i_5] [13U] &= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) 4294967282U)) && (((/* implicit */_Bool) arr_11 [i_4 - 1]))))) >> (((16252928U) - (16252907U)))));
                        var_23 = arr_10 [i_3];
                    }
                }
            } 
        } 
    } 
}
