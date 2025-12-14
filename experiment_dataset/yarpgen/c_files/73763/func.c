/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73763
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
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_3 [i_0] = arr_1 [i_0];
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (signed char)-14);
    }
    for (unsigned long long int i_1 = 3; i_1 < 22; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((var_6) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 3) 
        {
            for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                {
                    arr_14 [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_9 [i_1])) ? (arr_11 [(_Bool)1] [i_2] [16ULL] [16ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1]))))))), (var_1)));
                    arr_15 [i_1] [i_2 + 1] [(unsigned char)10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */unsigned long long int) var_16)) : (arr_12 [i_1]))))) ? (((((/* implicit */_Bool) arr_0 [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (signed char)-1)))) : (var_14))) : (var_9)));
                }
            } 
        } 
    }
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */short) (unsigned char)70)), (var_10))))))) : (var_8)));
    /* LoopSeq 3 */
    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) 
    {
        arr_19 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_4] [i_4])) ? (arr_2 [i_4] [(signed char)13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_4] [i_4])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_10 [i_4] [i_4]), (arr_10 [i_4] [i_4]))))) : (max((arr_2 [i_4] [i_4]), (((/* implicit */unsigned long long int) (_Bool)1))))));
        arr_20 [i_4] = ((/* implicit */unsigned long long int) arr_16 [(_Bool)1]);
    }
    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 4) 
    {
        arr_23 [i_5] [i_5] = ((/* implicit */unsigned long long int) var_12);
        arr_24 [i_5] [i_5] = ((/* implicit */_Bool) ((min((((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28691))))), (((unsigned long long int) var_14)))) ^ (arr_11 [i_5] [i_5] [(short)14] [i_5])));
        arr_25 [(signed char)6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5989881847607998823ULL)) ? (3232227896684419635ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_5])))))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))) ? (max(((+(248687916063978674ULL))), (((/* implicit */unsigned long long int) arr_7 [i_5] [i_5])))) : (var_8)));
        arr_26 [i_5] = ((/* implicit */long long int) var_2);
        arr_27 [i_5] [i_5] = ((/* implicit */unsigned char) arr_9 [i_5]);
    }
    for (unsigned long long int i_6 = 1; i_6 < 19; i_6 += 4) 
    {
        arr_30 [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_6])))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-8))) : (min((((/* implicit */long long int) (signed char)-107)), (5743411369604970423LL)))))) ? (-1210493657668978395LL) : (((/* implicit */long long int) ((/* implicit */int) max((arr_7 [i_6] [i_6]), (((signed char) var_9))))))));
        arr_31 [i_6] = ((/* implicit */short) max((min((((/* implicit */unsigned long long int) arr_7 [i_6] [i_6 + 1])), (arr_12 [(short)16]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_12 [i_6])))))));
        arr_32 [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_6 + 1] [i_6])) ? ((+(var_11))) : (((((/* implicit */_Bool) min((var_12), (var_12)))) ? (((((/* implicit */_Bool) arr_28 [i_6])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_6] [4ULL]))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_6 + 4])))))))));
        arr_33 [i_6] = ((((unsigned long long int) (~(9959328530313528107ULL)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_6 + 1] [i_6 + 1]))));
        /* LoopNest 3 */
        for (signed char i_7 = 1; i_7 < 21; i_7 += 1) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 3) 
            {
                for (long long int i_9 = 0; i_9 < 23; i_9 += 1) 
                {
                    {
                        arr_43 [7LL] [i_7] [14LL] [i_9] = ((/* implicit */signed char) (_Bool)1);
                        arr_44 [i_6] [i_7] [(_Bool)1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_7)) ? (16500014109183411586ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(signed char)13] [i_6])))))))));
                    }
                } 
            } 
        } 
    }
    var_18 = ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */int) (((-9223372036854775807LL - 1LL)) <= (((/* implicit */long long int) ((/* implicit */int) (short)-4189)))))) : (((/* implicit */int) ((unsigned char) var_8)))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22460))) : (((var_8) >> (((var_6) - (16357709725759101039ULL))))))));
}
