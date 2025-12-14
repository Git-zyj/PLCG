/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56264
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)150))))) & (((/* implicit */int) (signed char)-113))))) ? (min(((+(-949232804))), (((-1585921153) ^ (var_11))))) : (((/* implicit */int) (!(max((arr_1 [i_0]), (arr_1 [i_0]))))))));
        var_16 *= ((/* implicit */_Bool) max((0ULL), (((/* implicit */unsigned long long int) (-(min((((/* implicit */unsigned int) var_7)), (arr_0 [i_0 - 1] [i_0]))))))));
        var_17 = ((/* implicit */unsigned int) (+(max((max((var_6), (((/* implicit */int) var_9)))), (((/* implicit */int) (unsigned short)274))))));
        var_18 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_0 [i_0 - 2] [i_0 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10)))));
        var_19 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_1 [i_0 - 2]))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_20 = (_Bool)0;
        var_21 |= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8)))) * (((var_13) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))));
        var_22 = ((/* implicit */long long int) (((_Bool)1) ? (11784492129244337759ULL) : (((/* implicit */unsigned long long int) 1767705757U))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 2; i_3 < 13; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3 + 2]))) : (1602240056U)))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) var_8))));
                    var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_25 += ((/* implicit */unsigned int) ((_Bool) ((651187941U) % (4051535007U))));
                                var_26 += ((/* implicit */unsigned long long int) ((((arr_8 [i_3 + 2] [i_3]) + (9223372036854775807LL))) >> (((arr_16 [i_3 - 1] [i_3 - 2] [i_4] [10LL] [i_6]) - (1464570160U)))));
                                var_27 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_6 [i_2])))) / (((var_13) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        var_28 = ((/* implicit */int) max((var_28), ((-(((/* implicit */int) arr_5 [i_7 - 1]))))));
                        var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) arr_17 [i_7 - 1] [i_4] [i_4] [i_3 - 1] [i_2]))));
                    }
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_11 [i_2] [i_4]))));
                        var_31 |= (_Bool)1;
                        var_32 = ((/* implicit */unsigned short) (-(arr_9 [i_3 - 2])));
                        var_33 = ((/* implicit */_Bool) (signed char)-96);
                    }
                }
            } 
        } 
        var_34 = ((/* implicit */unsigned short) 4051534993U);
        var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2]))) : (var_5)));
    }
    var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)8750)), (243432273U))))));
}
