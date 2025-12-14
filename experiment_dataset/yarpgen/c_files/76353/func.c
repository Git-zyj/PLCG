/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76353
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
    var_16 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_12) : (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_0)))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_13)) ? (var_8) : (((/* implicit */int) var_6)))))) : ((~((+(var_11)))))));
    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((unsigned int) (-(var_7)))) : (var_5))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) /* same iter space */
        {
            var_18 = arr_2 [i_0];
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) arr_1 [i_1]);
            arr_6 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) >> (((arr_0 [i_1]) - (748467012))))))));
            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_4 [(unsigned short)15])) ? (((/* implicit */unsigned long long int) var_8)) : (arr_2 [i_0]))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_2) : (((/* implicit */long long int) var_7))))))) << (((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) var_9)) : (arr_2 [14]))) - (1391689387ULL))))))));
        }
        for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) /* same iter space */
        {
            arr_10 [i_2] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(_Bool)1]))) * ((-(arr_2 [i_0])))));
            arr_11 [i_2] [i_2] [i_0] = ((/* implicit */int) arr_1 [i_0]);
            arr_12 [i_2] [i_0] [i_2] = ((/* implicit */unsigned char) (((-(((/* implicit */int) ((var_0) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2])))))))) <= (((int) arr_4 [i_0]))));
        }
        for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) /* same iter space */
        {
            arr_15 [i_0] [(unsigned char)14] [i_0] |= ((/* implicit */unsigned short) var_13);
            arr_16 [i_3] [i_3] = ((/* implicit */unsigned short) ((unsigned long long int) (~((~(var_7))))));
            arr_17 [i_0] [i_3] [i_0] = ((/* implicit */int) arr_9 [i_3] [i_0] [6ULL]);
            /* LoopNest 2 */
            for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
            {
                for (unsigned short i_5 = 0; i_5 < 24; i_5 += 1) 
                {
                    {
                        var_20 *= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_3]))))) ? ((-(((/* implicit */int) arr_14 [6ULL] [6ULL])))) : (var_15)));
                        var_21 = ((/* implicit */signed char) arr_3 [i_5]);
                        arr_26 [i_3] [i_3] [i_4] [i_5] = ((unsigned short) var_5);
                    }
                } 
            } 
        }
        var_22 = ((/* implicit */int) max((var_22), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [(_Bool)0])) ? (((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_23 [i_0] [i_0] [18ULL] [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_0 [i_0])))))) : ((-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) >= (var_10))))))))));
        arr_27 [i_0] = ((/* implicit */short) var_13);
    }
    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_6] [i_6])) ? (((/* implicit */int) ((((/* implicit */_Bool) ((long long int) arr_20 [20U]))) || (((/* implicit */_Bool) arr_14 [4] [i_6]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_6])))))));
        arr_30 [15] = ((/* implicit */unsigned int) arr_21 [i_6] [i_6] [i_6]);
    }
}
