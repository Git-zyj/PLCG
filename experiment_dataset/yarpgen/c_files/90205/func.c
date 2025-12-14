/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90205
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                var_10 ^= ((/* implicit */unsigned char) arr_4 [5LL]);
                var_11 = ((/* implicit */int) max((((unsigned long long int) ((((/* implicit */_Bool) arr_1 [(signed char)4] [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) (unsigned short)65535))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0])))))));
                arr_6 [1LL] [3LL] [i_0] = ((/* implicit */unsigned int) var_4);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 1) 
    {
        var_12 = (((_Bool)1) ? (((/* implicit */int) (unsigned short)16383)) : (((/* implicit */int) (unsigned short)16375)));
        var_13 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))));
    }
    for (unsigned char i_3 = 3; i_3 < 9; i_3 += 2) 
    {
        var_14 |= ((/* implicit */short) ((((int) var_4)) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)49152)))))));
        /* LoopSeq 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            arr_14 [1LL] = ((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) arr_13 [i_3 - 2])))));
            arr_15 [9LL] = ((/* implicit */unsigned short) var_9);
            arr_16 [i_4] = ((/* implicit */int) var_8);
            var_15 &= ((/* implicit */unsigned long long int) var_5);
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            var_16 -= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_18 [i_3 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_3 - 2]))) : (var_5))), (((/* implicit */long long int) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_18 [i_3 - 1])))))));
            arr_19 [i_3] [i_5] &= (!(((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_3 - 1])) / (((/* implicit */int) arr_18 [i_3 - 3]))))));
            arr_20 [i_3] [i_5] = ((/* implicit */long long int) arr_9 [(unsigned char)7] [i_5]);
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            arr_24 [i_3] [(_Bool)1] [(_Bool)1] &= (!(((((/* implicit */long long int) ((/* implicit */int) ((short) arr_13 [3])))) >= (((((/* implicit */_Bool) arr_0 [i_3])) ? (-8899297557848612001LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56244))))))));
            var_17 = ((((((/* implicit */_Bool) arr_13 [i_3 + 1])) ? (((/* implicit */int) arr_23 [i_3 + 2] [i_3 + 2] [i_3 + 1])) : (((/* implicit */int) arr_13 [i_3 + 2])))) >= (min((arr_21 [i_3]), (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
            var_18 = ((/* implicit */unsigned long long int) ((unsigned char) max((((/* implicit */long long int) (unsigned short)49152)), (4575657221408423936LL))));
        }
        arr_25 [8ULL] &= ((/* implicit */unsigned short) (+(((/* implicit */int) max((((/* implicit */unsigned short) arr_18 [i_3 + 2])), ((unsigned short)59343))))));
    }
}
