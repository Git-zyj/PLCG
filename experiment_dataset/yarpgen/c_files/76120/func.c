/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76120
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
    var_12 |= ((/* implicit */signed char) ((var_10) - (max((var_10), (((/* implicit */unsigned long long int) var_11))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            {
                var_13 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((unsigned int) var_7)) % (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 - 1])))))) ? (arr_4 [i_0] [i_1] [i_1 + 2]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) min((arr_2 [i_0]), ((unsigned char)46)))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) + (arr_8 [i_1] [i_2])))) ? (((((/* implicit */_Bool) var_0)) ? (arr_1 [i_2]) : (16509399303746523594ULL))) : (((/* implicit */unsigned long long int) ((long long int) var_1)))));
                        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) 4U)) * (0LL)))) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [i_3 - 1] [i_1 + 2] [i_1 + 2])) : (arr_8 [i_1 + 1] [i_3 - 1])));
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_8 [i_0] [i_2])))) ? (arr_8 [i_1 - 1] [i_0 + 1]) : ((~(var_10)))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 17; i_4 += 4) /* same iter space */
                    {
                        var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_10 [i_0] [i_1 - 1]))));
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (signed char)-34))) ? (((/* implicit */int) (signed char)96)) : ((+(((/* implicit */int) (_Bool)1))))));
                        arr_13 [i_0] [9U] [i_2] [i_4] = ((unsigned char) (~(((/* implicit */int) arr_2 [i_0 - 1]))));
                    }
                    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 4) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned short) (+(arr_1 [i_1 + 1])));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 1) 
                        {
                            var_20 = ((/* implicit */_Bool) (-(arr_8 [i_0] [i_0 + 3])));
                            arr_19 [i_0] [i_0] [i_2] [i_5] [i_5] [(unsigned char)13] [i_1 + 1] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)9334)) : (((/* implicit */int) arr_0 [i_0])))));
                        }
                        for (int i_7 = 0; i_7 < 17; i_7 += 2) 
                        {
                            var_21 = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_1 + 2])) * (((/* implicit */int) var_6))));
                            var_22 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_10 [(signed char)7] [i_1])))) ? (((/* implicit */int) var_2)) : ((-(((/* implicit */int) (signed char)72))))));
                        }
                        var_23 = ((/* implicit */short) arr_1 [i_0]);
                        var_24 = ((((/* implicit */_Bool) -10LL)) || (((/* implicit */_Bool) (unsigned char)133)));
                    }
                    var_25 = ((/* implicit */unsigned long long int) 0);
                }
                var_26 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 4275590989927408564ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (1937344769963028032ULL)))));
            }
        } 
    } 
}
