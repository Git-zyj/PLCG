/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56986
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
    var_13 = ((/* implicit */unsigned int) (_Bool)1);
    var_14 = ((/* implicit */unsigned long long int) var_7);
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0 + 1]);
        arr_3 [i_0] = ((/* implicit */long long int) ((int) ((long long int) arr_0 [i_0 + 1])));
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_0 [i_0 + 1]), (arr_0 [i_0 - 1])))) ? ((+(arr_0 [i_0 + 1]))) : (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 + 1])))));
    }
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) (~((+(var_7)))));
        var_16 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned char) arr_1 [i_1])), (var_5)))) % ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_1]))))))) * (((((/* implicit */unsigned long long int) max((var_10), (((/* implicit */int) var_9))))) ^ (arr_0 [i_1])))));
        arr_7 [(unsigned short)8] [i_1] = ((/* implicit */unsigned int) ((var_1) <= ((+((-(var_6)))))));
    }
    for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_3 = 1; i_3 < 16; i_3 += 4) 
        {
            for (unsigned int i_4 = 0; i_4 < 19; i_4 += 4) 
            {
                for (unsigned int i_5 = 2; i_5 < 15; i_5 += 4) 
                {
                    {
                        arr_20 [i_3] = ((/* implicit */unsigned int) ((long long int) ((unsigned long long int) var_6)));
                        var_17 = ((/* implicit */signed char) arr_15 [i_2] [(signed char)17] [i_4]);
                    }
                } 
            } 
        } 
        var_18 *= ((/* implicit */short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_2] [i_2] [i_2] [i_2] [i_2]))) * (var_4))), (var_4)));
    }
    for (unsigned int i_6 = 0; i_6 < 10; i_6 += 4) 
    {
        arr_24 [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_15 [i_6] [(unsigned char)6] [i_6])) > (((/* implicit */int) arr_9 [14LL] [14LL])))))) : (((arr_0 [i_6]) - (5331295443120462681ULL))))))));
        var_19 = ((/* implicit */_Bool) ((long long int) arr_12 [i_6] [i_6]));
    }
    var_20 = ((/* implicit */long long int) ((var_4) + (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_9))))), (var_7))))));
}
