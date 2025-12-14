/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67169
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
    var_19 = ((/* implicit */unsigned short) var_4);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned char) ((_Bool) 4102924744U));
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned long long int) var_16);
                var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2683226719U))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 2; i_2 < 18; i_2 += 2) 
    {
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned short) 2683226719U);
                arr_11 [i_2 + 3] [i_3 - 1] [i_3] = (~(((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))) == (var_14)))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_23 = 1611740576U;
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_24 &= ((/* implicit */unsigned char) -1LL);
                    arr_20 [i_5] [i_5] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) | (13U))), (((3568852237U) / (1611740566U)))))) - (((((/* implicit */_Bool) ((arr_7 [i_4] [i_4]) | (((/* implicit */unsigned long long int) 262143U))))) ? (min((((/* implicit */unsigned long long int) var_2)), (var_17))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((2683226719U) > (262143U)))))))));
                    arr_21 [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (4294705153U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_5] [i_5])))))) ? (var_14) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_5] [(unsigned short)8])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)58053))))))), (((/* implicit */unsigned long long int) (-(7924987412631934263LL))))));
                }
            } 
        } 
    }
    for (long long int i_7 = 4; i_7 < 21; i_7 += 1) 
    {
        var_25 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)-12698)), ((unsigned short)12097)))))))));
        var_26 += ((/* implicit */signed char) (!(((/* implicit */_Bool) 262125U))));
        arr_26 [i_7 - 4] &= ((/* implicit */unsigned int) var_11);
    }
    var_27 = ((/* implicit */unsigned int) ((((var_15) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_17))) * (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)58101)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))));
}
