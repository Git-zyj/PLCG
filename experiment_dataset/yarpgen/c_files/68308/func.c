/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68308
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
    var_13 = ((/* implicit */int) var_8);
    var_14 = ((/* implicit */_Bool) var_0);
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)161)) ? (7175733398788370669ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19360)))))) ? (var_7) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))) ? (var_10) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((var_3) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)95)) ? (((/* implicit */int) (unsigned char)92)) : (-1568380388)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_16 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2))))) ? (((var_3) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_3))))));
        var_17 += ((/* implicit */short) var_12);
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_5))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            for (signed char i_3 = 2; i_3 < 13; i_3 += 4) 
            {
                {
                    arr_10 [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_4)) ? (var_8) : (var_10))) : (((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */long long int) var_11))))));
                    arr_11 [i_1] [(unsigned short)11] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : (var_5)));
                    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_9) : (var_9)))) ? (((/* implicit */unsigned long long int) var_7)) : (var_9)));
                }
            } 
        } 
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) var_12))));
        arr_12 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_8))) : (((/* implicit */long long int) var_5))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_21 = var_2;
        /* LoopNest 2 */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 3) 
            {
                {
                    var_22 = var_2;
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */long long int) var_5))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_11) : (var_5)))) ? (((((/* implicit */_Bool) var_9)) ? (var_9) : (var_9))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))))));
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)163)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_11)))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1568380388)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_10)))));
                    arr_21 [i_4] &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_9)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_7)) : (var_9)))) ? (((/* implicit */unsigned int) ((var_3) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_5)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_10)))) ? (var_7) : (((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)161)))))))));
                    arr_22 [(unsigned char)0] [(unsigned char)0] [i_6] = ((/* implicit */long long int) var_0);
                }
            } 
        } 
    }
}
