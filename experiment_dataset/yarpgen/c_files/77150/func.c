/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77150
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
    for (long long int i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            var_14 = ((/* implicit */int) ((((/* implicit */_Bool) (-(7704460553868768004LL)))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])) ? (((((/* implicit */_Bool) -7704460553868767998LL)) ? (-7704460553868768005LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)126))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 7704460553868768004LL)))))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))) : (((-7704460553868768005LL) + (7704460553868768005LL)))))));
            var_15 = ((((/* implicit */_Bool) arr_3 [i_1])) ? ((-(((/* implicit */int) arr_0 [i_0 - 1])))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])) ? (((/* implicit */int) arr_0 [i_0 + 2])) : (((/* implicit */int) (signed char)119)))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                arr_8 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_2 - 1])) ? (arr_4 [i_0] [i_0] [i_2 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                arr_9 [i_0] [i_0] [i_2] = ((/* implicit */int) ((((((/* implicit */_Bool) -1721968260)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_2]))))) <= (((/* implicit */unsigned long long int) -7704460553868768005LL))));
                /* LoopSeq 2 */
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((-7704460553868768005LL) + (9223372036854775807LL))) >> (((7704460553868768005LL) - (7704460553868767969LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)55))) : (7704460553868768004LL)));
                    arr_12 [i_0] [i_1] [i_0] [i_3] [i_0] = ((/* implicit */unsigned int) arr_4 [i_3 + 1] [i_0] [i_2 + 1]);
                    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) var_3))));
                }
                for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                {
                    var_18 = ((/* implicit */signed char) arr_11 [i_0 + 2] [i_0] [i_2] [i_4] [i_4]);
                    var_19 = ((/* implicit */int) (!(arr_5 [i_0])));
                }
            }
            for (unsigned long long int i_5 = 4; i_5 < 13; i_5 += 4) 
            {
                var_20 = ((/* implicit */unsigned short) 151724720737636302ULL);
                arr_17 [i_1] [i_0] = ((/* implicit */unsigned int) -7704460553868768027LL);
            }
        }
        /* vectorizable */
        for (unsigned int i_6 = 0; i_6 < 15; i_6 += 2) 
        {
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_10 [i_0 + 1] [i_0 - 3] [i_0 - 3] [i_0 + 1] [i_0 + 2])) : (((/* implicit */int) (_Bool)0))));
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 9223372036854775776LL)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_8 = 1; i_8 < 13; i_8 += 1) 
            {
                var_23 = 5639635737140964048ULL;
                var_24 = ((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_8]);
                arr_25 [i_0] [i_0 + 2] [i_0] [i_8] = ((/* implicit */unsigned short) max(((-(5639635737140964048ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)62)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) : (arr_3 [i_8])))) ? (1146750023) : (((((/* implicit */int) arr_6 [i_0] [i_7] [i_8 + 1])) >> (((/* implicit */int) arr_1 [i_0])))))))));
            }
            var_25 = ((/* implicit */short) 1355051737247388490LL);
        }
        /* vectorizable */
        for (long long int i_9 = 3; i_9 < 13; i_9 += 3) 
        {
            var_26 = ((/* implicit */signed char) ((arr_16 [i_9] [i_9]) ^ (arr_16 [i_9] [i_9])));
            var_27 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) 1755003610U)) / (8687788240546557332LL))) % ((~(645761893843894632LL)))));
        }
        var_28 = ((/* implicit */int) (((-(-8687788240546557332LL))) >> (((((/* implicit */int) arr_7 [i_0 + 1] [i_0 - 2] [i_0 - 1] [i_0 + 1])) - (5)))));
    }
    var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5)))))));
}
