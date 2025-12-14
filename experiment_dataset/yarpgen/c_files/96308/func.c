/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96308
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_7 [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [(short)3] [i_1 - 1] [i_2])) ? (822039655U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-11841)))))) || (((/* implicit */_Bool) ((unsigned short) arr_1 [i_0]))))) || (((/* implicit */_Bool) (short)-11835))));
                    arr_8 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) min((max((((((/* implicit */_Bool) (short)11841)) ? (4619601977729016093ULL) : (((/* implicit */unsigned long long int) 2113530766U)))), (((/* implicit */unsigned long long int) arr_1 [i_0])))), (((/* implicit */unsigned long long int) min((((2113530767U) * (2563596656U))), (((/* implicit */unsigned int) var_2)))))));
                    arr_9 [i_1] [i_1] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) min((1731370618U), (2181436530U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_4), (var_2))))) : (arr_2 [i_0] [i_2]))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_10 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_8)), (1731370657U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (max((2563596664U), (2113530766U))))))));
                                var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_1 + 2]))))) * (arr_12 [i_3] [i_2] [i_2] [i_3] [i_3]))))));
                                var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) ((((unsigned long long int) 8171398739976068496ULL)) / (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) var_7)))), (((/* implicit */int) var_8)))))));
    /* LoopNest 2 */
    for (unsigned int i_5 = 1; i_5 < 21; i_5 += 4) 
    {
        for (int i_6 = 1; i_6 < 20; i_6 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) max((((arr_19 [i_5 - 1] [i_5 - 1]) ^ (((/* implicit */unsigned int) min((arr_17 [i_5]), (arr_22 [i_5])))))), (((/* implicit */unsigned int) var_9)))))));
                arr_23 [i_5 - 1] [i_5] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)21944)) << (((arr_22 [i_5]) - (899819739)))))) > (((unsigned long long int) var_0))))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) 191936105U)) : (6961780050375279728ULL)))) ? (((/* implicit */int) (short)17753)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-21927)))))))));
            }
        } 
    } 
    var_15 = var_7;
    /* LoopNest 2 */
    for (unsigned short i_7 = 2; i_7 < 21; i_7 += 2) 
    {
        for (unsigned short i_8 = 3; i_8 < 23; i_8 += 4) 
        {
            {
                arr_29 [i_7] = ((/* implicit */short) min((((/* implicit */unsigned int) (~(((/* implicit */int) (short)21944))))), (((arr_27 [i_8 - 1] [i_7 - 2]) << (((((/* implicit */int) var_4)) - (55737)))))));
                var_16 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (short)-11726)), (max((((/* implicit */unsigned long long int) var_3)), ((~(arr_25 [i_7])))))));
                var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_0))));
                arr_30 [i_7 - 1] = ((/* implicit */unsigned short) min(((-(2563596664U))), (((/* implicit */unsigned int) var_1))));
                var_18 *= ((/* implicit */short) ((((/* implicit */_Bool) (~(6291456)))) ? (12701950910646487899ULL) : (((((/* implicit */_Bool) 2563596678U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_25 [i_8 - 2])))));
            }
        } 
    } 
}
