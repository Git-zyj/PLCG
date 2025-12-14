/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78701
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
    var_18 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_13))))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (-2147483647 - 1))))) : (var_14))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_7), (var_15)))))));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_0 - 1])) || (((/* implicit */_Bool) arr_1 [i_0])))) ? (((/* implicit */int) var_10)) : (2147483647)))) ? (min((arr_0 [i_0]), (arr_0 [i_0]))) : (((((/* implicit */_Bool) max((var_17), (((/* implicit */unsigned long long int) arr_0 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (arr_0 [i_0])))));
        var_20 = ((/* implicit */unsigned long long int) var_10);
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    {
                        var_21 = ((/* implicit */signed char) var_1);
                        var_22 = ((/* implicit */signed char) ((int) ((((/* implicit */int) arr_2 [i_0] [i_0 - 1] [i_0 - 2])) & (-2147483634))));
                        var_23 = ((((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0] [1U])) ? (arr_4 [i_0]) : (((/* implicit */long long int) arr_1 [i_0])))) + (((/* implicit */long long int) arr_9 [i_3])));
                    }
                } 
            } 
            arr_11 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) (short)(-32767 - 1)));
            var_24 += ((/* implicit */int) ((unsigned long long int) var_15));
        }
        for (int i_4 = 0; i_4 < 15; i_4 += 2) 
        {
            arr_15 [i_0] [i_0 - 2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((2056567597U) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)59)))))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-60))))) && (((/* implicit */_Bool) (+(arr_3 [i_0] [i_0] [i_0]))))))) : (((/* implicit */int) arr_6 [i_0] [i_4] [i_4]))));
            arr_16 [i_0] [i_4] &= ((/* implicit */unsigned int) ((unsigned short) 18446744073709551615ULL));
            var_25 = ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_7)))))) ? (((((/* implicit */_Bool) ((unsigned char) var_6))) ? (((/* implicit */unsigned long long int) arr_1 [i_0 - 2])) : ((+(var_17))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)32767)), (arr_3 [(short)0] [i_0] [i_4])))))))));
            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) var_6))));
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 4) 
        {
            arr_19 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((min((5055004014707950576LL), (((/* implicit */long long int) (short)32767)))), (((/* implicit */long long int) arr_8 [i_0 + 1] [i_0] [i_0 - 1]))))) ? (((((/* implicit */_Bool) arr_5 [i_0 - 1])) ? (((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 2] [i_0 - 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
            arr_20 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0] [i_0]);
        }
        for (unsigned long long int i_6 = 1; i_6 < 13; i_6 += 2) 
        {
            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) (short)(-32767 - 1)))));
            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61878))) : ((-((-(10750009108665770023ULL)))))));
        }
        var_29 = ((/* implicit */unsigned int) (!(((((/* implicit */int) var_12)) <= (2147483647)))));
    }
    var_30 *= ((/* implicit */unsigned long long int) var_0);
}
