/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72108
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
    var_19 = ((/* implicit */short) var_3);
    var_20 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_14)))) == (((unsigned long long int) var_1)))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)82))));
        var_21 = ((/* implicit */_Bool) (((-(((((/* implicit */_Bool) (signed char)68)) ? (((/* implicit */int) (signed char)26)) : (((/* implicit */int) var_1)))))) | ((~(((/* implicit */int) max((((/* implicit */unsigned char) var_0)), (arr_0 [i_0]))))))));
        var_22 = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
    }
    for (long long int i_1 = 0; i_1 < 21; i_1 += 2) /* same iter space */
    {
        arr_5 [i_1] &= ((/* implicit */unsigned short) min((((/* implicit */int) (short)9080)), (((((/* implicit */_Bool) (~(var_18)))) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) (signed char)-5))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_3 = 3; i_3 < 19; i_3 += 2) 
            {
                for (long long int i_4 = 3; i_4 < 20; i_4 += 3) 
                {
                    {
                        var_23 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_15 [i_4] [i_4 + 1] [i_4] [i_4 - 1] [i_4] [i_4])))) ? (min((min((11601505511394821942ULL), (((/* implicit */unsigned long long int) 2656441080U)))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1]))) <= (var_4)))))) : (min((max((0ULL), (((/* implicit */unsigned long long int) 7769141358439692726LL)))), (((/* implicit */unsigned long long int) (signed char)30))))));
                        arr_16 [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned long long int) 3427395708U);
                        arr_17 [i_4] = ((/* implicit */long long int) var_18);
                    }
                } 
            } 
            arr_18 [i_1] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_1] [i_2] [i_1])) > (((/* implicit */int) arr_8 [i_1] [i_2]))));
            /* LoopNest 2 */
            for (signed char i_5 = 0; i_5 < 21; i_5 += 3) 
            {
                for (signed char i_6 = 0; i_6 < 21; i_6 += 3) 
                {
                    {
                        var_24 = ((/* implicit */unsigned long long int) var_4);
                        var_25 += ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((int) arr_3 [i_5] [i_5])) >> (((arr_14 [i_5]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))), ((+(max((((/* implicit */unsigned int) (signed char)0)), (var_14)))))));
                        arr_25 [i_1] [i_1] [i_1] [i_1] [i_1] [i_6] = ((/* implicit */signed char) var_18);
                        var_26 -= ((/* implicit */signed char) (~(((((/* implicit */int) (signed char)-31)) & (((/* implicit */int) (short)-8351))))));
                    }
                } 
            } 
        }
    }
    for (long long int i_7 = 0; i_7 < 21; i_7 += 2) /* same iter space */
    {
        arr_30 [i_7] [i_7] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) 3290869877U)), ((-((-(var_7)))))));
        var_27 = ((/* implicit */unsigned char) arr_6 [i_7] [i_7] [i_7]);
    }
}
