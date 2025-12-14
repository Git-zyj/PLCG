/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66798
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) var_11))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    {
                        var_21 -= ((/* implicit */unsigned int) (!(var_6)));
                        var_22 += ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) (_Bool)1)) + (var_3))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_4 = 1; i_4 < 18; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        for (int i_7 = 1; i_7 < 20; i_7 += 3) 
                        {
                            {
                                arr_21 [i_0] [i_4] [i_5] [i_6] [i_6] [i_7] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_14)))) ? (1093892194) : (var_7)));
                                arr_22 [i_0] [i_7] [i_5] [i_5] = (i_7 % 2 == zero) ? (((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_18)) << (((arr_5 [i_4] [i_5] [i_7] [i_7 - 1]) - (1296592228)))))) ? (1093892194) : (((/* implicit */int) (_Bool)1))))) != (max((var_19), (((/* implicit */unsigned int) 1093892183)))))) : (((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_18)) << (((((arr_5 [i_4] [i_5] [i_7] [i_7 - 1]) - (1296592228))) + (1275571982)))))) ? (1093892194) : (((/* implicit */int) (_Bool)1))))) != (max((var_19), (((/* implicit */unsigned int) 1093892183))))));
                                arr_23 [i_7] [i_7] = 215258777;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                    {
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_23 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(-1133833300)))) ? (arr_16 [i_9] [i_9] [i_8 + 1] [i_4 + 1]) : (((/* implicit */long long int) ((/* implicit */int) max((arr_27 [i_0] [i_4] [i_5] [i_8] [i_9]), ((!(var_9)))))))));
                                var_24 -= arr_11 [i_4] [i_5] [i_4];
                                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) (~(((/* implicit */int) var_9)))))) ? (arr_15 [i_0] [i_0]) : (((((arr_18 [i_9 - 1] [i_8] [i_5] [i_0] [i_0] [i_0 - 2]) ? (((/* implicit */int) arr_28 [i_9] [i_5] [(short)16])) : (((/* implicit */int) (short)32763)))) - (((/* implicit */int) arr_7 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_0 - 1]))))));
                                arr_29 [i_9] [i_8] [i_5] [(_Bool)1] [(_Bool)1] = ((/* implicit */_Bool) arr_8 [i_0 - 1] [i_8 + 1] [i_8 + 1] [12U]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (int i_10 = 2; i_10 < 19; i_10 += 3) 
    {
        for (int i_11 = 0; i_11 < 21; i_11 += 3) 
        {
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
            {
                {
                    var_26 = var_8;
                    var_27 += ((/* implicit */long long int) ((int) ((((/* implicit */int) arr_13 [i_10 - 2] [i_10 - 1] [i_10] [i_10])) + (arr_15 [i_10 + 2] [i_10 - 2]))));
                }
            } 
        } 
    } 
    var_28 = ((((/* implicit */int) var_2)) | (((-1093892197) & (((/* implicit */int) max((((/* implicit */unsigned short) (short)-32752)), (var_0)))))));
}
