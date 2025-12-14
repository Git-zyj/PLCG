/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75192
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_8))) & (var_3)));
    var_15 = ((/* implicit */unsigned int) var_4);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 15; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    {
                        arr_10 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_4 [i_1]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_6 [i_0] [i_2])))))))) && (((/* implicit */_Bool) ((arr_3 [i_1] [i_3]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))));
                        var_16 = ((/* implicit */int) arr_0 [i_1]);
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */unsigned short) min((14210792054646232324ULL), (((/* implicit */unsigned long long int) (signed char)-124))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 2; i_4 < 23; i_4 += 3) 
    {
        var_18 = arr_11 [(unsigned char)19];
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(arr_13 [(unsigned short)0])))))))));
    }
    for (short i_5 = 0; i_5 < 11; i_5 += 4) 
    {
        var_20 = ((/* implicit */unsigned short) (signed char)123);
        var_21 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_13 [i_5])) && (((/* implicit */_Bool) arr_9 [(unsigned char)9] [i_5] [i_5])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_5]))) : (arr_0 [i_5])));
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (unsigned short)0))));
        var_23 &= ((/* implicit */unsigned char) (~(arr_5 [i_5])));
    }
    var_24 = ((/* implicit */unsigned short) max((var_6), (var_4)));
    var_25 = ((/* implicit */signed char) (~(10247549815644467056ULL)));
}
