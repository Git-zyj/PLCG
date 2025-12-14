/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95644
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) arr_1 [i_0]);
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) arr_0 [i_0])) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_4)), (var_3)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10016))) : (arr_1 [i_0]))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (15278742163643816614ULL))))) : (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) (unsigned char)247)))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_4 [i_1])))) ? (((((((/* implicit */unsigned long long int) var_7)) - (var_14))) - (((/* implicit */unsigned long long int) ((1637739317U) << (((((/* implicit */int) (signed char)-114)) + (122)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_18))))));
        var_21 = ((/* implicit */unsigned short) arr_4 [i_1]);
        arr_7 [i_1] = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) var_7)) ? (var_17) : (985070879U))), (((3309896417U) - (4294967290U))))) << (((((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)113))))) : (17426723750433475621ULL))) - (18446744073709551484ULL)))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned int) -4702270695157054144LL);
        arr_11 [i_2] [i_2] = ((/* implicit */_Bool) arr_0 [i_2]);
        /* LoopNest 3 */
        for (short i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) 
            {
                for (unsigned char i_5 = 0; i_5 < 11; i_5 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned short) (+(arr_9 [i_2])));
                        var_23 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(2657227996U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7571))) : ((+(var_1)))));
                    }
                } 
            } 
        } 
    }
    var_24 = ((/* implicit */int) (+(((unsigned int) max((var_2), (((/* implicit */unsigned int) var_3)))))));
}
