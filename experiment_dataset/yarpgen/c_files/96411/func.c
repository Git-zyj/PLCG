/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96411
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
    var_16 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)122))) : (1844562498320549094ULL))))))), (min((1844562498320549094ULL), ((+(16602181575389002521ULL)))))));
    var_17 = ((/* implicit */unsigned char) ((max(((+(((/* implicit */int) (short)-604)))), (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)122)), ((unsigned char)117)))))) << (((((/* implicit */int) min((var_14), (((/* implicit */unsigned short) (unsigned char)109))))) - (103)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_6 [i_2 + 1] [i_2 - 1] [i_1 + 1] [9LL]))))) ? (((/* implicit */int) (!((_Bool)0)))) : ((+(((/* implicit */int) arr_3 [i_2] [i_0] [i_1 - 2]))))));
                                var_19 &= ((/* implicit */unsigned char) min((((/* implicit */int) arr_7 [(signed char)18] [i_1] [i_2])), (((((/* implicit */int) arr_7 [(_Bool)1] [i_1] [22ULL])) - (((/* implicit */int) arr_7 [(_Bool)1] [i_1] [i_2 - 1]))))));
                                var_20 = (!(((/* implicit */_Bool) min(((+(((/* implicit */int) arr_8 [i_1] [i_0])))), ((((_Bool)1) ? (((/* implicit */int) arr_7 [i_0] [(short)19] [(_Bool)1])) : (((/* implicit */int) (_Bool)1))))))));
                                var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((min((((/* implicit */long long int) arr_6 [i_0] [i_2] [i_3] [(unsigned char)2])), (arr_10 [i_0]))) < (min((arr_0 [i_4]), (((/* implicit */long long int) (unsigned char)166)))))))) * (((min((1844562498320549112ULL), (((/* implicit */unsigned long long int) 7821023628405670018LL)))) / (((/* implicit */unsigned long long int) arr_9 [(unsigned char)16] [i_1]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        for (signed char i_6 = 0; i_6 < 23; i_6 += 3) 
                        {
                            {
                                var_22 -= ((/* implicit */signed char) min((((/* implicit */int) max(((unsigned short)37178), (((/* implicit */unsigned short) arr_7 [2U] [i_1] [i_2 + 2]))))), ((+(((/* implicit */int) (_Bool)1))))));
                                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_2] [i_5] [i_6])) || (max((arr_4 [i_0] [18U] [i_6]), (arr_4 [i_6] [i_2] [i_1 - 2])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
