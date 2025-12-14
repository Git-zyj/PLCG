/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62226
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
    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) max((((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_10))) : (var_10))), (((/* implicit */long long int) (((+(((/* implicit */int) var_9)))) < (((/* implicit */int) var_11))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_13 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_6)) : (arr_1 [i_0])));
        var_14 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [2U] [i_0]))));
    }
    for (int i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        var_15 = ((/* implicit */unsigned int) arr_3 [i_1]);
        /* LoopNest 2 */
        for (unsigned char i_2 = 1; i_2 < 14; i_2 += 4) 
        {
            for (short i_3 = 3; i_3 < 14; i_3 += 3) 
            {
                {
                    arr_11 [i_1] [i_1] [3LL] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) -239170098))) && (((/* implicit */_Bool) 2195964955U))));
                    var_16 = (((-(min((((/* implicit */int) var_6)), (var_0))))) / (((/* implicit */int) var_4)));
                }
            } 
        } 
        var_17 *= ((/* implicit */signed char) (((!(((/* implicit */_Bool) (short)-24905)))) ? ((~(((((/* implicit */int) arr_7 [14] [i_1] [(unsigned char)6])) << (((3394039827121620742ULL) - (3394039827121620732ULL))))))) : (((/* implicit */int) max((arr_2 [(unsigned char)12]), (arr_10 [(unsigned short)0] [i_1] [i_1]))))));
    }
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)37075)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) -239170098)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) ((var_5) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((long long int) var_7))));
    var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_9)), (var_3))))) : (((((/* implicit */_Bool) (signed char)16)) ? (11449616438679036444ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28461)))))))) ? (((/* implicit */int) ((min((((/* implicit */int) (unsigned short)37075)), (var_0))) <= (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)28460)) : (((/* implicit */int) var_9))))))) : (((((/* implicit */_Bool) var_9)) ? ((~(((/* implicit */int) var_11)))) : (((/* implicit */int) (unsigned short)37075)))));
}
