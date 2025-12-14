/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62513
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
    var_14 = ((/* implicit */short) ((((long long int) var_2)) << (((min((max((-1575882290895903360LL), (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) var_1)))) + (21396LL)))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */signed char) max(((unsigned char)31), (((/* implicit */unsigned char) var_12))));
        var_15 = ((/* implicit */signed char) max(((+(((/* implicit */int) var_6)))), (((/* implicit */int) var_5))));
        var_16 = var_7;
        var_17 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (max((((/* implicit */long long int) 1621006256U)), (-1575882290895903360LL))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) || (((/* implicit */_Bool) min(((short)-14233), (((/* implicit */short) (unsigned char)255)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) /* same iter space */
    {
        var_18 *= ((/* implicit */unsigned long long int) (-(2147483642)));
        arr_9 [i_1] [(unsigned short)16] &= ((/* implicit */unsigned short) 734961020U);
        var_19 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [(signed char)14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) : (((((12282500553183942919ULL) << (((-1) + (49))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)14232), (((/* implicit */short) (_Bool)1))))))))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) /* same iter space */
    {
        arr_14 [i_2] [i_2] = ((/* implicit */_Bool) ((((unsigned long long int) arr_8 [i_2])) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)121)))));
        /* LoopSeq 3 */
        for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)104)) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) arr_7 [i_3])))))));
            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)26)) : (566208145)));
        }
        for (int i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            var_22 = ((/* implicit */short) arr_8 [i_2]);
            var_23 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) (unsigned short)59069))) ? (((/* implicit */int) arr_6 [i_4])) : (((/* implicit */int) var_3))));
            var_24 = ((/* implicit */int) var_12);
        }
        for (long long int i_5 = 0; i_5 < 20; i_5 += 3) 
        {
            var_25 -= ((/* implicit */unsigned short) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2]))) / (arr_12 [i_5])))));
            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) var_10)) & (((/* implicit */int) var_11))))))));
            arr_26 [i_2] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [i_5] [i_5] [i_5])) ? (((/* implicit */int) (unsigned short)63)) : ((((_Bool)0) ? (((/* implicit */int) arr_24 [8] [i_5] [i_5])) : (((/* implicit */int) arr_0 [i_5]))))));
            var_27 = ((/* implicit */short) ((_Bool) (unsigned char)7));
        }
    }
}
