/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84615
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
    var_12 = ((/* implicit */_Bool) ((unsigned long long int) var_9));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_13 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(1148300023)))) ? ((((_Bool)1) ? (arr_3 [i_0 - 1]) : (((/* implicit */unsigned long long int) 824898046U)))) : (min((arr_3 [i_0 - 3]), (arr_3 [i_0 + 1])))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) max((var_6), (arr_1 [i_0])))), (((((/* implicit */int) arr_6 [i_1] [(short)1] [i_2])) | (((/* implicit */int) arr_6 [i_1] [i_1] [i_1]))))))) ? (((((/* implicit */_Bool) (short)18043)) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (-203739569) : (-203739546))) : (((/* implicit */int) (short)-22798)))) : (min((((/* implicit */int) arr_6 [i_1] [i_0 - 2] [i_1])), (max((((/* implicit */int) var_9)), (arr_7 [i_0 + 1] [i_1])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 23; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 = ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (min((((/* implicit */unsigned long long int) var_9)), (arr_0 [i_0] [i_1]))) : (arr_5 [i_1] [i_3 - 2]))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (short)14969)) ? (((/* implicit */int) (short)14965)) : (435098830)))))));
                                var_16 = ((/* implicit */unsigned int) ((short) (!(((/* implicit */_Bool) var_7)))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) 
                {
                    var_17 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_2 [i_5]), (((/* implicit */short) var_6))))) * ((+(((/* implicit */int) arr_12 [(short)3] [i_1] [i_1] [i_0]))))))) > (arr_0 [i_1] [i_0])));
                    var_18 = ((/* implicit */int) min(((+(3470069277U))), (((/* implicit */unsigned int) var_1))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 1; i_6 < 21; i_6 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) -435098844)) ? (1633601150U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)19527))))) : (arr_15 [(short)12] [i_1]))));
                        var_20 = ((/* implicit */_Bool) (-(min((arr_10 [i_0 - 2]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11)))))))));
                        arr_17 [i_1] [i_5] [i_1] [i_1] = ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) ((_Bool) var_4))), (((arr_5 [i_1] [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_5]))))))) | (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_10 [i_0]))), (((/* implicit */unsigned int) var_3)))))));
                        arr_18 [i_1] [i_1] [i_5] [i_6] = (-(((/* implicit */int) ((short) arr_2 [i_0 + 1]))));
                    }
                    for (short i_7 = 1; i_7 < 23; i_7 += 4) 
                    {
                        arr_21 [i_1] = ((/* implicit */short) ((((arr_14 [i_1]) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)30918)) : (((/* implicit */int) (short)-29317))))))) | (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                        arr_22 [i_1] [i_1] [i_5] [i_7] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_10 [i_0]), (((/* implicit */unsigned int) (short)29342))))) ? (((var_0) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_6 [i_1] [i_1] [i_5])))) : (((/* implicit */int) arr_1 [9]))))) ? (var_2) : (((/* implicit */int) arr_6 [i_1] [i_5] [i_7]))));
                    }
                    var_21 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 - 3])))))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        arr_26 [i_8] = var_8;
        var_22 = ((/* implicit */int) ((unsigned long long int) max((((((/* implicit */_Bool) arr_15 [(short)22] [(short)22])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_8] [10U] [i_8] [i_8]))) : (arr_15 [i_8] [14U]))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [12] [(short)2] [i_8] [12]))))))));
    }
}
