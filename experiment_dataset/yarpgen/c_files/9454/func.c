/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9454
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
    var_15 = ((/* implicit */_Bool) var_11);
    var_16 &= ((/* implicit */unsigned int) var_7);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)63)) || (((/* implicit */_Bool) 110165202852752201ULL)))))));
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((110165202852752201ULL) >> ((-(0U))))))));
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 4294967295U)) ^ ((+(arr_0 [i_0] [i_0])))))) && (((/* implicit */_Bool) ((21U) | (((/* implicit */unsigned int) ((arr_4 [i_0]) / (arr_4 [i_0 + 1])))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_13 [i_2] [i_4] [i_3] [i_2])))) % (((((((/* implicit */int) arr_13 [i_2] [i_2] [i_3] [i_4])) + (2147483647))) >> (((/* implicit */int) var_0))))));
                    arr_14 [i_2] [i_2] [i_2] [i_4] = ((/* implicit */unsigned short) ((((var_2) <= (((/* implicit */unsigned int) arr_10 [i_2] [i_3] [i_4])))) || (((arr_10 [i_2] [i_3] [i_4]) > (((/* implicit */int) var_8))))));
                    var_20 = ((/* implicit */_Bool) (~(3522703822U)));
                    /* LoopSeq 2 */
                    for (int i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        var_21 = ((/* implicit */signed char) (((+(442354302U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))));
                        var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(16383U))))));
                    }
                    for (int i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_25 [i_2] [i_4] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) 3852612974U)) || (((/* implicit */_Bool) var_3))));
                            var_23 &= ((/* implicit */long long int) (~(arr_18 [i_4] [i_7] [i_4] [i_6])));
                        }
                        var_24 = ((/* implicit */unsigned int) (~(((arr_10 [i_6] [i_4] [i_3]) >> (((arr_10 [i_2] [i_3] [i_6]) - (864548845)))))));
                        arr_26 [i_4] [i_6] = ((/* implicit */_Bool) (((+(18336578870856799390ULL))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) - (((/* implicit */int) var_6)))))));
                    }
                    arr_27 [i_4] = ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_15 [i_2] [i_2] [i_4])) | (((/* implicit */int) arr_20 [i_2] [i_3] [i_3] [i_4]))))));
                }
            } 
        } 
    } 
}
