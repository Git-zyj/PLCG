/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95862
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
    var_13 *= ((/* implicit */_Bool) max(((-(((/* implicit */int) var_12)))), (max((((((/* implicit */_Bool) 933669537)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) 933669516)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -933669560)) ? (((/* implicit */int) var_0)) : (933669536))))));
        var_14 = ((/* implicit */_Bool) ((long long int) var_11));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [3U] [i_1])) ? (((((/* implicit */_Bool) -933669538)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1] [i_1]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0)))))));
            var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0] [(unsigned short)21] [i_1]))))) ? (((((/* implicit */_Bool) (short)32765)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))));
            /* LoopNest 2 */
            for (unsigned int i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    {
                        var_17 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (933669532) : (((/* implicit */int) var_0))));
                        var_18 *= ((/* implicit */_Bool) ((((var_3) - (((/* implicit */unsigned int) 933669523)))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2 + 1])))));
                        arr_12 [i_1] [i_1] = (short)-32766;
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (signed char i_4 = 1; i_4 < 22; i_4 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_5 = 1; i_5 < 22; i_5 += 2) 
                {
                    for (short i_6 = 4; i_6 < 23; i_6 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) (-(((((/* implicit */int) var_10)) - (((/* implicit */int) var_11))))));
                            var_20 *= ((/* implicit */int) ((((/* implicit */int) arr_16 [i_6] [i_0] [i_0] [i_0] [i_0])) <= (((/* implicit */int) arr_16 [i_0] [i_6] [i_4 + 2] [i_5] [i_6]))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned int) max((var_21), (var_4)));
            }
        }
        for (short i_7 = 0; i_7 < 24; i_7 += 3) 
        {
            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))));
            var_23 = ((/* implicit */unsigned char) ((var_0) && (((/* implicit */_Bool) var_7))));
            var_24 += ((/* implicit */short) (~(((((/* implicit */_Bool) arr_6 [i_7] [i_0] [i_0])) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_7] [i_7])) : (((/* implicit */int) var_2))))));
            /* LoopSeq 2 */
            for (int i_8 = 1; i_8 < 23; i_8 += 3) 
            {
                arr_26 [i_0] [i_7] [i_7] [i_8 + 1] = (((~(1904052980798982904LL))) % (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))));
                var_25 = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)7)) ? (933669553) : (933669537))) / (((/* implicit */int) (short)32765))));
            }
            for (short i_9 = 0; i_9 < 24; i_9 += 2) 
            {
                arr_29 [i_0] [i_0] [i_0] [i_7] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8))))) && (((/* implicit */_Bool) var_8)));
                arr_30 [i_7] [i_7] [i_7] = ((/* implicit */long long int) ((_Bool) var_5));
                var_26 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_3)) ? (1032192LL) : (((/* implicit */long long int) -933669537)))) << (((((((/* implicit */_Bool) var_10)) ? (-1295655769) : (((/* implicit */int) (signed char)108)))) + (1295655783)))));
            }
        }
        for (unsigned short i_10 = 1; i_10 < 22; i_10 += 3) 
        {
            arr_34 [i_0] [i_0] = ((/* implicit */_Bool) ((short) arr_9 [11] [i_10] [10] [i_0] [i_0]));
            var_27 = ((/* implicit */long long int) var_2);
        }
    }
    for (signed char i_11 = 0; i_11 < 11; i_11 += 1) 
    {
        var_28 = ((/* implicit */unsigned char) ((int) var_4));
        var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (~((-((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [(signed char)10]))) : (var_3))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_12 = 1; i_12 < 10; i_12 += 3) 
        {
            var_30 = (+((-(((/* implicit */int) (unsigned short)0)))));
            arr_40 [6] &= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) >= (var_4)));
            var_31 = arr_24 [i_11];
        }
    }
}
