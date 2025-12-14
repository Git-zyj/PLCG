/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99311
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
    for (long long int i_0 = 1; i_0 < 20; i_0 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) -3283688657907609686LL)))) != (var_3))))));
        arr_3 [i_0] = (+(7334361332300980310LL));
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_6)))))));
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 20; i_1 += 4) /* same iter space */
    {
        var_17 *= ((/* implicit */signed char) var_12);
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 7334361332300980310LL)) ? (((var_4) / (((/* implicit */int) var_7)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 137438953471ULL)))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 2) 
        {
            arr_11 [i_2] [i_1] = ((/* implicit */signed char) (((~(18446744073709551615ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1])))));
            var_19 = ((/* implicit */unsigned int) -3283688657907609686LL);
            /* LoopNest 2 */
            for (long long int i_3 = 2; i_3 < 20; i_3 += 2) 
            {
                for (int i_4 = 2; i_4 < 20; i_4 += 2) 
                {
                    {
                        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) && (((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_11)))))))));
                        var_21 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)16)) + (((/* implicit */int) ((unsigned char) var_13)))));
                        arr_18 [i_1] [i_1] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) & (((((/* implicit */_Bool) 10400526636400109962ULL)) ? (((/* implicit */int) (unsigned short)2489)) : (((/* implicit */int) (unsigned short)37270))))));
                    }
                } 
            } 
        }
        for (signed char i_5 = 4; i_5 < 20; i_5 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_6 = 1; i_6 < 20; i_6 += 4) 
            {
                for (long long int i_7 = 0; i_7 < 21; i_7 += 2) 
                {
                    {
                        var_22 &= ((/* implicit */unsigned long long int) var_8);
                        arr_26 [i_5] [i_6] = ((/* implicit */int) (short)17520);
                        var_23 = ((/* implicit */int) (((+(8836553224542898190LL))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
                        var_24 -= ((/* implicit */unsigned long long int) var_14);
                    }
                } 
            } 
            var_25 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
        }
        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_21 [i_1] [i_1] [i_1] [i_1 + 1])))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_0))))));
    }
    /* LoopNest 2 */
    for (signed char i_8 = 0; i_8 < 12; i_8 += 4) 
    {
        for (signed char i_9 = 1; i_9 < 11; i_9 += 4) 
        {
            {
                var_27 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (~(var_4)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) - (((/* implicit */int) (unsigned short)63043))))) : ((~(var_2))))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_3) == (((/* implicit */unsigned long long int) arr_5 [i_8]))))) >> (min((((/* implicit */long long int) (unsigned char)6)), (var_0))))))));
                arr_32 [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((((/* implicit */long long int) var_11)), (var_9)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) >= (10974024118262618887ULL)))) : (((((/* implicit */_Bool) arr_24 [i_8] [i_9] [i_9] [i_9] [i_9 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13)))))) + (((/* implicit */int) var_11))));
                var_28 = ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */int) ((unsigned short) var_7))) ^ (((/* implicit */int) var_11)))) : (((/* implicit */int) var_12)));
            }
        } 
    } 
    var_29 = ((/* implicit */int) var_2);
    /* LoopSeq 1 */
    for (short i_10 = 0; i_10 < 15; i_10 += 1) 
    {
        var_30 -= ((signed char) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */int) var_14)) / (((/* implicit */int) var_14)))) : (((/* implicit */int) var_10))));
        arr_35 [i_10] |= ((/* implicit */_Bool) min(((+(-5958155829142823773LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_3)))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_11 = 0; i_11 < 14; i_11 += 2) 
    {
        for (unsigned long long int i_12 = 4; i_12 < 13; i_12 += 3) 
        {
            {
                var_31 -= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) 1493455178U)), (-1LL)));
                var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) (+(((/* implicit */int) var_11)))))));
            }
        } 
    } 
}
