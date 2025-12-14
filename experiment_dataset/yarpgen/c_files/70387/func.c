/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70387
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
    var_20 += ((/* implicit */unsigned int) min((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (4398046511103LL))), (((/* implicit */long long int) min((((unsigned int) var_16)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)-15))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((arr_2 [i_0]) < (((/* implicit */long long int) ((/* implicit */int) var_10)))))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) ((unsigned int) ((var_19) && (arr_9 [i_0]))));
                                var_23 = ((/* implicit */unsigned long long int) var_7);
                                var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) arr_8 [i_0] [i_0] [i_4]))));
                                var_25 = ((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_3] [i_4]));
                            }
                        } 
                    } 
                    var_26 += ((unsigned int) ((short) arr_12 [i_0] [i_1] [i_1] [i_1] [(short)10] [i_2] [(_Bool)1]));
                    /* LoopNest 2 */
                    for (long long int i_5 = 4; i_5 < 15; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */_Bool) (((_Bool)1) ? (4398046511106LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-1)))));
                                var_28 = ((/* implicit */long long int) (unsigned char)83);
                                var_29 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_1] [i_5 + 3])) ? (arr_17 [i_5] [i_5] [i_5] [i_5 + 3]) : (arr_17 [i_5] [i_5] [i_5] [i_5 + 3])));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (signed char i_7 = 0; i_7 < 20; i_7 += 2) /* same iter space */
    {
        var_30 &= ((/* implicit */unsigned long long int) min((((long long int) arr_18 [i_7])), (((long long int) arr_18 [i_7]))));
        var_31 = ((/* implicit */signed char) 4398046511106LL);
    }
    for (signed char i_8 = 0; i_8 < 20; i_8 += 2) /* same iter space */
    {
        var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_1)))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) arr_19 [i_8]))) || (((/* implicit */_Bool) var_3))))))))));
        var_33 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_19 [(short)9])) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (arr_21 [i_8]))), (((/* implicit */long long int) min((var_16), (((/* implicit */unsigned short) (short)(-32767 - 1))))))))), (1069547520ULL)));
        var_34 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((3U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)1))))) << (((((((/* implicit */int) var_2)) << (((1155891310U) - (1155891295U))))) - (1277948)))))) + (((((/* implicit */_Bool) ((unsigned int) 1155891316U))) ? (((-4398046511111LL) * (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46838))))) : (min((4398046511083LL), (((/* implicit */long long int) 4294967277U))))))));
    }
    var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0)))))));
}
