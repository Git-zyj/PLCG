/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85356
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
    var_15 = ((/* implicit */unsigned char) max(((+(min((((/* implicit */unsigned long long int) var_12)), (var_9))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) && ((!(((/* implicit */_Bool) var_14)))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        arr_2 [12LL] [i_0] = ((/* implicit */short) max(((~(((/* implicit */int) var_3)))), (((/* implicit */int) var_8))));
        arr_3 [(unsigned short)0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((var_12) & (((/* implicit */long long int) ((/* implicit */int) var_6))))))))));
    }
    var_16 = ((/* implicit */unsigned long long int) var_6);
    var_17 = ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_1) : (var_1)))) | (min((((/* implicit */unsigned long long int) var_7)), (var_9))))), (var_10)));
    /* LoopSeq 2 */
    for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_2 = 3; i_2 < 15; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    {
                        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) (~(var_12)))), ((+(var_9))))))))));
                        var_19 = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) / (var_9)))));
                        arr_13 [i_4] [i_4] [i_3] [i_2] [i_4] [i_1] &= ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_3))))))) ? (((var_8) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_0))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))) : ((~(((/* implicit */int) var_3))))));
                        var_20 = ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_0)))))))) & (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))));
                        var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) var_6)))) >> (((/* implicit */int) ((((var_8) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_1))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) var_7)))))))))));
                    }
                } 
            } 
        } 
        arr_14 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (var_9)))) || (((((/* implicit */int) var_6)) <= (((/* implicit */int) var_14))))));
        var_22 = ((/* implicit */unsigned int) (~((~(((((/* implicit */long long int) ((/* implicit */int) var_5))) + (var_12)))))));
    }
    for (signed char i_5 = 1; i_5 < 20; i_5 += 3) 
    {
        var_23 ^= ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((var_4) + (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */int) ((((/* implicit */int) var_0)) == (((/* implicit */int) var_0))))) : (((/* implicit */int) var_7))))) / (max((((/* implicit */long long int) ((((/* implicit */int) var_14)) == (((/* implicit */int) var_5))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_12)))))));
        var_24 ^= ((((/* implicit */_Bool) ((max((((/* implicit */long long int) var_14)), (var_4))) | (((var_12) | (((/* implicit */long long int) ((/* implicit */int) var_7)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) var_2))))))))) : ((-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_13))))));
    }
}
