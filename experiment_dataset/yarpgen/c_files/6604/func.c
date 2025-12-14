/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6604
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
    for (int i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        var_10 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) < (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [i_0 + 3])) : (((/* implicit */int) arr_1 [i_0 + 1]))))));
        arr_2 [(unsigned char)2] &= ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */int) arr_0 [i_0 + 3])) : (((/* implicit */int) arr_0 [i_0 - 2])))));
    }
    for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) var_5))) & (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) ? (min((2221410215U), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_1])), (var_4)))))));
        var_12 = ((/* implicit */signed char) (-(((/* implicit */int) arr_0 [i_1]))));
        arr_5 [i_1] [i_1] = ((/* implicit */int) var_7);
        arr_6 [i_1] = ((615428986) > (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1))))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                {
                    var_13 *= min(((_Bool)1), ((_Bool)1));
                    arr_14 [i_3] [i_2] [i_1] = ((/* implicit */_Bool) ((((_Bool) (short)-11844)) ? (((/* implicit */int) arr_12 [i_1] [i_2] [i_1])) : (((arr_7 [i_1] [i_2] [i_3]) / (((/* implicit */int) arr_10 [i_1] [i_2]))))));
                    var_14 = ((/* implicit */unsigned long long int) min(((((_Bool)1) ? (arr_11 [i_2] [i_2] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) max((((((/* implicit */int) (unsigned char)198)) ^ (((/* implicit */int) arr_1 [i_1])))), (((/* implicit */int) var_2)))))));
                    var_15 = ((/* implicit */int) min((var_15), (((((/* implicit */_Bool) (+((+(arr_11 [i_3] [i_1] [i_1])))))) ? (((/* implicit */int) ((unsigned short) (_Bool)1))) : (((((/* implicit */_Bool) (-(577961205)))) ? (max((1718636729), (1035009766))) : (((/* implicit */int) (!((_Bool)0))))))))));
                }
            } 
        } 
    }
    var_16 = ((/* implicit */int) min((((unsigned short) max((var_5), (((/* implicit */int) (short)-14854))))), (((/* implicit */unsigned short) var_3))));
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) 2669289082U))) & (((((/* implicit */int) var_8)) & (((/* implicit */int) (_Bool)1))))))) ? (((int) ((signed char) var_9))) : (((/* implicit */int) ((unsigned short) var_9)))));
    var_18 = ((/* implicit */short) var_5);
    var_19 *= ((/* implicit */unsigned short) max((var_0), (min((var_3), (((/* implicit */unsigned char) (_Bool)1))))));
}
