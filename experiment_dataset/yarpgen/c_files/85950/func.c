/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85950
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
    for (int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        var_13 = ((/* implicit */_Bool) (-(((/* implicit */int) var_7))));
        var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)15454))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        var_15 = ((/* implicit */long long int) (-((+(arr_4 [i_1])))));
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-15451)) - (((/* implicit */int) ((short) var_6)))));
    }
    for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_3 = 1; i_3 < 19; i_3 += 2) 
        {
            arr_14 [i_2] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) (short)-16621)) || (((((/* implicit */unsigned long long int) arr_11 [i_2] [i_3])) < (var_11)))))) * (min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_7 [i_2] [i_2])) : (((/* implicit */int) arr_8 [i_2])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2] [i_3])))))))));
            /* LoopNest 3 */
            for (unsigned short i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                for (long long int i_5 = 3; i_5 < 20; i_5 += 2) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_17 [i_3 + 1] [i_3])) - (((/* implicit */int) arr_17 [i_3 + 1] [i_3]))))));
                            var_18 = (unsigned char)224;
                            var_19 ^= ((/* implicit */short) ((((((/* implicit */_Bool) arr_16 [i_3 + 2] [i_3 + 2] [i_5 + 3] [i_5 + 2])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3 + 1] [i_5 + 2]))))) > (((/* implicit */long long int) ((1724459844) >> (((2001144410) - (2001144410))))))));
                        }
                    } 
                } 
            } 
            arr_26 [i_3] [i_3] [i_2] = ((/* implicit */unsigned short) ((((((1466684200) <= (arr_15 [i_2]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)16620)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3))))) : (-1801006243482371280LL))) / (((/* implicit */long long int) ((((/* implicit */_Bool) (+(8839232719526071417LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2]))) : ((-(var_2))))))));
        }
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) var_2))));
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (-(((((/* implicit */int) ((var_12) && (((/* implicit */_Bool) var_7))))) / (((/* implicit */int) arr_18 [i_2] [i_2])))))))));
    }
    var_22 = ((/* implicit */_Bool) var_1);
    var_23 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_4)) && (((((/* implicit */long long int) ((/* implicit */int) var_0))) == (var_4))))) ? (max((((((/* implicit */_Bool) (short)15468)) ? (var_6) : (1466684212))), (((int) var_3)))) : ((~(((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_8))))))));
}
