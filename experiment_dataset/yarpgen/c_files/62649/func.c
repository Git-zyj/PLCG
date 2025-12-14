/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62649
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            arr_6 [i_0] = ((/* implicit */int) (((((!(((/* implicit */_Bool) 7584637153523643053ULL)))) ? (((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)0))) : (var_3))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_12))))));
            var_20 = (_Bool)0;
            var_21 = min((((/* implicit */unsigned int) (+(((/* implicit */int) var_10))))), (arr_0 [i_0 + 1] [i_1 + 4]));
            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (_Bool)1))));
        }
        arr_7 [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_4 [i_0 + 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0 + 1])))))))) * (max((4294967295LL), (((/* implicit */long long int) (_Bool)1))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) /* same iter space */
        {
            arr_11 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_2 + 1])) ? (arr_10 [i_0] [i_0 + 1] [15LL]) : (arr_10 [i_0] [i_0 + 1] [i_0 + 1])));
            var_23 |= ((/* implicit */unsigned short) (((!(arr_8 [i_2 + 1] [18U] [18ULL]))) ? (var_17) : (((/* implicit */unsigned long long int) ((long long int) var_2)))));
        }
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) /* same iter space */
        {
            var_24 += ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((max((var_13), (((/* implicit */int) arr_9 [i_0 + 1] [i_3] [i_3])))) >= (((/* implicit */int) ((_Bool) var_9))))))) * (((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0 + 1]))))));
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 4) 
            {
                for (int i_5 = 1; i_5 < 16; i_5 += 4) 
                {
                    {
                        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((unsigned int) (((-(var_17))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))))))))));
                        var_26 ^= ((/* implicit */unsigned char) ((short) var_4));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned short i_6 = 1; i_6 < 18; i_6 += 2) 
            {
                arr_23 [i_0] [i_0] [i_6] [i_6] |= ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) arr_1 [i_6 - 1])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_10)))));
                var_27 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(arr_8 [i_0] [(unsigned char)4] [i_0])))) >= (var_13)));
                var_28 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_18 [i_0 + 1] [i_3 + 1] [i_6] [i_6] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_18 [i_0 + 1] [i_3] [9] [1] [i_0])))));
            }
            arr_24 [i_0] [i_3] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_3]))));
        }
    }
    for (unsigned char i_7 = 2; i_7 < 21; i_7 += 3) 
    {
        arr_29 [2] [18] = ((/* implicit */long long int) ((_Bool) (!(((/* implicit */_Bool) var_7)))));
        var_29 += ((/* implicit */_Bool) ((((/* implicit */_Bool) max((7584637153523643053ULL), (var_9)))) ? (var_13) : (((/* implicit */int) ((short) 160432875)))));
        var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) - ((~(690943092)))))))));
    }
    var_31 += ((/* implicit */unsigned short) min((var_0), (((/* implicit */unsigned int) var_14))));
}
