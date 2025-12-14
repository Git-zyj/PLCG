/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98591
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
    for (signed char i_0 = 4; i_0 < 21; i_0 += 1) /* same iter space */
    {
        var_10 = ((/* implicit */long long int) min((var_10), (((/* implicit */long long int) max((((/* implicit */short) (signed char)2)), ((short)-3655))))));
        var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) var_5))));
        var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */unsigned int) max((1571610832), (((/* implicit */int) (_Bool)0))))) | (arr_3 [i_0 - 3])))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 21; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) max((var_1), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 12884901888LL)), (9387408186879347816ULL)))) ? (1988393943) : (max((((/* implicit */int) (unsigned short)2032)), (var_1))))))))));
                    var_14 += ((/* implicit */unsigned short) max((((/* implicit */unsigned int) max((var_8), ((unsigned short)22840)))), (((((/* implicit */_Bool) 68182605824ULL)) ? (((/* implicit */unsigned int) 1988393921)) : (arr_3 [i_0 - 4])))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_3 = 4; i_3 < 21; i_3 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) -9160194702074320383LL))));
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 23; i_5 += 3) 
            {
                {
                    var_16 |= ((/* implicit */unsigned long long int) 1988393968);
                    var_17 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) 1988393933))));
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_7 = 0; i_7 < 23; i_7 += 3) 
                        {
                            var_18 *= ((/* implicit */unsigned long long int) ((_Bool) (~(((/* implicit */int) arr_1 [i_3 + 2] [i_6])))));
                            arr_20 [i_3] [i_3] &= ((/* implicit */long long int) 1988393931);
                            var_19 += ((/* implicit */unsigned int) (+(arr_18 [i_3 - 2] [(signed char)14] [i_5] [i_4] [i_7])));
                        }
                        var_20 += ((/* implicit */short) ((((/* implicit */_Bool) ((var_4) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_3 - 2] [i_3 - 2] [i_4] [i_5] [i_4])))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_3 [i_4])) * (9187343239835811840ULL))))));
                        var_21 |= ((/* implicit */unsigned int) 9223372036854775808ULL);
                    }
                    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((long long int) arr_8 [i_3])))));
                }
            } 
        } 
        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */long long int) ((var_2) ? (arr_12 [i_3]) : (((/* implicit */int) arr_19 [i_3] [(short)6]))))) == (-9160517497835628945LL))))));
    }
    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((long long int) ((var_9) > (((/* implicit */int) (!(var_3))))))))));
    var_25 -= ((((/* implicit */_Bool) ((long long int) max((var_1), (((/* implicit */int) (short)-24035)))))) ? (((((/* implicit */_Bool) ((var_3) ? (var_6) : (var_6)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)144))))) : (((/* implicit */int) ((((/* implicit */_Bool) 2892089372436733689ULL)) && (((/* implicit */_Bool) var_4))))))) : (((((/* implicit */_Bool) (+(-470924789)))) ? (((/* implicit */int) var_8)) : ((+(((/* implicit */int) var_0)))))));
    var_26 += ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3770877225895401665ULL)))))) != (((((/* implicit */_Bool) 3381782487657119876LL)) ? (4486007441326080ULL) : (((/* implicit */unsigned long long int) var_5)))))) ? (((/* implicit */unsigned int) -1988393932)) : (var_5)));
    var_27 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(min((((/* implicit */int) var_3)), (-1988393943)))))) ? (((/* implicit */int) ((((/* implicit */int) ((signed char) 2305843009213677568LL))) > (1460117351)))) : (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)113)))) + (((((/* implicit */int) (short)960)) + (-1818690073)))))));
}
