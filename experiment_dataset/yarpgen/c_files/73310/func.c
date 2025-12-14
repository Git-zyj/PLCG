/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73310
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) (~(var_15)));
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (-(((/* implicit */int) ((var_15) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))))))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        var_18 = ((/* implicit */_Bool) (unsigned char)254);
        var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(4663191670773090659ULL)))) ? (((/* implicit */int) ((var_8) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)173)))))) : (((/* implicit */int) (short)-1783))))) - (((((/* implicit */_Bool) (unsigned char)202)) ? (max((var_7), (((/* implicit */unsigned long long int) (short)-1784)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
    }
    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) 
    {
        var_20 = ((/* implicit */int) min((max((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned char)35))))), (min((17511535688704542707ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))), (((/* implicit */unsigned long long int) (((-(1037192952))) + (((((/* implicit */int) (unsigned char)221)) + (arr_12 [i_4]))))))));
        var_21 = ((/* implicit */signed char) (~((-(((/* implicit */int) min((((/* implicit */unsigned short) arr_11 [i_4] [i_4])), (arr_13 [i_4] [i_4]))))))));
    }
    var_22 = ((/* implicit */int) (unsigned char)221);
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_16 [i_5] [i_5])))))));
        /* LoopNest 2 */
        for (unsigned short i_6 = 2; i_6 < 14; i_6 += 1) 
        {
            for (short i_7 = 0; i_7 < 16; i_7 += 2) 
            {
                {
                    var_24 *= arr_14 [i_5];
                    var_25 &= ((/* implicit */unsigned short) arr_15 [i_6 - 2]);
                }
            } 
        } 
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        arr_24 [i_8] [i_8] |= (((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)32))))))) > (((((/* implicit */_Bool) arr_12 [i_8])) ? (((/* implicit */int) arr_23 [i_8])) : (((/* implicit */int) (short)4095)))));
        var_26 = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) (unsigned char)255)) || (((/* implicit */_Bool) var_15))))));
        arr_25 [i_8] [i_8] = (!((((+(var_6))) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-95))))));
    }
    var_27 = ((/* implicit */_Bool) min((((min((-6676552070235289316LL), (((/* implicit */long long int) var_3)))) / (((/* implicit */long long int) -1575185081)))), (((/* implicit */long long int) var_14))));
}
