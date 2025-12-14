/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89255
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
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_10 -= ((/* implicit */signed char) (~(((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_2]))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_11 -= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) || ((!(((/* implicit */_Bool) var_9)))))))) * (((unsigned int) ((((/* implicit */int) (signed char)101)) >> (((((/* implicit */int) (signed char)101)) - (83))))))));
                                var_12 = var_2;
                                var_13 = (!(((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned int) arr_4 [i_0 - 1]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 13; i_6 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) ((unsigned int) (short)7));
                                var_15 = ((max((var_1), (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0])) == (((/* implicit */int) var_7))))))) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (signed char i_7 = 3; i_7 < 15; i_7 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_8 = 0; i_8 < 16; i_8 += 3) 
                        {
                            arr_25 [i_1] [i_1] [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((unsigned char) -7980401620586752741LL)))))), (var_4)));
                            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((21U), (((/* implicit */unsigned int) arr_20 [i_7 + 1]))))) ? ((((~(((/* implicit */int) (signed char)-102)))) % (((/* implicit */int) ((var_4) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))) : (((/* implicit */int) max((max(((_Bool)1), ((_Bool)1))), (((((/* implicit */int) arr_24 [i_7] [i_1] [i_0] [i_0] [i_8] [i_1] [i_8])) <= (((/* implicit */int) (unsigned char)230)))))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_9 = 2; i_9 < 14; i_9 += 4) 
                        {
                            var_17 = ((/* implicit */_Bool) (+((((-(var_1))) - (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))))));
                            arr_28 [i_0 + 1] [i_0 + 1] [i_2] [i_7 - 2] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_2) ^ (4294967295U)))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) (!(((((/* implicit */int) (short)32751)) <= (((/* implicit */int) (signed char)-74)))))))));
                            var_18 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (short)-32762)), (((((/* implicit */_Bool) ((long long int) 4294967295U))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0]))) : (var_5)))));
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_0 - 1] [i_1] [i_7 - 1] [i_9 + 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [0LL] [0LL] [3LL] [0LL] [i_9 + 1] [i_9]))) : (((((((/* implicit */_Bool) var_5)) ? (-6672436731742715591LL) : (((/* implicit */long long int) var_5)))) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                        }
                        var_20 -= ((/* implicit */signed char) (!(((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_3)))) || ((_Bool)1)))));
                    }
                    for (long long int i_10 = 0; i_10 < 16; i_10 += 1) 
                    {
                        var_21 = var_2;
                        var_22 = ((/* implicit */long long int) var_3);
                    }
                    /* LoopNest 2 */
                    for (signed char i_11 = 3; i_11 < 15; i_11 += 4) 
                    {
                        for (long long int i_12 = 3; i_12 < 14; i_12 += 4) 
                        {
                            {
                                arr_36 [i_0 + 1] [i_1] [i_1] [i_11 - 2] = (i_1 % 2 == 0) ? (((/* implicit */signed char) (~(((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) arr_23 [i_1] [i_1] [i_1] [i_11] [i_1])) - (128)))))))) : (((/* implicit */signed char) (~(((((/* implicit */int) (_Bool)1)) << (((((((/* implicit */int) arr_23 [i_1] [i_1] [i_1] [i_11] [i_1])) - (128))) + (118))))))));
                                var_23 = ((/* implicit */long long int) (~(((max((4294967291U), (((/* implicit */unsigned int) (_Bool)1)))) >> (((((/* implicit */int) (short)-21515)) + (21538)))))));
                                arr_37 [i_1] [i_1] [7U] [i_1] [3U] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [(_Bool)1] [i_1] [i_1] [i_0 + 1]))) <= (-9223372036854775797LL))))));
                                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (signed char)-80))))), (min((var_5), (1421777456U)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_0 + 1] [i_12 - 3] [i_12])) ? (arr_19 [i_0 - 2] [i_2] [i_1] [i_12 - 3] [6LL]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) : (max((((/* implicit */long long int) (short)27517)), (var_1)))));
                                var_25 = ((/* implicit */short) 33554431ULL);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_26 -= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_8)))) - (var_0)));
    var_27 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)5437))) ^ (-2694574181393622960LL)))))) <= (var_8)));
    var_28 = ((/* implicit */long long int) 4294967295U);
}
