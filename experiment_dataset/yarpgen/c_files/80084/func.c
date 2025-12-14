/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80084
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
    var_16 = ((/* implicit */unsigned char) min((((var_2) / ((+(((/* implicit */int) (unsigned char)104)))))), (((/* implicit */int) ((((((/* implicit */_Bool) 3965119282U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3)))) < (((/* implicit */int) var_8)))))));
    var_17 = ((/* implicit */short) min((((/* implicit */long long int) max((((/* implicit */unsigned short) var_1)), (var_8)))), (var_5)));
    var_18 -= (unsigned char)157;
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)59798)) ? (min((((/* implicit */unsigned int) max(((unsigned short)64277), (((/* implicit */unsigned short) (unsigned char)133))))), (min((((/* implicit */unsigned int) arr_2 [i_2])), (228146971U))))) : (((/* implicit */unsigned int) (-((-(((/* implicit */int) var_9)))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) arr_1 [i_4]))));
                                var_20 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)95)) ? (((((/* implicit */_Bool) max((-8010918958884210056LL), (-8010918958884210068LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) (unsigned char)255)))) : (min((((/* implicit */int) (_Bool)0)), (var_11)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_15 [i_0] = 1178582898;
    }
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 2) 
    {
        for (unsigned short i_6 = 0; i_6 < 17; i_6 += 1) 
        {
            {
                var_21 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)45)), ((unsigned short)36155)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)94))) : (1282258582U))) & (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                var_22 = ((/* implicit */unsigned char) var_0);
                arr_21 [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((var_11) | (((/* implicit */int) (unsigned char)151))))), (((((/* implicit */_Bool) (unsigned short)29381)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_13)))))) ? (((/* implicit */int) min((var_3), (var_3)))) : (((/* implicit */int) (short)-21))));
                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (+(((/* implicit */int) max((((/* implicit */short) (unsigned char)104)), (max((((/* implicit */short) (unsigned char)44)), (arr_14 [i_5] [i_5] [i_6] [i_6] [i_6])))))))))));
            }
        } 
    } 
}
