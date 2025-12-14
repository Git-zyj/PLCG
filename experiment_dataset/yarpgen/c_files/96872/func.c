/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96872
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
    var_13 = ((/* implicit */unsigned int) ((((var_10) & (((/* implicit */int) var_0)))) & (((/* implicit */int) var_9))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 4; i_0 < 15; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) ((long long int) var_9)))) >= (max((((/* implicit */int) var_0)), (((arr_3 [i_1] [i_1]) / (((/* implicit */int) (short)-5342))))))));
                    var_15 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_2))))) - ((+(arr_2 [i_0] [i_1] [i_0 - 2])))));
                    var_16 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) -3530935862307043123LL)) ? (((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_0])) * (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                }
            } 
        } 
        var_17 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (arr_3 [i_0] [i_0]) : (((/* implicit */int) var_7))))) == (((((/* implicit */long long int) ((/* implicit */int) var_5))) ^ (var_6)))))) >= (((/* implicit */int) var_5))));
        var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_2 [i_0 - 1] [i_0 - 1] [i_0 - 1])), (var_3)))) ? (var_4) : (((/* implicit */unsigned long long int) arr_1 [i_0 - 2]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_6)))) : (((var_3) - (((/* implicit */long long int) ((arr_2 [i_0] [i_0] [i_0]) + (((/* implicit */unsigned int) arr_3 [i_0 + 1] [i_0 - 2]))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 3) 
    {
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) >= ((+(((/* implicit */int) arr_6 [i_3] [(_Bool)1])))))))));
        arr_8 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((arr_7 [i_3] [i_3]) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3] [i_3])))));
        var_20 = ((/* implicit */unsigned long long int) ((long long int) arr_7 [i_3] [i_3]));
        var_21 -= ((/* implicit */signed char) var_12);
    }
    /* vectorizable */
    for (long long int i_4 = 3; i_4 < 15; i_4 += 3) 
    {
        var_22 = ((/* implicit */unsigned short) ((short) 3530935862307043151LL));
        var_23 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_4 + 1]))));
        var_24 = ((/* implicit */long long int) arr_11 [i_4]);
    }
    var_25 = ((/* implicit */int) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (max((var_4), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) var_6)))) >= (((/* implicit */unsigned long long int) 4294967278U))));
}
