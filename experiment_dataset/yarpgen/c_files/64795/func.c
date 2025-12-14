/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64795
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_18 ^= ((/* implicit */short) max((((/* implicit */unsigned short) max((((/* implicit */short) arr_3 [i_1 - 1])), (var_10)))), (min((((/* implicit */unsigned short) var_2)), ((unsigned short)20474)))));
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        var_19 -= (-(min((((/* implicit */unsigned int) var_2)), (117440512U))));
                        var_20 += ((((/* implicit */_Bool) 988399784U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (4294967275U));
                    }
                    for (short i_4 = 2; i_4 < 8; i_4 += 2) /* same iter space */
                    {
                        var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 3306567519U)) ? (((/* implicit */int) (short)4088)) : (((/* implicit */int) (short)-4088))))), (max((1053456753U), (((/* implicit */unsigned int) (short)4106)))))))));
                        var_22 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2289077865U)) ? (3468388418U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-4106)))))) ? (((((/* implicit */_Bool) arr_10 [i_4 - 2] [i_1] [i_1 - 1] [i_4])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_17))))) : (max((arr_2 [i_4 + 1]), (var_11)))));
                        arr_12 [i_0] = ((((/* implicit */_Bool) min((min((((/* implicit */unsigned int) var_0)), (arr_6 [i_0] [i_1]))), (arr_2 [i_1 - 1])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-47)))))))) : ((-(4294967295U))));
                    }
                    for (short i_5 = 2; i_5 < 8; i_5 += 2) /* same iter space */
                    {
                        arr_15 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_2] [i_1 - 1] [i_1 - 1]))))) ? ((-(((/* implicit */int) arr_3 [i_0])))) : ((~(((/* implicit */int) arr_13 [i_0] [i_1 - 1] [i_1 - 1] [i_5 + 1]))))));
                        arr_16 [i_0] [i_0] [i_0] [i_1] [i_2] [i_5] = ((/* implicit */signed char) (+(411525178U)));
                    }
                    var_23 = ((/* implicit */signed char) (-(min((3442395706U), (((/* implicit */unsigned int) (unsigned short)49790))))));
                    var_24 = (~(min((((/* implicit */unsigned int) (short)-12965)), (arr_14 [i_1 - 1] [i_1 - 1]))));
                    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_5 [i_2] [i_0] [i_0] [(short)4])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)20845)))) : (((/* implicit */int) var_5))))) ? ((+(((/* implicit */int) (short)14)))) : ((~((~(((/* implicit */int) var_4))))))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_14), ((short)-32753))))) : (min((0U), (1792748356U)))))));
}
