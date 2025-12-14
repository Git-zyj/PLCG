/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8749
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
    var_14 = ((/* implicit */unsigned long long int) ((((2210247910U) + (min((((/* implicit */unsigned int) var_12)), (3799705105U))))) + (((/* implicit */unsigned int) ((var_5) + (((/* implicit */int) var_10)))))));
    var_15 += ((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) (unsigned short)33338)), (-1LL))), (((((/* implicit */_Bool) (+(-1LL)))) ? (((/* implicit */long long int) (-(var_13)))) : (max((-1LL), (((/* implicit */long long int) var_3))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_3);
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) max((((/* implicit */short) var_0)), ((short)-20817)))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)852)) == (((/* implicit */int) (_Bool)1))));
                    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (_Bool)0))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 23; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                arr_16 [i_3] [i_1] [11] [i_3] [i_0] = ((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) var_10)), (((18093864443847324035ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (_Bool)1))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) var_10)) == (((/* implicit */int) ((((1048575U) % (1623182206U))) >= (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)214), (((/* implicit */unsigned char) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))))))));
                        var_19 += ((/* implicit */unsigned int) ((int) max((((/* implicit */int) var_6)), (((((/* implicit */int) var_2)) - (((/* implicit */int) arr_19 [(signed char)7] [i_1] [i_1] [(signed char)7])))))));
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_6 = 0; i_6 < 21; i_6 += 2) 
    {
        var_20 = ((/* implicit */int) ((1860886476) <= (((((/* implicit */int) var_1)) + (((/* implicit */int) var_9))))));
        arr_23 [i_6] = ((/* implicit */_Bool) ((short) (~(arr_20 [i_6]))));
    }
    for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 2) 
        {
            for (signed char i_9 = 1; i_9 < 12; i_9 += 2) 
            {
                {
                    arr_32 [i_9] = ((/* implicit */unsigned char) arr_26 [i_9]);
                    var_21 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_9 [i_7] [i_7] [i_7]))));
                    var_22 *= ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) 17110007548226568196ULL)))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_10 = 1; i_10 < 12; i_10 += 2) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 14; i_12 += 2) 
                    {
                        for (unsigned int i_13 = 0; i_13 < 14; i_13 += 2) 
                        {
                            {
                                arr_43 [i_10] [i_11] [i_12] [i_13] = ((/* implicit */signed char) 352879629862227580ULL);
                                var_23 = 5692021137130800892LL;
                                var_24 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((short) arr_36 [i_10] [i_10 + 2] [i_10]))), (min((((/* implicit */long long int) ((unsigned int) (unsigned char)218))), (((long long int) var_13))))));
                                arr_44 [i_7] [i_7] [i_10] [i_10] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) ((unsigned long long int) arr_34 [i_7])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_2 [i_7] [i_10])), (-1808841449942763763LL)))) : (((arr_31 [i_10 + 1] [i_10 - 1] [i_10 + 1] [i_7]) ? (17110007548226568215ULL) : (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_2 [i_7] [i_10])), (var_5))))))));
                            }
                        } 
                    } 
                    arr_45 [i_7] [i_7] [i_11] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */int) var_0)) + (((/* implicit */int) arr_1 [i_10]))))))) ? (((/* implicit */long long int) ((int) var_4))) : (min(((-9223372036854775807LL - 1LL)), ((~(-255846295604476396LL)))))));
                    arr_46 [i_7] [i_7] [i_7] [i_7] |= ((/* implicit */short) ((_Bool) ((((/* implicit */int) (unsigned char)153)) * (((/* implicit */int) var_12)))));
                }
            } 
        } 
        var_25 += ((/* implicit */long long int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) 0)))) < (min((arr_11 [17LL]), (((/* implicit */long long int) arr_20 [i_7])))))));
    }
    var_26 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_3))));
}
