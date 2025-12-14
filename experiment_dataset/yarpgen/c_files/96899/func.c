/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96899
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 ^= ((/* implicit */signed char) var_0);
                var_14 += ((/* implicit */unsigned int) (unsigned char)192);
                /* LoopSeq 1 */
                for (int i_2 = 3; i_2 < 12; i_2 += 3) 
                {
                    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((short) (unsigned char)140)))))) ? (((((/* implicit */_Bool) ((long long int) (unsigned char)111))) ? (var_1) : (((/* implicit */int) ((signed char) var_9))))) : ((~(((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) 1437439683)))))))));
                    var_16 -= ((/* implicit */unsigned char) (+(((/* implicit */int) ((short) var_6)))));
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_17 *= ((/* implicit */unsigned char) (~(arr_6 [i_0] [i_1] [i_1] [i_3])));
                    var_18 ^= ((/* implicit */long long int) (unsigned short)3);
                    var_19 = ((/* implicit */_Bool) min((var_19), (((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_11 [i_3] [i_1]))))));
                }
                for (int i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    arr_14 [i_0] [i_1] [i_4] = ((/* implicit */unsigned char) (~(-662281242)));
                    arr_15 [i_0] [i_0] [i_1] [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1] [i_4])) ? ((+(((/* implicit */int) (unsigned char)207)))) : (((/* implicit */int) var_6))));
                    /* LoopSeq 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned char) arr_17 [i_0] [i_1] [i_1]);
                        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-((+(((/* implicit */int) (unsigned char)103))))))))))));
                    }
                    for (long long int i_6 = 0; i_6 < 13; i_6 += 3) 
                    {
                        arr_22 [i_6] [i_4] [i_6] = ((/* implicit */short) var_7);
                        arr_23 [i_0] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) ((((arr_11 [i_0] [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) < (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) (_Bool)1))))))))) * (((/* implicit */int) min((arr_16 [i_0] [i_4] [i_1] [i_0]), (arr_8 [i_0] [i_0] [i_0] [i_4]))))));
                    }
                }
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) (((((_Bool)1) && (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)51026)) : (((/* implicit */int) var_6))))))) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
}
