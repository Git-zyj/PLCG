/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66716
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
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (+(max((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))), (((/* implicit */unsigned long long int) var_3))))));
        arr_3 [i_0] [i_0 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (short)8869))));
    }
    for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) var_8))));
        arr_6 [14ULL] &= min(((unsigned short)62876), (min((((/* implicit */unsigned short) arr_4 [i_1])), ((unsigned short)22))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) max((((/* implicit */int) (!(arr_5 [i_3])))), ((~(((/* implicit */int) (short)8869)))))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        for (long long int i_5 = 3; i_5 < 17; i_5 += 4) 
                        {
                            {
                                var_12 *= (!(((/* implicit */_Bool) max((min((((/* implicit */long long int) (_Bool)1)), (var_3))), (((/* implicit */long long int) (short)8880))))));
                                arr_18 [i_2] [i_4] [i_3] [i_1] [i_2] = (+((-(((/* implicit */int) arr_12 [10LL] [i_2] [i_3] [i_5 - 3] [i_5 - 3] [i_3])))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */signed char) max((arr_11 [i_1] [i_1] [i_1]), (((/* implicit */long long int) ((short) arr_8 [(_Bool)1] [18LL] [i_2])))));
                    var_14 = (i_2 % 2 == zero) ? (((/* implicit */long long int) min((min((((unsigned long long int) var_5)), (arr_8 [i_3] [(_Bool)1] [i_2]))), (min((0ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)62192)) << (((((/* implicit */int) arr_15 [i_2])) - (10690))))))))))) : (((/* implicit */long long int) min((min((((unsigned long long int) var_5)), (arr_8 [i_3] [(_Bool)1] [i_2]))), (min((0ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)62192)) << (((((((((/* implicit */int) arr_15 [i_2])) - (10690))) + (9164))) - (13)))))))))));
                }
            } 
        } 
        arr_19 [i_1] = ((/* implicit */_Bool) arr_15 [(_Bool)1]);
    }
    var_15 = ((/* implicit */unsigned short) var_6);
    /* LoopNest 2 */
    for (short i_6 = 1; i_6 < 19; i_6 += 2) 
    {
        for (short i_7 = 1; i_7 < 20; i_7 += 2) 
        {
            {
                arr_26 [i_6] [i_6 + 1] = ((/* implicit */_Bool) ((arr_7 [i_7 + 1] [i_7 + 1]) ? (min((((/* implicit */unsigned long long int) arr_7 [i_7 - 1] [i_7 + 1])), (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_8), (((/* implicit */signed char) arr_7 [i_7 + 1] [i_7 - 1]))))))));
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 21; i_8 += 2) 
                {
                    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                    {
                        {
                            arr_32 [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) min((var_3), (arr_11 [(_Bool)1] [i_6] [i_6])))) < (max((arr_21 [i_9 + 1]), (1152921504606846960ULL)))))) + (((/* implicit */int) ((21ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8857))))))));
                            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)8869)) ? (((/* implicit */int) (short)8869)) : (((/* implicit */int) (unsigned short)55068))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (arr_24 [i_9 + 1] [i_9 + 1] [i_6 + 2]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
