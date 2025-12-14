/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88819
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
    var_19 = ((/* implicit */unsigned long long int) min((var_4), (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (_Bool)1)) + (var_11)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 3; i_2 < 9; i_2 += 2) 
            {
                for (short i_3 = 2; i_3 < 7; i_3 += 3) 
                {
                    {
                        arr_13 [i_0] [i_1] [i_0 - 1] [i_0] &= ((/* implicit */unsigned long long int) ((unsigned short) arr_1 [i_1] [i_3 - 2]));
                        var_20 = (i_0 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) >> (((arr_11 [i_0]) + (641157590)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) >> (((((arr_11 [i_0]) + (641157590))) - (2117758419))))));
                    }
                } 
            } 
            var_21 += ((/* implicit */_Bool) ((unsigned char) arr_1 [i_1] [i_0 + 1]));
            arr_14 [i_1] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_18)) <= (((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_0 - 2]))));
            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((arr_2 [i_0 - 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_0]))))))));
            var_23 = ((/* implicit */short) (+((-(((/* implicit */int) var_18))))));
        }
        for (long long int i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) arr_11 [0LL]))));
            arr_18 [(_Bool)1] [i_4] [(_Bool)1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_17 [i_0 - 1] [i_0 - 2])));
        }
        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (_Bool)1))));
        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((((/* implicit */_Bool) arr_0 [(short)4] [i_0 + 1])) ? (arr_7 [i_0 + 1] [i_0] [i_0 + 1] [(short)4]) : (((/* implicit */unsigned long long int) arr_11 [(signed char)0]))))));
    }
    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 2) /* same iter space */
    {
        var_27 += ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((unsigned int) 13422149132180853707ULL)) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) ((short) (_Bool)1)))) / (-4248214084329364271LL))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4248214084329364270LL)))))))))));
    }
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 17; i_6 += 2) /* same iter space */
    {
        arr_24 [i_6] [i_6] = ((/* implicit */int) ((arr_22 [i_6]) > (((var_1) ? (var_11) : (((/* implicit */int) arr_20 [i_6]))))));
        var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_6])) ? (arr_19 [i_6]) : (arr_19 [i_6]))))));
    }
    var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) min((((/* implicit */unsigned long long int) min((2147483646), (((/* implicit */int) (unsigned short)62187))))), (var_15))))));
    var_31 = ((/* implicit */unsigned char) var_4);
    var_32 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_3))) ? (var_17) : ((~(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) ((var_4) % (var_11)))) ? (((/* implicit */long long int) var_11)) : (min((((/* implicit */long long int) (signed char)-120)), (-6141799512759712682LL))))));
}
