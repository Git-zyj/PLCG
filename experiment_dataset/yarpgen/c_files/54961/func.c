/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54961
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
    for (short i_0 = 4; i_0 < 8; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            {
                var_19 *= ((/* implicit */_Bool) var_13);
                arr_5 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)2047))))) ? ((-(((/* implicit */int) (short)6011)))) : (((/* implicit */int) ((short) (unsigned short)29671)))));
                /* LoopSeq 3 */
                for (unsigned char i_2 = 2; i_2 < 8; i_2 += 3) 
                {
                    var_20 ^= ((/* implicit */short) (!(((/* implicit */_Bool) 4294967280U))));
                    arr_9 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), ((-(((/* implicit */int) (short)2032))))))) & (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)0)), (4294967281U)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_2] [i_1]))))) : ((~(2346936313U)))))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_21 = ((/* implicit */long long int) min((max((((/* implicit */int) (short)2032)), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)-24096)))))), (((((/* implicit */_Bool) (short)-11694)) ? ((+(((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-11694)))))))));
                    var_22 *= ((/* implicit */short) ((((/* implicit */_Bool) (short)-11677)) ? ((~(((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_3])) ? (((/* implicit */int) (unsigned short)15)) : (((/* implicit */int) (unsigned char)216)))))) : ((~(((/* implicit */int) (unsigned char)49))))));
                    arr_12 [i_0] [i_3] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)15))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)1560))))) : (28672U)))) ? (7295555496889815009LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)59)))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 1; i_4 < 8; i_4 += 2) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_23 *= ((/* implicit */unsigned int) (short)12939);
                                arr_18 [i_0] [i_3] [i_4] [i_5] = ((/* implicit */short) (-(((/* implicit */int) arr_14 [i_0] [i_0] [i_0]))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned short i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        for (short i_8 = 3; i_8 < 9; i_8 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]))) < (-8997545057736631923LL))))));
                                var_25 ^= ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)22309))));
                                var_26 = ((/* implicit */_Bool) min((var_26), ((_Bool)0)));
                            }
                        } 
                    } 
                    arr_26 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)132)) ? (((/* implicit */int) (unsigned char)214)) : (((/* implicit */int) (_Bool)1))));
                    arr_27 [i_0] [i_0] = ((/* implicit */unsigned char) (_Bool)0);
                    var_27 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_9))) * (-1309658266344790504LL)));
                }
                arr_28 [i_1] [i_1] [i_0] = max((((/* implicit */short) (_Bool)1)), ((short)22309));
            }
        } 
    } 
    var_28 ^= ((/* implicit */unsigned short) min((((/* implicit */short) var_14)), (var_13)));
}
