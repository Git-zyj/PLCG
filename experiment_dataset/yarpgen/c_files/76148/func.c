/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76148
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */signed char) (-((+(12257916757998911552ULL)))));
        var_14 = ((/* implicit */_Bool) var_2);
    }
    for (int i_1 = 1; i_1 < 17; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) ((signed char) ((arr_5 [i_1 + 2]) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 + 2]))) : (var_10))));
        var_15 = ((/* implicit */short) ((arr_5 [i_1 + 1]) ? (((/* implicit */int) var_3)) : (var_7)));
    }
    /* vectorizable */
    for (unsigned char i_2 = 1; i_2 < 20; i_2 += 4) 
    {
        var_16 -= ((/* implicit */unsigned long long int) var_2);
        var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2 + 1] [i_2]))));
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 22; i_4 += 2) 
            {
                for (signed char i_5 = 2; i_5 < 18; i_5 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_6 = 0; i_6 < 22; i_6 += 4) /* same iter space */
                        {
                            var_18 = (+(((/* implicit */int) arr_9 [i_3] [i_3])));
                            var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_5] [i_3])) || (((/* implicit */_Bool) 3)))))));
                        }
                        for (short i_7 = 0; i_7 < 22; i_7 += 4) /* same iter space */
                        {
                            arr_24 [i_5] [i_5] [11] [i_5] [(signed char)0] [i_2] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_2] [i_2] [i_2] [i_5 - 1] [i_7])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)10)))))));
                            var_20 = var_12;
                            var_21 |= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_20 [i_2] [i_5] [10LL] [i_5] [i_5]))))));
                        }
                        /* LoopSeq 3 */
                        for (short i_8 = 2; i_8 < 21; i_8 += 1) 
                        {
                            arr_27 [i_8] [i_2] [i_2] [i_3] = ((/* implicit */_Bool) var_6);
                            arr_28 [i_8] [i_2] [i_4] [i_3] [i_2] [i_2] = ((2147483642) + (((/* implicit */int) (signed char)-123)));
                        }
                        for (int i_9 = 0; i_9 < 22; i_9 += 1) 
                        {
                            var_22 ^= (!(((/* implicit */_Bool) -1)));
                            var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 2147483647))));
                        }
                        for (short i_10 = 1; i_10 < 21; i_10 += 2) 
                        {
                            var_24 = (!(arr_19 [i_3] [1ULL] [i_3] [i_5 + 3] [i_10 - 1] [i_10 - 1] [i_10 - 1]));
                            var_25 ^= ((/* implicit */_Bool) arr_18 [i_2] [i_4] [(signed char)0] [i_4] [i_5 - 2] [i_10 - 1]);
                            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) var_1))));
                            var_27 -= ((/* implicit */signed char) -2147483643);
                        }
                        var_28 -= ((/* implicit */unsigned char) (-(((/* implicit */int) var_6))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_11 = 4; i_11 < 21; i_11 += 3) 
                        {
                            var_29 ^= ((/* implicit */int) (-(arr_22 [i_2] [i_2 + 2] [i_2 + 2] [i_2 + 1] [i_2])));
                            var_30 |= ((unsigned long long int) -2147483642);
                            arr_38 [(signed char)19] [i_2] [i_5 + 2] = ((/* implicit */unsigned long long int) (-(-1053685689)));
                        }
                    }
                } 
            } 
        } 
        var_31 = ((/* implicit */signed char) 2147483642);
    }
    var_32 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) max((var_8), (((/* implicit */short) var_3))))) : (((((/* implicit */int) var_0)) >> (((var_9) - (805512278111013181ULL)))))))), (3677710189U)));
    var_33 *= ((/* implicit */unsigned int) var_0);
}
