/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61795
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
    var_12 = ((/* implicit */long long int) max((var_12), (min((var_4), (((/* implicit */long long int) (-(((/* implicit */int) var_0)))))))));
    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) var_3))));
    var_14 = ((/* implicit */short) (unsigned char)250);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((unsigned char) ((unsigned short) ((unsigned long long int) arr_2 [i_0] [i_0]))));
        arr_5 [2U] [8LL] = ((/* implicit */_Bool) ((unsigned char) arr_3 [(unsigned char)9] [i_0]));
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) min((var_7), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */unsigned int) var_10))))) ? (((int) arr_3 [i_0] [i_0])) : (var_5)))))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [21LL])) || (((/* implicit */_Bool) var_4)))))) : (arr_1 [i_1])));
        var_17 = ((/* implicit */int) arr_0 [i_1 - 1]);
        /* LoopSeq 1 */
        for (signed char i_2 = 2; i_2 < 17; i_2 += 1) 
        {
            arr_11 [i_2] = arr_3 [i_2 + 3] [i_2 + 1];
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    {
                        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_4] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)26))) : (var_7)))) ? (((((/* implicit */int) arr_15 [i_2])) ^ (((/* implicit */int) arr_7 [i_1] [i_2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2 + 1])))))));
                        var_19 = ((/* implicit */long long int) arr_12 [i_1]);
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) ((long long int) var_7)))));
                        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (!((!((_Bool)1))))))));
                        arr_16 [(signed char)6] [(signed char)6] [(signed char)6] [i_3] [i_2] [(signed char)6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) (short)-15))))));
                    }
                } 
            } 
            var_22 = ((((/* implicit */_Bool) (+(arr_13 [i_2] [(_Bool)1] [(_Bool)1] [i_2])))) ? (((8433960705064936889ULL) + (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_2]))));
            var_23 ^= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (arr_0 [(unsigned char)9])));
            arr_17 [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_1] [i_2]))) <= (arr_12 [i_1])));
        }
        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) arr_6 [i_1 - 1]))));
        /* LoopSeq 1 */
        for (short i_5 = 0; i_5 < 20; i_5 += 1) 
        {
            arr_20 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [6LL])) && (((/* implicit */_Bool) arr_3 [i_1] [i_1 - 1]))));
            var_25 = ((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_1 - 1] [i_1 - 1] [i_1])) & (((/* implicit */int) arr_10 [i_1 - 1] [i_1 - 1] [i_1]))));
        }
    }
    /* LoopNest 2 */
    for (long long int i_6 = 0; i_6 < 23; i_6 += 1) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            {
                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)18723)))))) : (min((arr_24 [i_6] [i_6]), (((/* implicit */unsigned long long int) arr_23 [i_6] [i_7]))))));
                arr_26 [i_6] [i_7] = ((/* implicit */long long int) arr_21 [i_7]);
            }
        } 
    } 
}
