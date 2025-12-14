/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94680
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8))));
                    var_13 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) + (3584184773530207856LL))) | (((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_5)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -3584184773530207862LL)) ? (((/* implicit */int) arr_3 [23])) : (var_5)))) : (min((var_12), (var_12))))))));
                    var_14 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_2])) + (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_4 = 1; i_4 < 7; i_4 += 3) 
        {
            for (unsigned short i_5 = 1; i_5 < 9; i_5 += 4) 
            {
                for (signed char i_6 = 2; i_6 < 10; i_6 += 1) 
                {
                    {
                        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_4] [i_4])) ? (((/* implicit */int) arr_6 [i_3] [20LL] [i_5] [i_5])) : (((/* implicit */int) var_11))));
                        var_16 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned char) var_8)), (var_4))), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) != (var_12))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_4 + 3] [i_4 + 2] [i_4 + 2] [i_4])) ? (((/* implicit */int) arr_6 [i_4 + 4] [i_4 + 1] [i_4 + 3] [i_4])) : (((/* implicit */int) arr_6 [i_4 + 2] [i_4 + 2] [i_4 + 1] [i_4]))))) : ((+(min((arr_19 [(signed char)1] [i_4] [i_5 - 1]), (var_12)))))));
                    }
                } 
            } 
        } 
        arr_20 [i_3] |= ((/* implicit */unsigned int) arr_18 [i_3] [i_3]);
        var_17 = ((/* implicit */unsigned char) (~((-(min((((/* implicit */int) var_9)), (var_3)))))));
    }
}
