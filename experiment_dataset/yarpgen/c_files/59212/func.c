/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59212
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
    var_15 = ((/* implicit */unsigned int) var_14);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_16 = ((/* implicit */int) (~(((((/* implicit */_Bool) min((137438953471LL), (((/* implicit */long long int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (max((((/* implicit */long long int) var_3)), (137438953471LL)))))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) 13487738121393259428ULL)) || (((/* implicit */_Bool) (-(7759945408856525580ULL)))))))));
    }
    for (int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (+(-137438953470LL))))));
            /* LoopSeq 2 */
            for (unsigned int i_3 = 2; i_3 < 17; i_3 += 3) 
            {
                var_18 = ((/* implicit */long long int) (-(min((((/* implicit */int) arr_1 [i_1] [i_1])), (arr_3 [i_1])))));
                var_19 = ((/* implicit */unsigned char) ((((arr_5 [i_3 + 2]) >> (((var_2) - (2443631949U))))) >= (arr_5 [i_3 + 2])));
                /* LoopSeq 4 */
                /* vectorizable */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    arr_11 [i_1] [8U] [i_2] [i_2] [i_3] [i_2] &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)173))));
                    arr_12 [i_1] [i_1] = ((/* implicit */long long int) ((signed char) (+(((/* implicit */int) (signed char)127)))));
                    var_20 = ((/* implicit */signed char) (((-(-3867826861738387523LL))) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (1628914350) : (((/* implicit */int) (signed char)119)))))));
                }
                for (unsigned int i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    arr_15 [18LL] [18LL] [18LL] &= ((/* implicit */int) min(((unsigned short)65448), (((/* implicit */unsigned short) (signed char)-1))));
                    var_21 -= ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) 2447530336U)) || (((/* implicit */_Bool) (unsigned short)29440)))))));
                }
                for (unsigned short i_6 = 0; i_6 < 19; i_6 += 1) 
                {
                    arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) 137438953483LL);
                    var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)2046))));
                }
                for (int i_7 = 0; i_7 < 19; i_7 += 3) 
                {
                    var_23 &= ((/* implicit */unsigned short) arr_14 [i_2] [(signed char)2] [(signed char)2]);
                    arr_22 [i_1] [i_1] [i_3 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(-137438953484LL)))) ? (7759945408856525586ULL) : (((/* implicit */unsigned long long int) -137438953462LL))));
                }
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                var_24 = ((/* implicit */unsigned short) max((((/* implicit */long long int) max((arr_8 [i_1] [i_1] [i_1]), (arr_8 [i_1] [i_8] [i_8])))), (((((/* implicit */_Bool) (-(137438953471LL)))) ? (137438953462LL) : (-1200407088880644800LL)))));
                var_25 *= ((/* implicit */signed char) ((_Bool) ((((((/* implicit */unsigned long long int) 137438953476LL)) >= (var_1))) ? (((/* implicit */int) (unsigned short)255)) : (((/* implicit */int) arr_7 [4U])))));
                var_26 = ((/* implicit */signed char) min((((/* implicit */long long int) max((192889969), (((/* implicit */int) (unsigned short)41816))))), (max((max((((/* implicit */long long int) var_11)), (arr_16 [i_1] [i_1] [i_1] [(_Bool)1] [i_1] [i_1]))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)37032)))))))));
                /* LoopNest 2 */
                for (short i_9 = 1; i_9 < 15; i_9 += 3) 
                {
                    for (unsigned short i_10 = 0; i_10 < 19; i_10 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_7 [i_1]))) ? (((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) ((unsigned char) (_Bool)0))) : (((var_13) & (((/* implicit */int) (unsigned short)63290)))))) : (((((/* implicit */int) var_12)) / (((/* implicit */int) arr_23 [i_9 + 2] [i_9 + 4] [i_9 + 2]))))));
                            arr_31 [17LL] [i_10] [i_1] [i_9] [i_10] = min((var_0), (((/* implicit */unsigned int) var_13)));
                        }
                    } 
                } 
            }
        }
        arr_32 [i_1] [i_1] = ((/* implicit */unsigned short) var_6);
    }
}
