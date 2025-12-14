/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88306
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
    var_12 = ((/* implicit */_Bool) min((var_12), (((((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3)))) & (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)62)) : (((/* implicit */int) var_1)))))) < ((-(((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) (_Bool)1)))))))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned int) ((((((_Bool) var_6)) ? (((/* implicit */int) ((arr_0 [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128)))))) : (((/* implicit */int) var_7)))) > (((/* implicit */int) ((((/* implicit */_Bool) (~(var_9)))) && (((/* implicit */_Bool) 18446744073709551606ULL)))))));
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_0] [i_0])) / (min((arr_1 [i_0]), (((/* implicit */int) (_Bool)1))))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 19; i_1 += 3) 
    {
        var_15 = ((/* implicit */int) var_6);
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            arr_10 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) * (((/* implicit */int) arr_9 [i_1]))));
            /* LoopNest 2 */
            for (long long int i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    {
                        arr_19 [i_4] [i_4] [i_3] &= ((/* implicit */short) (-(arr_6 [i_1 + 1] [i_1 - 3])));
                        var_16 = var_7;
                        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */long long int) 738747751)) : (((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_4] [i_2] [i_2] [i_1] [i_1]))) ^ (arr_12 [i_1] [i_1] [i_1] [i_1])))));
                        var_18 = ((/* implicit */signed char) ((((/* implicit */int) var_1)) + (((/* implicit */int) arr_13 [i_1 + 2] [i_1 - 2] [i_1] [i_1 + 2]))));
                        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) arr_11 [i_4] [i_3] [i_1] [i_1]))));
                    }
                } 
            } 
            var_20 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) -6566176750015439674LL)) ? (9223372036854775807LL) : (-1LL)))));
            arr_20 [i_1] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */int) var_1)) - (((/* implicit */int) var_0))));
            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) arr_18 [i_1] [i_1] [i_1] [i_1] [i_1]))));
        }
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            var_22 = var_7;
            var_23 = ((/* implicit */short) var_9);
            var_24 |= ((/* implicit */short) var_3);
            var_25 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_12 [i_1] [i_1] [i_1] [i_1]))) ^ (((/* implicit */long long int) (+(arr_4 [i_5]))))));
            arr_25 [i_1] [i_1] [i_5] = ((/* implicit */unsigned long long int) (_Bool)1);
        }
        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) || (((((((/* implicit */_Bool) (unsigned char)117)) || (((/* implicit */_Bool) var_2)))) || (((/* implicit */_Bool) var_6))))));
            var_27 = ((/* implicit */short) ((((/* implicit */int) var_8)) | (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) (unsigned char)114))))));
        }
        arr_28 [i_1] = ((/* implicit */unsigned short) -869717318);
        arr_29 [i_1] [i_1] = min((min((((int) -9223372036854775807LL)), (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))), (((/* implicit */int) (((!(((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1] [i_1])))) && (((/* implicit */_Bool) arr_5 [i_1]))))));
    }
}
