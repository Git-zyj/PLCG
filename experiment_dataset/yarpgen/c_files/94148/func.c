/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94148
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
    var_14 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_12))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0 - 1] [i_0])) - (((/* implicit */int) arr_2 [i_0 + 1] [i_0]))))) + (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0 - 1]))) : (arr_1 [i_0] [4LL]))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (int i_2 = 4; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_13 [i_4] [i_3] [i_2 - 3] [i_3] [i_0] = (i_3 % 2 == 0) ? (((/* implicit */unsigned short) max((((arr_11 [i_3] [i_3]) << (((arr_11 [i_3] [i_3]) - (4189007975963864706ULL))))), (((((/* implicit */_Bool) arr_11 [i_3] [i_3])) ? (arr_11 [i_3] [i_3]) : (arr_11 [i_3] [i_3])))))) : (((/* implicit */unsigned short) max((((arr_11 [i_3] [i_3]) << (((((arr_11 [i_3] [i_3]) - (4189007975963864706ULL))) - (13413278915172184512ULL))))), (((((/* implicit */_Bool) arr_11 [i_3] [i_3])) ? (arr_11 [i_3] [i_3]) : (arr_11 [i_3] [i_3]))))));
                                var_16 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [(unsigned char)7] [i_1 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63429))))))), (max((((((/* implicit */_Bool) arr_12 [16U] [(unsigned short)0] [i_4] [i_3] [i_2] [16U] [0])) ? (1409106634968730752ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2 - 2]))))), (((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [6U] [i_0] [i_2] [i_0] [2U]))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_8 [16ULL] [i_2] [i_2] [i_1])) ? (max((arr_11 [i_0] [i_2]), (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((arr_3 [i_2 - 2]) / (6332933461512762680LL)))))));
                    arr_14 [i_0] [(short)9] [i_2] = ((/* implicit */unsigned long long int) (((~(-6332933461512762681LL))) == (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((int) 17037637438740820864ULL)))))));
                    arr_15 [7ULL] [(_Bool)1] [(_Bool)1] [(_Bool)1] = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (arr_8 [i_1 - 1] [i_2] [14LL] [i_2 + 1]) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_9 [i_2] [i_1] [(_Bool)1] [i_2 - 1]))))))), (((unsigned long long int) arr_12 [i_2 + 1] [i_2 - 2] [i_2 - 1] [i_2 + 1] [i_2] [i_2 - 4] [i_2 - 2])));
                }
            } 
        } 
    }
}
