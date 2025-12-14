/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68121
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
    var_16 = ((/* implicit */signed char) var_8);
    var_17 = ((/* implicit */_Bool) var_2);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (max((((/* implicit */long long int) var_9)), (var_0))))));
        var_18 = arr_1 [i_0 - 1] [(unsigned short)19];
        var_19 = (-(((/* implicit */int) (unsigned char)0)));
    }
    for (long long int i_1 = 3; i_1 < 13; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 14; i_3 += 1) 
            {
                {
                    var_20 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_1 - 1] [i_2]))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [18ULL] [i_2])))))));
                    var_21 = ((/* implicit */unsigned int) var_7);
                    /* LoopNest 2 */
                    for (signed char i_4 = 1; i_4 < 11; i_4 += 1) 
                    {
                        for (short i_5 = 1; i_5 < 13; i_5 += 4) 
                        {
                            {
                                arr_16 [i_1] [i_2] [10ULL] [11U] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [5ULL] [(_Bool)1] [0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_11)))))))) : (((unsigned long long int) (unsigned char)5))));
                                var_22 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_4] [i_2]))))) ? (((/* implicit */int) ((unsigned char) (unsigned char)0))) : (((/* implicit */int) arr_13 [i_1])))));
                                var_23 = ((/* implicit */long long int) ((((/* implicit */int) arr_7 [13ULL] [i_1] [i_1 - 1])) >> ((((+(((/* implicit */int) (signed char)-1)))) + (2)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_24 = ((/* implicit */short) max((((0ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 - 3] [(short)21]))))), (((/* implicit */unsigned long long int) min((6662094386261365036LL), (var_10))))));
    }
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_9)))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)28), (((/* implicit */unsigned char) var_3)))))) : (var_2)))));
}
