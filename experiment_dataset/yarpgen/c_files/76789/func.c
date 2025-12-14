/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76789
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
    var_10 = ((/* implicit */unsigned int) (~((+(var_7)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        arr_3 [i_0 - 2] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (~(3075469472U)))) ? (min((((/* implicit */unsigned int) var_2)), (3075469472U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
        var_11 = ((/* implicit */int) 3075469472U);
        arr_4 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */long long int) (+(var_6)))))))));
    }
    for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        var_12 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_3)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))) ? (((/* implicit */int) ((((/* implicit */int) var_2)) > (var_7)))) : ((+(((((/* implicit */_Bool) -5446362174241617347LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2))))))));
        /* LoopSeq 2 */
        for (unsigned char i_2 = 1; i_2 < 21; i_2 += 3) /* same iter space */
        {
            arr_9 [i_1] = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 393216U)))))) ^ (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2 - 1] [i_2 + 3] [i_2 - 1]))) : (var_4))));
            var_13 ^= ((/* implicit */int) (!(((/* implicit */_Bool) var_8))));
        }
        /* vectorizable */
        for (unsigned char i_3 = 1; i_3 < 21; i_3 += 3) /* same iter space */
        {
            arr_13 [i_3] [19] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_8)))) ? (arr_8 [i_1]) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) >= (var_3))))));
            /* LoopSeq 1 */
            for (unsigned short i_4 = 3; i_4 < 23; i_4 += 4) 
            {
                var_14 = var_7;
                var_15 += ((/* implicit */short) ((((/* implicit */int) (unsigned short)0)) / ((~(((/* implicit */int) var_2))))));
            }
            arr_17 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)50))));
        }
    }
}
