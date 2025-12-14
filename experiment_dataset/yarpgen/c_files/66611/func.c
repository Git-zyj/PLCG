/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66611
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] [i_0 + 1] = ((/* implicit */unsigned int) arr_0 [i_0] [6LL]);
        var_17 = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned int) arr_0 [i_0 - 2] [i_0 + 1])), (arr_1 [i_0 + 2]))), (((((/* implicit */unsigned int) arr_0 [i_0 - 1] [i_0 - 2])) | (arr_1 [i_0 + 1])))));
    }
    for (signed char i_1 = 1; i_1 < 16; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) arr_3 [i_1]);
        arr_8 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)0)) > (((/* implicit */int) (signed char)119))));
        arr_9 [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) min((var_14), (((/* implicit */long long int) (unsigned short)65535))))) ? ((-(arr_5 [i_1]))) : (max((arr_5 [i_1 + 1]), (((/* implicit */unsigned int) var_12)))))) > (min((max((((/* implicit */unsigned int) var_10)), (arr_5 [i_1 + 2]))), (((/* implicit */unsigned int) arr_4 [i_1 + 2]))))));
    }
    var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 3990940107U))));
    var_19 = min((((/* implicit */unsigned long long int) var_11)), (max((var_5), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_11)), (var_4)))))));
    /* LoopSeq 2 */
    for (signed char i_2 = 2; i_2 < 10; i_2 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_3 = 1; i_3 < 12; i_3 += 2) 
        {
            var_20 = ((/* implicit */_Bool) arr_10 [i_2 + 4]);
            arr_16 [i_2] [i_3] [i_3] |= ((/* implicit */signed char) var_14);
            arr_17 [i_3] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((unsigned int) var_5))) ? ((-(var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2] [i_3 + 1]))))), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) <= (arr_3 [i_2 + 2]))))));
            arr_18 [i_3] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((unsigned int) var_15));
            arr_19 [i_3] = ((/* implicit */long long int) arr_11 [i_2] [i_2]);
        }
        /* LoopNest 3 */
        for (unsigned int i_4 = 2; i_4 < 11; i_4 += 2) 
        {
            for (unsigned char i_5 = 0; i_5 < 14; i_5 += 2) 
            {
                for (unsigned int i_6 = 2; i_6 < 13; i_6 += 2) 
                {
                    {
                        var_21 *= ((/* implicit */_Bool) var_7);
                        var_22 = ((/* implicit */long long int) (-(((/* implicit */int) arr_11 [i_2 - 2] [i_6 - 2]))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_7 = 2; i_7 < 10; i_7 += 2) /* same iter space */
    {
        arr_30 [i_7] = ((/* implicit */long long int) (+(arr_23 [i_7 - 2] [i_7 - 2])));
        /* LoopSeq 2 */
        for (unsigned long long int i_8 = 1; i_8 < 12; i_8 += 2) /* same iter space */
        {
            var_23 -= ((/* implicit */unsigned int) var_1);
            var_24 = ((/* implicit */_Bool) (+(3990940086U)));
        }
        for (unsigned long long int i_9 = 1; i_9 < 12; i_9 += 2) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((1916581664102910976LL) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
            arr_37 [i_7] [i_9] = (+(((/* implicit */int) arr_29 [i_7 - 1])));
            arr_38 [10LL] [i_9] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 8774700010993895714LL)) * (9218040588185343041ULL))))));
            var_26 = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)5993))));
        }
    }
    var_27 = ((/* implicit */_Bool) var_15);
}
