/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97448
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
    var_16 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((_Bool) (+(((/* implicit */int) var_6)))))), (max((max((var_11), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) / (var_13))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */short) (+(((((/* implicit */_Bool) min((((/* implicit */int) arr_1 [i_0])), (var_12)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) << (((arr_0 [i_0]) - (17115238001977576296ULL)))))) : (arr_0 [i_0 + 1])))));
        arr_3 [i_0] [i_0] = var_14;
        arr_4 [i_0] [i_0 - 2] = ((/* implicit */int) var_14);
    }
    for (unsigned short i_1 = 2; i_1 < 12; i_1 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned short) var_8);
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_6 [i_1] [i_1]))) & (max((((/* implicit */unsigned int) arr_1 [i_1])), (var_4)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(_Bool)1] [(unsigned char)8])) ? (((/* implicit */unsigned long long int) var_1)) : (var_2)))) ? (((/* implicit */int) ((unsigned short) var_8))) : (((((/* implicit */int) var_0)) | (((/* implicit */int) arr_2 [i_1] [i_1 - 1]))))))) : (var_2)));
        arr_7 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) max((arr_5 [i_1 - 2]), (((unsigned short) var_3)))))));
        arr_8 [i_1] = ((/* implicit */unsigned short) max((((((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 - 2] [i_1]))) >= (var_1))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) % (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [i_1 + 1]) >= (((/* implicit */unsigned long long int) var_1)))))))), (((/* implicit */unsigned int) arr_5 [i_1]))));
    }
    for (unsigned short i_2 = 2; i_2 < 12; i_2 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_11 [i_2 + 1] [i_2 - 2])) && (((/* implicit */_Bool) var_6)))) ? (((((/* implicit */int) arr_11 [i_2 + 1] [i_2 - 1])) / (((/* implicit */int) arr_11 [i_2 - 2] [i_2 + 1])))) : (((((/* implicit */int) var_5)) / (((/* implicit */int) var_15))))));
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) 
            {
                for (unsigned char i_5 = 1; i_5 < 12; i_5 += 4) 
                {
                    {
                        var_21 ^= ((/* implicit */unsigned char) (((((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_5)), (arr_10 [i_3])))) : (max((var_11), (((/* implicit */unsigned long long int) var_9)))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_2 [i_2 + 1] [i_2 - 2]))))));
                        arr_20 [i_5] [i_3] [i_4] [i_5] = ((/* implicit */long long int) ((((arr_9 [(_Bool)1]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_9 [i_5 + 1])))) << (((/* implicit */int) min((((arr_14 [i_4]) < (((/* implicit */int) var_9)))), (arr_9 [i_2 - 2]))))));
                        arr_21 [i_5] [i_3] = ((/* implicit */_Bool) max((((/* implicit */short) ((signed char) ((((/* implicit */long long int) arr_10 [i_2])) != (arr_13 [i_2 - 1] [i_4]))))), (var_6)));
                        var_22 = ((/* implicit */long long int) ((unsigned int) (((+(((/* implicit */int) arr_1 [i_4])))) >= (((/* implicit */int) arr_9 [i_4])))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) arr_14 [i_2 - 1])) : (var_4))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_15 [i_2] [i_2] [i_2])) : (((/* implicit */int) var_9)))))))) : (((((/* implicit */_Bool) var_6)) ? (max((((/* implicit */unsigned long long int) var_12)), (arr_0 [i_2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_4) : (var_1))))))));
    }
    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((long long int) var_6))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_14)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10)))))), ((~(((((/* implicit */int) var_14)) / (var_12))))))))));
    var_25 |= ((/* implicit */unsigned long long int) var_12);
}
