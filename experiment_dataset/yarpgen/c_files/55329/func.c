/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55329
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned short) ((signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))))));
        var_19 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) (unsigned char)15))))) ^ (max((((/* implicit */unsigned int) arr_0 [i_0])), (1527183232U)))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        var_20 = ((((((/* implicit */int) arr_1 [i_1])) <= (((/* implicit */int) arr_0 [12U])))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_1]))))) : (arr_3 [i_1]));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-1024)) ? (1527183232U) : (2767784064U)));
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) 1527183218U))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        arr_6 [i_2] = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) arr_5 [i_2]))) == (((/* implicit */int) (!(((21) >= (-21))))))));
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 23; i_3 += 4) 
        {
            for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) 
            {
                for (unsigned int i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    {
                        arr_16 [i_2] [i_2] [i_4] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) arr_14 [i_3 + 1] [i_3] [i_3 + 1] [i_3 - 1] [i_3 - 1]))) + (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_4])) || (((/* implicit */_Bool) min((3171766426580193752LL), (((/* implicit */long long int) 4177920U))))))))));
                        var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)125)))))));
                    }
                } 
            } 
        } 
    }
    var_24 = ((/* implicit */short) max((((/* implicit */unsigned int) ((int) ((var_7) ? (((/* implicit */int) var_16)) : (-30))))), (((((/* implicit */unsigned int) (~(26)))) ^ (((unsigned int) var_8))))));
    var_25 ^= ((/* implicit */short) var_5);
}
