/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75904
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */long long int) arr_2 [i_0] [i_1]);
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 12; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned char)126)))))));
                                arr_13 [i_0] [i_0] [i_0] [i_2] [i_3] [i_0] [i_4] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_6 [i_0] [i_2 + 3] [i_0]))));
                                var_19 |= ((/* implicit */long long int) ((_Bool) (signed char)-100));
                                arr_14 [i_0] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) min(((unsigned short)65535), (((/* implicit */unsigned short) (_Bool)1))))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_9))))))));
                                arr_15 [i_0] [i_0] [i_0] [(_Bool)1] [i_4] = ((max((((/* implicit */int) ((_Bool) (unsigned short)65535))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_0])))))) >= (((((/* implicit */_Bool) ((int) 2147483630))) ? (((/* implicit */int) arr_10 [(signed char)12] [i_0] [i_2 + 3] [i_0] [i_1 + 1])) : (((((/* implicit */_Bool) arr_2 [i_2] [8LL])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_10 [(_Bool)0] [i_1] [i_2] [i_0] [i_4])))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_5 = 0; i_5 < 15; i_5 += 3) 
                {
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 15; i_7 += 1) 
                        {
                            {
                                arr_22 [i_0] [i_5] [i_7] = var_4;
                                arr_23 [i_0] [i_1] [i_5] [(signed char)13] [i_6] [i_0] [i_7] = ((/* implicit */signed char) max((((int) (signed char)114)), (((/* implicit */int) (unsigned short)39667))));
                                arr_24 [i_6 - 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */int) (_Bool)1)) ^ (var_14)))));
                                arr_25 [i_7] [i_0] [(_Bool)1] [i_0] [i_0] = ((/* implicit */signed char) (~(((int) (unsigned short)41701))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 &= ((signed char) (((((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_12)))) | (var_6)));
    var_21 = ((signed char) (((_Bool)1) ? ((+(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (248)))));
    var_22 = var_5;
}
