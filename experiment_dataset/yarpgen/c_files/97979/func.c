/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97979
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
    var_16 += ((/* implicit */signed char) min(((-(2147483640))), (max(((-(133151901))), (((/* implicit */int) var_11))))));
    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) var_12))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */short) min(((+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1)))))), (-133151901)));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        arr_9 [1ULL] [6ULL] [i_3] [i_3] &= ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-18)) && (((/* implicit */_Bool) 12453337546308172604ULL)))))));
                        arr_10 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [5ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2048))) : (max((var_6), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2)))))))));
                    }
                    var_19 *= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) arr_4 [i_0] [i_1])) : (arr_2 [i_0] [i_1])))), (((long long int) -892986069))))) ? (((min((((/* implicit */unsigned long long int) (short)-2016)), (842005656233825020ULL))) & (((unsigned long long int) -133151901)))) : (var_14)));
                    arr_11 [i_0] [i_0] [i_2] &= ((/* implicit */_Bool) (unsigned char)86);
                    var_20 *= ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)3))));
                }
            } 
        } 
        var_21 &= ((/* implicit */short) var_11);
    }
    for (int i_4 = 0; i_4 < 18; i_4 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */_Bool) (-(arr_0 [i_4])));
        arr_14 [i_4] = ((/* implicit */signed char) var_1);
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 13; i_5 += 1) 
    {
        arr_17 [i_5] [9] |= ((/* implicit */unsigned char) 9573119113931498638ULL);
        var_23 = ((var_0) / (var_13));
        var_24 = ((/* implicit */short) 9573119113931498639ULL);
        arr_18 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((int) arr_2 [i_5] [(_Bool)1]));
    }
    var_25 = ((/* implicit */unsigned short) (-(((((/* implicit */int) ((_Bool) 737227926))) + (((/* implicit */int) var_15))))));
}
