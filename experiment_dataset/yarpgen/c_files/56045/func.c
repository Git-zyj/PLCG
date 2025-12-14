/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56045
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 14; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) ((signed char) arr_0 [i_0] [i_1]))) <= (((((/* implicit */int) arr_0 [i_0] [i_1])) + (((/* implicit */int) var_11)))))));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    arr_10 [3] [3] = ((((/* implicit */int) ((signed char) (-(((/* implicit */int) var_6)))))) - (var_14));
                    arr_11 [i_0] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) ((int) arr_8 [i_0]))) ? (((/* implicit */int) ((unsigned short) (signed char)117))) : (((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_8)))))));
                    arr_12 [i_0] [(short)0] = ((/* implicit */unsigned char) ((((var_5) ^ (((/* implicit */unsigned long long int) arr_7 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1])))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_7 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1]) > (((/* implicit */int) (signed char)-73))))))));
                }
                arr_13 [i_1] = ((/* implicit */signed char) ((((((((/* implicit */int) var_8)) / (arr_2 [i_1] [i_0] [i_0]))) + (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (signed char)-72)) : (((/* implicit */int) (unsigned short)62426)))))) + ((((+(arr_2 [i_0] [i_1] [i_0]))) + (arr_8 [i_0])))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_3 = 0; i_3 < 13; i_3 += 3) /* same iter space */
    {
        var_16 &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_14 [i_3] [2LL])) && (((/* implicit */_Bool) arr_14 [i_3] [(unsigned char)8])))) ? (((unsigned long long int) ((3630118722U) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */int) var_11)) % (((/* implicit */int) var_9)))))))));
        arr_16 [(short)0] &= ((/* implicit */signed char) ((unsigned long long int) max((arr_15 [i_3]), (((/* implicit */unsigned long long int) arr_1 [i_3] [i_3])))));
        var_17 = ((((/* implicit */int) arr_9 [i_3] [i_3] [i_3])) != (max((((/* implicit */int) ((signed char) var_11))), (arr_3 [i_3] [i_3] [i_3]))));
        arr_17 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_9))) ? (((((/* implicit */_Bool) var_3)) ? (arr_8 [i_3]) : (((/* implicit */int) var_1)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_3])) && (((/* implicit */_Bool) var_8)))))));
    }
    for (long long int i_4 = 0; i_4 < 13; i_4 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_5 = 1; i_5 < 12; i_5 += 3) 
        {
            for (short i_6 = 0; i_6 < 13; i_6 += 3) 
            {
                {
                    var_18 = ((/* implicit */int) min((var_18), (max(((-(((/* implicit */int) (signed char)107)))), (((/* implicit */int) (signed char)-97))))));
                    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_4] [i_4] [i_4]))))) ? ((-(arr_2 [i_4] [i_5] [i_6]))) : (((/* implicit */int) ((unsigned short) arr_23 [i_4] [i_6])))))) || (((/* implicit */_Bool) ((signed char) var_6))))))));
                }
            } 
        } 
        arr_26 [i_4] = ((((/* implicit */_Bool) (+(arr_20 [i_4])))) ? (((((/* implicit */_Bool) (unsigned short)62426)) ? (((((/* implicit */_Bool) arr_2 [i_4] [i_4] [14ULL])) ? (((/* implicit */int) (_Bool)1)) : (-1502349111))) : (((/* implicit */int) var_9)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) ((((/* implicit */int) var_3)) << (((((-1502349085) + (1502349108))) - (12))))))))));
    }
}
