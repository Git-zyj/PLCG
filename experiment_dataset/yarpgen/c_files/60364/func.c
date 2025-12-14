/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60364
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
    var_11 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */int) var_6)) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))), (min((((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_5))), (((/* implicit */long long int) (+(((/* implicit */int) var_10)))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = (unsigned char)63;
        var_13 = ((/* implicit */unsigned int) max((17494126630319032238ULL), (((/* implicit */unsigned long long int) 45346263U))));
        arr_3 [(unsigned short)12] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((((/* implicit */int) (unsigned char)193)) / (((/* implicit */int) var_0)))))))));
    }
    for (short i_1 = 2; i_1 < 10; i_1 += 2) 
    {
        arr_6 [4LL] &= ((/* implicit */int) var_9);
        var_14 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_0 [i_1 + 2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1 - 2])) ? (((/* implicit */int) (_Bool)0)) : (-1)))) : (min((arr_0 [i_1 + 2]), (((/* implicit */unsigned long long int) var_6))))));
        /* LoopSeq 1 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            arr_9 [i_1 + 1] [i_2 - 1] [i_2] = ((/* implicit */short) (unsigned char)63);
            arr_10 [i_1] [i_2] = ((/* implicit */long long int) (~((+(((((/* implicit */int) (short)3406)) | (((/* implicit */int) var_2))))))));
            var_15 |= max((var_2), (((/* implicit */unsigned char) var_10)));
            var_16 = var_9;
        }
        var_17 = ((/* implicit */signed char) max(((+((+(((/* implicit */int) var_3)))))), (((((((/* implicit */int) var_1)) / (((/* implicit */int) var_10)))) * (((((/* implicit */_Bool) arr_5 [7] [7])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1))))))));
        /* LoopSeq 1 */
        for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            /* LoopSeq 2 */
            for (int i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                arr_17 [i_3] [3U] = ((/* implicit */unsigned int) 3253750159000248850LL);
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (~(min((var_5), (((/* implicit */long long int) var_4))))))) || (((/* implicit */_Bool) var_5))));
            }
            for (long long int i_5 = 2; i_5 < 11; i_5 += 2) 
            {
                arr_20 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2047)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0))));
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+((-(((/* implicit */int) (unsigned short)63489))))))))))));
            }
            var_20 = ((/* implicit */int) (unsigned short)65534);
        }
    }
    var_21 = ((/* implicit */_Bool) max((var_21), ((!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)2053)) | (((/* implicit */int) (signed char)57)))))))));
    var_22 = ((/* implicit */_Bool) var_2);
    var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) var_4))));
}
