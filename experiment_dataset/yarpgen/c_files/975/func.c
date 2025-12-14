/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/975
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
    var_15 ^= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (((var_9) >> (((((/* implicit */int) var_8)) - (26813))))))), (((/* implicit */unsigned long long int) var_10))));
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((long long int) (+(var_1)))) : (((/* implicit */long long int) ((/* implicit */int) var_13)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) (~((-2147483647 - 1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_1] [i_0] [i_2]))) : (((((/* implicit */_Bool) arr_3 [i_2])) ? (arr_3 [i_1]) : (arr_3 [i_1])))));
                    arr_6 [i_2] = ((/* implicit */unsigned long long int) ((((unsigned long long int) (-(((/* implicit */int) (unsigned char)100))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_0] [i_2])) & (var_5))))))));
                    var_18 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_4 [i_0] [i_1] [i_0] [i_2])) + (((/* implicit */int) arr_4 [i_0] [i_0] [i_1] [i_2]))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((0U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10))))))))));
    /* LoopSeq 3 */
    for (signed char i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) arr_8 [i_3] [i_3]);
        var_21 &= ((/* implicit */short) arr_7 [i_3]);
        var_22 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned short)15)) ? (((((/* implicit */_Bool) arr_7 [i_3])) ? (arr_7 [i_3]) : (arr_7 [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8)))))));
        var_23 = ((/* implicit */unsigned short) max(((-(arr_7 [i_3]))), (((/* implicit */unsigned int) ((unsigned short) arr_7 [i_3])))));
        var_24 = ((/* implicit */unsigned int) ((((min((((/* implicit */unsigned long long int) -9223372036854775806LL)), (13477583248036293953ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3] [5ULL]))))) >= (((/* implicit */unsigned long long int) 7846818814902433258LL))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) /* same iter space */
    {
        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_4] [i_4])) ? (((unsigned int) 4065349257294139840ULL)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_4]))))))));
        var_26 = ((/* implicit */unsigned short) ((signed char) arr_10 [i_4] [i_4]));
        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_7 [14ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_4] [10])))))) ? (((((/* implicit */int) (unsigned char)108)) + (((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) arr_10 [i_4] [i_4]))));
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 2) /* same iter space */
    {
        arr_13 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_5])) ? (var_7) : (((((/* implicit */_Bool) arr_12 [(unsigned short)7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_5] [i_5]))) : (var_1)))));
        arr_14 [(short)7] [(short)7] = ((/* implicit */int) arr_12 [i_5]);
        arr_15 [i_5] = ((/* implicit */int) var_4);
    }
}
