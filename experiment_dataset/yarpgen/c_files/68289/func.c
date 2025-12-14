/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68289
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [4ULL] [14ULL] [i_0] [i_4] = ((/* implicit */signed char) var_14);
                                arr_13 [i_0] [i_0] [i_2] [i_3] [(signed char)4] |= ((/* implicit */signed char) ((((max((17427120575218323403ULL), (((/* implicit */unsigned long long int) arr_6 [i_0])))) % (((/* implicit */unsigned long long int) min((759432753), (-759432754)))))) - (arr_0 [10LL])));
                                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((signed char) ((int) arr_8 [i_4] [i_4] [i_4] [i_4] [i_4] [2U] [i_4]))))));
                            }
                        } 
                    } 
                    var_19 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_2 [i_0] [i_1]), (arr_11 [i_1])))) ? (arr_9 [8] [10ULL] [10ULL] [i_2] [i_2]) : (max((arr_4 [(signed char)14] [(signed char)12]), (((/* implicit */long long int) arr_8 [0] [6ULL] [i_1] [i_1] [i_0] [6ULL] [i_0]))))))) ? (min((((/* implicit */unsigned int) -1192026078)), (3262790526U))) : (((/* implicit */unsigned int) max((759432759), (-759432735))))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 15; i_5 += 2) 
                    {
                        for (long long int i_6 = 3; i_6 < 14; i_6 += 2) 
                        {
                            {
                                arr_21 [2LL] [i_5 + 2] [i_2] [i_1] [2LL] |= ((/* implicit */signed char) min((arr_19 [i_0] [8LL] [i_2] [i_5 - 1] [i_6] [i_5]), (((/* implicit */unsigned long long int) max((arr_7 [i_0] [i_1] [2LL] [i_5] [16U]), (((((/* implicit */_Bool) 4806997772026583555LL)) ? (var_0) : (759432751))))))));
                                var_20 = arr_9 [8ULL] [i_5] [i_2] [i_1] [8ULL];
                                arr_22 [3U] [i_1] [i_0] [i_5] [i_6 + 2] = ((/* implicit */unsigned long long int) var_13);
                                arr_23 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_5 - 1]))) / (var_12))) * (((/* implicit */unsigned long long int) ((arr_17 [i_0] [i_1] [i_1] [i_2] [i_5] [i_6]) / (arr_7 [i_0] [i_5 + 3] [i_0] [i_1] [i_0])))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */long long int) arr_20 [i_0] [i_1] [i_2] [(signed char)1] [i_6])) | (arr_6 [i_2]))) != (((/* implicit */long long int) arr_17 [i_0] [i_1] [i_2] [i_5 + 3] [i_0] [i_1]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_7 = 0; i_7 < 11; i_7 += 3) 
    {
        for (unsigned long long int i_8 = 1; i_8 < 8; i_8 += 3) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 1) 
            {
                {
                    arr_33 [i_7] = arr_6 [14LL];
                    arr_34 [i_7] [i_8] [i_9] [(signed char)10] |= ((/* implicit */int) ((unsigned int) ((min((6798841624870404748ULL), (((/* implicit */unsigned long long int) 759432737)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [12U] [i_7] [12U] [i_9] [i_9])) || (((/* implicit */_Bool) var_8)))))))));
                }
            } 
        } 
    } 
}
