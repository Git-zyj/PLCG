/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88162
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
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */_Bool) min((var_12), (((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_0])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))))) < (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) min(((unsigned char)42), (((/* implicit */unsigned char) arr_4 [i_2] [i_1] [i_0]))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_2 [6ULL]))))))))));
                    var_13 = ((/* implicit */unsigned short) max((var_0), (((/* implicit */unsigned int) var_4))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 2; i_3 < 21; i_3 += 4) 
    {
        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 3) 
        {
            {
                arr_14 [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)42)) : (((/* implicit */int) var_6))))))));
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 23; i_6 += 4) 
                    {
                        {
                            arr_21 [(short)21] [i_4] [i_5] [i_5] = ((/* implicit */unsigned long long int) var_10);
                            arr_22 [(signed char)9] [22ULL] = ((/* implicit */short) 1013630278U);
                            /* LoopSeq 2 */
                            for (long long int i_7 = 0; i_7 < 23; i_7 += 1) /* same iter space */
                            {
                                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */unsigned int) var_7)) % (((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_6)))) & (var_8))))))));
                                var_15 = ((/* implicit */_Bool) ((short) ((_Bool) var_6)));
                            }
                            for (long long int i_8 = 0; i_8 < 23; i_8 += 1) /* same iter space */
                            {
                                var_16 += ((/* implicit */_Bool) (~((~((~(((/* implicit */int) (unsigned char)202))))))));
                                var_17 = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) != (min((var_5), (((/* implicit */long long int) var_4)))))) ? (((/* implicit */int) (unsigned short)3)) : ((-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_9 = 1; i_9 < 10; i_9 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)66))) : (var_0)))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_9 - 1])))))));
        var_19 = (unsigned char)49;
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? ((+(((/* implicit */int) (unsigned char)183)))) : (((/* implicit */int) var_2))));
    }
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((-223077881) > (var_11)))))) : ((+(var_8)))));
    var_22 |= ((/* implicit */long long int) (unsigned short)65535);
}
