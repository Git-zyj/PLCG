/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83672
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
    var_17 = ((/* implicit */unsigned short) var_4);
    var_18 = ((/* implicit */signed char) max((((/* implicit */unsigned int) var_5)), (1938744044U)));
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((var_7) + (((/* implicit */unsigned int) ((/* implicit */int) var_14))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_12))) + (3688290447U)))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_4)) : (max((((/* implicit */unsigned long long int) var_3)), (6ULL))))) : (((/* implicit */unsigned long long int) var_4))));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        var_20 = ((max((var_11), ((+(var_0))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_8)), ((unsigned char)96)))) ? (((((/* implicit */_Bool) arr_2 [i_0 + 2])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_1 [i_0 + 2])))) : (((/* implicit */int) ((var_6) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 + 1]))))))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 1; i_2 < 7; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 4; i_4 < 10; i_4 += 3) 
                {
                    {
                        var_21 ^= ((/* implicit */short) ((((/* implicit */_Bool) (~(31LL)))) ? (min((max((var_2), (((/* implicit */unsigned long long int) (short)16)))), (((/* implicit */unsigned long long int) arr_13 [i_1 + 2] [i_2] [i_3])))) : (((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned int) arr_5 [i_2])), (var_7))), (arr_7 [i_4] [i_3]))))));
                        var_22 = ((/* implicit */unsigned char) (short)6);
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */signed char) var_4);
        /* LoopNest 3 */
        for (long long int i_5 = 0; i_5 < 11; i_5 += 4) 
        {
            for (short i_6 = 4; i_6 < 10; i_6 += 2) 
            {
                for (unsigned char i_7 = 4; i_7 < 10; i_7 += 4) 
                {
                    {
                        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_6] [i_6 - 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_7] [i_7]))))) : (((/* implicit */int) (unsigned char)103)))))));
                        var_25 = ((/* implicit */unsigned int) (((+(((((/* implicit */_Bool) 606676855U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)240))) : (arr_21 [i_1] [i_5] [i_6 - 4] [i_7]))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_9), ((signed char)41)))) ? (arr_19 [i_1] [i_1] [i_1 + 2]) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)142)) % (((/* implicit */int) (unsigned char)98))))))))));
                    }
                } 
            } 
        } 
    }
}
