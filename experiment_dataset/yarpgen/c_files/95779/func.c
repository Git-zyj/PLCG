/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95779
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
    var_19 = ((/* implicit */unsigned char) ((short) var_3));
    var_20 -= ((/* implicit */_Bool) (~((+((-(((/* implicit */int) (unsigned short)50554))))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
        var_21 = ((/* implicit */long long int) (unsigned char)211);
        var_22 = ((/* implicit */long long int) var_4);
        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) var_17)) ? (((6561242170598921912ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22139))))) : (((/* implicit */unsigned long long int) ((max((2LL), (((/* implicit */long long int) var_3)))) - (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [17LL]))))))))));
    }
    for (int i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */short) arr_0 [i_1]);
        var_24 = ((/* implicit */short) ((((/* implicit */long long int) max((1591969684U), (arr_1 [i_1] [(_Bool)1])))) ^ ((~(-8900890688353021741LL)))));
        arr_8 [i_1] &= ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 6561242170598921896ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (2702997612U)))) ? (min((5566097748612225145ULL), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_16) : (var_10)))))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -8736851379356684589LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) : (1591969684U)))) : (arr_6 [i_1]))))));
        arr_9 [i_1] = (+(((((/* implicit */_Bool) min((var_1), (((/* implicit */short) var_14))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)237)))));
    }
    for (int i_2 = 1; i_2 < 8; i_2 += 2) 
    {
        arr_13 [i_2] = ((/* implicit */long long int) (_Bool)1);
        arr_14 [i_2] = ((/* implicit */long long int) max(((+(((/* implicit */int) arr_10 [i_2])))), (((/* implicit */int) ((((/* implicit */int) var_12)) >= (((/* implicit */int) (_Bool)1)))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_3 = 1; i_3 < 20; i_3 += 2) 
    {
        for (signed char i_4 = 3; i_4 < 19; i_4 += 2) 
        {
            {
                arr_19 [i_3] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)255))));
                var_25 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) var_3)) % (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_15 [i_3])) : (((/* implicit */int) arr_0 [i_4 + 2])))))));
                var_26 = ((/* implicit */unsigned char) ((unsigned long long int) var_11));
                var_27 = ((/* implicit */long long int) var_17);
                var_28 = ((/* implicit */_Bool) 3740486363429045777ULL);
            }
        } 
    } 
}
