/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95643
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
    var_18 = (+(((/* implicit */int) var_14)));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8244538097161803500LL)) ? (-8244538097161803500LL) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (((((/* implicit */int) arr_1 [(unsigned short)17])) % (((/* implicit */int) var_8)))) : (((/* implicit */int) ((unsigned char) var_9)))))) ? (((/* implicit */int) arr_1 [i_0])) : (max(((+(((/* implicit */int) var_12)))), (((/* implicit */int) arr_0 [i_0]))))));
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_1 [i_0])))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((_Bool) (unsigned short)58749))))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) ((long long int) arr_0 [i_1]));
        arr_4 [(unsigned char)2] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_1] [i_1]))))))) || (((/* implicit */_Bool) arr_3 [i_1] [i_1]))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 17; i_2 += 3) /* same iter space */
    {
        arr_8 [i_2] &= ((/* implicit */_Bool) 1475111888);
        /* LoopSeq 1 */
        for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_7 [(unsigned char)10]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) / (((/* implicit */int) arr_9 [i_2 + 1] [i_2 - 1] [i_2 + 1]))));
            arr_11 [i_3] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_2 - 1] [i_3])) >= (((/* implicit */int) ((((/* implicit */int) (signed char)112)) >= (((/* implicit */int) var_17)))))));
        }
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 17; i_4 += 3) /* same iter space */
    {
        arr_16 [i_4] = ((/* implicit */_Bool) (~(var_3)));
        var_23 |= ((/* implicit */short) ((((/* implicit */int) arr_1 [i_4])) == (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_4] [i_4 + 1] [12])) || (var_2))))));
        arr_17 [5U] [i_4 - 1] = ((signed char) ((((/* implicit */_Bool) arr_15 [(unsigned char)15])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)35))));
        var_24 = ((((/* implicit */_Bool) 8244538097161803499LL)) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))))) : (var_3));
    }
    /* LoopNest 3 */
    for (unsigned short i_5 = 2; i_5 < 16; i_5 += 3) 
    {
        for (signed char i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            for (short i_7 = 0; i_7 < 18; i_7 += 2) 
            {
                {
                    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((unsigned char) var_2)))));
                    var_26 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_12 [i_5 + 2])) ? (((/* implicit */int) arr_12 [i_5 + 2])) : (((/* implicit */int) arr_12 [i_5 + 2]))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_8 = 0; i_8 < 25; i_8 += 3) 
    {
        for (short i_9 = 0; i_9 < 25; i_9 += 2) 
        {
            {
                arr_32 [i_8] [(unsigned char)9] [i_8] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (signed char)-117)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) : (((((/* implicit */_Bool) arr_28 [i_8])) ? (((/* implicit */unsigned long long int) arr_29 [i_9] [i_9])) : (arr_28 [i_8])))));
                var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((((/* implicit */unsigned long long int) arr_30 [22] [i_8] [i_9])) - (arr_28 [i_9]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_28 [i_8])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))))) : (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [(signed char)24]))) : (arr_30 [i_8] [i_8] [(signed char)5]))) + (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_14))))))));
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_8))) != (min((((/* implicit */long long int) (unsigned char)0)), (8244538097161803500LL))))))));
}
