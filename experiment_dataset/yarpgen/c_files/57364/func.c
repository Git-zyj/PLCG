/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57364
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
    var_10 = ((/* implicit */unsigned long long int) var_6);
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_1])))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [(signed char)2])))))))) : (((/* implicit */int) arr_8 [i_0] [11ULL] [(unsigned short)3] [i_0]))));
                    var_12 = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_9)) - (arr_7 [i_0] [i_1] [i_2])))), (arr_9 [i_1 + 2] [i_2] [i_2]))), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_6 [i_1 - 2] [i_1 + 1] [i_1 - 3])), ((+(((/* implicit */int) var_0)))))))));
                }
            } 
        } 
        arr_10 [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) <= (arr_4 [i_0] [(_Bool)1]))) || (((/* implicit */_Bool) min((var_6), (((/* implicit */short) var_7))))))))) < (((((/* implicit */_Bool) (~(arr_7 [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) (~(2147483647)))) : (((var_8) ^ (((/* implicit */unsigned long long int) var_9))))))));
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) /* same iter space */
    {
        var_13 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3])) ? (arr_12 [(signed char)17]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (arr_12 [i_3]) : (((/* implicit */unsigned long long int) ((arr_11 [2U]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_11 [i_3])))))));
        arr_13 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_3])) ? (var_8) : (arr_12 [(short)2])));
        arr_14 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_3])) | (((/* implicit */int) arr_11 [(unsigned short)16]))))) ? (var_2) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_11 [i_3])))))));
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 3) /* same iter space */
    {
        arr_18 [i_4] [i_4] = ((/* implicit */signed char) arr_16 [i_4] [i_4]);
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_11 [i_4]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_4] [i_4]))) : (var_2)))) ? (((((/* implicit */_Bool) arr_12 [(_Bool)1])) ? (arr_12 [i_4]) : (var_8))) : (arr_12 [i_4])));
    }
    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 3) /* same iter space */
    {
        var_15 -= ((/* implicit */short) (!(((/* implicit */_Bool) ((((var_2) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(unsigned short)9]))))) ? (((((/* implicit */unsigned long long int) var_3)) - (arr_12 [i_5]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) -2147483644)))))))));
        arr_23 [i_5] [i_5] = ((/* implicit */short) var_3);
    }
    var_16 = ((/* implicit */unsigned long long int) var_4);
}
