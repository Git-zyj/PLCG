/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87903
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
    var_16 *= ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) : (var_14)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] &= (+(((/* implicit */int) arr_1 [i_0])));
        var_17 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -655062791))));
    }
    for (unsigned short i_1 = 2; i_1 < 13; i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) || (((((/* implicit */int) (unsigned short)52794)) >= (((/* implicit */int) (short)-11349))))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 3; i_4 < 13; i_4 += 3) 
                    {
                        for (short i_5 = 2; i_5 < 14; i_5 += 4) 
                        {
                            {
                                var_18 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((-1578780313) + (((/* implicit */int) (unsigned char)255))))) + (((arr_9 [i_5]) - (((/* implicit */long long int) -1030422273))))))) || (((/* implicit */_Bool) var_3))));
                                arr_15 [i_1] [i_2] [i_2] [i_5] [i_2] [i_2] &= ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1])) && (((/* implicit */_Bool) 9173336875275618680LL))))) >= (((/* implicit */int) (_Bool)1)))));
                                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) var_3)))))) ? (((/* implicit */int) (signed char)-72)) : ((-2147483647 - 1))));
                            }
                        } 
                    } 
                    arr_16 [i_2] [2LL] [i_2] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_11)) ? (arr_4 [9LL]) : (((/* implicit */int) (signed char)77))))));
                    var_20 = ((/* implicit */unsigned int) (~(var_3)));
                    var_21 -= ((/* implicit */unsigned char) ((unsigned int) arr_11 [i_1] [i_2] [i_1] [i_1] [i_2]));
                }
            } 
        } 
    }
}
