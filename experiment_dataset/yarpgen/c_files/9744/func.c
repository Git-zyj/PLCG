/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9744
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
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [0U] [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0] [12]))))))));
        arr_2 [(_Bool)1] = arr_0 [i_0 + 2] [i_0];
    }
    var_14 = ((/* implicit */short) ((743830016U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6482)))));
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) var_10))));
    /* LoopSeq 1 */
    for (int i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        var_16 = ((/* implicit */long long int) ((min(((-(7377411601335054609ULL))), (((/* implicit */unsigned long long int) (+(var_8)))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) arr_4 [i_1]))) ? (arr_5 [6ULL]) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_1])) / (((/* implicit */int) arr_3 [i_1]))))))))));
        var_17 = ((/* implicit */long long int) arr_5 [10U]);
        /* LoopNest 3 */
        for (short i_2 = 2; i_2 < 16; i_2 += 4) 
        {
            for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                for (int i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    {
                        arr_15 [i_1] [i_2 + 3] = var_7;
                        var_18 = ((((/* implicit */_Bool) arr_6 [(unsigned short)0] [4U])) ? (((/* implicit */long long int) ((/* implicit */int) ((var_8) == (((/* implicit */long long int) ((/* implicit */int) ((arr_7 [i_2]) != (0LL))))))))) : (((((/* implicit */_Bool) arr_6 [i_2 + 2] [i_2 + 3])) ? (max((1LL), (((/* implicit */long long int) arr_8 [(_Bool)1])))) : (((/* implicit */long long int) arr_5 [1LL])))));
                        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */int) var_6)) <= (((/* implicit */int) (_Bool)1)))))));
                    }
                } 
            } 
        } 
    }
}
