/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89098
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
    var_10 = ((/* implicit */unsigned int) var_8);
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_2)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((unsigned char) var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned char) 614467645438762322LL);
                                arr_14 [i_0] [i_1] [i_2] [i_0] [i_4 - 1] [i_3] [i_3] = ((/* implicit */unsigned char) max((((unsigned int) arr_9 [i_4 - 1] [i_0] [i_0] [i_4 - 2] [i_4 + 1] [(unsigned char)11])), (((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_4 - 1] [i_4 - 2] [i_4] [i_4] [i_4 + 1] [i_4])) - (((/* implicit */int) arr_11 [i_4 - 1] [i_4 - 2] [i_4] [i_4 - 1] [i_4 + 1] [(unsigned char)3])))))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [(short)8] = min(((+(4294967295U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) 6U)) | (arr_8 [i_0] [i_1] [i_2] [i_3])))) && (((/* implicit */_Bool) arr_1 [i_0]))))));
                            }
                        } 
                    } 
                } 
                var_13 *= ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) 6U)) : (var_2)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [22U] [8])) ? (var_8) : (10737241577327368110ULL)))));
                /* LoopNest 2 */
                for (unsigned int i_5 = 3; i_5 < 20; i_5 += 3) 
                {
                    for (short i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (~(var_7))))));
                            arr_21 [i_0] = arr_10 [i_0] [i_1] [i_5] [i_0];
                            arr_22 [i_6] [i_5] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((_Bool) ((arr_19 [i_5 + 3] [i_5 - 2] [i_5] [i_5 + 1] [i_5] [i_5]) & (((/* implicit */unsigned int) max((arr_12 [(unsigned short)20] [i_1] [i_5] [2U] [i_5] [(unsigned short)1]), (((/* implicit */int) var_3))))))));
                        }
                    } 
                } 
                arr_23 [i_0] [i_0] = ((/* implicit */unsigned short) (~(0U)));
                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(4294967278U)))) & (8081470500586738953ULL))))));
            }
        } 
    } 
    var_16 += ((/* implicit */int) 8081470500586738953ULL);
}
