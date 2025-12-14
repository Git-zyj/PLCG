/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90976
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
    var_11 += (+(((((/* implicit */_Bool) (unsigned short)51736)) ? (min((550899916015252981LL), (((/* implicit */long long int) 131071)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)31))))));
    var_12 |= min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_6)))) : ((~(-3221961867137425458LL))))), (((/* implicit */long long int) var_5)));
    var_13 = var_5;
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        var_14 = ((/* implicit */_Bool) (~(max((((((/* implicit */int) var_8)) & (((/* implicit */int) (unsigned short)1536)))), (((/* implicit */int) (unsigned char)95))))));
        var_15 = (-((+(var_2))));
        arr_3 [i_0] = ((((/* implicit */int) ((signed char) (unsigned char)240))) ^ ((-(((/* implicit */int) var_6)))));
    }
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        arr_6 [(unsigned char)12] &= ((/* implicit */int) min((((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) (unsigned char)177)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [(_Bool)1]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_1)))))), (min((((/* implicit */long long int) -1308070793)), (var_10)))));
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
            {
                for (int i_4 = 1; i_4 < 13; i_4 += 4) 
                {
                    {
                        var_16 = ((/* implicit */unsigned short) ((arr_2 [i_4 - 1]) * (min((var_2), (arr_2 [i_4 + 1])))));
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) < (252806194U))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_15 [8LL] [9LL] [12ULL] [i_4] [i_4]))) / (var_9))) : (((/* implicit */long long int) (+(((/* implicit */int) var_7)))))))) ? (((/* implicit */int) (short)-15127)) : (((/* implicit */int) (short)-28436))));
                        var_18 = ((/* implicit */unsigned long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3]))) + (var_1)))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_19 = ((((/* implicit */_Bool) -1100977581)) ? (var_3) : (((/* implicit */int) var_7)));
        arr_19 [12] [12ULL] = ((/* implicit */_Bool) (unsigned short)32704);
        var_20 = ((/* implicit */long long int) (!(var_8)));
    }
}
