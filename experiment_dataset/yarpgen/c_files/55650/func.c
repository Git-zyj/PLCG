/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55650
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_14) ? (((/* implicit */int) arr_7 [i_3] [i_3])) : (((/* implicit */int) arr_2 [i_0] [i_1]))))) ? (((/* implicit */int) (unsigned char)229)) : (((/* implicit */int) var_4))));
                        var_20 = ((/* implicit */unsigned short) (_Bool)1);
                        var_21 = ((unsigned short) (unsigned char)27);
                        arr_9 [i_3] = ((/* implicit */unsigned short) 3858138889U);
                    }
                } 
            } 
        } 
        arr_10 [i_0] [i_0] = ((/* implicit */short) ((arr_4 [i_0] [i_0] [(unsigned short)23]) ? ((((_Bool)0) ? (3544769563U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))));
        var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)229)) ? (((/* implicit */long long int) arr_8 [i_0] [i_0])) : (var_17))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) 
    {
        arr_13 [(_Bool)1] [22] = ((/* implicit */unsigned short) arr_5 [i_4] [i_4]);
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 4) 
        {
            var_23 = ((/* implicit */signed char) (unsigned short)7241);
            arr_17 [i_4] [i_4] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */_Bool) (~(var_16)))) || (((/* implicit */_Bool) arr_3 [22U] [i_5] [22U]))))), (((int) arr_14 [i_4]))));
            var_24 = ((/* implicit */unsigned int) (~(2147483647)));
            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_5] [i_4]))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) (signed char)63)) - (51)))))) ? (min((arr_5 [i_5] [i_4]), (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)7241))))))) : (((/* implicit */unsigned long long int) min((((arr_4 [i_4] [i_4] [i_4]) ? (((/* implicit */int) (unsigned short)1023)) : (((/* implicit */int) arr_11 [i_5])))), (((((/* implicit */_Bool) (unsigned char)229)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_2 [i_5] [i_4])))))))));
        }
    }
    var_26 = ((/* implicit */unsigned short) var_10);
    var_27 = (+(min((((((/* implicit */int) var_15)) >> (((((/* implicit */int) var_4)) - (38259))))), (((((/* implicit */int) (signed char)63)) * (((/* implicit */int) (unsigned short)35140)))))));
    var_28 -= ((/* implicit */_Bool) ((signed char) ((int) ((var_14) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (2389348012U)))));
}
