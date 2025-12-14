/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62418
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                {
                    var_16 += ((/* implicit */unsigned char) (~(715987464)));
                    arr_7 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */int) var_2);
                    var_17 = ((/* implicit */unsigned long long int) ((unsigned char) (+(((/* implicit */int) arr_2 [i_2 - 1] [i_2])))));
                    var_18 -= ((/* implicit */unsigned short) ((long long int) arr_4 [(unsigned short)18] [(unsigned short)18] [(unsigned short)18]));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) var_0);
    var_20 = ((long long int) var_9);
    /* LoopSeq 3 */
    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_4 = 3; i_4 < 13; i_4 += 1) /* same iter space */
        {
            arr_12 [i_3] = ((/* implicit */unsigned short) (~(1241400004)));
            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_4 + 1])) ? (arr_10 [i_4 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((unsigned long long int) arr_10 [i_4 + 2])) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)242))))))))));
        }
        for (unsigned char i_5 = 3; i_5 < 13; i_5 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_5] [i_5 - 1])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_13 [i_5] [i_5 - 1]))))) ? (((/* implicit */int) arr_11 [i_3] [i_3] [i_5 - 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
            var_23 ^= ((/* implicit */unsigned long long int) var_2);
        }
        arr_15 [3ULL] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_0 [i_3] [i_3])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)61038))))) : (arr_0 [(unsigned short)18] [i_3])));
        arr_16 [i_3] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) ((unsigned char) 1987265518808775698LL))) : (((/* implicit */int) arr_11 [i_3] [i_3] [i_3])))));
    }
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 16; i_6 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned short) (-(arr_4 [i_6] [i_6] [i_6])));
        var_25 = ((long long int) (unsigned short)61038);
        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_6] [i_6])) ? (((((/* implicit */_Bool) var_6)) ? (5062400778326529186ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)169))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_7))))));
    }
    for (unsigned short i_7 = 0; i_7 < 16; i_7 += 2) /* same iter space */
    {
        arr_24 [i_7] = ((long long int) ((int) arr_5 [i_7] [i_7] [i_7]));
        arr_25 [i_7] [i_7] = var_3;
        arr_26 [i_7] [i_7] = ((/* implicit */long long int) arr_21 [i_7]);
    }
}
