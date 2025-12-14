/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84447
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
    var_20 = var_12;
    var_21 = ((/* implicit */unsigned char) var_3);
    var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_6))))))) ? (((/* implicit */int) var_11)) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_23 = ((/* implicit */signed char) var_15);
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_6 [i_1] [i_2] = (~(var_1));
                    var_24 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) var_10))));
                    arr_7 [i_0] [i_2] = ((/* implicit */int) var_1);
                    var_25 ^= arr_1 [(signed char)5] [i_1];
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (signed char)28))));
                                var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [i_1] [i_1] [i_2 + 1])) == (((/* implicit */int) var_19))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 1) 
    {
        var_28 += ((/* implicit */unsigned long long int) var_8);
        arr_15 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) ((((/* implicit */int) (short)32767)) >= (((/* implicit */int) (unsigned short)54317)))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_6 = 4; i_6 < 21; i_6 += 4) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            {
                var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) min((((/* implicit */long long int) var_17)), (arr_20 [i_6]))))));
                var_30 *= ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) var_14)) > (((/* implicit */int) (signed char)28)))));
            }
        } 
    } 
}
