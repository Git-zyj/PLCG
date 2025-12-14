/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78633
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
    var_13 -= ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1))))), (max((var_8), (((/* implicit */long long int) (+(((/* implicit */int) var_1)))))))));
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) / (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_12)))))) ? (var_11) : (((/* implicit */long long int) min((((var_4) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (505600886U))), (((/* implicit */unsigned int) var_7)))))));
    var_15 = ((/* implicit */unsigned int) var_6);
    var_16 = ((/* implicit */unsigned char) (+(((((var_4) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0)))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 3; i_0 < 8; i_0 += 1) 
    {
        arr_2 [i_0] [i_0 - 2] = ((/* implicit */short) (~((-(var_8)))));
        arr_3 [i_0] [(_Bool)1] = ((/* implicit */short) var_12);
    }
    for (long long int i_1 = 2; i_1 < 17; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */int) ((unsigned int) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1]))) % (arr_6 [i_1 + 1])))));
        arr_8 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-4)), (var_12)))) ? (((/* implicit */long long int) (+(((var_1) ? (arr_6 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)234)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (-927080376) : (((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) 0U)) ? (arr_4 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1])))))))));
    }
    for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (((+(((/* implicit */int) (_Bool)1)))) + (((((/* implicit */_Bool) -1426120716511989585LL)) ? (((((/* implicit */int) arr_12 [i_2])) - (653175676))) : (((/* implicit */int) ((_Bool) (_Bool)1))))))))));
        var_18 = ((/* implicit */signed char) ((unsigned char) arr_9 [i_2] [(unsigned short)1]));
        var_19 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)234)) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) (signed char)108))));
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
    {
        var_20 &= ((/* implicit */_Bool) arr_13 [i_3]);
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3] [(_Bool)1]))) % ((-(arr_11 [i_3])))));
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_3])) ? ((+(arr_14 [i_3]))) : ((+(((/* implicit */int) arr_12 [i_3])))))))));
        var_23 -= ((/* implicit */_Bool) ((((/* implicit */long long int) 3587186423U)) ^ (((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3] [i_3]))) : (arr_11 [i_3])))));
    }
}
