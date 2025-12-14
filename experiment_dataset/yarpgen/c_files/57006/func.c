/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57006
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */int) var_8)) - (((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) ? (((((/* implicit */_Bool) min((var_1), (var_1)))) ? (((/* implicit */unsigned int) var_5)) : (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)27459)))) != (((/* implicit */int) ((var_3) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) <= (-1LL)))))) * (((((((/* implicit */int) arr_0 [i_0] [i_0])) & (((/* implicit */int) arr_1 [i_0])))) / (((int) var_7))))));
        var_11 = arr_0 [i_0] [(unsigned short)5];
        var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_3)))) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) (unsigned short)65535))))) : (((/* implicit */int) arr_1 [i_0])))))));
        var_13 = ((/* implicit */signed char) var_5);
    }
    for (signed char i_1 = 4; i_1 < 13; i_1 += 2) 
    {
        var_14 = ((/* implicit */short) arr_3 [i_1]);
        var_15 = ((/* implicit */_Bool) var_5);
    }
    for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) arr_7 [i_2]);
        /* LoopSeq 3 */
        for (long long int i_3 = 0; i_3 < 18; i_3 += 4) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned char) (unsigned short)65532);
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) (~(var_5)))) : (((var_3) >> (((((((((/* implicit */int) var_9)) + (2147483647))) >> (((((/* implicit */int) var_9)) + (32365))))) - (508)))))));
            var_19 = ((/* implicit */_Bool) max((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) < (arr_8 [17U]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_8 [i_3]))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)62546)) >> (((arr_6 [i_3]) + (547215628)))))), (((var_0) / (var_4))))))));
            var_20 = ((/* implicit */_Bool) arr_8 [i_2]);
            var_21 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_9)))) & (((((/* implicit */int) var_1)) >> (((((/* implicit */int) min(((unsigned short)65532), (((/* implicit */unsigned short) arr_1 [i_3]))))) - (50782)))))));
        }
        for (long long int i_4 = 0; i_4 < 18; i_4 += 4) /* same iter space */
        {
            arr_13 [i_2] [5ULL] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((var_0) + (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ^ (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2]))) : (arr_8 [i_4])))))) ? (arr_6 [i_2]) : (-2115003187)));
            var_22 = max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_2] [i_4])) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) + (((/* implicit */int) arr_12 [i_2] [i_2] [i_2]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [i_4]))) - (var_0)))))), (4797270947610292704LL));
            /* LoopSeq 1 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                arr_17 [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) | (min((((/* implicit */unsigned int) arr_14 [i_2] [i_4] [i_5])), (var_4))))) != (((/* implicit */unsigned int) var_5))));
                arr_18 [i_2] [i_2] [i_2] = var_0;
                var_23 = ((/* implicit */short) var_0);
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_6 = 3; i_6 < 16; i_6 += 2) 
            {
                var_24 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((var_4) == (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))) + (arr_19 [i_2] [i_6 - 3] [i_6 - 2] [i_6 - 3])));
                /* LoopNest 2 */
                for (unsigned short i_7 = 1; i_7 < 16; i_7 += 1) 
                {
                    for (long long int i_8 = 2; i_8 < 16; i_8 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned int) ((signed char) arr_22 [i_6 - 1] [9LL] [i_7 + 2] [9LL]));
                            var_26 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)62546)) : (((/* implicit */int) var_8)))) <= (arr_11 [i_7 - 1] [i_6 + 1])));
                        }
                    } 
                } 
            }
        }
        for (long long int i_9 = 0; i_9 < 18; i_9 += 4) /* same iter space */
        {
            arr_29 [i_2] [i_2] [i_2] = ((/* implicit */signed char) var_6);
            arr_30 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6))))));
            var_27 = ((/* implicit */unsigned short) ((_Bool) min((((/* implicit */unsigned short) var_9)), (max((var_1), (((/* implicit */unsigned short) var_8)))))));
            var_28 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((min((var_0), (((/* implicit */unsigned int) var_6)))) < (((unsigned int) arr_21 [i_9] [i_9] [i_2] [i_9])))))));
            var_29 = ((/* implicit */signed char) arr_10 [i_2] [i_9] [i_9]);
        }
        var_30 = ((/* implicit */unsigned int) var_2);
    }
    var_31 = ((/* implicit */long long int) var_0);
}
