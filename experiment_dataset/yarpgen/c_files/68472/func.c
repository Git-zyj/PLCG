/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68472
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_11 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) var_5))))) >> ((((+(288217517U))) - (288217488U)))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_2)))) : (16990639389524067402ULL)))));
        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((_Bool) var_0)) ? (((/* implicit */unsigned long long int) max((4006749778U), (((/* implicit */unsigned int) (unsigned char)254))))) : (((((/* implicit */_Bool) var_9)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_2 [i_0]) < (18446744073709551606ULL))))) : ((~(max((((/* implicit */unsigned int) var_7)), (288217517U)))))));
    }
    /* LoopNest 2 */
    for (long long int i_1 = 1; i_1 < 13; i_1 += 4) 
    {
        for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)652)) / (((/* implicit */int) ((unsigned char) (~(((/* implicit */int) (_Bool)0))))))));
                            var_14 = ((/* implicit */_Bool) (~(536604755764077060LL)));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned int) var_4);
                var_16 = ((/* implicit */unsigned char) arr_7 [7ULL] [7ULL] [7ULL]);
                arr_13 [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((288217517U) - (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) (unsigned char)236)) ? (var_2) : (((/* implicit */long long int) var_0))))))) ? (min((var_10), (((/* implicit */unsigned long long int) 288217517U)))) : (((/* implicit */unsigned long long int) var_2))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) ((min((1456104684185484213ULL), (((((/* implicit */_Bool) 2ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_10))))) < (((max((3005998766620150435ULL), (((/* implicit */unsigned long long int) var_5)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
}
