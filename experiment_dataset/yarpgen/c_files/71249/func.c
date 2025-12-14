/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71249
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
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        var_10 += ((/* implicit */signed char) ((((/* implicit */int) var_7)) & (((/* implicit */int) (unsigned char)28))));
        var_11 = ((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0]))));
    }
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        arr_4 [i_1] = ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) arr_2 [i_1])) ? (var_4) : (((/* implicit */unsigned int) arr_2 [i_1])))), (((/* implicit */unsigned int) arr_3 [i_1] [i_1])))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max(((unsigned short)0), ((unsigned short)17)))) || (((/* implicit */_Bool) arr_3 [i_1] [i_1]))))))));
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_3 [i_1] [i_1]);
    }
    var_12 -= ((/* implicit */unsigned char) var_2);
    /* LoopSeq 2 */
    for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -4622940472274914384LL))))), ((~(3003232164559004922ULL)))))) ? (max((arr_2 [i_2]), (((/* implicit */int) min((var_2), (((/* implicit */unsigned short) var_9))))))) : (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_2] [i_2]))))));
        arr_9 [8U] [i_2] &= ((/* implicit */unsigned short) ((unsigned char) arr_0 [i_2]));
    }
    for (unsigned long long int i_3 = 3; i_3 < 21; i_3 += 2) 
    {
        var_14 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_3 - 1] [(signed char)10])) | (((/* implicit */int) arr_10 [i_3 - 1] [(_Bool)1]))))) ? (((/* implicit */int) arr_10 [i_3 - 1] [(unsigned short)12])) : (((/* implicit */int) ((((/* implicit */_Bool) 1876444994U)) && (((/* implicit */_Bool) (signed char)-1)))))));
        /* LoopSeq 1 */
        for (unsigned char i_4 = 2; i_4 < 23; i_4 += 4) 
        {
            arr_15 [i_3] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) ((unsigned short) 3475910568U))))));
            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (18202897867999183805ULL))))))), (3151958384418491094LL))))));
            arr_16 [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) min((arr_12 [i_3 - 3]), (((/* implicit */short) var_1))))), (max((((/* implicit */unsigned short) (unsigned char)134)), (arr_13 [i_4]))))))));
        }
        arr_17 [i_3] = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) min((arr_10 [i_3] [i_3]), (arr_10 [i_3 + 4] [i_3]))))) + ((((_Bool)1) ? (((/* implicit */int) arr_10 [i_3] [i_3])) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_13 [i_3]))))))));
    }
    var_16 = ((/* implicit */unsigned short) max((var_16), ((unsigned short)0)));
}
