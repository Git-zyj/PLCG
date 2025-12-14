/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84708
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */unsigned long long int) var_9);
                    arr_9 [i_2] [i_2] [i_2] [i_2] &= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 + 3]))) != (var_9)))) / (((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) var_2)))))));
                    var_11 ^= ((/* implicit */_Bool) var_4);
                    var_12 = ((/* implicit */unsigned short) var_9);
                }
            } 
        } 
    } 
    var_13 = var_3;
    var_14 -= ((/* implicit */unsigned int) var_6);
    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (~(var_9))))));
    /* LoopSeq 2 */
    for (int i_3 = 0; i_3 < 10; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned short i_5 = 3; i_5 < 8; i_5 += 4) 
            {
                {
                    var_16 = ((/* implicit */_Bool) arr_15 [i_5 - 3] [i_4] [i_5] [i_3]);
                    var_17 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_0) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_4]))))))));
                    var_18 += ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))), (((arr_12 [i_3] [i_3] [i_5 - 2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))) >= (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_14 [(_Bool)1] [i_5 + 2] [i_3] [i_5 - 1])), ((-(var_8))))))));
                }
            } 
        } 
        var_19 = ((/* implicit */short) (+(((/* implicit */int) ((((((/* implicit */int) var_0)) + (((/* implicit */int) var_7)))) != (((/* implicit */int) ((((/* implicit */int) (unsigned short)9366)) < (((/* implicit */int) arr_4 [i_3] [i_3]))))))))));
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 24; i_6 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 24; i_7 += 2) 
        {
            for (short i_8 = 0; i_8 < 24; i_8 += 4) 
            {
                {
                    var_20 -= ((/* implicit */unsigned long long int) var_5);
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) var_7)) / (((/* implicit */int) var_0))));
                }
            } 
        } 
        var_22 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5))));
    }
}
