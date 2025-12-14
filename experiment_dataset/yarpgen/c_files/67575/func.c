/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67575
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
    var_16 = ((/* implicit */signed char) (_Bool)1);
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    {
                        arr_12 [i_0] [i_1] [7] [19] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned int) var_12)), (7U))) >> (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_1])) <= (((/* implicit */int) arr_7 [i_0] [(unsigned short)2] [4ULL])))))))) ? (((/* implicit */int) (short)-5931)) : (((min((((/* implicit */int) (short)-25468)), (arr_5 [i_0 - 1] [i_0] [i_1]))) * (((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) arr_7 [i_0 + 1] [i_1] [i_3])))))))));
                        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned char)162)) : (((/* implicit */int) (short)13811))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned char) arr_8 [i_0] [(signed char)20] [i_0] [i_0 + 1]);
        var_19 = ((/* implicit */unsigned short) var_5);
    }
    for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 4) 
    {
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */int) ((((/* implicit */int) (short)13811)) == (((/* implicit */int) ((arr_9 [i_4] [(unsigned short)0] [i_4] [i_4]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)133))))))))) : (max((var_5), (arr_5 [i_4] [i_4] [i_4])))));
        var_21 = ((/* implicit */long long int) (signed char)-123);
    }
    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 2) 
    {
        arr_18 [i_5] [i_5] = ((/* implicit */short) max((((/* implicit */int) ((unsigned char) (+(((/* implicit */int) (signed char)58)))))), ((+(((((/* implicit */_Bool) arr_7 [i_5] [i_5] [i_5])) ? (((/* implicit */int) (short)-30505)) : (((/* implicit */int) arr_10 [i_5] [(unsigned short)9] [i_5] [i_5] [i_5]))))))));
        arr_19 [(unsigned short)4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4095228160U)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_11 [i_5] [i_5] [i_5]), (((/* implicit */unsigned short) arr_4 [i_5])))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_6), (((/* implicit */unsigned short) arr_13 [i_5])))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_3)))))));
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (+(((((/* implicit */int) arr_13 [i_5])) % (((/* implicit */int) ((((/* implicit */int) arr_14 [i_5])) <= (((/* implicit */int) arr_11 [i_5] [i_5] [i_5]))))))))))));
    }
    var_23 = ((/* implicit */int) ((((((/* implicit */long long int) ((var_5) | (-2023964682)))) >= (((long long int) var_5)))) ? (((((/* implicit */_Bool) ((unsigned char) (unsigned char)124))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : ((+(var_3))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (var_3) : (536866816U))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))));
}
