/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70490
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [7LL])) ? (max((((/* implicit */unsigned int) var_1)), (min((((/* implicit */unsigned int) arr_2 [i_0])), (arr_0 [(unsigned char)9]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))));
        var_20 ^= ((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0]))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_21 = ((/* implicit */short) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_6), (((/* implicit */long long int) arr_9 [i_0] [i_0] [i_2] [i_3]))))) || (((/* implicit */_Bool) arr_5 [i_0])))))));
                        var_22 = ((/* implicit */unsigned long long int) ((var_15) ^ (((/* implicit */int) ((((/* implicit */_Bool) max((var_16), (((/* implicit */unsigned char) arr_4 [i_0] [i_1]))))) || (((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned char) var_3))))))))));
                    }
                } 
            } 
        } 
        var_23 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_17)) ? (min((arr_8 [i_0] [(unsigned short)6] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_5 [i_0])))) : (((/* implicit */unsigned long long int) var_6)))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [(unsigned char)8] [6])) ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) var_8)))))));
    }
    /* LoopSeq 2 */
    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_5 = 0; i_5 < 10; i_5 += 3) 
        {
            var_24 = ((/* implicit */unsigned char) var_14);
            arr_17 [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_16 [(unsigned char)5]))));
        }
        var_25 |= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [(unsigned short)0])) ? ((+(var_6))) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))), (((((/* implicit */_Bool) min((var_11), (arr_9 [1U] [(signed char)7] [3] [i_4])))) ? (((((/* implicit */_Bool) var_3)) ? (arr_8 [5ULL] [i_4] [i_4] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_4] [i_4] [i_4]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_4])) ? (var_15) : (arr_14 [i_4] [i_4]))))))));
        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned short) ((short) var_2))))))));
        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) (~(max((((((/* implicit */long long int) ((/* implicit */int) var_18))) ^ (var_4))), (((/* implicit */long long int) ((_Bool) var_6))))))))));
    }
    for (unsigned short i_6 = 0; i_6 < 10; i_6 += 4) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned int) var_15);
        arr_21 [8U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_10 [i_6] [i_6]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_6]))) : (var_6))))))) ? (((long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_13)) : (var_15)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) max((((/* implicit */int) var_16)), (var_2)))) == ((~(var_4)))))))));
    }
    var_29 = ((/* implicit */unsigned int) (~(min((((/* implicit */int) var_12)), (min((var_2), (((/* implicit */int) var_7))))))));
    var_30 = ((/* implicit */long long int) var_1);
}
