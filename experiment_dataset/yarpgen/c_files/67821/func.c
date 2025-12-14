/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67821
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
    var_18 |= ((/* implicit */unsigned char) var_7);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)39516)) ^ (((/* implicit */int) var_7)))))));
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_16)) ? (var_17) : (var_17))) + (((/* implicit */unsigned long long int) arr_3 [8LL] [i_0])))))));
    }
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) var_13)) % (((((/* implicit */_Bool) var_14)) ? (3028915284000527082ULL) : (((/* implicit */unsigned long long int) 9223372036854775807LL)))))), (((/* implicit */unsigned long long int) arr_4 [i_1])))))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                {
                    var_22 |= ((/* implicit */unsigned short) var_0);
                    var_23 += ((/* implicit */unsigned short) var_15);
                    var_24 *= ((/* implicit */unsigned long long int) (-(((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 9516493261119694192ULL)) && (((/* implicit */_Bool) (unsigned char)253)))))) * (34359721984LL)))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned int i_7 = 0; i_7 < 25; i_7 += 4) 
                {
                    {
                        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (((+(((/* implicit */int) arr_16 [i_7])))) ^ ((-(((/* implicit */int) (_Bool)1)))))))));
                        var_26 += ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)53824))) > (arr_13 [(unsigned char)22])))) << (((((/* implicit */int) var_4)) - (31675)))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_8 = 3; i_8 < 24; i_8 += 1) 
        {
            for (unsigned char i_9 = 0; i_9 < 25; i_9 += 2) 
            {
                for (short i_10 = 1; i_10 < 24; i_10 += 2) 
                {
                    {
                        var_27 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)53819)) : (((/* implicit */int) var_1))));
                        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_4] [17LL] [i_9])) ? ((+(var_17))) : (((/* implicit */unsigned long long int) 4294967295U)))))));
                    }
                } 
            } 
        } 
    }
    var_29 *= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)4820))) & (var_14)));
}
