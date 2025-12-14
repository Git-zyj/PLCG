/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73669
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
    var_11 = ((/* implicit */unsigned int) var_5);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 4; i_2 < 22; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) (short)-2302))));
                            var_13 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) + (arr_0 [i_0 + 2])));
                            var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)241))) : (10U)));
                            var_15 = ((/* implicit */unsigned short) 4294967295U);
                        }
                    } 
                } 
                arr_9 [i_0] = ((/* implicit */unsigned short) ((short) 4294967277U));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) 4294967285U)) ? (var_2) : (((/* implicit */int) arr_5 [i_4] [i_4] [i_4] [i_4]))));
        var_17 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_4] [(signed char)5] [i_4] [i_4])) ? (arr_8 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)188)))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 2) /* same iter space */
    {
        arr_16 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)118))) / (-8235290369673488524LL)));
        var_18 -= ((/* implicit */_Bool) (~(((/* implicit */int) (short)-1))));
        arr_17 [i_5] = var_5;
        arr_18 [i_5] [(unsigned short)9] = ((/* implicit */short) (!(((/* implicit */_Bool) 1523606565U))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) min((var_19), ((-(32U)))));
        arr_21 [i_6] [i_6] &= ((/* implicit */signed char) min((((((/* implicit */int) (unsigned short)54526)) ^ (((/* implicit */int) arr_10 [i_6])))), (((/* implicit */int) (signed char)-115))));
        var_20 -= ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned char)142))));
        var_21 &= ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-123))));
    }
    /* vectorizable */
    for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned short) var_1);
        /* LoopNest 3 */
        for (signed char i_8 = 0; i_8 < 19; i_8 += 3) 
        {
            for (signed char i_9 = 0; i_9 < 19; i_9 += 3) 
            {
                for (long long int i_10 = 2; i_10 < 17; i_10 += 2) 
                {
                    {
                        var_23 &= ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_14 [i_10] [i_7]))))));
                        var_24 -= ((/* implicit */unsigned short) ((18446744073709551615ULL) / (((/* implicit */unsigned long long int) 4607405758063411669LL))));
                    }
                } 
            } 
        } 
    }
    var_25 -= ((/* implicit */unsigned char) var_5);
}
