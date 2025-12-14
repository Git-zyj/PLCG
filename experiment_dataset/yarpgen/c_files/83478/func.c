/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83478
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
    var_15 = ((/* implicit */unsigned long long int) var_13);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_7 [i_2] &= ((/* implicit */short) ((max((((((/* implicit */_Bool) (short)-27462)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58058))) : (8869416318884136917ULL))), (((/* implicit */unsigned long long int) ((long long int) -2029890894))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)57564), (((/* implicit */unsigned short) arr_6 [i_2] [i_2]))))))));
                    var_16 -= ((/* implicit */int) ((arr_0 [i_1 + 1]) > (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_2]))) < (var_9)))))))));
                }
            } 
        } 
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0])) ? (((/* implicit */int) arr_4 [i_0 - 1] [i_0])) : (((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0])) ? (((/* implicit */int) arr_4 [i_0 - 1] [i_0])) : (((/* implicit */int) arr_4 [i_0 + 2] [i_0]))))));
        var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_0 + 2])), (9577327754825414685ULL))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
    {
        arr_10 [i_3] = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_5 [(unsigned char)2] [(unsigned char)2] [(unsigned char)2] [i_3])))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_3])))))));
        arr_11 [i_3] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [(_Bool)1] [(unsigned short)12]))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) 7803946312194142039ULL))))))));
        arr_12 [(short)7] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15904))) : (8869416318884136893ULL))) : (((/* implicit */unsigned long long int) max((2029890893), (((/* implicit */int) arr_6 [i_3] [(unsigned short)12])))))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_3])) ? (arr_9 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)160)))))) | (min((var_6), (((/* implicit */unsigned long long int) arr_5 [(unsigned short)2] [(unsigned short)2] [i_3] [i_3])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
        var_19 ^= ((/* implicit */unsigned short) ((short) (+(8869416318884136930ULL))));
    }
    var_20 += ((var_1) ? (var_6) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) + (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) -2095041434)) : (var_9))))));
    var_21 &= ((/* implicit */long long int) var_6);
}
