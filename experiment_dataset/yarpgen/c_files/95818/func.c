/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95818
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
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) max(((unsigned char)215), ((unsigned char)215))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) var_10))));
                    var_14 = ((/* implicit */long long int) (unsigned char)111);
                }
                for (signed char i_3 = 3; i_3 < 18; i_3 += 2) 
                {
                    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (((-(((/* implicit */int) (unsigned char)172)))) ^ (((/* implicit */int) arr_2 [i_0] [i_3])))))));
                    var_16 = ((/* implicit */unsigned long long int) (!((_Bool)1)));
                    arr_9 [5U] [i_1] [i_1] [(unsigned char)14] = ((/* implicit */short) arr_6 [i_3] [i_1] [i_0]);
                }
                for (unsigned long long int i_4 = 2; i_4 < 20; i_4 += 2) 
                {
                    var_17 ^= ((/* implicit */unsigned short) var_7);
                    arr_12 [5LL] [i_1] [i_0] = ((/* implicit */long long int) (short)0);
                    arr_13 [(unsigned short)0] [(unsigned short)0] [(unsigned short)0] [(unsigned short)0] = ((/* implicit */signed char) var_11);
                    arr_14 [i_0] [19ULL] [i_1] [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_5 [i_4 - 2] [20LL])) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_5)))))))) ? (((((/* implicit */_Bool) ((long long int) var_9))) ? (((((/* implicit */_Bool) var_2)) ? (10832041532944798903ULL) : (7614702540764752712ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1548629770570600621ULL)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) arr_5 [i_0] [i_1]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_4))))))))));
                }
                for (unsigned int i_5 = 3; i_5 < 19; i_5 += 2) 
                {
                    arr_17 [i_0] [(signed char)8] [i_5] [i_5 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((unsigned char) var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_3) ? (6306512482248708331ULL) : (var_11)))))))) : (((long long int) (~(var_8))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 3; i_6 < 19; i_6 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 7614702540764752712ULL)) ? (((/* implicit */unsigned long long int) 817050685U)) : (12140231591460843284ULL)));
                        arr_21 [i_6] [i_5] [i_5] [i_5] [i_5] [i_0] = arr_6 [i_5] [20] [i_0];
                        var_19 = ((/* implicit */int) max((var_19), ((+(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_3))))))))))));
                        var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [i_0] [i_5] [i_5 - 1] [i_5]))));
                        arr_22 [i_0] [i_0] [i_5] [i_0] = ((/* implicit */signed char) ((unsigned int) (signed char)125));
                    }
                    var_21 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) 10257685389162805839ULL)) ? (3626490467U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19087))))));
                    var_22 = ((/* implicit */long long int) (~(((/* implicit */int) arr_15 [i_0] [i_1 - 1] [i_0] [i_5]))));
                    var_23 = ((/* implicit */signed char) arr_7 [4LL] [i_1] [i_1]);
                }
                arr_23 [i_0] [i_0] = ((/* implicit */unsigned short) (-(((var_8) % (((/* implicit */unsigned long long int) arr_18 [i_1 - 1]))))));
                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((unsigned short) arr_20 [i_0] [i_0] [i_1] [i_1])))));
                arr_24 [i_1] |= ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) 3389601666U)))));
            }
        } 
    } 
    var_25 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)14))) : ((-(var_5)))))) ? ((-(((/* implicit */int) var_6)))) : (min((((((/* implicit */int) var_3)) & (((/* implicit */int) (unsigned char)215)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3))))))));
    var_26 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (((+(var_11))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_3))))))) ? (max(((-(var_2))), (max((((/* implicit */long long int) (unsigned char)215)), (var_4))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_5) & (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((((/* implicit */int) var_9)) & (((/* implicit */int) var_10)))) : (((/* implicit */int) var_9)))))));
}
