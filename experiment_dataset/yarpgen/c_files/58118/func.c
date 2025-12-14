/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58118
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned int) 1895954485))))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) <= (arr_0 [i_0] [i_0])))) > (((/* implicit */int) arr_1 [i_0]))));
        var_11 = ((/* implicit */_Bool) max((((unsigned int) arr_1 [i_0])), (min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned int) arr_1 [i_0]))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            arr_8 [21] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_1])) >= (((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))))), (((arr_7 [i_0] [i_0] [i_1]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_6 [i_1] [(unsigned char)18]))))))) ? (((/* implicit */int) ((((/* implicit */int) min((arr_7 [i_0] [6] [i_1]), ((_Bool)0)))) < (((/* implicit */int) arr_6 [i_1] [i_1]))))) : (2147483646)));
            var_12 ^= ((/* implicit */int) arr_0 [i_0] [i_0]);
        }
    }
    for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_10 [i_2] [i_2])))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) -2147483646)), (((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (arr_10 [i_2] [i_2]) : (arr_10 [i_2] [i_2])))))) : (1785065613833577423LL)));
        arr_12 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [17U]))) != ((+(arr_10 [i_2] [i_2])))));
        arr_13 [i_2] |= ((/* implicit */unsigned short) min((arr_9 [(unsigned short)15] [i_2]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(arr_10 [i_2] [i_2])))))))));
    }
    for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        var_13 = ((/* implicit */unsigned char) arr_17 [i_3]);
        arr_18 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_3])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((unsigned short)33825), (((/* implicit */unsigned short) arr_9 [i_3] [i_3]))))) ? (((/* implicit */int) (_Bool)0)) : (min((1637186933), (((/* implicit */int) (unsigned char)0))))))) : (64512U)));
        var_14 = ((/* implicit */_Bool) (+(arr_17 [(short)1])));
    }
    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
    {
        arr_22 [i_4] [i_4] = ((/* implicit */int) ((unsigned int) min((arr_4 [i_4] [i_4] [i_4]), (arr_4 [i_4] [i_4] [i_4]))));
        arr_23 [i_4] = ((/* implicit */unsigned int) arr_1 [i_4]);
    }
    /* LoopSeq 1 */
    for (short i_5 = 0; i_5 < 18; i_5 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            arr_29 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_0 [i_5] [i_6])))) ? (((/* implicit */unsigned int) arr_26 [i_5] [i_6])) : ((-(2691072087U)))));
            arr_30 [i_5] [i_6] = ((/* implicit */short) (unsigned char)191);
            arr_31 [i_5] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_28 [i_5]) ? (((/* implicit */int) arr_9 [(signed char)2] [(signed char)2])) : (((/* implicit */int) arr_5 [i_6] [i_6] [i_6]))))) ? (((/* implicit */unsigned int) 1637186949)) : (arr_15 [i_6])));
        }
        arr_32 [i_5] [i_5] |= 2691072087U;
        var_15 = min((((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_24 [i_5])) ? (((/* implicit */int) (short)10430)) : (((/* implicit */int) arr_6 [i_5] [i_5])))), ((~(((/* implicit */int) arr_7 [i_5] [i_5] [i_5]))))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_5]))) / (arr_10 [i_5] [i_5]))));
    }
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((2691072087U), (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) & (var_7)))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) -1637186934)) && (((/* implicit */_Bool) var_6)))))))) : (var_1)));
    var_17 = ((/* implicit */unsigned int) -843489683);
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) var_2)) : (max((64512U), ((~(var_1)))))));
}
