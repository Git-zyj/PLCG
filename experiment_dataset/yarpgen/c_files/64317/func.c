/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64317
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
    var_17 = ((/* implicit */short) var_8);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (~(arr_3 [i_0] [i_0] [i_1]))))));
                arr_5 [i_0] [i_1] &= ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) arr_2 [i_0])))))));
                var_19 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) 131135305U)) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)31))))) + ((-(arr_0 [i_1])))))) : ((+(var_3)))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (long long int i_3 = 1; i_3 < 18; i_3 += 4) 
                    {
                        {
                            arr_13 [i_3] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_6 [i_0] [i_3])) ? (-5045128472068824906LL) : (((/* implicit */long long int) 1920566679U)))) | (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)65535)), (2374400617U))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_12 [i_0]), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_2 [i_1]))))) : (max((arr_11 [i_3] [i_3 + 1] [i_3 + 1] [i_3 + 1]), (4163831995U)))));
                            var_20 -= ((/* implicit */unsigned char) (_Bool)0);
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 |= ((/* implicit */_Bool) var_14);
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) 
    {
        for (unsigned int i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            {
                arr_19 [i_5] [i_5] = ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((short) (_Bool)1))) / (((/* implicit */int) (short)5667))))) : ((-(2374400638U))));
                arr_20 [i_4] [i_5] = ((((unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (4163831991U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4]))));
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)65535))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_16 [i_5] [i_5] [i_4])) : (((/* implicit */int) var_9))))) : (2995987744891243825LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 131135305U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_16))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_5]))) : (arr_18 [i_4] [i_4]))))));
            }
        } 
    } 
    var_23 -= ((((/* implicit */_Bool) (unsigned short)28362)) || (((/* implicit */_Bool) var_12)));
}
