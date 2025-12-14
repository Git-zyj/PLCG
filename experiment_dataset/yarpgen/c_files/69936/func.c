/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69936
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) /* same iter space */
    {
        var_12 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [(_Bool)1])) ? (arr_0 [i_0] [(short)12]) : (arr_0 [i_0] [(unsigned short)6])));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)189))));
        arr_4 [i_0] = ((/* implicit */unsigned short) (((_Bool)1) ? (var_6) : (((/* implicit */int) ((unsigned short) var_3)))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) /* same iter space */
    {
        var_13 *= ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_1]))) | (var_8))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) : ((((_Bool)1) ? (((/* implicit */unsigned int) (+(var_2)))) : (max((arr_5 [i_1] [i_1]), (((/* implicit */unsigned int) var_1))))))));
        var_14 = -3350055388899609329LL;
        arr_7 [i_1] = ((/* implicit */long long int) max((((/* implicit */int) ((unsigned short) var_8))), (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_1 [i_1] [i_1]))))));
    }
    for (short i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_3 = 2; i_3 < 20; i_3 += 1) 
        {
            arr_14 [i_2] [i_3 + 3] = ((/* implicit */signed char) (_Bool)1);
            var_15 = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) ((((/* implicit */long long int) var_5)) % (arr_13 [i_2] [i_2] [i_2])))) || (((/* implicit */_Bool) arr_12 [i_2] [i_3 - 2]))))));
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            for (short i_5 = 3; i_5 < 22; i_5 += 4) 
            {
                {
                    var_16 = ((/* implicit */signed char) var_9);
                    arr_20 [i_2] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (((/* implicit */int) arr_19 [i_2] [i_2] [i_2])) : (((/* implicit */int) (!(arr_18 [i_2] [i_4] [i_4] [i_5]))))))));
                    arr_21 [i_2] = max((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) arr_16 [i_5 - 1] [i_5 - 2] [i_5 + 2])) - (1847)))))), (min((arr_12 [i_2] [i_2]), (((/* implicit */unsigned int) arr_16 [i_5 - 3] [i_5 + 2] [i_5 + 2])))));
                    arr_22 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) 278467949);
                }
            } 
        } 
    }
    var_17 = ((/* implicit */int) var_9);
    var_18 = ((/* implicit */unsigned int) (+(var_8)));
    var_19 = ((/* implicit */_Bool) (-(var_0)));
}
