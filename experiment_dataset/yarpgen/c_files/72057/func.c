/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72057
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
    var_11 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((unsigned char) var_6))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))) : (((((/* implicit */unsigned int) var_4)) / (317232108U))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) != (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_4 [i_1 + 1])) || ((_Bool)1))) ? (((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_1 + 1])) ? (arr_4 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 1]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0] [i_0])) - (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */_Bool) min((var_13), (min(((!(((/* implicit */_Bool) ((arr_10 [i_0] [i_1 - 1] [(short)14] [i_3]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [7ULL])))))))), (((_Bool) (_Bool)1))))));
                            var_14 = 1261676822346402081ULL;
                            var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [4U] [i_1 - 1] [i_1 - 1] [i_3])) ? (arr_9 [2ULL] [i_1 + 1] [i_2] [i_3]) : (arr_9 [8ULL] [i_1 - 1] [i_2 - 1] [i_3])))))))));
                            var_16 = ((/* implicit */unsigned short) (-(max((((/* implicit */int) arr_6 [i_2] [i_1])), (arr_9 [i_2] [i_1] [i_2] [i_2])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = (_Bool)1;
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 24; i_4 += 1) 
    {
        for (int i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            {
                arr_19 [i_4] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_16 [i_4] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_12 [(unsigned short)17] [(unsigned short)17])))) : (((/* implicit */int) (short)-12057))))) ? (min((((((/* implicit */_Bool) arr_17 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4] [i_4]))) : (arr_11 [(unsigned char)14]))), (((/* implicit */unsigned int) (_Bool)1)))) : ((+(((((/* implicit */unsigned int) arr_17 [i_4])) ^ (arr_16 [10ULL] [i_5])))))));
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 24; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 1; i_7 < 22; i_7 += 4) 
                    {
                        {
                            arr_25 [23ULL] [i_5] [i_6] [19U] [i_7] = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_20 [i_7 + 2])) ^ (((/* implicit */int) arr_15 [i_7 - 1] [i_7 + 2])))), (((/* implicit */int) max((arr_20 [i_7 + 1]), (arr_20 [i_7 + 1]))))));
                            var_18 = ((/* implicit */unsigned int) (_Bool)0);
                        }
                    } 
                } 
            }
        } 
    } 
}
