/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76938
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */signed char) (+(min((arr_2 [i_1] [i_2]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) var_0)))))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned long long int) ((long long int) ((-659756146) / (659756146))));
                        var_17 &= ((/* implicit */int) (signed char)-1);
                    }
                    var_18 = ((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))))), (min((arr_7 [i_0] [i_1] [i_2 + 4]), (((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (signed char)-40)))))))));
                    var_19 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-17801)) ? ((+(max((10630900234513932784ULL), (((/* implicit */unsigned long long int) (unsigned short)0)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) (signed char)113)) + (((/* implicit */int) arr_6 [i_2 - 1])))) > (((/* implicit */int) arr_6 [i_0]))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) var_11))));
    /* LoopSeq 3 */
    for (unsigned int i_4 = 1; i_4 < 20; i_4 += 4) 
    {
        var_21 = ((/* implicit */unsigned long long int) var_1);
        /* LoopSeq 3 */
        for (unsigned int i_5 = 1; i_5 < 20; i_5 += 4) 
        {
            var_22 = var_11;
            var_23 += (!(((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) (signed char)-113))) ^ (2165885062749933857LL))), (((/* implicit */long long int) (_Bool)1))))));
            var_24 = ((/* implicit */unsigned char) arr_13 [i_4 - 1]);
        }
        /* vectorizable */
        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            var_25 += ((/* implicit */signed char) (~(((arr_13 [i_4]) ? (((/* implicit */int) var_8)) : (arr_10 [i_6] [i_4 - 1])))));
            /* LoopSeq 1 */
            for (unsigned char i_7 = 0; i_7 < 21; i_7 += 3) 
            {
                var_26 = ((/* implicit */unsigned short) ((unsigned int) ((unsigned long long int) 659756146)));
                var_27 = ((/* implicit */signed char) var_1);
                var_28 = ((/* implicit */unsigned char) ((long long int) arr_14 [i_4 + 1] [3LL] [i_4]));
            }
        }
        for (unsigned long long int i_8 = 1; i_8 < 18; i_8 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_9 = 1; i_9 < 19; i_9 += 3) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        var_29 += ((/* implicit */int) (unsigned char)31);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 4) 
                        {
                            var_30 = ((/* implicit */int) 2669134415U);
                            var_31 = ((/* implicit */unsigned char) ((signed char) (~(var_13))));
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 4) 
                        {
                            var_32 = ((/* implicit */long long int) ((unsigned char) ((max((arr_22 [i_4] [15ULL] [i_9 + 2]), (((/* implicit */int) var_12)))) & (((((/* implicit */_Bool) -2237446389470200477LL)) ? (1965766317) : (((/* implicit */int) arr_29 [i_4] [i_4] [i_4] [i_4])))))));
                            var_33 = ((/* implicit */unsigned char) ((((/* implicit */int) max((arr_21 [i_4] [i_4 + 1] [i_8 - 1]), (((/* implicit */unsigned short) arr_23 [i_4] [i_8 + 3] [i_4]))))) / (((((/* implicit */_Bool) arr_23 [(unsigned short)16] [i_8 + 2] [i_4])) ? (((/* implicit */int) arr_21 [i_4] [i_4 - 1] [i_8 + 3])) : (((/* implicit */int) arr_21 [i_4] [i_4 - 1] [i_8 + 1]))))));
                        }
                    }
                } 
            } 
            var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) -1))));
        }
    }
    for (short i_13 = 1; i_13 < 18; i_13 += 2) 
    {
        var_35 *= ((/* implicit */unsigned long long int) 659756152);
        var_36 = ((/* implicit */long long int) min((var_36), (((((/* implicit */_Bool) min((arr_24 [i_13 - 1]), (arr_27 [i_13 - 1] [i_13] [i_13])))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) 6831792345148735714LL))))))) : (((((/* implicit */_Bool) max((((/* implicit */int) (signed char)118)), (-80101862)))) ? (((/* implicit */long long int) arr_20 [i_13] [i_13])) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [(unsigned short)6] [(unsigned short)6]))) : (arr_11 [i_13] [(_Bool)1])))))))));
        arr_39 [i_13] = ((/* implicit */signed char) var_1);
    }
    /* vectorizable */
    for (unsigned long long int i_14 = 4; i_14 < 22; i_14 += 3) 
    {
        arr_43 [i_14 - 1] = 511ULL;
        arr_44 [i_14] = ((/* implicit */long long int) -4);
    }
}
