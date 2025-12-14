/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65048
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
    var_14 = ((/* implicit */_Bool) var_0);
    var_15 = ((/* implicit */unsigned int) var_4);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_0])))));
                        var_17 = (!(((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) var_10)) : (arr_4 [i_0])))));
                        var_18 = var_0;
                    }
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_4 + 1] [i_4] [0U] [i_4 + 1] [i_4 + 1])) ? (((/* implicit */int) ((3790460649U) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */int) var_6)) * (((/* implicit */int) var_11))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_2] [(short)16])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_2] [i_0])) ? (arr_7 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) var_12))))))))));
                        var_20 = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
                    }
                    /* LoopSeq 2 */
                    for (int i_5 = 1; i_5 < 21; i_5 += 2) 
                    {
                        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((unsigned char) ((int) ((arr_8 [i_1]) - (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))))))))));
                        var_22 = ((/* implicit */unsigned short) (signed char)10);
                        var_23 *= ((/* implicit */unsigned int) arr_4 [i_1]);
                        var_24 -= ((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((((/* implicit */_Bool) arr_3 [i_1] [i_5 - 1] [i_1])) && (((/* implicit */_Bool) arr_3 [i_1] [i_5 - 1] [i_1]))))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        arr_17 [i_0] [i_6] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)2)))))));
                        var_25 -= ((/* implicit */unsigned char) ((int) ((short) arr_6 [i_0] [i_1])));
                        var_26 &= ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_11 [i_1] [i_2] [i_6])))) : (((((/* implicit */_Bool) arr_1 [i_1] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (2400560686190624887LL))))));
                        var_27 ^= ((/* implicit */_Bool) ((unsigned short) arr_2 [i_0] [i_1] [i_2]));
                    }
                    var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) / (((unsigned int) arr_4 [i_1])))))));
                    arr_18 [i_0] [i_2] = (i_0 % 2 == 0) ? (((((/* implicit */int) var_9)) & (((/* implicit */int) ((((((/* implicit */int) arr_2 [i_2] [i_1] [i_0])) << (((arr_10 [i_2] [i_2] [i_0] [i_0] [i_0] [i_0]) - (243901551))))) != (((/* implicit */int) min((((/* implicit */signed char) var_7)), (var_10))))))))) : (((((/* implicit */int) var_9)) & (((/* implicit */int) ((((((/* implicit */int) arr_2 [i_2] [i_1] [i_0])) << (((((arr_10 [i_2] [i_2] [i_0] [i_0] [i_0] [i_0]) - (243901551))) - (1535200874))))) != (((/* implicit */int) min((((/* implicit */signed char) var_7)), (var_10)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_7 = 3; i_7 < 16; i_7 += 1) 
    {
        for (signed char i_8 = 0; i_8 < 17; i_8 += 2) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 2) 
            {
                {
                    var_29 *= ((/* implicit */signed char) arr_8 [i_9]);
                    var_30 = var_8;
                }
            } 
        } 
    } 
}
