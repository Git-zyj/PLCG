/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86108
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) /* same iter space */
                {
                    arr_7 [i_1] [i_1] [17] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) 10029466928695170221ULL)))))) > (min((((((/* implicit */_Bool) var_4)) ? (222510356U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1]))))), (((/* implicit */unsigned int) arr_1 [i_2] [i_1]))))));
                    var_10 = ((/* implicit */unsigned char) min((((arr_5 [i_1 - 1] [i_1 - 1] [i_1 + 1]) >> (((arr_5 [i_1 + 2] [i_1 - 1] [i_1 - 1]) - (1909729093U))))), ((-(arr_5 [i_1 + 3] [i_1 + 2] [i_1 + 3])))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_11 = ((/* implicit */_Bool) -2019763364295703099LL);
                        arr_13 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2019763364295703099LL)) ? (var_9) : (((/* implicit */int) (_Bool)0))))) || (((/* implicit */_Bool) var_3))));
                    }
                    var_12 = (+(((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_8 [i_1] [i_3] [(unsigned char)9] [i_1])) : (((/* implicit */int) arr_2 [i_0] [(unsigned char)13]))))) >= (min((((/* implicit */long long int) 3880759614U)), (579043319666671788LL)))))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 3) /* same iter space */
                {
                    var_13 = ((/* implicit */unsigned int) var_2);
                    var_14 = ((/* implicit */_Bool) min((((/* implicit */int) var_2)), ((-(((/* implicit */int) arr_14 [i_1] [i_1] [i_5]))))));
                }
                for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 3) /* same iter space */
                {
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_1 [i_0] [i_0]), (((/* implicit */int) arr_15 [i_0] [i_1] [i_1 + 1] [i_1 + 2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (min((((/* implicit */unsigned long long int) ((arr_3 [i_1] [i_1] [i_1]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3))))), (((8449228895877134317ULL) >> (((-6967872657723876966LL) + (6967872657723876972LL)))))))));
                    var_16 = ((var_1) || (((/* implicit */_Bool) max((((/* implicit */long long int) (+(((/* implicit */int) var_4))))), (max((-579043319666671788LL), (((/* implicit */long long int) (signed char)36))))))));
                }
                var_17 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 3) 
                {
                    for (signed char i_8 = 0; i_8 < 18; i_8 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (short i_9 = 0; i_9 < 18; i_9 += 4) 
                            {
                                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) -2019763364295703099LL))) ? (max((((((/* implicit */_Bool) arr_5 [i_0] [i_1 - 1] [17U])) ? (-2019763364295703099LL) : (2019763364295703099LL))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)201)) > (((/* implicit */int) (signed char)27))))))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                                arr_25 [i_0] [i_1] [i_7] [i_1] [i_9] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned char)227)))) ^ (min((((/* implicit */long long int) 4072456939U)), (-7183283608945458472LL)))));
                                var_19 = ((/* implicit */unsigned char) min((arr_5 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) var_2))));
                                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-79)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [0ULL] [i_0]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)80))) ^ (((unsigned long long int) var_0))))));
                            }
                            var_21 = ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1 + 3] [i_1]))) | (-2019763364295703107LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_7] [i_8])) ? (((/* implicit */int) (_Bool)0)) : (562222486)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)176))) * (2666621266U)));
    /* LoopSeq 2 */
    for (short i_10 = 0; i_10 < 22; i_10 += 2) /* same iter space */
    {
        arr_30 [i_10] = ((/* implicit */unsigned char) ((short) min((arr_29 [i_10]), (((/* implicit */unsigned long long int) (((_Bool)1) ? (222510356U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)54)))))))));
        var_23 = ((((/* implicit */int) (unsigned short)0)) > (((/* implicit */int) (_Bool)0)));
    }
    for (short i_11 = 0; i_11 < 22; i_11 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) arr_33 [i_11] [i_11])), (18147547386481297173ULL))), (((/* implicit */unsigned long long int) min((arr_28 [i_11]), (((/* implicit */short) (signed char)-103)))))));
        var_25 = ((/* implicit */_Bool) min(((+(((/* implicit */int) (_Bool)1)))), (arr_27 [i_11] [5])));
        var_26 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) arr_32 [i_11])))))));
        arr_34 [i_11] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)29))));
    }
}
