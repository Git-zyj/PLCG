/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70417
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */_Bool) var_9);
                    var_13 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_4)) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [1U]))) + (arr_0 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_2 [(signed char)12] [i_0]))))))));
                    var_14 -= min((((/* implicit */unsigned long long int) (_Bool)1)), (7632924416487587588ULL));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_3 = 1; i_3 < 11; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                {
                    var_15 = ((/* implicit */signed char) 576460717943685120LL);
                    var_16 = ((/* implicit */unsigned char) -2777297623400154259LL);
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 12; i_6 += 4) 
                        {
                            {
                                var_17 ^= arr_16 [i_0] [i_0] [i_0] [i_0] [10ULL];
                                var_18 |= ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58797))) * ((~(var_10))))) + (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_6] [i_4] [4U])) >> (((((/* implicit */int) var_3)) - (49271))))))));
                                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-10))));
                            }
                        } 
                    } 
                    var_20 = var_3;
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_7 = 0; i_7 < 18; i_7 += 1) 
    {
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) arr_17 [i_7] [4ULL]))));
        /* LoopNest 2 */
        for (unsigned short i_8 = 0; i_8 < 18; i_8 += 4) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    var_22 = ((/* implicit */int) (+(arr_17 [(unsigned char)0] [i_8])));
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) 4294967295U))) ? (((/* implicit */int) arr_22 [i_9])) : (((/* implicit */int) ((signed char) (short)12689)))));
                    /* LoopSeq 2 */
                    for (signed char i_10 = 0; i_10 < 18; i_10 += 3) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((long long int) 4271276759U)))));
                        var_25 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1)))));
                        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_7] [(unsigned short)13] [i_10])) ? (arr_21 [i_7]) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7)))))))));
                    }
                    for (signed char i_11 = 0; i_11 < 18; i_11 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_12 = 0; i_12 < 18; i_12 += 2) 
                        {
                            var_27 = ((/* implicit */signed char) (((_Bool)1) ? (arr_25 [i_12] [i_9] [2U] [i_12]) : (arr_25 [i_12] [i_12] [i_9] [i_12])));
                            var_28 = ((/* implicit */unsigned short) arr_24 [i_7]);
                        }
                        var_29 = ((/* implicit */_Bool) 3517491239940409576LL);
                        var_30 &= (~(((/* implicit */int) arr_20 [i_9])));
                        var_31 = ((/* implicit */signed char) 10813819657221964028ULL);
                    }
                    var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_7] [i_8] [i_9])) ? (((((/* implicit */int) arr_22 [(unsigned short)12])) + (((/* implicit */int) var_2)))) : (((/* implicit */int) arr_28 [i_9] [i_8] [i_9] [i_9] [7U])))))));
                    var_33 = ((/* implicit */unsigned long long int) var_9);
                }
            } 
        } 
    }
    var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? ((+(min((var_5), (((/* implicit */unsigned long long int) (signed char)-26)))))) : (4263284096152491612ULL))))));
    var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)27))) - (-2544497432770682352LL))))));
}
