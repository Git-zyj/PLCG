/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85593
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
    var_15 = ((/* implicit */int) max((((/* implicit */unsigned long long int) -718428841884916010LL)), (((((/* implicit */_Bool) (short)28233)) ? (((((/* implicit */_Bool) 16602642568203635105ULL)) ? (16602642568203635105ULL) : (1844101505505916510ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((1844101505505916510ULL) == (16602642568203635105ULL)))))))));
    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((/* implicit */_Bool) 1844101505505916531ULL)) ? (((/* implicit */unsigned long long int) -188324894)) : (1844101505505916527ULL))))));
    var_17 = ((/* implicit */int) (-((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-67))) : (16602642568203635097ULL)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 22; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) /* same iter space */
                    {
                        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (signed char)67))));
                        arr_10 [i_3] [i_2] [i_1] [i_3] = ((/* implicit */int) (signed char)-71);
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) /* same iter space */
                    {
                        arr_13 [16U] [i_0] [i_4] [i_4] [i_2] [(short)8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)245))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)14))))) : (((((/* implicit */_Bool) (unsigned short)2436)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-63))) : (1844101505505916492ULL)))));
                        arr_14 [i_0] [i_1] [i_2] [i_4] |= ((/* implicit */unsigned long long int) (+(65535U)));
                        arr_15 [i_0] [i_4] [i_0] [i_0] = ((/* implicit */_Bool) -538146191);
                    }
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (int i_6 = 4; i_6 < 20; i_6 += 4) 
                        {
                            arr_20 [i_0] [i_0] [i_0] [(signed char)19] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (1780936621U)));
                            arr_21 [i_0 + 1] [i_1] [i_2] [i_6] [i_1] [i_6] [3] = (~(((/* implicit */int) (_Bool)1)));
                            var_19 = 1085970079U;
                        }
                        for (short i_7 = 0; i_7 < 23; i_7 += 2) 
                        {
                            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)9)) ? (147212360U) : (3469570585U))))));
                            arr_25 [(short)13] [(short)13] [(short)13] [i_5] [7ULL] = ((/* implicit */_Bool) (-(-4607228773670379642LL)));
                        }
                        for (unsigned char i_8 = 1; i_8 < 20; i_8 += 4) 
                        {
                            arr_29 [i_0] [20LL] [i_2] [i_2] [i_5] [i_8] = ((/* implicit */short) ((16388541390755997158ULL) <= (16602642568203635105ULL)));
                            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */int) (short)32749)) << (((((((/* implicit */int) (signed char)-58)) + (83))) - (23))))))));
                            var_22 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (short)24576)) : (((/* implicit */int) (unsigned char)139))));
                            var_23 = ((/* implicit */short) (~(((/* implicit */int) ((short) 1314828295U)))));
                        }
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) ((1314828288U) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)3584)))))) << (((2514030675U) - (2514030652U)))));
                    }
                    arr_30 [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-24576))) / (2980139000U))))) * (((((/* implicit */_Bool) max((2146895500U), (((/* implicit */unsigned int) (_Bool)0))))) ? (((((/* implicit */_Bool) (unsigned short)49039)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-2492)))) : (((/* implicit */int) ((signed char) (unsigned short)63099)))))));
                }
            } 
        } 
    } 
}
