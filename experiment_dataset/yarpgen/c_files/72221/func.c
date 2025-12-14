/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72221
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */long long int) max((((/* implicit */unsigned int) var_9)), (var_1)))) | ((~(((3601230077856375333LL) % (((/* implicit */long long int) ((/* implicit */int) var_15)))))))));
    var_17 = ((/* implicit */unsigned int) ((unsigned short) min((((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))), ((~(67108863U))))));
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)53219)))))));
    var_19 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) var_8)), ((unsigned short)65535)))))))) == ((~(max((var_1), (((/* implicit */unsigned int) (unsigned short)65535))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) (unsigned short)65520);
        arr_4 [i_0] [i_0] = var_4;
        arr_5 [i_0 + 2] = var_10;
    }
    for (int i_1 = 1; i_1 < 21; i_1 += 1) 
    {
        arr_8 [i_1] [i_1 - 1] = ((/* implicit */unsigned short) -225319415);
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_2 = 3; i_2 < 23; i_2 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_3 = 3; i_3 < 23; i_3 += 2) 
            {
                var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-100))));
                var_21 += (!(((/* implicit */_Bool) arr_13 [i_1] [i_1])));
            }
            for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
            {
                arr_19 [i_4] [i_2 - 1] [i_2 - 2] [(unsigned short)7] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)44144)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)119)))) != (((/* implicit */int) arr_17 [i_1] [i_2] [i_4]))));
                arr_20 [i_1] [i_2] [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) >= (8ULL))))) >= (15923540997185445795ULL)));
            }
            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_12 [i_1] [i_2 + 2]) / (((/* implicit */long long int) 225319414))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)62)))))));
            arr_21 [i_1 + 2] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)119))))))));
            /* LoopNest 2 */
            for (unsigned short i_5 = 0; i_5 < 25; i_5 += 3) 
            {
                for (unsigned int i_6 = 0; i_6 < 25; i_6 += 1) 
                {
                    {
                        var_23 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (signed char)80))));
                        arr_28 [i_1 - 1] [i_1 - 1] [i_2 - 2] [i_5] [i_6] = ((/* implicit */unsigned short) (+(7LL)));
                        var_24 |= ((/* implicit */unsigned char) (signed char)0);
                    }
                } 
            } 
        }
        for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 2) 
            {
                for (unsigned char i_9 = 2; i_9 < 23; i_9 += 4) 
                {
                    {
                        arr_38 [(unsigned char)10] [i_9 - 2] = ((/* implicit */_Bool) ((unsigned int) ((long long int) ((int) var_4))));
                        arr_39 [i_1] [i_7] [i_8] [i_8] [i_9] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (+(((/* implicit */int) ((var_3) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2314))))))))) % (max((((/* implicit */unsigned int) min(((unsigned short)19), ((unsigned short)8192)))), ((+(var_5)))))));
                    }
                } 
            } 
            var_25 = ((/* implicit */long long int) (+((+(max((arr_9 [i_1 + 1] [i_1 + 1]), (((/* implicit */unsigned int) arr_35 [i_1] [i_1] [(unsigned short)20] [i_7]))))))));
            /* LoopNest 3 */
            for (unsigned long long int i_10 = 1; i_10 < 24; i_10 += 1) 
            {
                for (unsigned long long int i_11 = 1; i_11 < 23; i_11 += 2) 
                {
                    for (unsigned short i_12 = 1; i_12 < 23; i_12 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) var_13))));
                            var_27 += ((/* implicit */unsigned short) max((((/* implicit */int) var_13)), (((((/* implicit */int) (signed char)-16)) ^ (((/* implicit */int) arr_17 [i_12 - 1] [i_11 + 1] [i_1 + 4]))))));
                            var_28 = ((/* implicit */int) var_3);
                        }
                    } 
                } 
            } 
            var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) max((var_4), (((/* implicit */int) var_7)))))))), ((((((~(((/* implicit */int) arr_27 [i_7])))) + (2147483647))) >> (((int) (_Bool)1)))))))));
            /* LoopNest 2 */
            for (unsigned short i_13 = 2; i_13 < 23; i_13 += 3) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    {
                        var_30 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)12)), (1502204814U)))) * (((unsigned long long int) arr_12 [17U] [17U])))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_1 - 1] [i_1] [i_1 + 2]))))))));
                        /* LoopSeq 1 */
                        for (signed char i_15 = 1; i_15 < 23; i_15 += 2) 
                        {
                            arr_57 [i_15] [i_13] [i_15 + 2] [i_15 + 2] [i_15] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13 - 2])) ? (arr_26 [i_13] [i_13] [(unsigned short)0] [(unsigned short)0] [i_13] [i_13 + 2]) : (arr_26 [i_13 - 2] [i_13 + 2] [i_13 - 2] [i_13] [i_13] [i_13 + 1]))))));
                            var_31 = ((/* implicit */unsigned short) (+(((/* implicit */int) max((arr_11 [i_1] [i_1]), (arr_48 [(unsigned short)7] [i_13 - 2] [i_15]))))));
                            var_32 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)15))));
                        }
                        arr_58 [i_1 + 1] [i_13] [i_1 + 1] [i_14] [i_1] [i_13] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) min(((signed char)26), (var_11)))) : (((/* implicit */int) max(((unsigned char)227), (((/* implicit */unsigned char) var_8)))))))));
                        arr_59 [i_7] [i_13] [i_14] = ((/* implicit */unsigned short) var_10);
                    }
                } 
            } 
        }
    }
}
